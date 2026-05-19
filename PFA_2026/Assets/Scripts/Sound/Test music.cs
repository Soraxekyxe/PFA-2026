using UnityEngine;

public class Testmusic : MonoBehaviour
{
    public void Music1()
    {
        SoundManager.instance.Music(SoundManager.instance.Background);
    }

    public void Music2()
    {
        SoundManager.instance.Music(SoundManager.instance.PauseMenu);
    }
}
