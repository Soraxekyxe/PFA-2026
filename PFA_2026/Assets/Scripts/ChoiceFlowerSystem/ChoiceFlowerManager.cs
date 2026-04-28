using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

// Classe qui contient les données d'un joueur
[System.Serializable]
public class DonneesJoueur
{
    public int indexJoueur;           // Numéro du joueur (1, 2, 3...)
    public FlowerDataSO flowerData;   // Fleur choisie
    public string flowerId;           // ID de la fleur à sauvegarder
    public string nomFleur;           // Nom donné à la fleur
}

public class ChoiceFlowerManager : MonoBehaviour
{
    [Header("UI")]
    public TextMeshProUGUI texteTitre;
    public GameObject panelChoixFleur;
    public GameObject panelNomFleur;
    public TextMeshProUGUI texteNomActuel;
    public GameObject buttonContinue;
    public GameObject buttonStart;

    [Header("Scene")]
    public string gameSceneName = "Game";

    private DonneesJoueur[] joueurs;
    private int nombreJoueurs;
    private int joueurActuel = 0;

    private enum Step
    {
        ChoosingFlower,
        NamingFlower,
        NamingGarden,
        Finished
    }

    private Step currentStep;
    private string currentName = "";
    private string gardenName = "";

    void Start()
    {
        nombreJoueurs = PlayerPrefs.GetInt("NombreJoueurs", 1);

        joueurs = new DonneesJoueur[nombreJoueurs];

        for (int i = 0; i < nombreJoueurs; i++)
        {
            joueurs[i] = new DonneesJoueur();
            joueurs[i].indexJoueur = i + 1;
            joueurs[i].flowerData = null;
            joueurs[i].flowerId = "";
            joueurs[i].nomFleur = "";
        }

        StartChoosingFlower();
    }

    void StartChoosingFlower()
    {
        currentStep = Step.ChoosingFlower;

        panelChoixFleur.SetActive(true);
        panelNomFleur.SetActive(false);

        buttonContinue.SetActive(false);
        buttonStart.SetActive(false);

        texteTitre.text = "Joueur " + (joueurActuel + 1) + " choisissez votre fleur";
    }

    void StartNamingFlower()
    {
        currentStep = Step.NamingFlower;

        panelChoixFleur.SetActive(false);
        panelNomFleur.SetActive(true);

        buttonContinue.SetActive(true);
        buttonStart.SetActive(false);

        currentName = "";
        texteNomActuel.text = currentName;

        texteTitre.text = "Joueur " + (joueurActuel + 1) + " donnez un nom à votre fleur";
    }

    void StartNamingGarden()
    {
        currentStep = Step.NamingGarden;

        panelChoixFleur.SetActive(false);
        panelNomFleur.SetActive(true);

        buttonContinue.SetActive(false);
        buttonStart.SetActive(true);

        currentName = "";
        texteNomActuel.text = currentName;

        texteTitre.text = "Choisissez un nom de jardin";
    }

    // ----------- CHOIX DE LA FLEUR AVEC SCRIPTABLE OBJECT -----------
    public void ChooseFlower(FlowerDataSO flowerData)
    {
        if (currentStep != Step.ChoosingFlower)
            return;

        if (flowerData == null)
            return;

        joueurs[joueurActuel].flowerData = flowerData;
        joueurs[joueurActuel].flowerId = flowerData.flowerId;

        Debug.Log("Joueur " + (joueurActuel + 1) + " a choisi la fleur : " + flowerData.flowerName);

        StartNamingFlower();
    }

    public void AddLetter(string lettre)
    {
        if (currentStep != Step.NamingFlower && currentStep != Step.NamingGarden)
            return;

        if (currentName.Length >= 12)
            return;

        currentName += lettre;
        texteNomActuel.text = currentName;
    }

    public void RemoveLetter()
    {
        if (currentStep != Step.NamingFlower && currentStep != Step.NamingGarden)
            return;

        if (currentName.Length <= 0)
            return;

        currentName = currentName.Substring(0, currentName.Length - 1);
        texteNomActuel.text = currentName;
    }

    public void Continue()
    {
        if (currentStep != Step.NamingFlower)
            return;

        if (string.IsNullOrWhiteSpace(currentName))
            return;

        joueurs[joueurActuel].nomFleur = currentName;

        Debug.Log("Joueur " + (joueurActuel + 1) + " a nommé sa fleur : " + currentName);

        joueurActuel++;

        if (joueurActuel < nombreJoueurs)
        {
            StartChoosingFlower();
        }
        else
        {
            StartNamingGarden();
        }
    }

    public void StartGame()
    {
        if (currentStep != Step.NamingGarden)
            return;

        if (string.IsNullOrWhiteSpace(currentName))
            return;

        gardenName = currentName;

        PlayerPrefs.SetString("NomJardin", gardenName);
        PlayerPrefs.SetInt("NombreJoueurs", nombreJoueurs);

        for (int i = 0; i < joueurs.Length; i++)
        {
            PlayerPrefs.SetString("Joueur_" + i + "_FlowerId", joueurs[i].flowerId);
            PlayerPrefs.SetString("Joueur_" + i + "_NomFleur", joueurs[i].nomFleur);
        }

        PlayerPrefs.Save();

        currentStep = Step.Finished;
        SceneManager.LoadScene(gameSceneName);
    }
}