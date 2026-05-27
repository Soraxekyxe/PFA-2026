using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class FlowerHarras : MonoBehaviour, IPointerDownHandler
{
    [Header("Sprite")]
    private Image flowerSprite;
    [SerializeField] GameObject feather;
    [SerializeField] GameObject petal;

    [Header("UI")]
    [SerializeField] private GameObject UIHealth;

    [Header("System")]
    [SerializeField] HarassementState harrassmentState;
    [SerializeField] private UIMenuInteract uiMenuInteract;

    bool IsHealth = false;

    [Header("Indicateur action disponible")]
    [SerializeField] private GameObject actionAvailableIcon;
    [SerializeField] private float iconRotationSpeed = 90f;
    [SerializeField] private float iconPulseSpeed = 3f;
    [SerializeField] private float iconMinScale = 0.85f;
    [SerializeField] private float iconMaxScale = 1.15f;

    private Vector3 iconBaseScale;

    void Awake()
    {
        if (flowerSprite == null)
            flowerSprite = GetComponent<Image>();

        if (actionAvailableIcon != null)
        {
            iconBaseScale = actionAvailableIcon.transform.localScale;
            actionAvailableIcon.SetActive(false);
        }
    }

    void Update()
    {
        UpdateActionAvailableIcon();
        AnimateActionAvailableIcon();
    }

    void UpdateActionAvailableIcon()
    {
        if (actionAvailableIcon == null || uiMenuInteract == null)
            return;

        bool canShow =
            IsHealth == false &&
            uiMenuInteract.harassmentFlowerHelp != null &&
            uiMenuInteract.turnManager != null &&
            uiMenuInteract.harassmentFlowerHelp.HasActionAvailable(uiMenuInteract.turnManager.jourActuel) &&
            !uiMenuInteract.IsOnHarassmentFlower();

        actionAvailableIcon.SetActive(canShow);
    }

    void AnimateActionAvailableIcon()
    {
        if (actionAvailableIcon == null || !actionAvailableIcon.activeSelf)
            return;

        actionAvailableIcon.transform.Rotate(
            0f,
            0f,
            -iconRotationSpeed * Time.deltaTime
        );

        float t = (Mathf.Sin(Time.time * iconPulseSpeed) + 1f) / 2f;
        float scale = Mathf.Lerp(iconMinScale, iconMaxScale, t);

        actionAvailableIcon.transform.localScale = iconBaseScale * scale;
    }

    public void UpdateSprite(HarassementState.State state, int spriteIndex)
    {
        flowerSprite.sprite = harrassmentState.StateSprite(state, spriteIndex);
        flowerSprite.color = Color.white;
        IsHealth = false;

        if (harrassmentState.currentState == HarassementState.State.Feather && harrassmentState.CurrentHealth == 0)
        {
            feather.SetActive(true);
            petal.SetActive(true);
        }
        else
        {
            feather.SetActive(false);
        }
    }

    public void UpdateHealthySprite()
    {
        flowerSprite.sprite = harrassmentState.FlowerHeatlySprite(harrassmentState.currentFlowerHeatlyState);
        flowerSprite.color = Color.white;
        IsHealth = true;

        UIHealth.SetActive(false);

        if (petal.activeSelf)
            petal.SetActive(false);
    }

    public void ShowUIHealth()
    {
        if (IsHealth == false &&
            uiMenuInteract != null &&
            uiMenuInteract.harassmentFlowerHelp != null &&
            uiMenuInteract.turnManager != null &&
            uiMenuInteract.harassmentFlowerHelp.HasActionAvailable(uiMenuInteract.turnManager.jourActuel))
        {
            uiMenuInteract.ShowHarassmentFlowerUI();
        }
    }

    public void OnPointerDown(PointerEventData click)
    {
        HealthHarrassment health = FindObjectOfType<HealthHarrassment>();

        if (health != null)
            health.ValidateHarassmentFlowerTap();

        ShowUIHealth();
    }

    public void UpdateHarassmentVisual(HarassementState.HarassmentVisualState state)
    {
        harrassmentState.currentHarassmentVisualState = state;
        flowerSprite.sprite = harrassmentState.GetHarassmentVisualSprite(state);
        flowerSprite.color = Color.white;
        IsHealth = false;
    }
    
    public HarassementState.HarassmentVisualState CurrentVisualState
    {
        get { return harrassmentState.currentHarassmentVisualState; }
    }
}