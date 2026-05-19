using UnityEngine;

public class ShopUIManager : MonoBehaviour
{
    public GameObject shopPanel;

    public void OpenShop()
    {
        if(SoundManager.instance != null)
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        
        shopPanel.SetActive(true);
    }

    public void CloseShop()
    {
        if(SoundManager.instance != null)
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        
        shopPanel.SetActive(false);
    }
}