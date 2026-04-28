using System.Collections;
using UnityEngine;
using TMPro;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class TurnManager : MonoBehaviour
{
    [Header("UI")]
    public TextMeshProUGUI textJour;
    public TextMeshProUGUI textTour;
    public GameObject popupJourSuivant;
    public TextMeshProUGUI textPopup;
    
    [Header("Nom de la scène du jeu")]
    public string nomSceneFin = "Fin";

    [Header("Slots")]
    public FlowerSlotUI[] flowerSlots;

    [Header("System")]
    public HarassmentManager harrasementManager;
    public UIMenuInteract uiMenuInteract;

    [Header("Sky")]
    public Transform skyCanvas;
    public float rotationPerDay = 90f;
    public float rotationDuration = 2f;

    [Header("Capture fin de jeu")]
    public Camera captureCamera; // facultatif, sinon Camera.main
    public Vector2Int captureSize = new Vector2Int(1920, 1080);
    public List<GameObject> objetsAMasquerPourCapture = new List<GameObject>();

    private int nombreJoueurs;
    public int jourActuel = 1;

    private List<int> ordreDuJour = new List<int>();
    private int indexTourDansLeJour = 0;
    private bool finEnCours = false;

    void Start()
    {
        nombreJoueurs = PlayerPrefs.GetInt("NombreJoueurs", 1);
        popupJourSuivant.SetActive(false);

        InitialiserNoms();
        StartDay();
    }

    void InitialiserNoms()
    {
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            if (i < nombreJoueurs)
            {
                string nomFleur = PlayerPrefs.GetString("Joueur_" + i + "_NomFleur", "Fleur");
                flowerSlots[i].gameObject.SetActive(true);
                flowerSlots[i].SetFlowerName(nomFleur);
            }
            else
            {
                flowerSlots[i].gameObject.SetActive(false);
            }
        }
    }

    void StartDay()
    {
        textJour.text = " " + jourActuel;

        ordreDuJour = CreerOrdreAleatoire(nombreJoueurs);
        indexTourDansLeJour = 0;

        AdvanceFlowersForNewDay();

        if (uiMenuInteract != null)
        {
            uiMenuInteract.UpdateActionPoint();
        }

        // C'est mon script harrasment manager
        if (harrasementManager != null)
        {
            harrasementManager.GrowingFlower();
            harrasementManager.HarrasementInDays();
        }

        if (jourActuel == 8 && !finEnCours)
        {
            StartCoroutine(CaptureEtChargerSceneFin());
            return;
        }
        
        if (uiMenuInteract != null)
        {
            uiMenuInteract.ShowBoardAtStartOfDay();
        }

        UpdateCurrentTour();
    }

    void AdvanceFlowersForNewDay()
    {
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            if (i < nombreJoueurs && flowerSlots[i] != null && flowerSlots[i].flower != null)
            {
                flowerSlots[i].flower.AdvanceDay(jourActuel);
            }
        }
    }

    List<int> CreerOrdreAleatoire(int count)
    {
        List<int> ordre = new List<int>();

        for (int i = 0; i < count; i++)
        {
            ordre.Add(i);
        }

        for (int i = 0; i < ordre.Count; i++)
        {
            int randomIndex = Random.Range(i, ordre.Count);

            int temp = ordre[i];
            ordre[i] = ordre[randomIndex];
            ordre[randomIndex] = temp;
        }

        return ordre;
    }

    void UpdateCurrentTour()
    {
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            if (i < nombreJoueurs)
            {
                flowerSlots[i].SetHighlight(false);
            }
        }

        int joueurIndex = ordreDuJour[indexTourDansLeJour];
        string nomFleur = PlayerPrefs.GetString("Joueur_" + joueurIndex + "_NomFleur", "Fleur");

        textTour.text = "Tour du joueur " + (joueurIndex + 1) + " : " + nomFleur;
        flowerSlots[joueurIndex].SetHighlight(true);

        if (uiMenuInteract != null)
        {
            uiMenuInteract.ShowActionsForCurrentFlower();
        }
    }

    public void NextTurn()
    {
        indexTourDansLeJour++;

        if (indexTourDansLeJour >= ordreDuJour.Count)
        {
            EndDay();
        }
        else
        {
            UpdateCurrentTour();
        }
    }
    

    public Flower GetCurrentFlower()
    {
        if (ordreDuJour == null || ordreDuJour.Count == 0)
            return null;

        int joueurIndex = ordreDuJour[indexTourDansLeJour];

        if (joueurIndex < 0 || joueurIndex >= flowerSlots.Length)
            return null;

        return flowerSlots[joueurIndex].flower;
    }
    
    void EndDay()
    {
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            if (i < nombreJoueurs)
            {
                flowerSlots[i].SetHighlight(false);
            }
        }

        popupJourSuivant.SetActive(true);
        textPopup.text = "Tous les joueurs ont joué";
        textTour.text = "Tous les joueurs ont joué";

        StartCoroutine(PasserAuJourSuivantApresDelai());
    }

    IEnumerator PasserAuJourSuivantApresDelai()
    {
        yield return new WaitForSeconds(1f);

        StartNextDay();
    }

    public void StartNextDay()
    {
        popupJourSuivant.SetActive(false);

        jourActuel++;

        StartCoroutine(RotateSkySmooth());

        StartDay();
    }

    IEnumerator RotateSkySmooth()
    {
        if (skyCanvas == null)
            yield break;

        float elapsed = 0f;
        float startZ = skyCanvas.eulerAngles.z;
        float endZ = startZ + rotationPerDay;

        while (elapsed < rotationDuration)
        {
            float z = Mathf.Lerp(startZ, endZ, elapsed / rotationDuration);
            skyCanvas.eulerAngles = new Vector3(0f, 0f, z);

            elapsed += Time.deltaTime;
            yield return null;
        }

        skyCanvas.eulerAngles = new Vector3(0f, 0f, endZ);
    }
    IEnumerator CaptureEtChargerSceneFin()
    {
        finEnCours = true;

        List<GameObject> objetsMasques = new List<GameObject>();

        foreach (GameObject obj in objetsAMasquerPourCapture)
        {
            if (obj != null && obj.activeSelf)
            {
                obj.SetActive(false);
                objetsMasques.Add(obj);
            }
        }

        yield return null;
        yield return new WaitForEndOfFrame();

        Texture2D captured = ScreenCapture.CaptureScreenshotAsTexture();

        if (captured == null)
        {
            Debug.LogError("La capture d'écran a échoué.");
        }
        else
        {
            // On recrée une texture opaque pour éviter tout problème d'alpha
            Texture2D opaqueTexture = new Texture2D(captured.width, captured.height, TextureFormat.RGB24, false);

            Color[] pixels = captured.GetPixels();
            for (int i = 0; i < pixels.Length; i++)
            {
                pixels[i].a = 1f;
            }

            opaqueTexture.SetPixels(pixels);
            opaqueTexture.Apply();

            EndGameScreenshotStore.screenshot = opaqueTexture;

            Debug.Log("Capture opaque stockée : " + opaqueTexture.width + "x" + opaqueTexture.height);

            Destroy(captured);
        }

        foreach (GameObject obj in objetsMasques)
        {
            if (obj != null)
                obj.SetActive(true);
        }

        SceneManager.LoadScene(nomSceneFin);
    }
}