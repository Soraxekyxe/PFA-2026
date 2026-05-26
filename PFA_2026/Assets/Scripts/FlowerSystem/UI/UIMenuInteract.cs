using TMPro;
using UnityEngine;
using System.Collections;

/// Gère toute l'interface des actions du joueur :
/// - points d'action
/// - affichage des boutons d'action
/// - animation du tableau des actions
/// - affichage de la prochaine action
public class UIMenuInteract : MonoBehaviour
{
    // REFERENCES SYSTEME

    [Header("System")]
    public TurnManager turnManager;
    public GameDataManager gameDataManager;
    
    // POINTS D'ACTION

    [Header("Point d'action")]
    public TextMeshProUGUI action; // Texte affichant les points d'action
    public int actionPoint; // Points d'action actuels
    private int maxActionPoint; // Maximum de points d'action selon le nombre de joueurs
    
    // PANELS DES JOURS

    [Header("Action du jour")]
    public GameObject ActionDays1;
    public GameObject ActionDays2;
    public GameObject ActionDays3;
    public GameObject ActionDays4;
    public GameObject ActionDays5;
    public GameObject ActionDays6;
    public GameObject ActionDays7;
    
    // BOUTONS D'ACTIONS

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
    
    [Header("Buttons help")]
    public GameObject buttonHelp;
    
    [Header("Bouton soin")]
    public GameObject buttonHealth;
    
    // UI PROCHAINE ACTION

    [Header("Prochaine action")]
    public GameObject panelNextAction;
    public TextMeshProUGUI textNextAction;
    
    // TABLEAU DES ACTIONS
    [Header("Tableau actions")]
    public RectTransform tableauActions;

    // Position visible du tableau
    public Vector2 positionTableauVisible;

    // Position cachée du tableau
    public Vector2 positionTableauCachee;

    // Durée de l'animation du tableau
    public float dureeAnimationTableau = 0.5f;
    
    [Header("Fleur isolée")]
    public HarassmentFlowerHelp harassmentFlowerHelp;
    
    public GameObject buttonHelpRakeSoil;
    public GameObject buttonHelpDigSoil;
    public GameObject buttonHelpFertilizer;
    public GameObject buttonHelpPlantSeeds;
    public GameObject buttonHelpCoverSoil;
    public GameObject buttonHelpWater;
    public GameObject buttonHelpRemoveFeathers;
    public GameObject buttonHelpRemoveDeadLeaves;
    public GameObject buttonHelpSweep;
    public GameObject buttonHelpReflectivePanels;
    public GameObject buttonHelpRemoveEatenPetals;
    public GameObject buttonHelpMagicPowder;
    public GameObject buttonHelpLadybugs;
    
    /// Initialisation de l'UI
    void Start()
    {
        // Initialise les points d'action
        ActionPointPerPlayer();

        // Cache tous les panneaux et boutons au démarrage
        HideAllActionPanels();
        HideAllButtons();

        // Cache le panneau de prochaine action
        if (panelNextAction != null)
            panelNextAction.SetActive(false);

        // Sauvegarde la position visible du tableau
        if (tableauActions != null)
            positionTableauVisible = tableauActions.anchoredPosition;
    }
    
    /// Définit les points d'action maximum
    /// selon le nombre de joueurs
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
    
    /// Remet les points d'action au maximum
    public void UpdateActionPoint()
    {
        actionPoint = maxActionPoint;
        action.text = actionPoint.ToString();
    }
    
    /// Met à jour l'affichage des points d'action
    public void UiUpdate()
    {
        action.text = actionPoint.ToString();
    }
    
    /// Affiche immédiatement le tableau au début de la journée
    public void ShowBoardAtStartOfDay()
    {
        if (tableauActions == null)
            return;

        tableauActions.anchoredPosition = positionTableauVisible;
        ShowActionsForCurrentFlower();
    }
    
    /// Rafraîchit le tableau après une action
    public void RefreshActionBoardAfterAction()
    {
        StopAllCoroutines();
        StartCoroutine(AnimationTableauApresAction());
    }
    
    /// Animation du tableau après une action :
    /// - cache le tableau
    /// - met à jour les actions
    /// - réaffiche le tableau si nécessaire
    IEnumerator AnimationTableauApresAction()
    {
        yield return MoveTableau(positionTableauCachee);

        ShowActionsForCurrentFlower();

        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower != null && currentFlower.HasActionAvailable(turnManager.jourActuel))
        {
            yield return MoveTableau(positionTableauVisible);
        }
    }
    
    /// Animation du tableau lorsqu'on change de joueur
    public IEnumerator AnimateBoardForNewPlayer()
    {
        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower != null && currentFlower.HasActionAvailable(turnManager.jourActuel))
        {
            yield return MoveTableau(positionTableauVisible);
            ShowActionsForCurrentFlower();
        }
    }
    
    /// Déplace le tableau avec une interpolation fluide
    public IEnumerator MoveTableau(Vector2 targetPosition)
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
    
    /// Cache tous les panneaux de jours
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
    
    /// Cache tous les boutons d'action
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
    
    /// Affiche les actions disponibles
    /// pour la fleur du joueur actuel
    public void ShowActionsForCurrentFlower()
    {
        Debug.Log("ShowActionsForCurrentFlower appelé");
        
        HideAllActionPanels();
        HideAllButtons();

        if (panelNextAction != null)
            panelNextAction.SetActive(false);

        if (turnManager == null)
        {
            Debug.Log("turnManager NULL");
            return;
        }

        Flower currentFlower = turnManager.GetCurrentFlower();

        if (currentFlower == null)
        {
            Debug.Log("currentFlower NULL");
            return;
        }
            

        // Ne rien afficher si la fleur est terminée
        if (currentFlower.IsFinished())
        {
            Debug.Log("currentFlower.IsFinished()");
            return;
        }
            

        // Ne rien afficher si aucune action disponible aujourd'hui
        if (!currentFlower.HasActionAvailable(turnManager.jourActuel))
        {
            Debug.Log("Aucune action dispo");
            return;
        }
            
        Debug.Log("Affichage des actions");

        FlowerActionType currentAction = currentFlower.GetNextRequiredAction();
        int requiredDay = currentFlower.GetNextRequiredDay();

        // Affiche la prochaine action après celle actuelle
        FlowerActionType nextAction;

        if (currentFlower.TryGetNextActionAfterCurrent(out nextAction))
        {
            AfficherProchaineAction(nextAction);
        }

        // Active le bon panneau + le bon bouton
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

                // Selon le jour demandé
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
    
    /// Affiche l'UI de la prochaine action
    void AfficherProchaineAction(FlowerActionType actionType)
    {
        if (panelNextAction == null || textNextAction == null)
            return;

        panelNextAction.SetActive(true);

        textNextAction.text =
            "Prochaine action : " + GetActionName(actionType);
    }
    
    /// Retourne le nom français d'une action
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

    public void ShowHarassmentFlowerUI()
    {
        if (currentMode == UISelectionMode.HarassmentFlower)
        {
            ShowHarassmentHelpAction();
            return;
        }

        currentMode = UISelectionMode.HarassmentFlower;

        StopAllCoroutines();
        StartCoroutine(ShowHarassmentFlowerRoutine());
    }
    
    IEnumerator ShowHarassmentFlowerRoutine()
    {
        // 1. Le tableau remonte
        yield return MoveTableau(positionTableauCachee);

        // 2. Une fois en haut, on change l'UI
        HideAllActionPanels();
        HideAllButtons();

        if (panelNextAction != null)
            panelNextAction.SetActive(false);

        ShowHarassmentHelpAction();

        if (turnManager != null && turnManager.textTour != null)
            turnManager.textTour.text = "Fleur isolée";

        // 3. Le tableau redescend
        yield return MoveTableau(positionTableauVisible);
    }

    public void RestoreCurrentPlayerUI()
    {
        if (currentMode == UISelectionMode.CurrentPlayer)
            return;

        currentMode = UISelectionMode.CurrentPlayer;

        StopAllCoroutines();
        StartCoroutine(RestoreCurrentPlayerRoutine());
    }
    
    IEnumerator RestoreCurrentPlayerRoutine()
    {
        // 1. Le tableau remonte
        yield return MoveTableau(positionTableauCachee);

        // 2. Une fois en haut, on change l'UI
        HideAllHarassmentHelpButtons();

        HideAllActionPanels();
        HideAllButtons();
        

        if (panelNextAction != null)
            panelNextAction.SetActive(false);

        if (turnManager != null)
            turnManager.RefreshCurrentTourUI();

        ShowActionsForCurrentFlower();

        // 3. Le tableau redescend
        yield return MoveTableau(positionTableauVisible);
    }
    
    private enum UISelectionMode
    {
        CurrentPlayer,
        HarassmentFlower
    }

    private UISelectionMode currentMode = UISelectionMode.CurrentPlayer;
    
    void HideAllHarassmentHelpButtons()
    {
        buttonHealth.SetActive(false);

        buttonHelpRakeSoil.SetActive(false);
        buttonHelpDigSoil.SetActive(false);
        buttonHelpFertilizer.SetActive(false);
        buttonHelpPlantSeeds.SetActive(false);
        buttonHelpCoverSoil.SetActive(false);
        buttonHelpWater.SetActive(false);
        buttonHelpRemoveFeathers.SetActive(false);
        buttonHelpRemoveDeadLeaves.SetActive(false);
        buttonHelpSweep.SetActive(false);
        buttonHelpReflectivePanels.SetActive(false);
        buttonHelpRemoveEatenPetals.SetActive(false);
        buttonHelpMagicPowder.SetActive(false);
        buttonHelpLadybugs.SetActive(false);
    }
    
    public void ShowHarassmentHelpAction()
    {
        
        HideAllHarassmentHelpButtons();

        if (harassmentFlowerHelp == null || turnManager == null)
            return;

        if (!harassmentFlowerHelp.HasActionAvailable(turnManager.jourActuel))
            return;

        HarassmentHelpActionType action =
            harassmentFlowerHelp.GetNextRequiredAction();

        switch (action)
        {
            case HarassmentHelpActionType.RakeSoil:
                buttonHelpRakeSoil.SetActive(true);
                break;

            case HarassmentHelpActionType.DigSoil:
                buttonHelpDigSoil.SetActive(true);
                break;

            case HarassmentHelpActionType.AddFertilizer:
                buttonHelpFertilizer.SetActive(true);
                break;

            case HarassmentHelpActionType.PlantSeeds:
                buttonHelpPlantSeeds.SetActive(true);
                break;

            case HarassmentHelpActionType.CoverSoil:
                buttonHelpCoverSoil.SetActive(true);
                break;

            case HarassmentHelpActionType.Water:
                buttonHelpWater.SetActive(true);
                break;

            case HarassmentHelpActionType.RemoveFeathers:
                buttonHelpRemoveFeathers.SetActive(true);
                break;

            case HarassmentHelpActionType.RemoveDeadLeaves:
                buttonHelpRemoveDeadLeaves.SetActive(true);
                break;

            case HarassmentHelpActionType.Sweep:
                buttonHelpSweep.SetActive(true);
                break;

            case HarassmentHelpActionType.AddReflectivePanels:
                buttonHelpReflectivePanels.SetActive(true);
                break;

            case HarassmentHelpActionType.RemoveEatenPetals:
                buttonHelpRemoveEatenPetals.SetActive(true);
                break;

            case HarassmentHelpActionType.AddMagicPowder:
                buttonHelpMagicPowder.SetActive(true);
                break;

            case HarassmentHelpActionType.AddLadybugs:
                buttonHelpLadybugs.SetActive(true);
                break;
        }
    }
    
    public void RefreshHarassmentFlowerUI()
    {
        ShowHarassmentHelpAction();
    }
    
    public void RefreshHarassmentAfterHelpAction()
    {
        StopAllCoroutines();
        StartCoroutine(RefreshHarassmentAfterHelpActionRoutine());
    }

    IEnumerator RefreshHarassmentAfterHelpActionRoutine()
    {
        yield return MoveTableau(positionTableauCachee);

        HideAllActionPanels();
        HideAllButtons();

        if (panelNextAction != null)
            panelNextAction.SetActive(false);

        ShowHarassmentHelpAction();
        yield return null;

        if (harassmentFlowerHelp != null &&
            harassmentFlowerHelp.HasActionAvailable(turnManager.jourActuel))
        {
            yield return MoveTableau(positionTableauVisible);
        }
        else
        {
            currentMode = UISelectionMode.CurrentPlayer;

            if (turnManager != null)
                turnManager.RefreshCurrentTourUI();

            ShowActionsForCurrentFlower();

            yield return MoveTableau(positionTableauVisible);
        }
        
        
    }
    
    public bool IsOnHarassmentFlower()
    {
        return currentMode == UISelectionMode.HarassmentFlower;
    }
    
    public void ForceCurrentPlayerUIWithoutAnimation()
    {
        currentMode = UISelectionMode.CurrentPlayer;

        HideAllHarassmentHelpButtons();
        HideAllActionPanels();
        HideAllButtons();

        if (panelNextAction != null)
            panelNextAction.SetActive(false);

        if (turnManager != null)
            turnManager.RefreshCurrentTourUI();

        ShowActionsForCurrentFlower();
    }
    
    public void ForceExitHarassmentWithoutShowingPlayerActions()
    {
        currentMode = UISelectionMode.CurrentPlayer;

        HideAllHarassmentHelpButtons();
        HideAllActionPanels();
        HideAllButtons();

        if (panelNextAction != null)
            panelNextAction.SetActive(false);
    }
}