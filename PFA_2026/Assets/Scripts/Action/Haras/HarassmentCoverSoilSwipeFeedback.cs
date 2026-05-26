using UnityEngine;
using UnityEngine.EventSystems;

public class HarassmentCoverSoilSwipeFeedback : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDragHandler
{
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform hand;
    [SerializeField] private RectTransform trail;
    [SerializeField] private RectTransform harassmentFlowerTarget;

    [SerializeField] private float handMoveDistance = 120f;
    [SerializeField] private float handMoveSpeed = 2f;
    [SerializeField] private float requiredSwipeDistance = 250f;

    private HealthHarrassment healthHarrassment;
    private Vector2 swipeStartPos;
    private bool isSwiping;
    private Vector3 handBasePosition;

    private void Awake()
    {
        if (root != null)
            root.SetActive(false);
    }

    private void Update()
    {
        if (root == null || !root.activeSelf)
            return;

        float x = Mathf.Sin(Time.time * handMoveSpeed) * handMoveDistance;
        hand.position = handBasePosition + new Vector3(x, 0f, 0f);

        if (trail != null)
            trail.position = hand.position + new Vector3(-60f, 0f, 0f);
    }

    public void Show(HealthHarrassment health)
    {
        healthHarrassment = health;
        isSwiping = false;

        root.SetActive(true);

        handBasePosition = harassmentFlowerTarget.position;
        hand.position = handBasePosition;

        if (trail != null)
            trail.position = handBasePosition;
    }

    public void Hide()
    {
        isSwiping = false;

        if (root != null)
            root.SetActive(false);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        isSwiping = true;
        swipeStartPos = eventData.position;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (!isSwiping)
            return;

        float deltaX = eventData.position.x - swipeStartPos.x;

        if (deltaX >= requiredSwipeDistance)
        {
            isSwiping = false;
            healthHarrassment.ValidateHarassmentCoverSoilSwipe();
            Hide();
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        isSwiping = false;
    }
}