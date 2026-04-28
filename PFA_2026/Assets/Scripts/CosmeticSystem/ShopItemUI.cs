using UnityEngine;
using UnityEngine.UI;

public class ShopItemUI : MonoBehaviour
{
    public int price;
    public GameObject objectToUnlock;

    public Button buyButton; // le bouton UI

    private bool bought = false;

    void Update()
    {
        UpdateButtonState();
    }

    // ----- changement d'etat du bouton-----
    void UpdateButtonState()
    {
        if (bought)
        {
            buyButton.interactable = false;
            return;
        }

        int currentPoints = CosmeticPointsManager.Instance.GetPoints();

        bool canBuy = currentPoints >= price;

        buyButton.interactable = canBuy;
    }

    // ----- achat -----
    public void Buy()
    {
        if (bought)
            return;

        if (CosmeticPointsManager.Instance.SpendPoints(price))
        {
            objectToUnlock.SetActive(true);
            bought = true;

            buyButton.interactable = false;
        }
        else
        {
            Debug.Log("Pas assez de points");
        }
    }
}