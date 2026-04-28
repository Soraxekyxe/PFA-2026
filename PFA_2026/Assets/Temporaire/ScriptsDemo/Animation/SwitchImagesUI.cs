using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SwitchImagesUI : MonoBehaviour
{
    public GameObject image1;
    public GameObject image2;

    public float interval = 0.5f;

    void Start()
    {
        StartCoroutine(SwitchRoutine());
    }

    IEnumerator SwitchRoutine()
    {
        while (true)
        {
            image1.SetActive(true);
            image2.SetActive(false);

            yield return new WaitForSeconds(interval);

            image1.SetActive(false);
            image2.SetActive(true);

            yield return new WaitForSeconds(interval);
        }
    }
}