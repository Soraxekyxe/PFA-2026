using UnityEngine;
using System.Collections.Generic;

[CreateAssetMenu(fileName = "NewFlowerData", menuName = "Flowers/Flower Data")]
public class FlowerDataSO : ScriptableObject
{
    [Header("Infos générales")]
    public string flowerId;     // Ex: chrysantheme, lys, dahlia...
    public string flowerName; // Nom de la fleur (Tulipe, Lys, etc.)

    [Header("Visuels par état")]
    public List<FlowerStateVisual> stateVisuals = new List<FlowerStateVisual>();
    // Liste qui associe chaque état à un sprite

    public Sprite GetSpriteForState(FlowerState state)
    {
        // Parcourt tous les états enregistrés
        for (int i = 0; i < stateVisuals.Count; i++)
        {
            // Si on trouve l'état demandé, on retourne son sprite
            if (stateVisuals[i].state == state)
            {
                return stateVisuals[i].sprite;
            }
        }

        // Si aucun sprite n'est trouvé, on retourne null
        return null;
    }
    
    // Retourne le premier sprite de la liste
    public Sprite GetFirstSprite()
    {
        if (stateVisuals == null || stateVisuals.Count == 0)
            return null;

        return stateVisuals[0].sprite;
    }
}