using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;

public class FlowerSlotUI : MonoBehaviour, IPointerClickHandler
{
    [Header("Turn Icon")]
    public GameObject turnIconObject;
    public Image turnIconImage;

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

        SetAlpha(1f);

        if (turnIconObject != null)
            turnIconObject.SetActive(active);

        if (active && turnIconImage != null && flower != null && flower.flowerData != null)
            turnIconImage.sprite = flower.flowerData.turnIcon;
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

    public void OnPointerClick(PointerEventData eventData)
    {
        UIMenuInteract ui = FindObjectOfType<UIMenuInteract>();

        if (ui != null && ui.turnManager != null && flower != null)
        {
            Flower currentFlower = ui.turnManager.GetCurrentFlower();

            if (currentFlower == flower)
            {
                ui.RestoreCurrentPlayerUI();

                MenuInteract menu = FindObjectOfType<MenuInteract>();
                if (menu != null)
                    menu.ValidateFlowerTap(flower);
            }
        }
    }
}