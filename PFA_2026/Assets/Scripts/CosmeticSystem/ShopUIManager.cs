using UnityEngine;

public class ShopUIManager : MonoBehaviour
{
    public GameObject shopPanel;
    
    [Header("System")]
    [SerializeField] SoundManager soundManager;
    

    public void OpenShop()
    {
        soundManager.UISoundPlay();
        shopPanel.SetActive(true);
    }

    public void CloseShop()
    {
        soundManager.UISoundPlay();
        shopPanel.SetActive(false);
    }
}