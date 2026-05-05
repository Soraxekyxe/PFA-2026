using Ami.BroAudio;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    [Header("Audio")] 
    [SerializeField] private SoundID UI;

    public void UISoundPlay()
    {
        BroAudio.Play(UI);
    }
}
