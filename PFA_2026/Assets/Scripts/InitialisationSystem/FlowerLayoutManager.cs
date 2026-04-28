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
                    new Vector2(0f, 0f)
                };

            case 2:
                return new Vector2[]
                {
                    new Vector2(-130f, 0f),
                    new Vector2(130f, 0f)
                };

            case 3:
                return new Vector2[]
                {
                    new Vector2(-150f, 90f),
                    new Vector2(150f, 90f),
                    new Vector2(0f, -90f)
                };

            case 4:
                return new Vector2[]
                {
                    new Vector2(-160f, 100f),
                    new Vector2(160f, 100f),
                    new Vector2(20f, -100f),
                    new Vector2(340f, -100f)
                };

            case 5:
                return new Vector2[]
                {
                    new Vector2(-180f, 110f),
                    new Vector2(60f, 110f),
                    new Vector2(320f, 110f),
                    new Vector2(-40f, -120f),
                    new Vector2(200f, -120f)
                };

            case 6:
                return new Vector2[]
                {
                    new Vector2(-220f, 120f),
                    new Vector2(0f, 120f),
                    new Vector2(220f, 120f),
                    new Vector2(-80f, -100f),
                    new Vector2(140f, -100f),
                    new Vector2(360f, -100f)
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