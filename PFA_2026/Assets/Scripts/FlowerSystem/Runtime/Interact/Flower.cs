using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Flower : MonoBehaviour, IPointerClickHandler
{
    [Header("Data")]
    public FlowerDataSO flowerData;
    public string customFlowerName;
    public int playerIndex;

    [Header("Visual")]
    public Image flowerImage;

    [Header("State")]
    public FlowerState currentState = FlowerState.TerreVide;
    
    [Header("Indicateur action disponible")]
    [SerializeField] private GameObject actionAvailableIcon;
    [SerializeField] private float iconRotationSpeed = 90f;
    [SerializeField] private float iconPulseSpeed = 3f;
    [SerializeField] private float iconMinScale = 0.85f;
    [SerializeField] private float iconMaxScale = 1.15f;

    private Vector3 iconBaseScale;

    private int progressIndex = 0;
    
    public Animator flowerAnimator;
    
    private Vector3 originalScale;
    
    private Vector2 originalSize;
    

    private enum StepType
    {
        Action,
        WaitNextDay
    }
    
    private void Awake()
    {
        if (flowerImage != null)
        {
            originalScale = flowerImage.rectTransform.localScale;
            originalSize = flowerImage.rectTransform.sizeDelta;
        }

        if (actionAvailableIcon != null)
        {
            iconBaseScale = actionAvailableIcon.transform.localScale;
            actionAvailableIcon.SetActive(false);
        }
    }
    
    private void Update()
    {
        UpdateActionAvailableIcon();
        AnimateActionAvailableIcon();
    }
    
    void UpdateActionAvailableIcon()
    {
        if (actionAvailableIcon == null)
            return;

        UIMenuInteract ui = FindObjectOfType<UIMenuInteract>();

        if (ui == null || ui.turnManager == null)
        {
            actionAvailableIcon.SetActive(false);
            return;
        }

        Flower currentFlower = ui.turnManager.GetCurrentFlower();

        bool canShow =
            currentFlower == this &&
            HasActionAvailable(ui.turnManager.jourActuel) &&
            !ui.IsShowingCurrentFlowerUI();

        actionAvailableIcon.SetActive(canShow);
    }

    void AnimateActionAvailableIcon()
    {
        if (actionAvailableIcon == null || !actionAvailableIcon.activeSelf)
            return;

        actionAvailableIcon.transform.Rotate(
            0f,
            0f,
            -iconRotationSpeed * Time.deltaTime
        );

        float t = (Mathf.Sin(Time.time * iconPulseSpeed) + 1f) / 2f;
        float scale = Mathf.Lerp(iconMinScale, iconMaxScale, t);

        actionAvailableIcon.transform.localScale = iconBaseScale * scale;
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
        new FlowerStep(StepType.Action, FlowerActionType.RemoveDeadLeaves, 6, FlowerState.PlanteAvecBourgeon),
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
        if (flowerData == null || flowerImage == null)
            return;

        bool useAnimation = currentState >= FlowerState.PetitePousseApparente;

        if (useAnimation)
        {
            // Taille plus grande pour les animations
            flowerImage.rectTransform.sizeDelta =
                originalSize * flowerData.animationSizeMultiplier;

            if (flowerAnimator == null)
                flowerAnimator = flowerImage.GetComponent<Animator>();

            if (flowerAnimator != null)
            {
                flowerAnimator.enabled = true;

                flowerAnimator.runtimeAnimatorController =
                    flowerData.animatorController;

                flowerAnimator.SetInteger("Grow", GetGrowValue(currentState));
            }

            return;
        }

        // Taille normale pour les sprites
        flowerImage.rectTransform.sizeDelta = originalSize;

        if (flowerAnimator != null)
            flowerAnimator.enabled = false;

        Sprite sprite = flowerData.GetSpriteForState(currentState);

        if (sprite != null)
            flowerImage.sprite = sprite;
    }
    
    private int GetGrowValue(FlowerState state)
    {
        switch (state)
        {
            case FlowerState.PetitePousseApparente:
                return 0;

            case FlowerState.PoussePlusLongue:
                return 1;

            case FlowerState.PlanteAvecFeuillesMortes:
                return 2;

            case FlowerState.PlanteAvecBourgeon:
                return 3;

            case FlowerState.FleurAvecPanneauSolaire:
                return 6;

            case FlowerState.FleurAvecCoccinelle:
                return 7;

            default:
                return 0;
        }
    }
    
    public void OnPointerClick(PointerEventData eventData)
    {
        UIMenuInteract ui = FindObjectOfType<UIMenuInteract>();

        if (ui != null && ui.turnManager != null)
        {
            Flower currentFlower = ui.turnManager.GetCurrentFlower();

            if (currentFlower == this)
            {
                ui.RestoreCurrentPlayerUI();

                MenuInteract menu = FindObjectOfType<MenuInteract>();
                if (menu != null)
                    menu.ValidateFlowerTap(this);
            }
        }
    }
}