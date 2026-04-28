using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class ChoicePlayer : MonoBehaviour
{
    [Header("UI")]
    public TextMeshProUGUI texteNombreJoueurs;

    [Header("Limites")]
    public int minJoueurs = 1;
    public int maxJoueurs = 6;

    [Header("Scene à charger")]
    public string nomSceneJeu = "ChoixDemo";

    public int nombreJoueurs = 1;

    void Start()
    {
        UpdateDisplay();
    }

    //---Quand on clique sur la flèche de droite le nombre de joueur augmente
    public void RightArrow()
    {
        nombreJoueurs++;

        //---Si on appuie sur la flèche de droite alors que le nombre de joueur est à 10 ça remet à 1
        if (nombreJoueurs > maxJoueurs)
        {
            nombreJoueurs = minJoueurs;
        }

        UpdateDisplay();
    }

    //---Quand on clique sur la flèche de gauche le nombre de joueur diminue
    public void LeftArrow()
    {
        nombreJoueurs--;

        //---Si on appuie sur la flèche de gauche alors que le nombre de joueur est à 1 ça met à 10
        if (nombreJoueurs < minJoueurs)
        {
            nombreJoueurs = maxJoueurs;
        }

        UpdateDisplay();
    }

    //---Met à jours le nombre qui représente le nombre de joueur
    void UpdateDisplay()
    {
        texteNombreJoueurs.text = nombreJoueurs.ToString();
    }

    //---Quand on clique sur le bouton demarrer ça Load la prochaine salle
    public void ToStartUp()
    {
        PlayerPrefs.SetInt("NombreJoueurs", nombreJoueurs);
        SceneManager.LoadScene(nomSceneJeu);
    }

    public int GetNbPlayer()
    {
        return nombreJoueurs;
    }
}