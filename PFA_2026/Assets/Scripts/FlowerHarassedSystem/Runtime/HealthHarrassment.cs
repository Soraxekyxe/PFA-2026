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
    
    public bool DoHarassmentHelpAction(HarassmentHelpActionType actionType)
    {
    
        if (harassmentFlowerHelp == null || turnManager == null || menuInteract == null)
        {
            Debug.LogError("Référence manquante dans HealthHarrassment");
            return false;
        }
    
        if (menuInteract.actionPoint < 1)
        {
            Debug.Log("Plus de points d'action");
            return false;
        }
        
        Debug.Log("Jour actuel = " + turnManager.jourActuel);
        Debug.Log("Action demandée = " + actionType);
        Debug.Log("Action attendue = " + harassmentFlowerHelp.GetNextRequiredAction());
        Debug.Log("Action dispo ? " + harassmentFlowerHelp.HasActionAvailable(turnManager.jourActuel));
    
        bool success = harassmentFlowerHelp.PerformAction(actionType, turnManager.jourActuel);
        
    
        if (!success)
        {
            Debug.Log("Action impossible : " + actionType);
            return false;
        }
        
        cosmeticPointsManager.AddPoints(10);
        
        menuInteract.actionPoint -= 1;
        menuInteract.UiUpdate();
        menuInteract.RefreshHarassmentAfterHelpAction();
        return true;
        
    }
    
    public void PlayHarassmentSound(HarassmentHelpActionType actionType)
    {
        switch (actionType)
        {
            case HarassmentHelpActionType.RakeSoil:
                SoundManagerY.Instance.PlaySFX("Step2");
                break;

            case HarassmentHelpActionType.DigSoil:
                SoundManagerY.Instance.PlaySFX("Step3");
                break;

            case HarassmentHelpActionType.AddFertilizer:
                SoundManagerY.Instance.PlaySFX("Step4");
                break;

            case HarassmentHelpActionType.PlantSeeds:
                SoundManagerY.Instance.PlaySFX("Step5");
                break;

            case HarassmentHelpActionType.CoverSoil:
                SoundManagerY.Instance.PlaySFX("Step6");
                break;

            case HarassmentHelpActionType.Water:
                SoundManagerY.Instance.PlaySFX("Step7");
                break;

            case HarassmentHelpActionType.RemoveFeathers:
                SoundManagerY.Instance.PlaySFX("Step13");
                break;

            case HarassmentHelpActionType.RemoveDeadLeaves:
                SoundManagerY.Instance.PlaySFX("Step8");
                break;

            case HarassmentHelpActionType.Sweep:
                SoundManagerY.Instance.PlaySFX("Step11");
                break;

            case HarassmentHelpActionType.AddReflectivePanels:
                SoundManagerY.Instance.PlaySFX("Step9");
                break;

            case HarassmentHelpActionType.RemoveEatenPetals:
                SoundManagerY.Instance.PlaySFX("Step8");
                break;

            case HarassmentHelpActionType.AddMagicPowder:
                SoundManagerY.Instance.PlaySFX("Step12");
                break;

            case HarassmentHelpActionType.AddLadybugs:
                SoundManagerY.Instance.PlaySFX("Step10");
                break;
        }
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.RakeSoil))
            PlayHarassmentSound(HarassmentHelpActionType.RakeSoil);
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.DigSoil))
            PlayHarassmentSound(HarassmentHelpActionType.DigSoil);
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.AddFertilizer))
            PlayHarassmentSound(HarassmentHelpActionType.AddFertilizer);
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.PlantSeeds))
            PlayHarassmentSound(HarassmentHelpActionType.PlantSeeds);
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.CoverSoil))
            PlayHarassmentSound(HarassmentHelpActionType.CoverSoil);
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.Water))
            PlayHarassmentSound(HarassmentHelpActionType.Water);
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
        

        if (harassmentTapCount >= tapsRequired)
        {
            if (DoHarassmentHelpAction(harassmentTapAction))
                PlayHarassmentSound(harassmentTapAction);

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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.RemoveDeadLeaves))
            PlayHarassmentSound(HarassmentHelpActionType.RemoveDeadLeaves);
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.Sweep))
            PlayHarassmentSound(HarassmentHelpActionType.Sweep);
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.AddReflectivePanels))
            PlayHarassmentSound(HarassmentHelpActionType.AddReflectivePanels);
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.RemoveEatenPetals))
            PlayHarassmentSound(HarassmentHelpActionType.RemoveEatenPetals);
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
        if (DoHarassmentHelpAction(HarassmentHelpActionType.AddMagicPowder))
            PlayHarassmentSound(HarassmentHelpActionType.AddMagicPowder);
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
