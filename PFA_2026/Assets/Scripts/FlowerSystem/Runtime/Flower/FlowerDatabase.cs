using UnityEngine;

public class FlowerDatabase : MonoBehaviour
{
    public FlowerDataSO[] allFlowers;

    public FlowerDataSO GetFlowerById(string flowerId)
    {
        for (int i = 0; i < allFlowers.Length; i++)
        {
            if (allFlowers[i].flowerId == flowerId)
            {
                return allFlowers[i];
            }
        }
        return null;
    }
}