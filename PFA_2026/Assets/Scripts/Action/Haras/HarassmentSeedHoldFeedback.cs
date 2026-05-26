using UnityEngine;
using UnityEngine.EventSystems;

public class HarassmentSeedHoldFeedback : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform greyCircle;
    [SerializeField] private RectTransform redFillCircle;
    [SerializeField] private RectTransform arrow;
    [SerializeField] private RectTransform harassmentFlowerTarget;

    [SerializeField] private float arrowMoveDistance = 20f;
    [SerializeField] private float arrowSpeed = 4f;
    [SerializeField] private float holdDuration = 1.5f;
    [SerializeField] private float redStartScale = 0.2f;
    [SerializeField] private float redEndScale = 1f;

    private HealthHarrassment healthHarrassment;
    private bool isHolding;
    private bool validated;
    private float holdTimer;
    private Vector3 arrowBasePosition;

    private void Awake()
    {
        if (root != null)
            root.SetActive(false);
    }

    private void Update()
    {
        if (root == null || !root.activeSelf)
            return;

        float y = Mathf.Sin(Time.time * arrowSpeed) * arrowMoveDistance;
        arrow.position = arrowBasePosition + new Vector3(0f, y, 0f);

        if (!isHolding || validated)
            return;

        holdTimer += Time.deltaTime;

        float progress = Mathf.Clamp01(holdTimer / holdDuration);
        redFillCircle.localScale = Vector3.one * Mathf.Lerp(redStartScale, redEndScale, progress);

        if (progress >= 1f)
        {
            validated = true;
            healthHarrassment.ValidateHarassmentSeedHold();
            Hide();
        }
    }

    public void Show(HealthHarrassment health)
    {
        healthHarrassment = health;
        isHolding = false;
        validated = false;
        holdTimer = 0f;

        root.SetActive(true);

        greyCircle.position = harassmentFlowerTarget.position;
        redFillCircle.position = harassmentFlowerTarget.position;
        redFillCircle.localScale = Vector3.one * redStartScale;

        arrowBasePosition = harassmentFlowerTarget.position + new Vector3(0f, 110f, 0f);
        arrow.position = arrowBasePosition;
    }

    public void Hide()
    {
        isHolding = false;
        validated = false;
        holdTimer = 0f;

        if (redFillCircle != null)
            redFillCircle.localScale = Vector3.one * redStartScale;

        if (root != null)
            root.SetActive(false);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (!validated)
            isHolding = true;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (validated)
            return;

        isHolding = false;
        holdTimer = 0f;

        if (redFillCircle != null)
            redFillCircle.localScale = Vector3.one * redStartScale;
    }
}