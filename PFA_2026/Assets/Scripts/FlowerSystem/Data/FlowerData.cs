using UnityEngine;

[System.Serializable]
public class FlowerData
{
    public int playerIndex;   // Joueur 1, 2, 3...
    public int flowerType;   // ID de la fleur (0 à 11)
    public string flowerName; // Nom donné à la fleur
    public int Withered; // Stade de dégradation

    public FlowerData(int index, int type, string name)
    {
        playerIndex = index;
        flowerType = type;
        flowerName = name;
    }

    public enum FlowerState
    {
        Seed,
        Bud,
        Early,
        Flower,
        Healthy,
    }
    
    public FlowerState flowerState;
}