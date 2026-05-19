using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public GameObject pauseMenuUI;
    public GameObject confirmMenuUI;
    
    [Header("System")]
    [SerializeField] SoundManager soundManager;

    private bool isPaused = false;

    private enum ActionType { None, Quit, MainMenu }
    private ActionType actionToConfirm = ActionType.None;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (confirmMenuUI.activeSelf)
            {
                CloseConfirmMenu();
            }
            else if (isPaused)
            {
                Resume();
            }
            else
            {
                Pause();
            }
        }
    }

    public void Resume()
    {
        //Joue le son
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        SoundManager.instance.Music(SoundManager.instance.Background);
        
        
        pauseMenuUI.SetActive(false);
        confirmMenuUI.SetActive(false);
        Time.timeScale = 1f;
        isPaused = false;
    }

    public void Pause()
    {
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        SoundManager.instance.Music(SoundManager.instance.PauseMenu);
        
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0f;
        isPaused = true;
    }

    //ouvre le pop up de confirmation
    public void AskQuit()
    {
        actionToConfirm = ActionType.Quit;
        confirmMenuUI.SetActive(true);
    }

    public void AskMainMenu()
    {
        // Joue le son
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        
        actionToConfirm = ActionType.MainMenu;
        confirmMenuUI.SetActive(true);
    }

    public void ConfirmYes()
    {
        Time.timeScale = 1f;

        // Joue le son
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        
        if (actionToConfirm == ActionType.Quit)
        {
            Application.Quit();
            Debug.Log("Quit Game");
        }
        else if (actionToConfirm == ActionType.MainMenu)
        {
            SceneManager.LoadScene("MainMenu");
        }
    }

    public void ConfirmNo()
    {
        // Joue le son
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        
        CloseConfirmMenu();
    }

    void CloseConfirmMenu()
    {
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        confirmMenuUI.SetActive(false);
        actionToConfirm = ActionType.None;
    }
}