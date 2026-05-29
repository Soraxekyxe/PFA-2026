using System;
using System.Collections.Generic;
using UnityEngine;

public enum SoundCategory
{
    Music,
    SFX
}

[Serializable]
public class Sound
{
    public string id;
    public SoundCategory category;
    public AudioClip clip;

    [Range(0f, 1f)]
    public float volume = 1f;
}

public class SoundManagerY : MonoBehaviour
{
    public static SoundManagerY Instance;

    [Header("Audio Sources")]
    [SerializeField] private AudioSource musicSource;
    [SerializeField] private AudioSource sfxSource;

    [Header("Master Volumes")]
    [SerializeField, Range(0f, 1f)] private float musicMasterVolume = 0.25f;
    [SerializeField, Range(0f, 1f)] private float sfxMasterVolume = 1f;

    [Header("Sounds")]
    [SerializeField] private List<Sound> sounds = new List<Sound>();

    public IReadOnlyList<Sound> Sounds => sounds;

    [Header("Start Music")]
    [SerializeField] private string startMusicId = "background";

    private Dictionary<string, Sound> soundDictionary;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);

        BuildDictionary();
    }

    private void Start()
    {
        if (!string.IsNullOrWhiteSpace(startMusicId))
        {
            PlayMusic(startMusicId);
        }
    }

    private void BuildDictionary()
    {
        soundDictionary = new Dictionary<string, Sound>();

        foreach (Sound sound in sounds)
        {
            if (sound == null || string.IsNullOrWhiteSpace(sound.id) || sound.clip == null)
                continue;

            if (soundDictionary.ContainsKey(sound.id))
            {
                Debug.LogWarning($"L'id '{sound.id}' existe déjà.");
                continue;
            }

            soundDictionary.Add(sound.id, sound);
        }
    }

    public void PlaySFX(string id)
    {
        if (!soundDictionary.TryGetValue(id, out Sound sound))
        {
            Debug.LogWarning($"SFX introuvable : {id}");
            return;
        }

        if (sound.category != SoundCategory.SFX)
        {
            Debug.LogWarning($"Le son '{id}' n'est pas un SFX.");
            return;
        }

        if (sfxSource == null)
        {
            Debug.LogWarning("SFX Source non assignée.");
            return;
        }

        sfxSource.PlayOneShot(sound.clip, sound.volume * sfxMasterVolume);
    }

    public void PlayMusic(string id)
    {
        if (!soundDictionary.TryGetValue(id, out Sound sound))
        {
            Debug.LogWarning($"Musique introuvable : {id}");
            return;
        }

        if (sound.category != SoundCategory.Music)
        {
            Debug.LogWarning($"Le son '{id}' n'est pas une musique.");
            return;
        }

        if (musicSource == null)
        {
            Debug.LogWarning("Music Source non assignée.");
            return;
        }

        if (musicSource.clip == sound.clip && musicSource.isPlaying)
            return;

        musicSource.Stop();

        musicSource.clip = sound.clip;
        musicSource.volume = sound.volume * musicMasterVolume;
        musicSource.loop = true;

        musicSource.Play();
    }

    public void StopMusic()
    {
        if (musicSource != null)
            musicSource.Stop();
    }
}