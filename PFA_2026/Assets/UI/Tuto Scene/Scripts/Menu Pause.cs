using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public GameObject pauseMenuUI;
    public GameObject confirmMenuUI;

    private bool isPaused = false;

    private enum ActionType
    {
        None,
        Quit,
        MainMenu
    }

    private ActionType actionToConfirm = ActionType.None;

    private void Update()
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
        if (SoundManagerY.Instance != null)
        {
            SoundManagerY.Instance.PlaySFX("bop");
            SoundManagerY.Instance.PlayMusic("gamebackground");
        }

        pauseMenuUI.SetActive(false);
        confirmMenuUI.SetActive(false);

        Time.timeScale = 1f;
        isPaused = false;
    }

    public void Pause()
    {
        Debug.Log("PAUSE appelée");

        if (SoundManagerY.Instance != null)
        {
            Debug.Log("Je lance pausemenu + bop");
            SoundManagerY.Instance.PlaySFX("bop");
            SoundManagerY.Instance.PlayMusic("pausemenu");
        }
        else
        {
            Debug.LogWarning("SoundManagerY.Instance est NULL");
        }

        pauseMenuUI.SetActive(true);
        Time.timeScale = 0f;
        isPaused = true;
    }

    public void AskQuit()
    {
        if (SoundManagerY.Instance != null)
        {
            SoundManagerY.Instance.PlaySFX("bop");
        }

        actionToConfirm = ActionType.Quit;

        confirmMenuUI.SetActive(true);
    }

    public void AskMainMenu()
    {
        if (SoundManagerY.Instance != null)
        {
            SoundManagerY.Instance.PlaySFX("bop");
        }

        actionToConfirm = ActionType.MainMenu;

        confirmMenuUI.SetActive(true);
    }

    public void ConfirmYes()
    {
        if (SoundManagerY.Instance != null)
        {
            SoundManagerY.Instance.PlaySFX("bop");
        }

        Time.timeScale = 1f;

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
        if (SoundManagerY.Instance != null)
        {
            SoundManagerY.Instance.PlaySFX("bop");
        }

        CloseConfirmMenu();
    }

    private void CloseConfirmMenu()
    {
        confirmMenuUI.SetActive(false);

        actionToConfirm = ActionType.None;
    }
}