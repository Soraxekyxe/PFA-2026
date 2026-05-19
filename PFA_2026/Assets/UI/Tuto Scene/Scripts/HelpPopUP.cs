using UnityEngine;

public class HelpPopup : MonoBehaviour
{
    [SerializeField] private GameObject helpPanel;
    [SerializeField] private SoundManager soundManager;

    private bool isOpen = false;

    public void ToggleHelp()
    {
        soundManager.UISoundPlay();
        isOpen = !isOpen;
        helpPanel.SetActive(isOpen);
    }
}