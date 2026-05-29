using System.Collections;
using UnityEngine;
using TMPro;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

/// Gère le système de tours du jeu :
/// - ordre aléatoire des joueurs
/// - passage d’un joueur à l’autre
/// - passage d’un jour à l’autre
/// - mise à jour de l’UI
/// - fin de partie et capture d’écran finale
public class TurnManager : MonoBehaviour
{
    // INTERFACE UTILISATEUR

    [Header("UI")]
    public TextMeshProUGUI textJour; // Texte affichant le jour actuel
    public TextMeshProUGUI textTour; // Texte affichant le joueur dont c’est le tour
    public GameObject popupJourSuivant; // Popup affichée à la fin d’un jour
    public TextMeshProUGUI textPopup; // Texte de la popup
    
    // SCENE DE FIN

    [Header("Nom de la scène du jeu")]
    public string nomSceneFin = "Fin"; // Nom de la scène chargée à la fin du jeu
    
    // TRANSITION VISUELLE

    [Header("Transition")]
    public SimpleScreenFade screenFade; // Effet de fondu entre deux jours
    
    // JOUEURS / FLEURS

    [Header("Slots")]
    public FlowerSlotUI[] flowerSlots; // Slots contenant les fleurs des joueurs
    
    // REFERENCES SYSTEME

    [Header("System")]
    public HarassmentManager harrasementManager; // Gestion des événements / contraintes du jour
    public UIMenuInteract uiMenuInteract; // Gestion de l’interface des actions
    
    // CIEL / DECOR

    [Header("Sky")]
    public Transform skyCanvas; // Objet représentant le ciel à faire tourner
    public float rotationPerDay = 90f; // Rotation appliquée à chaque nouveau jour
    public float rotationDuration = 2f; // Durée de la rotation du ciel
    
    // CAPTURE DE FIN DE JEU

    [Header("Capture fin de jeu")]
    public Camera captureCamera; // Caméra prévue pour la capture finale
    public Vector2Int captureSize = new Vector2Int(1920, 1080); // Taille souhaitée de la capture

    // Objets à cacher avant la capture finale
    public List<GameObject> objetsAMasquerPourCapture = new List<GameObject>();
    
    // VARIABLES INTERNES

    private int nombreJoueurs; // Nombre de joueurs dans la partie
    public int jourActuel = 1; // Jour actuel, de 1 à 7

    private List<int> ordreDuJour = new List<int>(); // Ordre aléatoire des joueurs pour le jour actuel
    private int indexTourDansLeJour = 0; // Index du joueur en cours dans l’ordre du jour

    private bool finEnCours = false; // Évite de lancer plusieurs fois la fin de partie
    
    [Header("Flower Database")]
    public FlowerDatabase flowerDatabase;
    
    private bool canNextTurn = true;
    
    [Header("Fleur isolée")]
    [SerializeField] private FlowerHarras flowerHarras;
    
    /// Initialise la partie au lancement de la scène.
    void Start()
    {
        SoundManagerY.Instance.PlayMusic("background");
        // Récupère le nombre de joueurs sauvegardé
        nombreJoueurs = PlayerPrefs.GetInt("NombreJoueurs", 1);
        
        // Cache la popup de fin de journée au démarrage
        popupJourSuivant.SetActive(false);
        
        // Lance la musique du menu
        SoundManagerY.Instance.PlayMusic("GameBackground");
        
        // Initialise les noms et l’affichage des fleurs
        InitialiserNoms();
        
        // Lance le premier jour
        StartDay();
    }
    
    /// Initialise les slots des joueurs :
    /// - active les slots utilisés
    /// - désactive les slots inutiles
    /// - affiche le nom de chaque fleur
    void InitialiserNoms()
    {
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            if (i < nombreJoueurs)
            {
                string nomFleur = PlayerPrefs.GetString("Joueur_" + i + "_NomFleur", "Fleur");
                string flowerId = PlayerPrefs.GetString("Joueur_" + i + "_FlowerId", "");

                FlowerDataSO data = flowerDatabase.GetFlowerById(flowerId);

                flowerSlots[i].gameObject.SetActive(true);
                flowerSlots[i].SetFlowerName(nomFleur);

                if (flowerSlots[i].flower != null && data != null)
                {
                    flowerSlots[i].flower.Initialize(data, nomFleur, i + 1);
                }
            }
            else
            {
                flowerSlots[i].gameObject.SetActive(false);
            }
        }
    }
    
    /// Démarre une nouvelle journée :
    /// - met à jour le texte du jour
    /// - crée un ordre aléatoire des joueurs
    /// - avance les fleurs
    /// - réinitialise les points d’action
    /// - met à jour les événements du jour
    /// - affiche le premier joueur
    void StartDay()
    {
        // Met à jour l’affichage du jour
        textJour.text = "Jour " + jourActuel + "/7";
        
        if (uiMenuInteract != null && uiMenuInteract.harassmentFlowerHelp != null)
            uiMenuInteract.harassmentFlowerHelp.OnNewRealDay(jourActuel);
        
        // Crée l’ordre aléatoire des joueurs pour cette journée
        ordreDuJour = CreerOrdreAleatoire(nombreJoueurs);
        
        // Replace le tour au premier joueur de la liste
        indexTourDansLeJour = 0;
        
        // Fait avancer les fleurs selon le jour actuel
        AdvanceFlowersForNewDay();
        
        // Réinitialise les points d’action
        if (uiMenuInteract != null)
            uiMenuInteract.UpdateActionPoint();
        

        // Si le jour 8 est atteint, la partie est terminée
        if (jourActuel == 8 && !finEnCours)
        {
            StartCoroutine(CaptureEtChargerSceneFin());
            return;
        }
        
        // Met à jour l’affichage du joueur actuel
        RefreshCurrentTourUI();
        
        // Affiche le tableau d’actions au début du jour
        if (uiMenuInteract != null)
        {
            uiMenuInteract.ForceCurrentPlayerUIWithoutAnimation();
            uiMenuInteract.ShowBoardAtStartOfDay();
        }
    }
    
    /// Fait avancer chaque fleur au début d’un nouveau jour.
    void AdvanceFlowersForNewDay()
    {
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            if (i < nombreJoueurs &&
                flowerSlots[i] != null &&
                flowerSlots[i].flower != null)
            {
                flowerSlots[i].flower.AdvanceDay(jourActuel);
            }
        }
    }
    
    /// Crée une liste contenant les index des joueurs,
    /// puis mélange cette liste pour obtenir un ordre aléatoire.
    /// <param name="count">Nombre de joueurs à inclure dans l’ordre.</param>
    /// <returns>Liste mélangée des index des joueurs.</returns>
    List<int> CreerOrdreAleatoire(int count)
    {
        List<int> ordre = new List<int>();

        // Ajoute tous les joueurs dans l’ordre normal
        for (int i = 0; i < count; i++)
            ordre.Add(i);

        // Mélange la liste avec un échange aléatoire
        for (int i = 0; i < ordre.Count; i++)
        {
            int randomIndex = Random.Range(i, ordre.Count);

            int temp = ordre[i];
            ordre[i] = ordre[randomIndex];
            ordre[randomIndex] = temp;
        }

        return ordre;
    }
    
    /// Met à jour l’UI pour afficher le joueur dont c’est le tour.
    public void RefreshCurrentTourUI()
    {
        // Retire le surlignage de tous les joueurs
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            if (i < nombreJoueurs)
                flowerSlots[i].SetHighlight(false);
        }

        // Récupère l’index du joueur actuel dans l’ordre du jour
        int joueurIndex = ordreDuJour[indexTourDansLeJour];

        // Récupère le nom de sa fleur
        string nomFleur =
            PlayerPrefs.GetString("Joueur_" + joueurIndex + "_NomFleur", "Fleur");

        // Met à jour le texte du tour
        textTour.text =
            "Tour du joueur " + (joueurIndex + 1) + " : " + nomFleur;

        // Surligne le joueur actuel
        flowerSlots[joueurIndex].SetHighlight(true);
    }
    
    /// Méthode appelée par l’UI pour passer au joueur suivant.
    public void NextTurn()
    {
        if (!canNextTurn)
            return;

        canNextTurn = false;



        StartCoroutine(NextTurnCooldown());
        StartCoroutine(NextTurnRoutine());
        
        // Son du bouton
        SoundManagerY.Instance.PlaySFX("Bop4");
    }
    
    IEnumerator NextTurnCooldown()
    {
        yield return new WaitForSeconds(1f);
        canNextTurn = true;
    }
    
    /// Routine de passage au joueur suivant :
    /// - cache le tableau d’actions
    /// - passe au joueur suivant
    /// - termine la journée si tous les joueurs ont joué
    /// - affiche le tableau du nouveau joueur
    IEnumerator NextTurnRoutine()
    {
        // Cache le tableau d’actions avant de changer de joueur
        
        if (uiMenuInteract != null)
        {
            yield return StartCoroutine(
                uiMenuInteract.MoveTableau(uiMenuInteract.positionTableauCachee)
            );

            uiMenuInteract.ForceExitHarassmentWithoutShowingPlayerActions();
        }

        // Passe au joueur suivant
        indexTourDansLeJour++;

        // Si tous les joueurs ont joué, on termine la journée
        if (indexTourDansLeJour >= ordreDuJour.Count)
        {
            EndDay();
            yield break;
        }

        // Met à jour l’affichage du nouveau joueur
        RefreshCurrentTourUI();

        // Affiche le tableau d’actions du nouveau joueur
        if (uiMenuInteract != null)
        {
            
            //uiMenuInteract.RestoreCurrentPlayerUI();
            //yield return new WaitForSeconds(uiMenuInteract.dureeAnimationTableau);
            
            yield return StartCoroutine(
                uiMenuInteract.AnimateBoardForNewPlayer()
            );
        }
    }
    
    /// Retourne la fleur du joueur actuellement en train de jouer.
    /// <returns>La fleur actuelle, ou null si aucune fleur n’est trouvée.</returns>
    public Flower GetCurrentFlower()
    {
        // Vérifie que l’ordre du jour est valide
        if (ordreDuJour == null || ordreDuJour.Count == 0)
            return null;

        // Récupère l’index du joueur actuel
        int joueurIndex = ordreDuJour[indexTourDansLeJour];

        // Vérifie que l’index est valide
        if (joueurIndex < 0 || joueurIndex >= flowerSlots.Length)
            return null;

        return flowerSlots[joueurIndex].flower;
    }
    
    /// Termine la journée lorsque tous les joueurs ont joué.
    void EndDay()
    {
        // Retire le surlignage de tous les joueurs
        for (int i = 0; i < flowerSlots.Length; i++)
        {
            if (i < nombreJoueurs)
                flowerSlots[i].SetHighlight(false);
        }

        // Affiche la popup de fin de journée
        popupJourSuivant.SetActive(true);
        textPopup.text = "Tous les joueurs ont joué";
        textTour.text = "Tous les joueurs ont joué";

        // Lance le passage automatique au jour suivant
        StartCoroutine(PasserAuJourSuivantApresDelai());
    }
    
    /// Attend un court délai, joue la transition,
    /// puis lance le jour suivant.
    IEnumerator PasserAuJourSuivantApresDelai()
    {
        // Pause avant la transition
        yield return new WaitForSeconds(1f);

        // Lance le fondu si disponible
        if (screenFade != null)
        {
            screenFade.TriggerFade();

            // Attend la durée approximative du fondu
            yield return new WaitForSeconds(1f);
        }

        // Passe au jour suivant
        StartNextDay();

        if (uiMenuInteract != null)
        {
            yield return StartCoroutine(
                uiMenuInteract.MoveTableau(uiMenuInteract.positionTableauVisible)
            );
        }
    }
    
    /// Incrémente le jour actuel et relance une nouvelle journée.
    public void StartNextDay()
    {
        // Cache la popup de fin de journée
        popupJourSuivant.SetActive(false);

        // Passe au jour suivant
        jourActuel++;
        

        // Lance la rotation du ciel
        StartCoroutine(RotateSkySmooth());
        
        if (uiMenuInteract != null)
            uiMenuInteract.tableauActions.anchoredPosition = uiMenuInteract.positionTableauCachee;

        // Démarre la nouvelle journée
        StartDay();
    }
    
    /// Fait tourner le ciel progressivement pour représenter
    /// le passage d’un jour à l’autre.
    IEnumerator RotateSkySmooth()
    {
        if (skyCanvas == null)
            yield break;

        float elapsed = 0f;

        // Rotation de départ
        float startZ = skyCanvas.eulerAngles.z;

        // Rotation finale
        float endZ = startZ + rotationPerDay;

        while (elapsed < rotationDuration)
        {
            float z = Mathf.Lerp(
                startZ,
                endZ,
                elapsed / rotationDuration
            );

            skyCanvas.eulerAngles = new Vector3(0f, 0f, z);

            elapsed += Time.deltaTime;
            yield return null;
        }

        // Sécurise la position finale exacte
        skyCanvas.eulerAngles = new Vector3(0f, 0f, endZ);
    }
    
    /// Capture l’écran de fin de partie,
    /// stocke l’image dans EndGameScreenshotStore,
    /// puis charge la scène de fin.
    IEnumerator CaptureEtChargerSceneFin()
    {
        finEnCours = true;

        // Liste des objets réellement masqués
        List<GameObject> objetsMasques = new List<GameObject>();

        // Masque temporairement certains objets pour nettoyer la capture
        foreach (GameObject obj in objetsAMasquerPourCapture)
        {
            if (obj != null && obj.activeSelf)
            {
                obj.SetActive(false);
                objetsMasques.Add(obj);
            }
        }

        // Attend une frame pour laisser Unity mettre l’affichage à jour
        yield return null;

        // Attend la fin du rendu de la frame
        yield return new WaitForEndOfFrame();

        // Capture l’écran sous forme de texture
        Texture2D captured = ScreenCapture.CaptureScreenshotAsTexture();

        if (captured == null)
        {
            Debug.LogError("La capture d'écran a échoué.");
        }
        else
        {
            // Crée une texture opaque sans canal alpha
            Texture2D opaqueTexture =
                new Texture2D(
                    captured.width,
                    captured.height,
                    TextureFormat.RGB24,
                    false
                );

            // Force tous les pixels à être opaques
            Color[] pixels = captured.GetPixels();

            for (int i = 0; i < pixels.Length; i++)
                pixels[i].a = 1f;

            opaqueTexture.SetPixels(pixels);
            opaqueTexture.Apply();

            // Stocke la capture pour la scène de fin
            EndGameScreenshotStore.screenshot = opaqueTexture;

            // Détruit la texture temporaire
            Destroy(captured);
        }

        // Réactive les objets masqués
        foreach (GameObject obj in objetsMasques)
        {
            if (obj != null)
                obj.SetActive(true);
        }
        
        if (flowerHarras != null)
        {
            EndGameScreenshotStore.finalFlowerState =
                flowerHarras.CurrentVisualState;
        }
        
        Time.timeScale = 1f;

        

        SceneManager.LoadScene(nomSceneFin);
        
    }
}