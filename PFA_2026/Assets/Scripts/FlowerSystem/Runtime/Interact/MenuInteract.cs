using UnityEngine;
using UnityEngine.UI;

public class MenuInteract : MonoBehaviour
{
    [Header("System")]
    public UIMenuInteract menuInteract;
    public TurnManager turnManager;

    [Header("Action Lock")]
    [SerializeField] private Button[] buttonsToDisable;
    private bool actionInProgress = false;

    [Header("Feedbacks")]
    [SerializeField] private TapFeedbackUI tapFeedbackUI;
    [SerializeField] private RakeDragFeedback rakeDragFeedback;
    [SerializeField] private DigDragFeedback digDragFeedback;
    [SerializeField] private FertilizerHoldFeedback fertilizerHoldFeedback;
    [SerializeField] private SeedHoldFeedback seedHoldFeedback;
    [SerializeField] private CoverSoilSwipeFeedback coverSoilSwipeFeedback;
    [SerializeField] private WateringCanDragFeedback wateringCanDragFeedback;
    [SerializeField] private PrunerDragFeedback prunerDragFeedback;
    [SerializeField] private ReflectivePanelDragFeedback reflectivePanelDragFeedback;

    private bool actionEnAttente = false;
    private FlowerActionType actionPreparee;

    private int tapCount = 0;
    [SerializeField] private int tapsRequired = 3;

    private void StartAction()
    {
        actionInProgress = true;
        SetActionButtons(false);
    }

    private void EndAction()
    {
        actionInProgress = false;
        SetActionButtons(true);
    }

    private void SetActionButtons(bool interactable)
    {
        foreach (Button button in buttonsToDisable)
        {
            if (button != null)
                button.interactable = interactable;
        }
    }

    private bool CanStartAction(FlowerActionType actionType, out Flower currentFlower)
    {
        currentFlower = null;

        if (actionInProgress)
            return false;

        if (menuInteract == null || turnManager == null)
            return false;

        currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return false;

        if (menuInteract.actionPoint < 1)
            return false;

        if (!currentFlower.CanDoAction(actionType, turnManager.jourActuel))
            return false;

        return true;
    }

    void TryDoAction(FlowerActionType actionType)
    {
        if (menuInteract == null || turnManager == null)
            return;

        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        bool success = currentFlower.PerformAction(actionType, turnManager.jourActuel);

        if (!success)
            return;

        menuInteract.actionPoint--;
        menuInteract.UiUpdate();
        menuInteract.RefreshActionBoardAfterAction();

        actionEnAttente = false;
        EndAction();

        Debug.Log("Action effectuée : " + actionType);
    }

    void PrepareAction(FlowerActionType actionType)
    {
        if (!CanStartAction(actionType, out Flower currentFlower))
            return;

        StartAction();

        actionPreparee = actionType;
        actionEnAttente = true;
        tapCount = 0;

        if (tapFeedbackUI != null)
            tapFeedbackUI.ShowAt(currentFlower.GetComponentInParent<RectTransform>());

        Debug.Log("Tapote la fleur pour valider : " + actionType);
    }

    public void ValidateFlowerTap(Flower tappedFlower)
    {
        if (!actionEnAttente)
            return;

        Flower currentFlower = turnManager.GetCurrentFlower();

        if (tappedFlower != currentFlower)
            return;

        tapCount++;
        PlaySound();

        if (tapCount >= tapsRequired)
        {
            TryDoAction(actionPreparee);

            actionEnAttente = false;
            tapCount = 0;

            if (tapFeedbackUI != null)
                tapFeedbackUI.Hide();
        }
    }

    public void PlaySound()
    {
    }

    // ----------- Jour 1 -----------
    public void TillTheSoil()
    {
        PrepareAction(FlowerActionType.TillSoil);
        PlaySound();
    }

    public void Rake()
    {
        if (!CanStartAction(FlowerActionType.Rake, out Flower currentFlower))
            return;

        StartAction();

        if (rakeDragFeedback != null)
            rakeDragFeedback.Show(currentFlower, this);

        PlaySound();
    }

    public void Dig()
    {
        if (!CanStartAction(FlowerActionType.Dig, out Flower currentFlower))
            return;

        StartAction();

        if (digDragFeedback != null)
            digDragFeedback.Show(currentFlower, this);

        PlaySound();
    }

    // ----------- Jour 2 -----------
    public void PlantTheFertilizer()
    {
        if (!CanStartAction(FlowerActionType.AddFertilizer, out Flower currentFlower))
            return;

        StartAction();

        if (fertilizerHoldFeedback != null)
            fertilizerHoldFeedback.Show(currentFlower, this);

        PlaySound();
    }

    public void ValidateFertilizerHold(Flower flower)
    {
        if (flower != turnManager.GetCurrentFlower())
            return;

        TryDoAction(FlowerActionType.AddFertilizer);
        PlaySound();
    }

    // ----------- Jour 3 -----------
    public void PlantSeed()
    {
        if (!CanStartAction(FlowerActionType.PlantSeed, out Flower currentFlower))
            return;

        StartAction();

        if (seedHoldFeedback != null)
            seedHoldFeedback.Show(currentFlower, this);

        PlaySound();
    }

    public void ValidateSeedHold(Flower flower)
    {
        if (flower != turnManager.GetCurrentFlower())
            return;

        TryDoAction(FlowerActionType.PlantSeed);
        PlaySound();
    }

    public void CoverSoil()
    {
        if (!CanStartAction(FlowerActionType.CoverSoil, out Flower currentFlower))
            return;

        StartAction();

        if (coverSoilSwipeFeedback != null)
            coverSoilSwipeFeedback.Show(currentFlower, this);

        PlaySound();
    }

    public void ValidateCoverSoilSwipe(Flower flower)
    {
        if (flower != turnManager.GetCurrentFlower())
            return;

        TryDoAction(FlowerActionType.CoverSoil);
        PlaySound();
    }

    // ----------- Jour 4 -----------
    public void WaterThePlants()
    {
        if (!CanStartAction(FlowerActionType.Water, out Flower currentFlower))
            return;

        StartAction();

        if (wateringCanDragFeedback != null)
            wateringCanDragFeedback.Show(currentFlower, this);

        PlaySound();
    }

    public void ValidateWateringCanDrag(Flower flower)
    {
        if (flower != turnManager.GetCurrentFlower())
            return;

        TryDoAction(FlowerActionType.Water);
        PlaySound();
    }

    // ----------- Jour 5 -----------
    public void RemovePetalAndLeaf()
    {
        if (!CanStartAction(FlowerActionType.RemoveDeadLeaves, out Flower currentFlower))
            return;

        StartAction();

        if (prunerDragFeedback != null)
            prunerDragFeedback.Show(currentFlower, this);

        PlaySound();
    }

    public void ValidatePrunerDrag(Flower flower)
    {
        if (flower != turnManager.GetCurrentFlower())
            return;

        TryDoAction(FlowerActionType.RemoveDeadLeaves);
        PlaySound();
    }

    // ----------- Jour 6 -----------
    public void ReflectivePanel()
    {
        if (!CanStartAction(FlowerActionType.AddReflectivePanel, out Flower currentFlower))
            return;

        StartAction();

        if (reflectivePanelDragFeedback != null)
            reflectivePanelDragFeedback.Show(currentFlower, this);

        PlaySound();
    }

    public void ValidateReflectivePanelDrag(Flower flower)
    {
        if (flower != turnManager.GetCurrentFlower())
            return;

        TryDoAction(FlowerActionType.AddReflectivePanel);
        PlaySound();
    }

    // ----------- Jour 7 -----------
    public void Ladybug()
    {
        PrepareAction(FlowerActionType.AddLadybug);
        PlaySound();
    }

    public void ValidateRakeDrag(Flower flower)
    {
        if (flower != turnManager.GetCurrentFlower())
            return;

        TryDoAction(FlowerActionType.Rake);
        PlaySound();
    }

    public void ValidateDigDrag(Flower flower)
    {
        if (flower != turnManager.GetCurrentFlower())
            return;

        TryDoAction(FlowerActionType.Dig);
        PlaySound();
    }
}