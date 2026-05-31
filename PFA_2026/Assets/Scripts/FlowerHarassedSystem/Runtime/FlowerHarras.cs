using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class FlowerHarras : MonoBehaviour, IPointerDownHandler
{
    [Header("Sprite")]
    private Image flowerSprite;
    [SerializeField] private GameObject feather;
    [SerializeField] private GameObject petal;

    [Header("UI")]
    [SerializeField] private GameObject UIHealth;

    [Header("System")]
    [SerializeField] private HarassementState harrassmentState;
    [SerializeField] private UIMenuInteract uiMenuInteract;

    private bool IsHealth = false;

    [Header("Indicateur action disponible")]
    [SerializeField] private GameObject actionAvailableIcon;
    [SerializeField] private float iconRotationSpeed = 90f;
    [SerializeField] private float iconPulseSpeed = 3f;
    [SerializeField] private float iconMinScale = 0.85f;
    [SerializeField] private float iconMaxScale = 1.15f;

    [Header("Animation nouveau système")]
    [SerializeField] private Animator harassmentAnimator;
    
    [Header("Animation lendemain engrais")]
    [SerializeField] private FixedImageIntro fertilizerNextDayIntro;
    
    [Header("Animation lendemain terre recouverte")]
    [SerializeField] private DoubleImageIntro coverSoilNextDayIntro;
    
    [Header("Animation lendemain eau")]
    [SerializeField] private SingleFlyIntro waterNextDayIntro;
    
    [SerializeField] private ShadowFlowerAnimation shadowFlowerAnimation;
    
    [Header("Animation lendemain panneaux réfléchissants")]
    [SerializeField] private FixedThenFlyIntro reflectivePanelsNextDayIntro;
    
    

    private Vector2 originalSize;
    private Vector3 iconBaseScale;

    void Awake()
    {
        if (flowerSprite == null)
            flowerSprite = GetComponent<Image>();

        if (flowerSprite != null)
            originalSize = flowerSprite.rectTransform.sizeDelta;

        if (harassmentAnimator == null)
            harassmentAnimator = GetComponent<Animator>();

        if (harassmentAnimator != null)
            harassmentAnimator.enabled = false;

        if (actionAvailableIcon != null)
        {
            iconBaseScale = actionAvailableIcon.transform.localScale;
            actionAvailableIcon.SetActive(false);
        }
        
        if (shadowFlowerAnimation != null)
            shadowFlowerAnimation.gameObject.SetActive(false);
        
    }
    
    public void PlayCoverSoilNextDayIntro()
    {
        if (coverSoilNextDayIntro == null)
        {
            Debug.LogError("coverSoilNextDayIntro n'est pas assigné !");
            return;
        }

        coverSoilNextDayIntro.PlayOnce();
    }
    
    public void PlayReflectivePanelsNextDayIntro()
    {
        if (reflectivePanelsNextDayIntro == null)
        {
            Debug.LogError("reflectivePanelsNextDayIntro n'est pas assigné !");
            return;
        }

        reflectivePanelsNextDayIntro.PlayOnce();
    }
    
    public void PlayWaterNextDayIntro()
    {
        Debug.Log("Animation lendemain Water demandée");

        if (waterNextDayIntro == null)
        {
            Debug.LogError("waterNextDayIntro n'est pas assigné !");
            return;
        }

        waterNextDayIntro.PlayOnce();
    }
    
    void Start()
    {
        UpdateHarassmentVisual(harrassmentState.currentHarassmentVisualState);
    }
    
    void Update()
    {
        UpdateActionAvailableIcon();
        AnimateActionAvailableIcon();
    }
    
    public void PlayFertilizerNextDayIntro()
    {
        Debug.Log("Animation lendemain engrais demandée");

        if (fertilizerNextDayIntro == null)
        {
            Debug.LogError("fertilizerNextDayIntro n'est pas assigné !");
            return;
        }

        fertilizerNextDayIntro.PlayOnce();
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

        if (harrassmentState.currentState == HarassementState.State.Feather &&
            harrassmentState.CurrentHealth == 0)
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
        Debug.Log("Etat visuel fleur isolée : " + state);

        flowerSprite.color = Color.white;
        flowerSprite.enabled = true;
        flowerSprite.raycastTarget = true;
        IsHealth = false;

        bool useAnimation =
            state >= HarassementState.HarassmentVisualState.FlowerWithDeadLeaves;

        if (!useAnimation)
        {
            if (harassmentAnimator != null)
            {
                harassmentAnimator.enabled = false;
                harassmentAnimator.runtimeAnimatorController = null;
            }

            flowerSprite.rectTransform.sizeDelta = originalSize;

            Sprite sprite = harrassmentState.GetHarassmentVisualSprite(state);

            if (sprite == null)
            {
                Debug.LogError("Sprite manquant pour l'état : " + state);
                return;
            }
            

            flowerSprite.sprite = sprite;
            return;
        }

        Sprite fallbackSprite = harrassmentState.GetHarassmentVisualSprite(state);
        if (fallbackSprite != null)
            flowerSprite.sprite = fallbackSprite;

        if (harrassmentState.harassmentAnimatorController == null)
            return;

        flowerSprite.rectTransform.sizeDelta =
            originalSize * harrassmentState.harassmentAnimationSizeMultiplier;

        if (harassmentAnimator == null)
            harassmentAnimator = GetComponent<Animator>();

        if (harassmentAnimator != null)
        {
            harassmentAnimator.runtimeAnimatorController =
                harrassmentState.harassmentAnimatorController;

            harassmentAnimator.enabled = true;
            harassmentAnimator.SetInteger("Grow", GetHarassmentGrowValue(state));
        }
        
        if (shadowFlowerAnimation != null)
        {
            shadowFlowerAnimation.gameObject.SetActive(
                state == HarassementState.HarassmentVisualState.ShadowFlower
            );
        }
    }

    private int GetHarassmentGrowValue(HarassementState.HarassmentVisualState state)
    {
        switch (state)
        {
            case HarassementState.HarassmentVisualState.FlowerWithDeadLeaves:
                return 0;
            case HarassementState.HarassmentVisualState.FlowerWithoutDeadLeaves:
                return 1;
            case HarassementState.HarassmentVisualState.ShadowFlower:
                return 2;
            case HarassementState.HarassmentVisualState.FlowerWithoutShadow:
                return 3;
            case HarassementState.HarassmentVisualState.FlowerWithReflectivePanel:
                return 4;
            case HarassementState.HarassmentVisualState.EatenPetals:
                return 5;
            case HarassementState.HarassmentVisualState.NeedMagic:
                return 6;
            case HarassementState.HarassmentVisualState.FullyGrownFlower:
                return 7;
            case HarassementState.HarassmentVisualState.FlowerWithLadybug:
                return 8;
            default:
                return 0;
        }
    }

    public HarassementState.HarassmentVisualState CurrentVisualState
    {
        get { return harrassmentState.currentHarassmentVisualState; }
    }
}