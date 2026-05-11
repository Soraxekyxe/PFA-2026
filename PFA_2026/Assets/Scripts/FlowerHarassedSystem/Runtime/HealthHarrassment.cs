using UnityEngine;

public class HealthHarrassment : MonoBehaviour
{
    [Header("System")]
    [SerializeField]HarassmentManager harrassmentManager;
    [SerializeField]HarassementState harrassementState;
    [SerializeField]CosmeticPointsManager cosmeticPointsManager;
    [SerializeField]UIMenuInteract menuInteract;
    
    // ----------- Ancien system ----------- //
    public void Health()
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
    // ----------- Nouveau System ----------- //

    // ----------- Jour 1 ----------- //
    public void RakeTheSoil()
    {
        
    }

    public void DigTheSoil()
    {
        
    }
    
    // ----------- Jour 2 ----------- //
    public void AddFertilizer()
    {
        
    }
    
    // ----------- Jour 3 ----------- //
    public void AddingSeeds()
    {
        
    }
    
}
