using UnityEngine;
using UnityEngine.UI;

public class ShadowFlowerAnimation : MonoBehaviour
{
    [System.Serializable]
    public class ShadowImage
    {
        public Image image;
        public float phaseOffset;

        [HideInInspector] public Vector2 startPos;
    }

    [Header("Images")]
    [SerializeField] private ShadowImage[] shadows;

    [Header("Sprites")]
    [SerializeField] private Sprite moveRightSprite;
    [SerializeField] private Sprite moveLeftSprite;

    [Header("Mouvement")]
    [SerializeField] private float distance = 150f;
    [SerializeField] private float speed = 1.5f;

    private void Awake()
    {
        foreach (var shadow in shadows)
        {
            if (shadow.image != null)
                shadow.startPos = shadow.image.rectTransform.anchoredPosition;
        }
    }
    private void OnEnable()
    {
        foreach (var shadow in shadows)
        {
            if (shadow.image == null)
                continue;

            if (moveRightSprite != null)
                shadow.image.sprite = moveRightSprite;
        }
    }
    private void Update()
    {
        foreach (var shadow in shadows)
        {
            if (shadow.image == null)
                continue;

            float pingPong = Mathf.PingPong((Time.time * speed) + shadow.phaseOffset, 1f);
            float offsetX = Mathf.Lerp(-distance, distance, pingPong);

            shadow.image.rectTransform.anchoredPosition =
                shadow.startPos + new Vector2(offsetX, 0f);

            bool movingRight = pingPong < 0.99f && pingPong > 0.01f
                ? Mathf.PingPong((Time.time * speed) + shadow.phaseOffset + 0.01f, 1f) > pingPong
                : pingPong < 0.5f;

            shadow.image.sprite = movingRight ? moveRightSprite : moveLeftSprite;
        }
    }
}