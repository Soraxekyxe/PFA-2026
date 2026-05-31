using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class SingleFlyIntro : MonoBehaviour
{
    [Header("Image")]
    [SerializeField] private Image image;

    [Header("Timing")]
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

        image.rectTransform.sizeDelta = imageSize;
        image.rectTransform.anchoredPosition = startPosition;

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