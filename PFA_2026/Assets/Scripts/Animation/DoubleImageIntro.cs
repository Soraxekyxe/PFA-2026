using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class DoubleImageIntro : MonoBehaviour
{
    [Header("Images")]
    [SerializeField] private Image firstImage;
    [SerializeField] private Image secondImage;

    [Header("Sprites début")]
    [SerializeField] private Sprite firstIdleSprite;
    [SerializeField] private Sprite secondIdleSprite;

    [Header("Sprites départ")]
    [SerializeField] private Sprite firstFlySprite;
    [SerializeField] private Sprite secondFlySprite;

    [Header("Timing")]
    [SerializeField] private float idleDuration = 2f;
    [SerializeField] private float flyDuration = 1.2f;

    [Header("Taille")]
    [SerializeField] private Vector2 firstSize = new Vector2(250f, 250f);
    [SerializeField] private Vector2 secondSize = new Vector2(250f, 250f);

    [Header("Mouvement départ")]
    [SerializeField] private Vector2 flyOffset = new Vector2(800f, 500f);

    private Vector2 firstStartPosition;
    private Vector2 secondStartPosition;

    private void Awake()
    {
        firstStartPosition = firstImage.rectTransform.anchoredPosition;
        secondStartPosition = secondImage.rectTransform.anchoredPosition;

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

        firstImage.gameObject.SetActive(true);
        secondImage.gameObject.SetActive(true);

        firstImage.sprite = firstIdleSprite;
        secondImage.sprite = secondIdleSprite;

        firstImage.color = Color.white;
        secondImage.color = Color.white;

        firstImage.raycastTarget = false;
        secondImage.raycastTarget = false;

        firstImage.rectTransform.sizeDelta = firstSize;
        secondImage.rectTransform.sizeDelta = secondSize;

        firstImage.rectTransform.anchoredPosition = firstStartPosition;
        secondImage.rectTransform.anchoredPosition = secondStartPosition;

        yield return new WaitForSeconds(idleDuration);

        firstImage.sprite = firstFlySprite;
        secondImage.sprite = secondFlySprite;

// l'image 1 disparaît au moment du départ
        firstImage.gameObject.SetActive(false);

        Vector2 secondFlyStart = secondImage.rectTransform.anchoredPosition;
        Vector2 secondFlyEnd = secondFlyStart + flyOffset;

        float timer = 0f;

        while (timer < flyDuration)
        {
            timer += Time.deltaTime;
            float t = timer / flyDuration;

            secondImage.rectTransform.anchoredPosition =
                Vector2.Lerp(secondFlyStart, secondFlyEnd, t);

            yield return null;
        }

        firstImage.gameObject.SetActive(false);
        secondImage.gameObject.SetActive(false);
        gameObject.SetActive(false);
    }
}