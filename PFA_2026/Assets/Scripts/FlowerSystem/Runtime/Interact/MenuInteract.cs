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
        if (soundManager != null)
            soundManager.UISoundPlay();
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
        TryDoAction(FlowerActionType.AddFertilizer);
        PlaySound();
    }

    // ----------- Jour 3 -----------
    public void PlantSeed()
    {
        TryDoAction(FlowerActionType.PlantSeed);
        PlaySound();
    }

    public void CoverSoil()
    {
        TryDoAction(FlowerActionType.CoverSoil);
        PlaySound();
    }

    // ----------- Jour 4 -----------
    public void WaterThePlants()
    {
        TryDoAction(FlowerActionType.Water);
        PlaySound();
    }

    // ----------- Jour 5 -----------
    public void RemovePetalAndLeaf()
    {
        TryDoAction(FlowerActionType.RemoveDeadLeaves);
        PlaySound();
    }

    // ----------- Jour 6 -----------
    public void ReflectivePanel()
    {
        TryDoAction(FlowerActionType.AddReflectivePanel);
        PlaySound();
    }

    // ----------- Jour 7 -----------
    public void Ladybug()
    {
        TryDoAction(FlowerActionType.AddLadybug);
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