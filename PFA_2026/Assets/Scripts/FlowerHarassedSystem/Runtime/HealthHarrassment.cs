using UnityEngine;

public class HealthHarrassment : MonoBehaviour
{
    [Header("System")]
    [SerializeField]HarassmentManager harrassmentManager;
    [SerializeField]HarassementState harrassementState;
    [SerializeField]CosmeticPointsManager cosmeticPointsManager;
    [SerializeField]UIMenuInteract menuInteract;
    
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
        }
        else
        {
            harrassmentManager.HarrasementInDays();
        }
    }
}
