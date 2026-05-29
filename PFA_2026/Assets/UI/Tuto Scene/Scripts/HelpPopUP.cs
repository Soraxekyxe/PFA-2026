using UnityEngine;

public class HelpPopup : MonoBehaviour
{
    [SerializeField] private GameObject helpPanel;

    private bool isOpen = false;

    public void ToggleHelp()
    {
        SoundManagerY.Instance.PlaySFX("Bop6");
        isOpen = !isOpen;
        helpPanel.SetActive(isOpen);
    }
}