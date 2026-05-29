using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuCarousel : MonoBehaviour
{
    [Header("Nom de la scène")]
    public string nameSceneNumber = "NumberOfPlayerScene";
    

    //lance la scene
    public void LoadNumberOfPlayerScene()
    {
        SoundManagerY.Instance.PlaySFX("Bop7");
        SceneManager.LoadScene(nameSceneNumber);
    }
}
