using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class FixedImageIntro : MonoBehaviour
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

    [Header("Mouvement départ")]
    [SerializeField] private Vector2 flyOffset = new Vector2(800f, 500f);
    
    [Header("Taille")]
    [SerializeField] private Vector2 imageSize = new Vector2(250f, 250f);

    private Image image;
    private RectTransform rectTransform;
    private Vector2 startPosition;
    private bool hasPlayed = false;

    private void Awake()
    {
        image = GetComponent<Image>();
        rectTransform = GetComponent<RectTransform>();
        startPosition = rectTransform.anchoredPosition;

        gameObject.SetActive(false);
    }

    public void PlayOnce()
    {
        Debug.Log("FixedImageIntro PlayOnce appelé sur : " + gameObject.name);

        hasPlayed = true;

        gameObject.SetActive(true); // IMPORTANT : avant StartCoroutine

        StopAllCoroutines();
        StartCoroutine(PlayRoutine());
    }

    private IEnumerator PlayRoutine()
    {
        gameObject.SetActive(true);
        transform.SetAsLastSibling();

        if (image == null)
            image = GetComponent<Image>();

        if (rectTransform == null)
            rectTransform = GetComponent<RectTransform>();

        image.enabled = true;
        image.raycastTarget = false;
        image.color = Color.white;

        rectTransform.anchoredPosition = startPosition;
        rectTransform.localScale = Vector3.one;
        rectTransform.sizeDelta = imageSize;

        if (idleSprite != null)
            image.sprite = idleSprite;
        else
            Debug.LogError("Idle Sprite non assigné sur " + gameObject.name);

        Debug.Log("FixedImageIntro visible : " + gameObject.name);

        float timer = 0f;

        while (timer < idleDuration)
        {
            timer += Time.deltaTime;

            float y = Mathf.Sin(Time.time * bobSpeed) * bobHeight;
            rectTransform.anchoredPosition = startPosition + new Vector2(0f, y);

            yield return null;
        }

        if (flySprite != null)
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