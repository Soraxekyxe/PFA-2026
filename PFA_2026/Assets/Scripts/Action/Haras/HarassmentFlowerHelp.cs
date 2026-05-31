using UnityEngine;

public class HarassmentFlowerHelp : MonoBehaviour
{
    [SerializeField] private FlowerHarras flowerHarras;

    private int progressIndex = 0;
    private int playableHelpDay = 1;
    private int lastRealDay = 1;
    
    private bool hasDoneAtLeastOneAction = false;
    
    private bool fertilizerIntroPlayed = false;

    private struct HelpStep
    {
        public HarassmentHelpActionType actionType;
        public int unlockDay;
        public HarassementState.HarassmentVisualState resultState;

        public HelpStep(
            HarassmentHelpActionType actionType,
            int unlockDay,
            HarassementState.HarassmentVisualState resultState)
        {
            this.actionType = actionType;
            this.unlockDay = unlockDay;
            this.resultState = resultState;
        }
    }

    private HelpStep[] steps =
    {
        new HelpStep(HarassmentHelpActionType.RakeSoil, 1, HarassementState.HarassmentVisualState.RakedSoil),
        new HelpStep(HarassmentHelpActionType.DigSoil, 1, HarassementState.HarassmentVisualState.DugSoil),

        new HelpStep(HarassmentHelpActionType.AddFertilizer, 2, HarassementState.HarassmentVisualState.SoilWithFertilizer),

        new HelpStep(HarassmentHelpActionType.PlantSeeds, 3, HarassementState.HarassmentVisualState.SoilWithSeed),
        new HelpStep(HarassmentHelpActionType.CoverSoil, 3, HarassementState.HarassmentVisualState.CoveredSoil),

        new HelpStep(HarassmentHelpActionType.Water, 4, HarassementState.HarassmentVisualState.WateredSoil),

        new HelpStep(HarassmentHelpActionType.RemoveFeathers, 5, HarassementState.HarassmentVisualState.FlowerWithDeadLeaves),
        new HelpStep(HarassmentHelpActionType.RemoveDeadLeaves, 5, HarassementState.HarassmentVisualState.FlowerWithoutDeadLeaves),

        new HelpStep(HarassmentHelpActionType.Sweep, 6, HarassementState.HarassmentVisualState.FlowerWithoutShadow),
        new HelpStep(HarassmentHelpActionType.AddReflectivePanels, 6, HarassementState.HarassmentVisualState.FlowerWithReflectivePanel),

        new HelpStep(HarassmentHelpActionType.RemoveEatenPetals, 7, HarassementState.HarassmentVisualState.NeedMagic),
        new HelpStep(HarassmentHelpActionType.AddMagicPowder, 7, HarassementState.HarassmentVisualState.FullyGrownFlower),
        new HelpStep(HarassmentHelpActionType.AddLadybugs, 7, HarassementState.HarassmentVisualState.FlowerWithLadybug)
    };
    

    public bool IsFinished()
    {
        return progressIndex >= steps.Length;
    }

    public bool HasActionAvailable(int currentDay)
    {
        if (IsFinished())
            return false;

        return currentDay >= playableHelpDay &&
               steps[progressIndex].unlockDay == playableHelpDay;
    }

    public HarassmentHelpActionType GetNextRequiredAction()
    {
        if (IsFinished())
            return HarassmentHelpActionType.RakeSoil;

        return steps[progressIndex].actionType;
    }

    public bool CanDoAction(HarassmentHelpActionType actionType, int currentDay)
    {
        if (!HasActionAvailable(currentDay))
            return false;

        return steps[progressIndex].actionType == actionType;
    }

    public bool PerformAction(HarassmentHelpActionType actionType, int currentDay)
    {
        if (!CanDoAction(actionType, currentDay))
            return false;

        HelpStep step = steps[progressIndex];

        progressIndex++;

        if (flowerHarras != null)
            flowerHarras.UpdateHarassmentVisual(step.resultState);
        hasDoneAtLeastOneAction = true;

        return true;
    }

    public void OnNewRealDay(int currentDay)
    {
        Debug.Log("OnNewRealDay appelé : jour " + currentDay);
        
        if (currentDay == 3 && !fertilizerIntroPlayed)
        {
            fertilizerIntroPlayed = true;
            flowerHarras.PlayFertilizerNextDayIntro();
        }
        
        if (currentDay == lastRealDay)
            return;

        lastRealDay = currentDay;

        if (IsFinished())
            return;

        playableHelpDay = steps[progressIndex].unlockDay;

        UpdateVisualAtStartOfDay();

        if (currentDay == 3 && flowerHarras != null)
        {
            flowerHarras.PlayFertilizerNextDayIntro();
        }
    }

    public void UpdateVisualAtStartOfDay()
    {
        if (IsFinished() || flowerHarras == null)
            return;

        // Si on est encore sur le jour 1 après avoir déjà fait une action,
        // on ne remet pas Terre piétinée.
        if (steps[progressIndex].unlockDay == 1 && hasDoneAtLeastOneAction)
            return;

        HarassementState.HarassmentVisualState state;

        switch (steps[progressIndex].unlockDay)
        {
            case 1:
                state = HarassementState.HarassmentVisualState.TrampledSoil;
                break;
            case 2:
                state = HarassementState.HarassmentVisualState.MissingFertilizer;
                break;
            case 3:
                state = HarassementState.HarassmentVisualState.MissingSeed;
                break;
            case 4:
                state = HarassementState.HarassmentVisualState.MissingWater;
                break;
            case 5:
                state = HarassementState.HarassmentVisualState.FeatherFlower;
                break;
            case 6:
                state = HarassementState.HarassmentVisualState.ShadowFlower;
                break;
            case 7:
                state = HarassementState.HarassmentVisualState.EatenPetals;
                break;
            default:
                return;
        }

        flowerHarras.UpdateHarassmentVisual(state);
    }
}