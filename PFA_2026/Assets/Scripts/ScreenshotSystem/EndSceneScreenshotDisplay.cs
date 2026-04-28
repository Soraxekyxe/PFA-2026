using UnityEngine;
using UnityEngine.UI;

public class EndSceneScreenshotDisplay : MonoBehaviour
{
    public RawImage imageAffichage;

    void Start()
    {
        if (imageAffichage == null)
        {
            Debug.LogError("imageAffichage non assigné.");
            return;
        }

        if (EndGameScreenshotStore.screenshot == null)
        {
            Debug.LogError("Pas de capture trouvée.");
            return;
        }

        imageAffichage.texture = EndGameScreenshotStore.screenshot;
        imageAffichage.color = Color.white;
        imageAffichage.material = null;

        Debug.Log("Capture affichée correctement.");
    }
}