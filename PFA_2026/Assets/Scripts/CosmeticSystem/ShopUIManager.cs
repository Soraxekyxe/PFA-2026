using UnityEngine;

public class ShopUIManager : MonoBehaviour
{
    public GameObject shopPanel;

    public void OpenShop()
    {
        shopPanel.SetActive(true);
        // Son du bouton
        SoundManagerY.Instance.PlaySFX("OpenShop");
    }

    public void CloseShop()
    {
        
        shopPanel.SetActive(false);
        
        // Son du bouton
        SoundManagerY.Instance.PlaySFX("CloseShop");
    }
}