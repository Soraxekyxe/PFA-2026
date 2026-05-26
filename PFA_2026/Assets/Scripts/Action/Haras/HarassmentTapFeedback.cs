using UnityEngine;

public class HarassmentTapFeedback : MonoBehaviour
{
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform redCircle;
    [SerializeField] private RectTransform hand;
    [SerializeField] private GameObject bottomPopup;
    [SerializeField] private RectTransform harassmentFlowerTarget;

    [SerializeField] private float pulseSpeed = 3f;
    [SerializeField] private float minScale = 0.8f;
    [SerializeField] private float maxScale = 1.25f;

    private bool isShowing;

    private void Awake()
    {
        if (root != null)
            root.SetActive(false);
    }

    private void Update()
    {
        if (!isShowing || redCircle == null)
            return;

        float t = Mathf.PingPong(Time.time * pulseSpeed, 1f);
        redCircle.localScale = Vector3.one * Mathf.Lerp(minScale, maxScale, t);
    }

    public void Show()
    {
        isShowing = true;

        if (root != null)
            root.SetActive(true);

        if (bottomPopup != null)
            bottomPopup.SetActive(true);

        redCircle.position = harassmentFlowerTarget.position;

        if (hand != null)
            hand.position = harassmentFlowerTarget.position + new Vector3(60f, -60f, 0f);
    }

    public void Hide()
    {
        isShowing = false;

        if (root != null)
            root.SetActive(false);

        if (bottomPopup != null)
            bottomPopup.SetActive(false);
    }
}