using System.Collections;
using UnityEngine;

public class SceneAudioPreloader : MonoBehaviour
{
    [SerializeField] private bool preloadMusic = false;
    [SerializeField] private bool preloadSFX = true;
    [SerializeField] private bool waitUntilLoaded = true;

    private IEnumerator Start()
    {
        if (SoundManagerY.Instance == null)
        {
            Debug.LogWarning("SoundManagerY introuvable.");
            yield break;
        }

        foreach (Sound sound in SoundManagerY.Instance.Sounds)
        {
            if (sound == null || sound.clip == null)
                continue;

            if (sound.category == SoundCategory.Music && !preloadMusic)
                continue;

            if (sound.category == SoundCategory.SFX && !preloadSFX)
                continue;

            sound.clip.LoadAudioData();

            if (waitUntilLoaded)
            {
                while (sound.clip.loadState == AudioDataLoadState.Loading)
                    yield return null;
            }
        }

        Debug.Log("tout les sons sont chargés lekip");
    }
}