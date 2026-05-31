using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class FixedThenFlyIntro : MonoBehaviour
{
    [Header("Image")]
    [SerializeField] private Image image;

    [Header("Sprites")]
    [SerializeField] private Sprite idleSprite;
    [SerializeField] private Sprite flySprite;

    [Header("Timing")]
    [SerializeField] private float idleDuration = 2f;
    [SerializeField] private float flyDuration = 1.2f;

    [Header("Taille")]
    [SerializeField] private Vector2 imageSize = new Vector2(250f, 250f);

    [Header("Mouvement départ")]
    [SerializeField] private Vector2 flyOffset = new Vector2(800f, 500f);

    private Vector2 startPosition;

    private void Awake()
    {
        if (image == null)
            image = GetComponent<Image>();

        if (image != null)
            startPosition = image.rectTransform.anchoredPosition;

        gameObject.SetActive(false);
    }

    public void PlayOnce()
    {
        gameObject.SetActive(true);

        StopAllCoroutines();
        StartCoroutine(PlayRoutine());
    }

    private IEnumerator PlayRoutine()
    {
        transform.SetAsLastSibling();

        image.gameObject.SetActive(true);
        image.enabled = true;
        image.color = Color.white;
        image.raycastTarget = false;

        image.rectTransform.anchoredPosition = startPosition;
        image.rectTransform.sizeDelta = imageSize;

        image.sprite = idleSprite;

        yield return new WaitForSeconds(idleDuration);

        image.sprite = flySprite;

        Vector2 flyStart = image.rectTransform.anchoredPosition;
        Vector2 flyEnd = flyStart + flyOffset;

        float timer = 0f;

        while (timer < flyDuration)
        {
            timer += Time.deltaTime;
            float t = timer / flyDuration;

            image.rectTransform.anchoredPosition =
                Vector2.Lerp(flyStart, flyEnd, t);

            yield return null;
        }

        image.gameObject.SetActive(false);
        gameObject.SetActive(false);
    }
}