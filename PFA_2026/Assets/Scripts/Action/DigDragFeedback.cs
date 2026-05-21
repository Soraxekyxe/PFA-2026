using UnityEngine;
using UnityEngine.EventSystems;

public class DigDragFeedback : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform shovel;
    [SerializeField] private RectTransform arrow;

    [SerializeField] private float arrowMoveDistance = 20f;
    [SerializeField] private float arrowSpeed = 4f;
    [SerializeField] private float validationDistance = 80f;
    
    [SerializeField] private RectTransform toolTip;

    private Vector3 shovelStartPosition;
    private Vector3 arrowStartPosition;

    private Flower targetFlower;
    private MenuInteract menuInteract;
    private bool isDragging;
    private bool validated;

    private void Awake()
    {
        shovelStartPosition = shovel.position;
        arrowStartPosition = arrow.position;
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

            float distance = Vector2.Distance(toolTip.position, flowerRect.position);

            if (distance <= validationDistance)
            {
                validated = true;

                shovel.position = shovelStartPosition;
                arrow.position = arrowStartPosition;

                menuInteract.ValidateDigDrag(targetFlower);

                Hide();
            }
        }
    }

    public void Show(Flower flower, MenuInteract menu)
    {
        targetFlower = flower;
        menuInteract = menu;
        isDragging = false;
        validated = false;

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