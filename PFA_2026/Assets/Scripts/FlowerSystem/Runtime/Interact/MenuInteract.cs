using UnityEngine;

public class MenuInteract : MonoBehaviour
{
    public UIMenuInteract menuInteract;
    public TurnManager turnManager;

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

    // ----------- Jour 1 -----------
    public void TillTheSoil()
    {
        TryDoAction(FlowerActionType.TillSoil);
    }

    public void Rake()
    {
        TryDoAction(FlowerActionType.Rake);
    }

    public void Dig()
    {
        TryDoAction(FlowerActionType.Dig);
    }

    // ----------- Jour 2 -----------
    public void PlantTheFertilizer()
    {
        TryDoAction(FlowerActionType.AddFertilizer);
    }

    // ----------- Jour 3 -----------
    public void PlantSeed()
    {
        TryDoAction(FlowerActionType.PlantSeed);
    }

    public void CoverSoil()
    {
        TryDoAction(FlowerActionType.CoverSoil);
    }

    // ----------- Jour 4 -----------
    public void WaterThePlants()
    {
        TryDoAction(FlowerActionType.Water);
    }

    // ----------- Jour 5 -----------
    public void RemovePetalAndLeaf()
    {
        TryDoAction(FlowerActionType.RemoveDeadLeaves);
    }

    // ----------- Jour 6 -----------
    public void ReflectivePanel()
    {
        TryDoAction(FlowerActionType.AddReflectivePanel);
    }

    // ----------- Jour 7 -----------
    public void Ladybug()
    {
        TryDoAction(FlowerActionType.AddLadybug);
    }
}