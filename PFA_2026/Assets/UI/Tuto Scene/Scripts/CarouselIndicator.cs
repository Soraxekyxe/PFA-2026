using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.Events;

namespace Tuto.UI
{
    public class CarouselIndicator : MonoBehaviour
    {
        [Header("References")]
        [SerializeField] private Image image;
        [SerializeField] private Button button;

        [Header("Alpha")]
        [SerializeField] private float activeAlpha = 1f;
        [SerializeField] private float inactiveAlpha = 0.3f;

        private Coroutine alphaChangeCoroutine;
        private UnityAction onClickAction;

        public void Initialize(UnityAction clickAction)
        {
            onClickAction = clickAction;

            if (button != null && onClickAction != null)
                button.onClick.AddListener(onClickAction);
        }

        private void OnDestroy()
        {
            if (button != null && onClickAction != null)
                button.onClick.RemoveListener(onClickAction);
        }

        private void Reset()
        {
            image = GetComponent<Image>();
            button = GetComponent<Button>();

            SetAlpha(inactiveAlpha);
        }

        public void Activate(float duration)
        {
            ChangeAlphaTo(activeAlpha, duration);
        }

        public void Deactivate(float duration)
        {
            ChangeAlphaTo(inactiveAlpha, duration);
        }

        private void ChangeAlphaTo(float targetAlpha, float duration)
        {
            if (alphaChangeCoroutine != null)
                StopCoroutine(alphaChangeCoroutine);

            alphaChangeCoroutine = StartCoroutine(ChangeAlpha(targetAlpha, duration));
        }

        private IEnumerator ChangeAlpha(float targetAlpha, float duration)
        {
            float startAlpha = image.color.a;
            float time = 0f;

            while (time < duration)
            {
                time += Time.deltaTime;
                float lerpValue = time / duration;

                SetAlpha(Mathf.Lerp(startAlpha, targetAlpha, lerpValue));

                yield return null;
            }

            SetAlpha(targetAlpha);
            alphaChangeCoroutine = null;
        }

        private void SetAlpha(float alpha)
        {
            if (image == null)
                return;

            Color color = image.color;
            color.a = alpha;
            image.color = color;
        }
    }
}