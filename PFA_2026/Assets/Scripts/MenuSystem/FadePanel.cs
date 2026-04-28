using UnityEngine;
using UnityEngine.UI;

public class SimpleScreenFade : MonoBehaviour
{
    [SerializeField] private Image fadeImage;
    [SerializeField] private float fadeSpeed = 1.5f;

    private bool isFading = false;
    private bool fadeToBlack = true;

    public void TriggerFade()
    {
        isFading = true;
        fadeToBlack = true;
    }
    void Update()
    {
        if (!isFading) return;

        Color color = fadeImage.color;

        if (fadeToBlack)
        {
            color.a += fadeSpeed * Time.deltaTime;

            if (color.a >= 1f)
            {
                color.a = 1f;
                fadeToBlack = false; 
            }
            Debug.Log("Je fonctionne tkt");
        }
        else
        {
            color.a -= fadeSpeed * Time.deltaTime;

            if (color.a <= 0f)
            {
                color.a = 0f;
                isFading = false; 
            }
            Debug.Log("Je m'active wsh");
        }
        fadeImage.color = color;
    }
}