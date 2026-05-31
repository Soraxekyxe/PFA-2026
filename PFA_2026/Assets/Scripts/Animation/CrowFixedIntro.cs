using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class CrowFixedIntro : MonoBehaviour
{
    [Header("Sprites")]
    [SerializeField] private Sprite idleSprite;
    [SerializeField] private Sprite flySprite;

    [Header("Timing")]
    [SerializeField] private float idleDuration = 2f;
    [SerializeField] private float flyDuration = 1.2f;

    [Header("Mouvement idle")]
    [SerializeField] private float bobHeight = 15f;
    [SerializeField] private float bobSpeed = 6f;

    [Header("Mouvement envol")]
    [SerializeField] private Vector2 flyOffset = new Vector2(800f, 500f);

    private Image image;
    private RectTransform rectTransform;
    private Vector2 startPosition;

    private void Awake()
    {
        image = GetComponent<Image>();
        rectTransform = GetComponent<RectTransform>();
        startPosition = rectTransform.anchoredPosition;
    }

    private void Start()
    {
        StartCoroutine(PlayCrowIntro());
    }

    private IEnumerator PlayCrowIntro()
    {
        gameObject.SetActive(true);

        image.sprite = idleSprite;
        image.color = Color.white;

        float timer = 0f;

        while (timer < idleDuration)
        {
            timer += Time.deltaTime;

            float y = Mathf.Sin(Time.time * bobSpeed) * bobHeight;
            rectTransform.anchoredPosition = startPosition + new Vector2(0f, y);

            yield return null;
        }

        image.sprite = flySprite;

        Vector2 flyStart = rectTransform.anchoredPosition;
        Vector2 flyEnd = flyStart + flyOffset;

        timer = 0f;

        while (timer < flyDuration)
        {
            timer += Time.deltaTime;
            float t = timer / flyDuration;

            rectTransform.anchoredPosition = Vector2.Lerp(flyStart, flyEnd, t);

            yield return null;
        }

        gameObject.SetActive(false);
    }
}
