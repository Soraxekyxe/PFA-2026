using Ami.BroAudio;
using UnityEngine;

public class MenuInteract : MonoBehaviour
{
    [Header ("System")]
    public UIMenuInteract menuInteract;
    public TurnManager turnManager;

    [Header("Audio")] 
    [SerializeField] SoundID UIsound;

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

        // on lance l'animation du tableau
        menuInteract.RefreshActionBoardAfterAction();

        Debug.Log("Action effectuée : " + actionType);
    }

    public void PlaySound()
    {
        BroAudio.Play(UIsound);
    }

    // ----------- Jour 1 -----------
    public void TillTheSoil()
    {
        TryDoAction(FlowerActionType.TillSoil);
        PlaySound();
    }

    public void Rake()
    {
        TryDoAction(FlowerActionType.Rake);
        PlaySound();
    }

    public void Dig()
    {
        TryDoAction(FlowerActionType.Dig);
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
}