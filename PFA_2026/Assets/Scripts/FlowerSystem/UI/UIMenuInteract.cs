using TMPro;
using UnityEngine;
using System.Collections;

public class UIMenuInteract : MonoBehaviour
{
    [Header("System")]
    public TurnManager turnManager;
    public GameDataManager gameDataManager;

    [Header("Point d'action")]
    public TextMeshProUGUI action;
    public int actionPoint;
    private int maxActionPoint;

    [Header("Action du jour")]
    public GameObject ActionDays1;
    public GameObject ActionDays2;
    public GameObject ActionDays3;
    public GameObject ActionDays4;
    public GameObject ActionDays5;
    public GameObject ActionDays6;
    public GameObject ActionDays7;

    [Header("Buttons")]
    public GameObject buttonTillSoil;
    public GameObject buttonRake;
    public GameObject buttonDig;
    public GameObject buttonFertilizer;
    public GameObject buttonPlantSeed;
    public GameObject buttonCoverSoil;
    public GameObject buttonWater;
    public GameObject buttonRemoveDeadLeaves;
    public GameObject buttonReflectivePanel;
    public GameObject buttonLadybug;
    
    [Header("Prochaine action")]
    public GameObject panelNextAction;
    public TextMeshProUGUI textNextAction;
    
    [Header("Tableau actions")]
    public RectTransform tableauActions;
    public Vector2 positionTableauVisible;
    public Vector2 positionTableauCachee;
    public float dureeAnimationTableau = 0.5f;

    private bool animationTableauEnCours = false;

    void Start()
    {
        ActionPointPerPlayer();
        HideAllActionPanels();
        HideAllButtons();

        if (panelNextAction != null)
            panelNextAction.SetActive(false);
        if (tableauActions != null)
            positionTableauVisible = tableauActions.anchoredPosition;
    }
    
    public void ShowBoardAtStartOfDay()
    {
        if (tableauActions == null)
            return;

        StopAllCoroutines();

        StartCoroutine(MoveTableau(positionTableauVisible));

        ShowActionsForCurrentFlower();
    }

    public void ActionPointPerPlayer()
    {
        if (gameDataManager.numberOfPlayers == 1) maxActionPoint = 5;
        else if (gameDataManager.numberOfPlayers == 2) maxActionPoint = 7;
        else if (gameDataManager.numberOfPlayers == 3) maxActionPoint = 9;
        else if (gameDataManager.numberOfPlayers == 4) maxActionPoint = 12;
        else if (gameDataManager.numberOfPlayers == 5) maxActionPoint = 15;
        else if (gameDataManager.numberOfPlayers == 6) maxActionPoint = 17;
        else maxActionPoint = 5;

        UpdateActionPoint();
    }
    
    void AfficherProchaineAction(FlowerActionType actionType)
    {
        if (panelNextAction == null || textNextAction == null)
            return;

        panelNextAction.SetActive(true);
        textNextAction.text = "Prochaine action : " + GetActionName(actionType);
    }

    string GetActionName(FlowerActionType actionType)
    {
        switch (actionType)
        {
            case FlowerActionType.TillSoil:
                return "Retourner la terre";

            case FlowerActionType.Rake:
                return "Ratisser";

            case FlowerActionType.Dig:
                return "Creuser";

            case FlowerActionType.AddFertilizer:
                return "Ajouter de l'engrais";

            case FlowerActionType.PlantSeed:
                return "Planter la graine";

            case FlowerActionType.CoverSoil:
                return "Recouvrir la terre";

            case FlowerActionType.Water:
                return "Arroser";

            case FlowerActionType.RemoveDeadLeaves:
                return "Enlever les feuilles mortes";

            case FlowerActionType.AddReflectivePanel:
                return "Ajouter un panneau réfléchissant";

            case FlowerActionType.AddLadybug:
                return "Ajouter une coccinelle";

            default:
                return "Aucune";
        }
    }
    
    public void RefreshActionBoardAfterAction()
    {
        if (!animationTableauEnCours)
            StartCoroutine(AnimationTableauApresAction());
    }

    IEnumerator AnimationTableauApresAction()
    {
        animationTableauEnCours = true;

        yield return MoveTableau(positionTableauCachee);

        ShowActionsForCurrentFlower();

        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower != null && currentFlower.HasActionAvailable(turnManager.jourActuel))
        {
            yield return MoveTableau(positionTableauVisible);
        }

        animationTableauEnCours = false;
    }

    IEnumerator MoveTableau(Vector2 targetPosition)
    {
        if (tableauActions == null)
            yield break;

        Vector2 startPosition = tableauActions.anchoredPosition;
        float elapsed = 0f;

        while (elapsed < dureeAnimationTableau)
        {
            tableauActions.anchoredPosition = Vector2.Lerp(
                startPosition,
                targetPosition,
                elapsed / dureeAnimationTableau
            );

            elapsed += Time.deltaTime;
            yield return null;
        }

        tableauActions.anchoredPosition = targetPosition;
    }

    public void UpdateActionPoint()
    {
        actionPoint = maxActionPoint;
        action.text = actionPoint.ToString();
    }

    public void UiUpdate()
    {
        action.text = actionPoint.ToString();
    }

    void HideAllActionPanels()
    {
        ActionDays1.SetActive(false);
        ActionDays2.SetActive(false);
        ActionDays3.SetActive(false);
        ActionDays4.SetActive(false);
        ActionDays5.SetActive(false);
        ActionDays6.SetActive(false);
        ActionDays7.SetActive(false);
    }

    void HideAllButtons()
    {
        buttonTillSoil.SetActive(false);
        buttonRake.SetActive(false);
        buttonDig.SetActive(false);
        buttonFertilizer.SetActive(false);
        buttonPlantSeed.SetActive(false);
        buttonCoverSoil.SetActive(false);
        buttonWater.SetActive(false);
        buttonRemoveDeadLeaves.SetActive(false);
        buttonReflectivePanel.SetActive(false);
        buttonLadybug.SetActive(false);
    }
    
    public void ShowActionsForCurrentFlower()
{
    HideAllActionPanels();
    HideAllButtons();

    if (panelNextAction != null)
        panelNextAction.SetActive(false);

    if (turnManager == null)
        return;

    Flower currentFlower = turnManager.GetCurrentFlower();

    if (currentFlower == null)
        return;

    if (currentFlower.IsFinished())
        return;

    if (!currentFlower.HasActionAvailable(turnManager.jourActuel))
        return;

    FlowerActionType currentAction = currentFlower.GetNextRequiredAction();
    int requiredDay = currentFlower.GetNextRequiredDay();

    FlowerActionType nextAction;
    if (currentFlower.TryGetNextActionAfterCurrent(out nextAction))
    {
        AfficherProchaineAction(nextAction);
    }

    switch (currentAction)
    {
        case FlowerActionType.TillSoil:
            ActionDays1.SetActive(true);
            buttonTillSoil.SetActive(true);
            break;

        case FlowerActionType.Rake:
            ActionDays1.SetActive(true);
            buttonRake.SetActive(true);
            break;

        case FlowerActionType.Dig:
            ActionDays1.SetActive(true);
            buttonDig.SetActive(true);
            break;

        case FlowerActionType.AddFertilizer:
            ActionDays2.SetActive(true);
            buttonFertilizer.SetActive(true);
            break;

        case FlowerActionType.PlantSeed:
            ActionDays3.SetActive(true);
            buttonPlantSeed.SetActive(true);
            break;

        case FlowerActionType.CoverSoil:
            ActionDays3.SetActive(true);
            buttonCoverSoil.SetActive(true);
            break;

        case FlowerActionType.Water:
            if (requiredDay == 4)
                ActionDays4.SetActive(true);
            else
                ActionDays5.SetActive(true);

            buttonWater.SetActive(true);
            break;

        case FlowerActionType.RemoveDeadLeaves:
            ActionDays5.SetActive(true);
            buttonRemoveDeadLeaves.SetActive(true);
            break;

        case FlowerActionType.AddReflectivePanel:
            ActionDays6.SetActive(true);
            buttonReflectivePanel.SetActive(true);
            break;

        case FlowerActionType.AddLadybug:
            ActionDays7.SetActive(true);
            buttonLadybug.SetActive(true);
            break;
    }
}
}