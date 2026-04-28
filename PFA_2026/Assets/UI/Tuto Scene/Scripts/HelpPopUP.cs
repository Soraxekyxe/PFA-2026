using UnityEngine;

public class HelpPopup : MonoBehaviour
{
    [SerializeField] private GameObject helpPanel;

    private bool isOpen = false;

    public void ToggleHelp()
    {
        isOpen = !isOpen;
        helpPanel.SetActive(isOpen);
    }
}