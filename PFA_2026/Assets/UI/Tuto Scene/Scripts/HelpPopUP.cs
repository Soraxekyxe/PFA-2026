using UnityEngine;

public class HelpPopup : MonoBehaviour
{
    [SerializeField] private GameObject helpPanel;

    private bool isOpen = false;

    public void ToggleHelp()
    {
        if(SoundManager.instance != null)
        SoundManager.instance.UISoundPlay(SoundManager.instance.UI);
        
        isOpen = !isOpen;
        helpPanel.SetActive(isOpen);
    }
}