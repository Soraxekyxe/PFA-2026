using System;
using Ami.BroAudio;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    [Header("UI")] 
    [SerializeField] private SoundID UI;

    [Header("Music")] 
    [SerializeField] private SoundID Background;
    [SerializeField] private SoundID PauseMenu;

    public static SoundManager instance;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void UISoundPlay()
    {
        BroAudio.Play(UI);
    }

    public void Music()
    {
        BroAudio.Play(Background);
        BroAudio.Play(PauseMenu);
    }
}
