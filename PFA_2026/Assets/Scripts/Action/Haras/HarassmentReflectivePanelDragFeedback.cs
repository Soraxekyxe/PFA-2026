using UnityEngine;
using UnityEngine.EventSystems;

public class HarassmentReflectivePanelDragFeedback : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform reflectivePanel;
    [SerializeField] private RectTransform arrow;
    [SerializeField] private RectTransform harassmentFlowerTarget;

    [SerializeField] private float arrowMoveDistance = 20f;
    [SerializeField] private float arrowSpeed = 4f;
    [SerializeField] private float validationDistance = 80f;

    private Vector3 reflectivePanelStartPosition;
    private HealthHarrassment healthHarrassment;

    private bool isDragging;
    private bool validated;

    private void Awake()
    {
        reflectivePanelStartPosition = reflectivePanel.position;

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
            arrow.position = reflectivePanel.position + new Vector3(0f, 100f + y, 0f);

        if (isDragging && !validated && harassmentFlowerTarget != null)
        {
            float distance = Vector2.Distance(reflectivePanel.position, harassmentFlowerTarget.position);

            if (distance <= validationDistance)
            {
                validated = true;

                reflectivePanel.position = reflectivePanelStartPosition;
                arrow.position = reflectivePanel.position + new Vector3(0f, 100f, 0f);

                healthHarrassment.ValidateHarassmentReflectivePanelDrag();

                Hide();
            }
        }
    }

    public void Show(HealthHarrassment health)
    {
        healthHarrassment = health;
        isDragging = false;
        validated = false;

        root.SetActive(true);

        reflectivePanel.position = reflectivePanelStartPosition;
        arrow.position = reflectivePanel.position + new Vector3(0f, 100f, 0f);
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
        if (!validated)
            isDragging = true;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (!isDragging || validated)
            return;

        reflectivePanel.position = eventData.position;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (validated)
            return;

        isDragging = false;
        reflectivePanel.position = reflectivePanelStartPosition;
        arrow.position = reflectivePanel.position + new Vector3(0f, 100f, 0f);
    }
}