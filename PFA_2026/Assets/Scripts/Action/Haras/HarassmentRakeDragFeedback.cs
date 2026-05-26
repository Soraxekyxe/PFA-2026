using UnityEngine;
using UnityEngine.EventSystems;

public class HarassmentRakeDragFeedback : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    [Header("UI")]
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform rake;
    [SerializeField] private RectTransform arrow;
    [SerializeField] private RectTransform toolTip;

    [Header("Target")]
    [SerializeField] private RectTransform harassmentFlowerTarget;

    [Header("Animation")]
    [SerializeField] private float arrowMoveDistance = 20f;
    [SerializeField] private float arrowSpeed = 4f;

    [Header("Detection")]
    [SerializeField] private float validationDistance = 80f;

    private Vector3 rakeStartPosition;
    private Vector3 arrowStartPosition;

    private HealthHarrassment healthHarrassment;
    private bool isDragging;
    private bool validated;

    private void Awake()
    {
        rakeStartPosition = rake.position;
        arrowStartPosition = arrow.position;

        if (root != null)
            root.SetActive(false);
    }

    private void Update()
    {
        if (root == null || !root.activeSelf || arrow == null)
            return;

        float y = Mathf.Sin(Time.time * arrowSpeed) * arrowMoveDistance;

        if (isDragging && harassmentFlowerTarget != null)
            arrow.position = harassmentFlowerTarget.position + new Vector3(0f, 100f + y, 0f);
        else
            arrow.position = arrowStartPosition + new Vector3(0f, y, 0f);

        if (isDragging && !validated && harassmentFlowerTarget != null)
        {
            float distance = Vector2.Distance(toolTip.position, harassmentFlowerTarget.position);

            if (distance <= validationDistance)
            {
                validated = true;

                rake.position = rakeStartPosition;
                arrow.position = arrowStartPosition;

                healthHarrassment.ValidateHarassmentRakeDrag();

                Hide();
            }
        }
    }

    public void Show(HealthHarrassment health)
    {
        healthHarrassment = health;
        validated = false;
        isDragging = false;

        if (root != null)
            root.SetActive(true);

        rake.position = rakeStartPosition;
        arrow.position = arrowStartPosition;
    }

    public void Hide()
    {
        isDragging = false;
        validated = false;

        if (root != null)
            root.SetActive(false);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (validated)
            return;

        isDragging = true;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (!isDragging || validated)
            return;

        rake.position = eventData.position;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (validated)
            return;

        isDragging = false;
        rake.position = rakeStartPosition;
        arrow.position = arrowStartPosition;
    }
}