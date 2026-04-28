using UnityEngine;

public class FlowerChoiceButton : MonoBehaviour
{
    public FlowerDataSO flowerData;                // Fleur liée à ce bouton
    public ChoiceFlowerManager choiceFlowerManager;

    public void SelectFlower()
    {
        if (choiceFlowerManager == null || flowerData == null)
            return;

        choiceFlowerManager.ChooseFlower(flowerData);
    }
}