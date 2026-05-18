using UnityEngine;
using UnityEngine.EventSystems;

public class SeedHoldFeedback : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    [Header("UI")]
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform greyCircle;
    [SerializeField] private RectTransform redFillCircle;
    [SerializeField] private RectTransform arrow;

    [Header("Animation")]
    [SerializeField] private float arrowMoveDistance = 20f;
    [SerializeField] private float arrowSpeed = 4f;

    [Header("Hold")]
    [SerializeField] private float holdDuration = 1.5f;
    [SerializeField] private float redStartScale = 0.2f;
    [SerializeField] private float redEndScale = 1f;

    private Flower targetFlower;
    private MenuInteract menuInteract;

    private bool isHolding;
    private bool validated;
    private float holdTimer;
    private Vector3 arrowBasePosition;

    private void Awake()
    {

    }

    private void Update()
    {
        if (root == null || !root.activeSelf)
            return;

        AnimateArrow();

        if (!isHolding || validated)
            return;

        holdTimer += Time.deltaTime;

        float progress = Mathf.Clamp01(holdTimer / holdDuration);
        float scale = Mathf.Lerp(redStartScale, redEndScale, progress);

        redFillCircle.localScale = Vector3.one * scale;

        if (progress >= 1f)
        {
            validated = true;
            menuInteract.ValidateSeedHold(targetFlower);
            Hide();
        }
    }

    private void AnimateArrow()
    {
        if (arrow == null)
            return;

        float y = Mathf.Sin(Time.time * arrowSpeed) * arrowMoveDistance;
        arrow.position = arrowBasePosition + new Vector3(0f, y, 0f);
    }

    public void Show(Flower flower, MenuInteract menu)
    {
        targetFlower = flower;
        menuInteract = menu;

        isHolding = false;
        validated = false;
        holdTimer = 0f;

        if (root != null)
            root.SetActive(true);

        RectTransform flowerRect = targetFlower.GetComponentInParent<RectTransform>();

        greyCircle.position = flowerRect.position;
        redFillCircle.position = flowerRect.position;

        redFillCircle.localScale = Vector3.one * redStartScale;

        arrowBasePosition = flowerRect.position + new Vector3(0f, 110f, 0f);
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
        if (validated)
            return;

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