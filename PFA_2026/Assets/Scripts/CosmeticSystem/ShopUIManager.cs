using UnityEngine;

public class ShopUIManager : MonoBehaviour
{
    public GameObject shopPanel;

    public void OpenShop()
    {
        shopPanel.SetActive(true);
    }

    public void CloseShop()
    {
        shopPanel.SetActive(false);
    }
}