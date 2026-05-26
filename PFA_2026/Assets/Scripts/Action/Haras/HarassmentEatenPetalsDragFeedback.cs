using UnityEngine;
using UnityEngine.EventSystems;

public class HarassmentEatenPetalsDragFeedback : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform pruner;
    [SerializeField] private RectTransform arrow;
    [SerializeField] private RectTransform harassmentFlowerTarget;

    [SerializeField] private float arrowMoveDistance = 20f;
    [SerializeField] private float arrowSpeed = 4f;
    [SerializeField] private float validationDistance = 80f;

    private Vector3 prunerStartPosition;
    private HealthHarrassment healthHarrassment;

    private bool isDragging;
    private bool validated;

    private void Awake()
    {
        prunerStartPosition = pruner.position;

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
            arrow.position = pruner.position + new Vector3(0f, 100f + y, 0f);

        if (isDragging && !validated && harassmentFlowerTarget != null)
        {
            float distance = Vector2.Distance(pruner.position, harassmentFlowerTarget.position);

            if (distance <= validationDistance)
            {
                validated = true;

                pruner.position = prunerStartPosition;
                arrow.position = pruner.position + new Vector3(0f, 100f, 0f);

                healthHarrassment.ValidateHarassmentEatenPetalsDrag();

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

        pruner.position = prunerStartPosition;
        arrow.position = pruner.position + new Vector3(0f, 100f, 0f);
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

        pruner.position = eventData.position;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (validated)
            return;

        isDragging = false;
        pruner.position = prunerStartPosition;
        arrow.position = pruner.position + new Vector3(0f, 100f, 0f);
    }
}