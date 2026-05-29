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
    
    [SerializeField] private RectTransform toolTip;

    private Vector3 rakeStartPosition;
    private Vector3 arrowStartPosition;

    private Flower targetFlower;
    private MenuInteract menuInteract;
    private bool isDragging = false;
    private bool validated = false;

    private void Awake()
    {
        rakeStartPosition = rake.position;
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

                rake.position = rakeStartPosition;
                arrow.position = arrowStartPosition;

                menuInteract.ValidateRakeDrag(targetFlower);
                // Son du bouton
                SoundManagerY.Instance.PlaySFX("Step2");
                Debug.Log("son");

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