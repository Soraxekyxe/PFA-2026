using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.Collections;

public class FlowerSlotUI : MonoBehaviour
{
    public TextMeshProUGUI flowerNameText;
    public Image slotImage;
    public Flower flower;

    private Coroutine blinkCoroutine;

    public void SetFlowerName(string flowerName)
    {
        flowerNameText.text = flowerName;
    }

    public void SetHighlight(bool active)
    {
        if (blinkCoroutine != null)
        {
            StopCoroutine(blinkCoroutine);
            blinkCoroutine = null;
        }

        if (!active)
        {
            SetAlpha(1f);
            return;
        }

        blinkCoroutine = StartCoroutine(BlinkRoutine());
    }

    IEnumerator BlinkRoutine()
    {
        while (true)
        {
            yield return FadeTo(0.35f, 0.6f);
            yield return FadeTo(1f, 0.6f);
        }
    }

    IEnumerator FadeTo(float targetAlpha, float duration)
    {
        float startAlpha = slotImage.color.a;
        float time = 0f;

        while (time < duration)
        {
            time += Time.deltaTime;
            float alpha = Mathf.Lerp(startAlpha, targetAlpha, time / duration);
            SetAlpha(alpha);
            yield return null;
        }

        SetAlpha(targetAlpha);
    }

    void SetAlpha(float alpha)
    {
        Color c = slotImage.color;
        c.a = alpha;
        slotImage.color = c;
    }
}