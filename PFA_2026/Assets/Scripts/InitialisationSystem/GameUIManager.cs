using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameUIManager : MonoBehaviour
{
    [Header("UI")]
    public TextMeshProUGUI gardenNameText;
    public GridLayoutGroup gridLayout;
    public GameObject[] flowerSlots;
    public TextMeshProUGUI[] flowerNameTexts;
    public Image[] flowerImages;

    [Header("Database")]
    public FlowerDatabase flowerDatabase;

    void Start()
    {
        int playerCount = PlayerPrefs.GetInt("NombreJoueurs", 1);
        string gardenName = PlayerPrefs.GetString("NomJardin", "Jardin");

        gardenNameText.text = gardenName;

        // Réglage de la grille
        gridLayout.constraint = GridLayoutGroup.Constraint.FixedColumnCount;
        gridLayout.constraintCount = GetColumnCount(playerCount);

        // Active les bons slots, met les noms et les sprites
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            bool actif = i < playerCount;
            flowerSlots[i].SetActive(actif);

            if (actif)
            {
                // Nom de la fleur
                string flowerName = PlayerPrefs.GetString("Joueur_" + i + "_NomFleur", "Fleur");
                flowerNameTexts[i].text = flowerName;

                // ID de la fleur choisie
                string flowerId = PlayerPrefs.GetString("Joueur_" + i + "_FlowerId", "");

                // Récupère le ScriptableObject correspondant
                FlowerDataSO flowerData = flowerDatabase.GetFlowerById(flowerId);

                if (flowerData != null)
                {
                    // Affiche le premier sprite du ScriptableObject
                    Sprite firstSprite = flowerData.GetFirstSprite();

                    if (firstSprite != null)
                    {
                        flowerImages[i].sprite = firstSprite;
                    }
                }
                else
                {
                    Debug.LogWarning("Aucune fleur trouvée pour l'id : " + flowerId);
                }
            }
        }

        // Force Unity à recalculer le layout
        LayoutRebuilder.ForceRebuildLayoutImmediate(gridLayout.GetComponent<RectTransform>());
    }

    int GetColumnCount(int playerCount)
    {
        switch (playerCount)
        {
            case 1: return 1;
            case 2: return 2;
            case 3: return 3;
            case 4: return 2;
            case 5:
            case 6: return 3;
            case 7:
            case 8: return 4;
            case 9:
            case 10: return 5;
            default: return 3;
        }
    }
}