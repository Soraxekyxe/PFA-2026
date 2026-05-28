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

    [Header("Sounds")]
    [SerializeField] private List<Sound> sounds = new List<Sound>();

    [Header("Start Music")]
    [SerializeField] private string startMusicId = "background";

    private Dictionary<string, Sound> soundDictionary;
    

    private void Awake()
    {
        if (Instance != null)
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
        Debug.Log("promis je me lance");

        if (!string.IsNullOrWhiteSpace(startMusicId))
        {
            Debug.Log("je marche pas aaah : " + startMusicId);

            PlayMusic(startMusicId);
        }
    }

    private void BuildDictionary()
    {
        soundDictionary = new Dictionary<string, Sound>();

        foreach (Sound sound in sounds)
        {
            if (string.IsNullOrWhiteSpace(sound.id))
            {
                Debug.LogWarning("Un son n'a pas d'id.");
                continue;
            }

            if (sound.clip == null)
            {
                Debug.LogWarning($"Le son '{sound.id}' n'a pas de clip.");
                continue;
            }

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
        Debug.Log("playsfx appelé wsh : " + id);
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
            Debug.LogWarning("SFX Source non assignée dans l'Inspector.");
            return;
        }

        sfxSource.PlayOneShot(sound.clip, sound.volume);
    }

    public void PlayMusic(string id)
    {
        Debug.Log("PlayMusic appelée avec : " + id);
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
            Debug.LogWarning("Music Source non assignée dans l'Inspector.");
            return;
        }

        if (musicSource.clip == sound.clip && musicSource.isPlaying)
        {
            return;
        }

        musicSource.Stop();

        musicSource.clip = sound.clip;
        musicSource.volume = sound.volume;
        musicSource.loop = true;

        musicSource.Play();
    }

    public void StopMusic()
    {
        if (musicSource != null)
        {
            musicSource.Stop();
        }
    }
}