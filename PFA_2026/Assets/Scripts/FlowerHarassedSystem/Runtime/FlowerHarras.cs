using Ami.BroAudio;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class FlowerHarras : MonoBehaviour, IPointerDownHandler
{
    [Header("Sprite")]
    private Image flowerSprite;

    // UI du soin
    [Header("UI")] 
    [SerializeField] private GameObject UIHealth;
    
    [Header("System")]
    [SerializeField] HarassementState harrassmentState;
    bool IsHealth = false;
    
    // Animation des effets
    [Header("Animation")]
    [SerializeField] Animator healthAnimator;
    
    // Audio pour les effets
    [Header("Audio")]
    [SerializeField] AudioSource audioSource;
    [SerializeField] SoundID health;
    
    // Couleur de la surbrillance
    [Header("Surbrillance")]
    [SerializeField] Color baseColor = Color.white;
    [SerializeField] Color highlightColor = new Color(1.2f, 1.2f, 0.8f);
    [SerializeField] float speed = 2f;

    // J'ai mit une outline je sais pas si c'est utile
    [SerializeField] Outline outline;
    [SerializeField] float minAlpha = 0.4f;
    [SerializeField] float maxAlpha = 1f;


    
    
    void Awake()
    {
        // Permet de setup les modification d'image de la fleur
        if (flowerSprite == null)
            flowerSprite = GetComponent<Image>();
    }
    
    
    void Update()
    {
        // ----------- Effet de surbrillance ----------- //
        
        // Ajout de la surbrillance si IsHealth est false
        if (IsHealth ==  false)
        {
            float t = (Mathf.Sin(Time.time * speed) + 1f) / 2f;
            flowerSprite.color = Color.Lerp(baseColor, highlightColor, t);

            if (outline != null)
            {
                float y = (Mathf.Sin(Time.time * speed) + 1f) / 2f;
                Color c = outline.effectColor;
                c.a = Mathf.Lerp(minAlpha, maxAlpha, y);
                outline.effectColor = c;
            }
            
        }
        
        // Sinon Désactive la surbrillance
        else
        {
            
        }
    }
    
    // Change de sprite du harcelement
    public void UpdateSprite()
    {
        flowerSprite.sprite = harrassmentState.StateSprite(harrassmentState.currentState);
        IsHealth = false;
    }

    // change de sprite de la fleur lorsqu'on la soigne
    public void UpdateHealthySprite()
    {
        // Change le sprite en fonction de l'état actuel de la fleur (voir le script HarrassmentState)
        flowerSprite.sprite = harrassmentState.FlowerHeatlySprite(harrassmentState.currentFlowerHeatlyState);
        // Indique que la fleur est soigner
        IsHealth = true;
        // Désactive l'UI du soin 
        UIHealth.SetActive(false);
        // Joue l'audio
        BroAudio.Play(health);
    }

    // Montre les ui pour soigner la fleur
    public void ShowUIHealth()
    {
        // ne s'active que si la fleur n'est pas soigner
        if (IsHealth == false)
        {
            UIHealth.SetActive(true);
        }
    }
    
    // Permet de cliquer sur la fleur
    public void OnPointerDown(PointerEventData click)
    {
        ShowUIHealth();
    }
}
