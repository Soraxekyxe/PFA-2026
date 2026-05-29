using UnityEngine;
using UnityEngine.EventSystems;

public class CoverSoilSwipeFeedback : MonoBehaviour,
    IPointerDownHandler,
    IPointerUpHandler,
    IDragHandler
{
    [Header("UI")]
    [SerializeField] private GameObject root;
    [SerializeField] private RectTransform hand;
    [SerializeField] private RectTransform trail;

    [Header("Animation")]
    [SerializeField] private float handMoveDistance = 120f;
    [SerializeField] private float handMoveSpeed = 2f;

    [Header("Swipe")]
    [SerializeField] private float requiredSwipeDistance = 250f;

    private MenuInteract menuInteract;
    private Flower targetFlower;

    private Vector2 swipeStartPos;
    private bool isSwiping;

    private Vector3 handBasePosition;

    private void Awake()
    {
        
    }

    private void Update()
    {
        if (root == null || !root.activeSelf)
            return;

        AnimateHand();
    }

    void AnimateHand()
    {
        if (hand == null)
            return;

        float x = Mathf.Sin(Time.time * handMoveSpeed) * handMoveDistance;

        hand.position = handBasePosition + new Vector3(x, 0f, 0f);

        if (trail != null)
        {
            trail.position = hand.position + new Vector3(-60f, 0f, 0f);
        }
    }

    public void Show(Flower flower, MenuInteract menu)
    {
        targetFlower = flower;
        menuInteract = menu;

        root.SetActive(true);

        RectTransform flowerRect = flower.GetComponentInParent<RectTransform>();

        handBasePosition = flowerRect.position;

        hand.position = handBasePosition;

        if (trail != null)
        {
            trail.position = handBasePosition;
        }
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

        // Swipe gauche -> droite uniquement
        if (deltaX >= requiredSwipeDistance)
        {
            isSwiping = false;

            menuInteract.ValidateCoverSoilSwipe(targetFlower);
            // Son du bouton
            SoundManagerY.Instance.PlaySFX("Step6");
            Debug.Log("son");

            Hide();
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        isSwiping = false;
    }
}