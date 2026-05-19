using UnityEngine;

public class HelpPopup : MonoBehaviour
{
    [SerializeField] private GameObject helpPanel;
    [SerializeField] private SoundManager soundManager;

    private bool isOpen = false;

    public void ToggleHelp()
    {
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        isOpen = !isOpen;
        helpPanel.SetActive(isOpen);
    }
}