using UnityEngine;
using UnityEngine.UI;

public class Flower : MonoBehaviour
{
    [Header("Data")]
    public FlowerDataSO flowerData;
    public string customFlowerName;
    public int playerIndex;

    [Header("Visual")]
    public Image flowerImage;

    [Header("State")]
    public FlowerState currentState = FlowerState.TerreVide;

    private int progressIndex = 0;

    private enum StepType
    {
        Action,
        WaitNextDay
    }

    private struct FlowerStep
    {
        public StepType stepType;
        public FlowerActionType actionType;
        public int unlockDay;
        public FlowerState resultState;

        public FlowerStep(StepType stepType, FlowerActionType actionType, int unlockDay, FlowerState resultState)
        {
            this.stepType = stepType;
            this.actionType = actionType;
            this.unlockDay = unlockDay;
            this.resultState = resultState;
        }
    }
    
    public FlowerActionType GetNextActionAfterCurrent()
    {
        if (IsFinished())
            return FlowerActionType.TillSoil;

        int i = progressIndex + 1;

        // On saute les étapes "WaitNextDay"
        while (i < steps.Length)
        {
            if (steps[i].stepType == StepType.Action)
            {
                return steps[i].actionType;
            }

            i++;
        }

        return FlowerActionType.TillSoil; // ou None si tu en as un
    }
    
    public bool TryGetNextActionAfterCurrent(out FlowerActionType nextAction)
    {
        nextAction = FlowerActionType.TillSoil;

        if (IsFinished())
            return false;

        for (int i = progressIndex + 1; i < steps.Length; i++)
        {
            if (steps[i].stepType == StepType.Action)
            {
                nextAction = steps[i].actionType;
                return true;
            }
        }

        return false;
    }

    private FlowerStep[] steps =
    {
        // Jour 1
        new FlowerStep(StepType.Action, FlowerActionType.TillSoil, 1, FlowerState.TerreVide),
        new FlowerStep(StepType.Action, FlowerActionType.Rake, 1, FlowerState.TerreRatisse),
        new FlowerStep(StepType.Action, FlowerActionType.Dig, 1, FlowerState.TerreCreuse),

        // Jour 2
        new FlowerStep(StepType.Action, FlowerActionType.AddFertilizer, 2, FlowerState.TerreAvecEngrais),

        // Jour 3
        new FlowerStep(StepType.Action, FlowerActionType.PlantSeed, 3, FlowerState.TerreAvecGrainePlantee),
        new FlowerStep(StepType.Action, FlowerActionType.CoverSoil, 3, FlowerState.TerreRefermee),

        // Jour 4
        new FlowerStep(StepType.Action, FlowerActionType.Water, 4, FlowerState.TerreArrosee),

        // Début du jour 5
        new FlowerStep(StepType.WaitNextDay, FlowerActionType.Water, 5, FlowerState.PetitePousseApparente),

        // Jour 5
        new FlowerStep(StepType.Action, FlowerActionType.Water, 5, FlowerState.PoussePlusLongue),

        // Début du jour 6
        new FlowerStep(StepType.WaitNextDay, FlowerActionType.Water, 6, FlowerState.PlanteAvecFeuillesMortes),

        // Jour 6
        new FlowerStep(StepType.Action, FlowerActionType.RemoveDeadLeaves, 6, FlowerState.PlanteSansFeuillesMortes),
        new FlowerStep(StepType.Action, FlowerActionType.AddReflectivePanel, 6, FlowerState.FleurAvecPanneauSolaire),

        // Jour 7
        new FlowerStep(StepType.Action, FlowerActionType.AddLadybug, 7, FlowerState.FleurAvecCoccinelle)
    };

    public void Initialize(FlowerDataSO data, string flowerName, int player)
    {
        flowerData = data;
        customFlowerName = flowerName;
        playerIndex = player;
        currentState = FlowerState.TerreVide;
        progressIndex = 0;
        UpdateVisual();
    }

    public bool IsFinished()
    {
        return progressIndex >= steps.Length;
    }

    public bool HasActionAvailable(int currentDay)
    {
        if (IsFinished())
            return false;

        FlowerStep nextStep = steps[progressIndex];

        if (nextStep.stepType != StepType.Action)
            return false;

        return currentDay >= nextStep.unlockDay;
    }

    public int GetNextRequiredDay()
    {
        if (IsFinished())
            return -1;

        return steps[progressIndex].unlockDay;
    }

    public FlowerActionType GetNextRequiredAction()
    {
        if (IsFinished())
            return FlowerActionType.TillSoil;

        return steps[progressIndex].actionType;
    }

    public bool CanDoAction(FlowerActionType actionType, int currentDay)
    {
        if (IsFinished())
            return false;

        FlowerStep nextStep = steps[progressIndex];

        if (nextStep.stepType != StepType.Action)
            return false;

        if (currentDay < nextStep.unlockDay)
            return false;

        return nextStep.actionType == actionType;
    }

    public bool PerformAction(FlowerActionType actionType, int currentDay)
    {
        if (!CanDoAction(actionType, currentDay))
            return false;

        FlowerStep step = steps[progressIndex];

        currentState = step.resultState;
        progressIndex++;

        UpdateVisual();
        return true;
    }

    public void AdvanceDay(int currentDay)
    {
        if (IsFinished())
            return;

        FlowerStep nextStep = steps[progressIndex];

        if (nextStep.stepType == StepType.WaitNextDay && currentDay >= nextStep.unlockDay)
        {
            currentState = nextStep.resultState;
            progressIndex++;
            UpdateVisual();
        }
    }
    

    public void UpdateVisual()
    {
        if (flowerData == null)
        {
            Debug.LogError("flowerData est NULL sur " + gameObject.name);
            return;
        }

        if (flowerImage == null)
        {
            Debug.LogError("flowerImage est NULL sur " + gameObject.name);
            return;
        }

        Sprite sprite = flowerData.GetSpriteForState(currentState);

        if (sprite == null)
        {
            Debug.LogError("Aucun sprite trouvé pour l'état : " + currentState + " sur " + flowerData.flowerName);
            return;
        }

        flowerImage.sprite = sprite;
        Debug.Log("Sprite mis à jour : " + currentState + " pour " + flowerData.flowerName);
    }
}