using UnityEngine;
using UnityEngine.EventSystems;

public class RakeDragFeedback : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    [Header("UI")]
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform rake;
    [SerializeField] private RectTransform arrow;

    [Header("Animation")]
    [SerializeField] private float arrowMoveDistance = 20f;
    [SerializeField] private float arrowSpeed = 4f;

    [Header("Detection")]
    [SerializeField] private float validationDistance = 80f;

    private Vector3 rakeStartPosition;
    private Vector3 arrowStartPosition;

    private Flower targetFlower;
    private MenuInteract menuInteract;
    private bool isDragging = false;
    private bool validated = false;

    private void Awake()
    {
        Hide();
    }

    private void Update()
    {
        if (root == null || !root.activeSelf || arrow == null)
            return;

        float y = Mathf.Sin(Time.time * arrowSpeed) * arrowMoveDistance;

        if (isDragging && targetFlower != null)
        {
            RectTransform flowerRect = targetFlower.GetComponentInParent<RectTransform>();
            arrow.position = flowerRect.position + new Vector3(0f, 100f + y, 0f);
        }
        else
        {
            arrow.position = arrowStartPosition + new Vector3(0f, y, 0f);
        }

        if (isDragging && !validated && targetFlower != null)
        {
            RectTransform flowerRect = targetFlower.GetComponentInParent<RectTransform>();

            float distance = Vector2.Distance(rake.position, flowerRect.position);

            if (distance <= validationDistance)
            {
                validated = true;
                menuInteract.ValidateRakeDrag(targetFlower);
                Hide();
            }
        }
    }

    public void Show(Flower flower, MenuInteract menu)
    {
        targetFlower = flower;
        menuInteract = menu;
        validated = false;
        isDragging = false;

        if (root != null)
            root.SetActive(true);

        rakeStartPosition = rake.position;
        arrowStartPosition = arrow.position;

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