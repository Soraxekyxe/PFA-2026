using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    [Header("Nom de la scène du jeu")]
    public string nomSceneJeu = "Game";

    [Header("Nom de la scène des règles")]
    public string nomSceneRegles = "Rules";

    private void Start()
    {
        // Lance la musique du menu
        SoundManagerY.Instance.PlayMusic("MainMenu");
    }

    // Lance la scène de jeu
    public void Play()
    {
        // Son du bouton
        SoundManagerY.Instance.PlaySFX("Bop1");

        // Charge la scène
        SceneManager.LoadScene(nomSceneJeu);
    }

    // Ouvre la scène des règles
    public void OpenRules()
    {
        // Son du bouton
        SoundManagerY.Instance.PlaySFX("Bop1");

        // Charge la scène
        SceneManager.LoadScene(nomSceneRegles);
    }

    public void QuitGame()
    {
        // Son du bouton
        SoundManagerY.Instance.PlaySFX("Bop1");

        Debug.Log("Quitter le jeu");

        Application.Quit();
    }
}