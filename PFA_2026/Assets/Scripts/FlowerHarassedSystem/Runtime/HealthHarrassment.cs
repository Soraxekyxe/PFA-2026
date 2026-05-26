using UnityEngine;



public class HealthHarrassment : MonoBehaviour
{
    [Header("System")]
    [SerializeField]HarassmentManager harrassmentManager;
    [SerializeField]HarassementState harrassementState;
    [SerializeField]CosmeticPointsManager cosmeticPointsManager;
    [SerializeField]UIMenuInteract menuInteract;
    
    [SerializeField] 
    private HarassmentRakeDragFeedback harassmentRakeDragFeedback;
    
    [SerializeField] 
    private HarassmentDigDragFeedback harassmentDigDragFeedback;
    
    [SerializeField] 
    private HarassmentFertilizerHoldFeedback harassmentFertilizerHoldFeedback;
    
    [SerializeField] 
    private HarassmentSeedHoldFeedback harassmentSeedHoldFeedback;
    
    [SerializeField] 
    private HarassmentCoverSoilSwipeFeedback harassmentCoverSoilSwipeFeedback;
    
    [SerializeField] 
    private HarassmentWateringCanDragFeedback harassmentWateringCanDragFeedback;
    
    [SerializeField] 
    private HarassmentTapFeedback harassmentTapFeedback;
    
    [SerializeField] 
    private int tapsRequired = 3;
    
    [SerializeField] 
    private HarassmentPrunerDragFeedback harassmentPrunerDragFeedback;
    
    [SerializeField] 
    private HarassmentSweepDragFeedback harassmentSweepDragFeedback;
    
    [SerializeField] 
    private HarassmentReflectivePanelDragFeedback harassmentReflectivePanelDragFeedback;
    
    [SerializeField] 
    private HarassmentEatenPetalsDragFeedback harassmentEatenPetalsDragFeedback;
    
    [SerializeField] 
    private HarassmentMagicPowderDragFeedback harassmentMagicPowderDragFeedback;
    
    

    private bool harassmentTapActionWaiting = false;
    private HarassmentHelpActionType harassmentTapAction;
    private int harassmentTapCount = 0;
    
    // ----------- Ancien system ----------- //
    public void OldHealth()
    {
        Debug.Log("✅ Bouton cliqué : Health() appelée");
        Debug.Log("Cosmetic manager = " + cosmeticPointsManager);
        
        
        if (menuInteract.actionPoint < 1)
        {
            Debug.Log("Plus de points d'action");
        }

        else
        {
            cosmeticPointsManager.AddPoints(10);
            menuInteract.actionPoint -= 2;
            menuInteract.UiUpdate();
            harrassmentManager.HeatlHarrasemen();
        }
    }
    // ----------- Ancien system ----------- //
    
    public void HealthLifePercent(float percent)
    {
        harrassementState.CurrentHealth += Mathf.RoundToInt(harrassementState.MaxHealth * percent);
        harrassementState.CurrentHealth = Mathf.Min(harrassementState.CurrentHealth, harrassementState.MaxHealth);
        
        Debug.Log("vie :" + harrassementState.CurrentHealth);
    }

    public void Health()
    {
        if(SoundManager.instance != null)
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        
        switch (harrassementState.currentState)
        {
            case HarassementState.State.TrampledSoil:
                HealthLifePercent(0.5f);
                break;
            
            case HarassementState.State.MissingFertilizer:
                HealthLifePercent(1f);
                break;
            
            case HarassementState.State.SeedEat:
                HealthLifePercent(0.5f);
                break;
            
            case HarassementState.State.DrinkWater:
                HealthLifePercent(1f);
                break;
            
            case HarassementState.State.Feather:
                HealthLifePercent(0.5f);
                break;
            
            case HarassementState.State.Shadow:
                HealthLifePercent(0.5f);
                break;
            
            case HarassementState.State.FlowerEat:
                HealthLifePercent(0.3f);
                break;
        }
        Debug.Log("Vie" + harrassementState.CurrentHealth);

        if (harrassementState.CurrentHealth >= harrassementState.MaxHealth)
        {
            cosmeticPointsManager.AddPoints(10);
            menuInteract.UiUpdate();
            harrassmentManager.HeatlHarrasemen();
            
            menuInteract.RestoreCurrentPlayerUI();
        }
        else
        {
            harrassmentManager.HarrasementInDays();
        }
    }
    
    [SerializeField] private HarassmentFlowerHelp harassmentFlowerHelp;
    [SerializeField] private TurnManager turnManager;
    
    public void DoHarassmentHelpAction(HarassmentHelpActionType actionType)
    {
        if (SoundManager.instance != null)
            SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
    
        if (harassmentFlowerHelp == null || turnManager == null || menuInteract == null)
        {
            Debug.LogError("Référence manquante dans HealthHarrassment");
            return;
        }
    
        if (menuInteract.actionPoint < 1)
        {
            Debug.Log("Plus de points d'action");
            return;
        }
        
        Debug.Log("Jour actuel = " + turnManager.jourActuel);
        Debug.Log("Action demandée = " + actionType);
        Debug.Log("Action attendue = " + harassmentFlowerHelp.GetNextRequiredAction());
        Debug.Log("Action dispo ? " + harassmentFlowerHelp.HasActionAvailable(turnManager.jourActuel));
    
        bool success = harassmentFlowerHelp.PerformAction(actionType, turnManager.jourActuel);
    
        if (!success)
        {
            Debug.Log("Action impossible : " + actionType);
            return;
        }
        
        menuInteract.actionPoint -= 1;
        menuInteract.UiUpdate();
        menuInteract.RefreshHarassmentAfterHelpAction();
        
    }
    
    //public void HelpRakeSoil() => DoHarassmentHelpAction(HarassmentHelpActionType.RakeSoil);
    public void HelpRakeSoil()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(
                HarassmentHelpActionType.RakeSoil,
                turnManager.jourActuel))
            return;
        
        menuInteract.StopAllCoroutines();

        if (harassmentRakeDragFeedback != null)
            harassmentRakeDragFeedback.Show(this);
        if (harassmentRakeDragFeedback != null)
            harassmentRakeDragFeedback.Show(this);
    }
    
    public void ValidateHarassmentRakeDrag()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.RakeSoil);
    }
    public void HelpDigSoil()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(
                HarassmentHelpActionType.DigSoil,
                turnManager.jourActuel))
            return;

        if (harassmentDigDragFeedback != null)
            harassmentDigDragFeedback.Show(this);
        if (harassmentDigDragFeedback != null)
            harassmentDigDragFeedback.Show(this);
    }
    
    public void ValidateHarassmentDigDrag()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.DigSoil);
    }
    public void HelpFertilizer()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(
                HarassmentHelpActionType.AddFertilizer,
                turnManager.jourActuel))
            return;

        if (harassmentFertilizerHoldFeedback != null)
            harassmentFertilizerHoldFeedback.Show(this);
        if (harassmentFertilizerHoldFeedback != null)
            harassmentFertilizerHoldFeedback.Show(this);
    }
    
    public void ValidateHarassmentFertilizerHold()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.AddFertilizer);
    }
    public void HelpPlantSeeds()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(HarassmentHelpActionType.PlantSeeds, turnManager.jourActuel))
            return;

        if (harassmentSeedHoldFeedback != null)
            harassmentSeedHoldFeedback.Show(this);
        if (harassmentSeedHoldFeedback != null)
            harassmentSeedHoldFeedback.Show(this);
    }
    
    public void ValidateHarassmentSeedHold()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.PlantSeeds);
    }
    public void HelpCoverSoil()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(HarassmentHelpActionType.CoverSoil, turnManager.jourActuel))
            return;

        if (harassmentCoverSoilSwipeFeedback != null)
            harassmentCoverSoilSwipeFeedback.Show(this);
        if (harassmentCoverSoilSwipeFeedback != null)
            harassmentCoverSoilSwipeFeedback.Show(this);
    }
    
    public void ValidateHarassmentCoverSoilSwipe()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.CoverSoil);
    }
    public void HelpWater()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(HarassmentHelpActionType.Water, turnManager.jourActuel))
            return;

        if (harassmentWateringCanDragFeedback != null)
            harassmentWateringCanDragFeedback.Show(this);
        if (harassmentWateringCanDragFeedback != null)
            harassmentWateringCanDragFeedback.Show(this);
    }
    
    public void ValidateHarassmentWateringCanDrag()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.Water);
    }
    public void HelpRemoveFeathers()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(
                HarassmentHelpActionType.RemoveFeathers,
                turnManager.jourActuel))
            return;

        harassmentTapActionWaiting = true;
        harassmentTapAction = HarassmentHelpActionType.RemoveFeathers;
        harassmentTapCount = 0;

        if (harassmentTapFeedback != null)
            harassmentTapFeedback.Show();
        if (harassmentTapFeedback != null)
            harassmentTapFeedback.Show();
    }

    public void ValidateHarassmentFlowerTap()
    {
        if (!harassmentTapActionWaiting)
            return;

        harassmentTapCount++;

        if (SoundManager.instance != null)
            SoundManager.instance.UISoundPlay(SoundManager.instance.UI);

        if (harassmentTapCount >= tapsRequired)
        {
            DoHarassmentHelpAction(harassmentTapAction);

            harassmentTapActionWaiting = false;
            harassmentTapCount = 0;

            if (harassmentTapFeedback != null)
                harassmentTapFeedback.Hide();
        }
    }
    public void HelpRemoveDeadLeaves()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(
                HarassmentHelpActionType.RemoveDeadLeaves,
                turnManager.jourActuel))
            return;

        if (harassmentPrunerDragFeedback != null)
            harassmentPrunerDragFeedback.Show(this);
        if (harassmentPrunerDragFeedback != null)
            harassmentPrunerDragFeedback.Show(this);
    }
    
    public void ValidateHarassmentPrunerDrag()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.RemoveDeadLeaves);
    }
    public void HelpSweep()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(HarassmentHelpActionType.Sweep, turnManager.jourActuel))
            return;

        if (harassmentSweepDragFeedback != null)
            harassmentSweepDragFeedback.Show(this);
        if (harassmentSweepDragFeedback != null)
            harassmentSweepDragFeedback.Show(this);
    }

    public void ValidateHarassmentSweepDrag()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.Sweep);
    }
    public void HelpReflectivePanels()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(HarassmentHelpActionType.AddReflectivePanels, turnManager.jourActuel))
            return;

        if (harassmentReflectivePanelDragFeedback != null)
            harassmentReflectivePanelDragFeedback.Show(this);
        if (harassmentReflectivePanelDragFeedback != null)
            harassmentReflectivePanelDragFeedback.Show(this);
    }

    public void ValidateHarassmentReflectivePanelDrag()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.AddReflectivePanels);
    }
    public void HelpRemoveEatenPetals()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(HarassmentHelpActionType.RemoveEatenPetals, turnManager.jourActuel))
            return;

        if (harassmentEatenPetalsDragFeedback != null)
            harassmentEatenPetalsDragFeedback.Show(this);
        if (harassmentEatenPetalsDragFeedback != null)
            harassmentEatenPetalsDragFeedback.Show(this);
    }

    public void ValidateHarassmentEatenPetalsDrag()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.RemoveEatenPetals);
    }
    public void HelpMagicPowder()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(HarassmentHelpActionType.AddMagicPowder, turnManager.jourActuel))
            return;

        if (harassmentMagicPowderDragFeedback != null)
            harassmentMagicPowderDragFeedback.Show(this);
        if (harassmentMagicPowderDragFeedback != null)
            harassmentMagicPowderDragFeedback.Show(this);
    }

    public void ValidateHarassmentMagicPowderDrag()
    {
        DoHarassmentHelpAction(HarassmentHelpActionType.AddMagicPowder);
    }
    public void HelpLadybugs()
    {
        if (menuInteract == null)
            return;
        menuInteract.StopAllCoroutines();
        if (menuInteract.actionPoint < 1)
            return;

        if (!harassmentFlowerHelp.CanDoAction(HarassmentHelpActionType.AddLadybugs, turnManager.jourActuel))
            return;

        harassmentTapActionWaiting = true;
        harassmentTapAction = HarassmentHelpActionType.AddLadybugs;
        harassmentTapCount = 0;

        if (harassmentTapFeedback != null)
            harassmentTapFeedback.Show();
        if (harassmentTapFeedback != null)
            harassmentTapFeedback.Show();
    }
}
