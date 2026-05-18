using UnityEngine;
using UnityEngine.EventSystems;

public class WateringCanDragFeedback : MonoBehaviour,
    IPointerDownHandler,
    IDragHandler,
    IPointerUpHandler
{
    [Header("UI")]
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform wateringCan;
    [SerializeField] private RectTransform arrow;

    [Header("Animation")]
    [SerializeField] private float arrowMoveDistance = 20f;
    [SerializeField] private float arrowSpeed = 4f;

    [Header("Detection")]
    [SerializeField] private float validationDistance = 90f;
    [SerializeField] private float rotationSpeed = 180f;
    [SerializeField] private float targetRotationZ = 45f;

    private Vector3 wateringCanStartPosition;
    private Vector3 arrowStartPosition;

    private Flower targetFlower;
    private MenuInteract menuInteract;

    private bool isDragging;
    private bool isRotating;
    private bool validated;

    private void Awake()
    {
        wateringCanStartPosition = wateringCan.position;
        arrowStartPosition = arrow.position;
        
    }

    private void Update()
    {
        if (root == null || !root.activeSelf)
            return;

        AnimateArrow();

        if (isRotating)
            RotateAndValidate();

        if (isDragging && !isRotating && !validated)
            CheckDistance();
    }

    private void AnimateArrow()
    {
        if (arrow == null)
            return;

        float y = Mathf.Sin(Time.time * arrowSpeed) * arrowMoveDistance;

        if (isDragging && targetFlower != null)
        {
            RectTransform flowerRect = targetFlower.GetComponentInParent<RectTransform>();
            arrow.position = flowerRect.position + new Vector3(0f, 110f + y, 0f);
        }
        else
        {
            arrow.position = wateringCan.position + new Vector3(0f, 110f + y, 0f);
        }
    }

    private void CheckDistance()
    {
        RectTransform flowerRect = targetFlower.GetComponentInParent<RectTransform>();

        float distance = Vector2.Distance(wateringCan.position, flowerRect.position);

        if (distance <= validationDistance)
        {
            isDragging = false;
            isRotating = true;
        }
    }

    private void RotateAndValidate()
    {
        float currentZ = wateringCan.localEulerAngles.z;
        float newZ = Mathf.MoveTowardsAngle(
            currentZ,
            targetRotationZ,
            rotationSpeed * Time.deltaTime
        );

        wateringCan.localRotation = Quaternion.Euler(0f, 0f, newZ);

        if (Mathf.Abs(Mathf.DeltaAngle(newZ, targetRotationZ)) < 0.5f)
        {
            validated = true;
            isRotating = false;

            // remet l'objet à sa position d'origine AVANT de cacher
            wateringCan.position = wateringCanStartPosition;
            wateringCan.localRotation = Quaternion.identity;

            arrow.position = arrowStartPosition;
            menuInteract.ValidateWateringCanDrag(targetFlower);

            Hide();
        }
    }

    public void Show(Flower flower, MenuInteract menu)
    {
        targetFlower = flower;
        menuInteract = menu;

        isDragging = false;
        isRotating = false;
        validated = false;

        root.SetActive(true);

        wateringCan.position = wateringCanStartPosition;
        wateringCan.localRotation = Quaternion.identity;
        
        arrow.position = wateringCan.position + new Vector3(0f, 110f, 0f);
    }

    public void Hide()
    {
        isDragging = false;
        isRotating = false;
        validated = false;

        if (root != null)
            root.SetActive(false);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (validated || isRotating)
            return;

        isDragging = true;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (!isDragging || validated || isRotating)
            return;

        wateringCan.position = eventData.position;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (validated || isRotating)
            return;

        isDragging = false;

        wateringCan.position = wateringCanStartPosition;
        wateringCan.localRotation = Quaternion.identity;
        arrow.position = arrowStartPosition;
    }
}