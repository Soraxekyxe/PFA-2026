using UnityEngine;

public class TapFeedbackUI : MonoBehaviour
{
    [Header("UI")]
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform redCircle;
    [SerializeField] private RectTransform hand;
    [SerializeField] private GameObject bottomPopup;

    [Header("Animation")]
    [SerializeField] private float pulseSpeed = 3f;
    [SerializeField] private float minScale = 0.8f;
    [SerializeField] private float maxScale = 1.25f;

    private bool isShowing = false;

    private void Awake()
    {
        Hide();
    }

    private void Update()
    {
        if (!isShowing || redCircle == null)
            return;

        float t = Mathf.PingPong(Time.time * pulseSpeed, 1f);
        float scale = Mathf.Lerp(minScale, maxScale, t);

        redCircle.localScale = Vector3.one * scale;
    }

    public void ShowAt(RectTransform target)
    {
        if (target == null)
            return;

        isShowing = true;

        if (root != null)
            root.SetActive(true);

        if (bottomPopup != null)
            bottomPopup.SetActive(true);

        redCircle.position = target.position;

        if (hand != null)
            hand.position = target.position + new Vector3(60f, -60f, 0f);
    }

    public void Hide()
    {
        isShowing = false;

        if (root != null)
            root.SetActive(false);
    }
}