using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    [Header("Nom de la scène du jeu")]
    public string nomSceneJeu = "Game";

    [Header("Nom de la scène des règles")]
    public string nomSceneRegles = "Rules";

    //lance la scene de jeu
    public void Play()
    {
        SceneManager.LoadScene(nomSceneJeu);
    }

    //pour load la scene carousel
    public void OpenRules()
    {
        SceneManager.LoadScene(nomSceneRegles);
    }

    public void QuitGame()
    {
        Application.Quit();
        Debug.Log("Quitter le jeu");
    }
}