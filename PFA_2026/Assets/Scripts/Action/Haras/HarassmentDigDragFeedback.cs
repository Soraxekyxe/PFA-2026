using UnityEngine;
using UnityEngine.EventSystems;

public class HarassmentDigDragFeedback : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform shovel;
    [SerializeField] private RectTransform arrow;
    [SerializeField] private RectTransform toolTip;
    [SerializeField] private RectTransform harassmentFlowerTarget;

    [SerializeField] private float arrowMoveDistance = 20f;
    [SerializeField] private float arrowSpeed = 4f;
    [SerializeField] private float validationDistance = 80f;

    private Vector3 shovelStartPosition;
    private Vector3 arrowStartPosition;

    private HealthHarrassment healthHarrassment;
    private bool isDragging;
    private bool validated;

    private void Awake()
    {
        shovelStartPosition = shovel.position;
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

                shovel.position = shovelStartPosition;
                arrow.position = arrowStartPosition;

                healthHarrassment.ValidateHarassmentDigDrag();

                Hide();
            }
        }
    }

    public void Show(HealthHarrassment health)
    {
        healthHarrassment = health;
        isDragging = false;
        validated = false;

        if (root != null)
            root.SetActive(true);

        shovel.position = shovelStartPosition;
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

        shovel.position = eventData.position;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (validated)
            return;

        isDragging = false;
        shovel.position = shovelStartPosition;
        arrow.position = arrowStartPosition;
    }
}