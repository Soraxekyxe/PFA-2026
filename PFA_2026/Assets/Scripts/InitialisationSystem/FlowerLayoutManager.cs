using UnityEngine;

public class FlowerLayoutManager : MonoBehaviour
{
    [Header("Slots à placer")]
    public RectTransform[] flowerSlots;

    [Header("Zone parente")]
    public RectTransform container;

    void Start()
    {
        int nombreJoueurs = PlayerPrefs.GetInt("NombreJoueurs", 1);

        // Active seulement les slots utiles
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            flowerSlots[i].gameObject.SetActive(i < nombreJoueurs);
        }

        ApplyLayout(nombreJoueurs);
    }

    void ApplyLayout(int count)
    {
        Vector2[] positions = GetLayoutPositions(count);

        for (int i = 0; i < count && i < flowerSlots.Length && i < positions.Length; i++)
        {
            flowerSlots[i].anchoredPosition = positions[i];
        }
    }

    Vector2[] GetLayoutPositions(int count)
    {
        switch (count)
        {
            case 1:
                return new Vector2[]
                {
                    new Vector2(165f, 0f)
                };

            case 2:
                return new Vector2[]
                {
                    new Vector2(20f, 0f),
                    new Vector2(380f, 0f)
                };

            case 3:
                return new Vector2[]
                {
                    new Vector2(-60f, 80f),
                    new Vector2(420f, 80f),
                    new Vector2(170f, -100f)
                };

            case 4:
                return new Vector2[]
                {
                    new Vector2(-60f, 80f),
                    new Vector2(260f, 80f),
                    new Vector2(120f, -100f),
                    new Vector2(440f, -100f)
                };

            case 5:
                return new Vector2[]
                {
                    new Vector2(-80f, 80f),
                    new Vector2(160f, 80f),
                    new Vector2(420f, 80f),
                    new Vector2(60f, -100f),
                    new Vector2(300f, -100f)
                };

            case 6:
                return new Vector2[]
                {
                    new Vector2(-100f, 80f),
                    new Vector2(120f, 80f),
                    new Vector2(340f, 80f),
                    new Vector2(40f, -100f),
                    new Vector2(260f, -100f),
                    new Vector2(480f, -100f)
                };

            default:
                return GetCircleLayout(count, 700f); // cercle 
        }
    }

    Vector2[] GetCircleLayout(int count, float radius)
    {
        Vector2[] positions = new Vector2[count];

        for (int i = 0; i < count; i++)
        {
            float angle = i * Mathf.PI * 2f / count;
            float x = Mathf.Cos(angle) * radius;
            float y = Mathf.Sin(angle) * radius;
            positions[i] = new Vector2(x, y);
        }

        return positions;
    }
}