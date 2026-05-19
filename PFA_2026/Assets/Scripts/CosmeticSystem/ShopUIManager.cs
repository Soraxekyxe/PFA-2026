using UnityEngine;

public class ShopUIManager : MonoBehaviour
{
    public GameObject shopPanel;
    
    [Header("System")]
    [SerializeField] SoundManager soundManager;
    

    public void OpenShop()
    {
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        shopPanel.SetActive(true);
    }

    public void CloseShop()
    {
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        shopPanel.SetActive(false);
    }
}