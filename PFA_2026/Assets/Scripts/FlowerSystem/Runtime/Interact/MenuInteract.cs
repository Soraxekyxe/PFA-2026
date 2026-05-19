using Ami.BroAudio;
using UnityEngine;

public class MenuInteract : MonoBehaviour
{
    [Header("System")]
    public UIMenuInteract menuInteract;
    public TurnManager turnManager;
    [SerializeField] SoundManager soundManager;
    
    [SerializeField] 
    private TapFeedbackUI tapFeedbackUI;

    private bool actionEnAttente = false;
    private FlowerActionType actionPreparee;
    
    private int tapCount = 0;
    [SerializeField] private int tapsRequired = 3;
    
    [SerializeField] private RakeDragFeedback rakeDragFeedback;
    [SerializeField] private DigDragFeedback digDragFeedback;
    [SerializeField] private FertilizerHoldFeedback fertilizerHoldFeedback;
    [SerializeField] private SeedHoldFeedback seedHoldFeedback;
    [SerializeField] private CoverSoilSwipeFeedback coverSoilSwipeFeedback;
    [SerializeField] private WateringCanDragFeedback wateringCanDragFeedback;
    [SerializeField] private PrunerDragFeedback prunerDragFeedback;
    [SerializeField] private ReflectivePanelDragFeedback reflectivePanelDragFeedback;
    

    void TryDoAction(FlowerActionType actionType)
    {
        if (menuInteract == null || turnManager == null)
            return;

        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
        {
            Debug.Log("Aucune fleur active");
            return;
        }

        if (menuInteract.actionPoint < 1)
        {
            Debug.Log("Plus de points d'action");
            return;
        }

        bool success = currentFlower.PerformAction(actionType, turnManager.jourActuel);

        if (!success)
        {
            Debug.Log("Action impossible pour cette fleur maintenant");
            return;
        }

        menuInteract.actionPoint--;
        menuInteract.UiUpdate();

        menuInteract.RefreshActionBoardAfterAction();

        actionEnAttente = false;

        Debug.Log("Action effectuée : " + actionType);
    }

    void PrepareAction(FlowerActionType actionType)
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        if (!currentFlower.CanDoAction(actionType, turnManager.jourActuel))
            return;

        actionPreparee = actionType;
        actionEnAttente = true;
        tapCount = 0;
        
        tapFeedbackUI.ShowAt(currentFlower.GetComponentInParent<RectTransform>());

        Debug.Log("Tapote la fleur pour valider : " + actionType);
        
    }

    public void ValidateFlowerTap(Flower tappedFlower)
    {
        if (!actionEnAttente)
            return;

        Flower currentFlower = turnManager.GetCurrentFlower();

        if (tappedFlower != currentFlower)
        {
            Debug.Log("Ce n'est pas la fleur du joueur actuel");
            return;
        }

        tapCount++;

        Debug.Log("Tap " + tapCount + " / " + tapsRequired);

        // petit effet sonore optionnel
        PlaySound();

        if (tapCount >= tapsRequired)
        {
            TryDoAction(actionPreparee);

            actionEnAttente = false;
            tapCount = 0;

            if (tapFeedbackUI != null)
                tapFeedbackUI.Hide();

            Debug.Log("Action validée !");
        }
    }

    public void PlaySound()
    {
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
    }

    // ----------- Jour 1 -----------
    public void TillTheSoil()
    {
        PrepareAction(FlowerActionType.TillSoil);
        PlaySound();
    }

    public void Rake()
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        if (!currentFlower.CanDoAction(FlowerActionType.Rake, turnManager.jourActuel))
            return;

        if (rakeDragFeedback != null)
            rakeDragFeedback.Show(currentFlower, this);

        PlaySound();
    }

    public void Dig()
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        if (!currentFlower.CanDoAction(FlowerActionType.Dig, turnManager.jourActuel))
            return;

        if (digDragFeedback != null)
            digDragFeedback.Show(currentFlower, this);

        PlaySound();
    }

    // ----------- Jour 2 -----------
    public void PlantTheFertilizer()
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        if (!currentFlower.CanDoAction(FlowerActionType.AddFertilizer, turnManager.jourActuel))
            return;

        if (fertilizerHoldFeedback != null)
            fertilizerHoldFeedback.Show(currentFlower, this);

        PlaySound();
    }
    
    public void ValidateFertilizerHold(Flower flower)
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (flower != currentFlower)
            return;

        TryDoAction(FlowerActionType.AddFertilizer);
        PlaySound();
    }

    // ----------- Jour 3 -----------
    public void PlantSeed()
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        if (!currentFlower.CanDoAction(FlowerActionType.PlantSeed, turnManager.jourActuel))
            return;

        if (seedHoldFeedback != null)
            seedHoldFeedback.Show(currentFlower, this);

        PlaySound();
    }
    
    public void ValidateSeedHold(Flower flower)
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (flower != currentFlower)
            return;

        TryDoAction(FlowerActionType.PlantSeed);
        PlaySound();
    }

    public void CoverSoil()
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        if (!currentFlower.CanDoAction(FlowerActionType.CoverSoil, turnManager.jourActuel))
            return;

        if (coverSoilSwipeFeedback != null)
            coverSoilSwipeFeedback.Show(currentFlower, this);

        PlaySound();
    }
    
    public void ValidateCoverSoilSwipe(Flower flower)
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (flower != currentFlower)
            return;

        TryDoAction(FlowerActionType.CoverSoil);
        PlaySound();
    }

    // ----------- Jour 4 -----------
    public void WaterThePlants()
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        if (!currentFlower.CanDoAction(FlowerActionType.Water, turnManager.jourActuel))
            return;

        if (wateringCanDragFeedback != null)
            wateringCanDragFeedback.Show(currentFlower, this);

        PlaySound();
    }
    
    public void ValidateWateringCanDrag(Flower flower)
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (flower != currentFlower)
            return;

        TryDoAction(FlowerActionType.Water);
        PlaySound();
    }

    // ----------- Jour 5 -----------
    public void RemovePetalAndLeaf()
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        if (!currentFlower.CanDoAction(FlowerActionType.RemoveDeadLeaves, turnManager.jourActuel))
            return;

        if (prunerDragFeedback != null)
            prunerDragFeedback.Show(currentFlower, this);

        PlaySound();
    }
    
    public void ValidatePrunerDrag(Flower flower)
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (flower != currentFlower)
            return;

        TryDoAction(FlowerActionType.RemoveDeadLeaves);
        PlaySound();
    }

    // ----------- Jour 6 -----------
    public void ReflectivePanel()
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
            return;

        if (menuInteract.actionPoint < 1)
            return;

        if (!currentFlower.CanDoAction(FlowerActionType.AddReflectivePanel, turnManager.jourActuel))
            return;

        if (reflectivePanelDragFeedback != null)
            reflectivePanelDragFeedback.Show(currentFlower, this);

        PlaySound();
    }
    
    public void ValidateReflectivePanelDrag(Flower flower)
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (flower != currentFlower)
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
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (flower != currentFlower)
            return;

        TryDoAction(FlowerActionType.Rake);
        PlaySound();
    }
    
    public void ValidateDigDrag(Flower flower)
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (flower != currentFlower)
            return;

        TryDoAction(FlowerActionType.Dig);
        PlaySound();
    }
}