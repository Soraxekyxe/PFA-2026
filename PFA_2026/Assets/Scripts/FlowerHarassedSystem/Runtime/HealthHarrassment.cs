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
    
    public void HealthLifePercent(float percent)
    {
        harrassementState.CurrentHealth += Mathf.RoundToInt(harrassementState.MaxHealth * percent);
        harrassementState.CurrentHealth = Mathf.Min(harrassementState.CurrentHealth, harrassementState.MaxHealth);
        
        Debug.Log("vie :" + harrassementState.CurrentHealth);
    }
    
    // ----------- Soin jour 1 ----------- //

    //public void Health()
    //{
        //switch (harrassementState.currentState)
        //{
            //case HarassementState.:
                //HealthLifePercent(0.5f);
                
                //break;
        //}
        
    //}
    
}
