using System;
using Ami.BroAudio;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    [Header("UI")] 
    public SoundID UI;
    public SoundID Letter;
    public SoundID AddPoint;
    public SoundID LossPoint;
    

    [Header("Music actuel")] 
    private SoundID CurrentMusic;

    [Header("Music")] 
    public SoundID MainMenu;
    public SoundID Background;
    public SoundID PauseMenu;

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

    public void UISoundPlay(SoundID ui)
    {
        BroAudio.Play(ui);
    }

    public void Music(SoundID music)
    {
        
        if (music.Equals(CurrentMusic))
            return;

        CurrentMusic = music;

        BroAudio.Play(music);

    }
}
