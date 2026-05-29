using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class FinalScreenManager : MonoBehaviour
{
    public RawImage screenshotImage;
    public GameObject finalUI;
    public TextMeshProUGUI messageFinal;
    public TextMeshProUGUI questionText;

    public string sceneGame = "SceneGame";
    public string sceneMenu = "MainMenu";

    private bool uiHidden = false;

    void Start()
    {
        Time.timeScale = 1f;

        if (screenshotImage != null)
        {
            screenshotImage.texture = EndGameScreenshotStore.screenshot;
            screenshotImage.raycastTarget = false;
        }

        if (finalUI != null)
            finalUI.SetActive(true);

        if (questionText != null)
            questionText.text = "Voulez-vous recommencer ?";

        if (messageFinal != null)
            messageFinal.text = GetMessageFinal(EndGameScreenshotStore.finalFlowerState);
    }

    string GetMessageFinal(HarassementState.HarassmentVisualState state)
    {
        if (state <= HarassementState.HarassmentVisualState.SoilWithFertilizer)
        {
            SoundManagerY.Instance.PlayMusic("Bad Ending");
            return "Votre jardin semble magnifique au premier regard…\n" +
                   "Pourtant, une petite fleur a eu du mal à s’épanouir, isolée face aux corbeaux...\n\n" +
                   "Parfois, on ne remarque pas immédiatement qu’une personne a besoin d’aide.\n" +
                   "Et parfois, un simple soutien peut faire toute la différence !\n\n" +
                   "Rien n’est perdu !\n" +
                   "Ensemble, vous pouvez recommencer… et aider chaque fleur à éclore pleinement !";
            
            
        }

        if (state < HarassementState.HarassmentVisualState.FlowerWithoutDeadLeaves)
        {
            SoundManagerY.Instance.PlayMusic("Neutral Ending");
            return "Votre jardin est beau, et surtout… vous avez essayé d’aider !\n\n" +
                   "Certaines fleurs ont reçu plus d’attention que d’autres, mais même les petites actions peuvent avoir un impact immense sur quelqu’un en difficulté.\n\n" +
                   "Peut-être qu’avec un peu plus de coopération, votre jardin pourrait devenir encore plus harmonieux !";
            
        }
        
        else
        {
            SoundManagerY.Instance.PlayMusic("Happy Ending");
            return "Incroyable… votre jardin est magnifique.\n" +
                   "Chaque fleur a pu grandir entourée des autres, même lorsque les corbeaux tentaient d’en embêter une !\n\n" +
                   "Vous avez choisi de vous entraider, de partager votre temps et votre énergie, c’est une excellente chose !\n" +
                   "Grâce à vous, aucune fleur n’a été laissée de côté.\n\n" +
                   "Un simple geste peut parfois tout changer !"; 
        }
    }

    public void Recommencer()
    {
        // Son du bouton
        SoundManagerY.Instance.PlaySFX("Bop5");
        SceneManager.LoadScene(sceneGame);
    }

    public void RetourMenu()
    {
        // Son du bouton
        SoundManagerY.Instance.PlaySFX("Bop5");
        SceneManager.LoadScene(sceneMenu);
    }

    public void MasquerUI()
    {
        // Son du bouton
        SoundManagerY.Instance.PlaySFX("Bop5");
        uiHidden = true;
        finalUI.SetActive(false);
    }

    void Update()
    {
        if (uiHidden && Input.GetMouseButtonDown(0))
        {
            uiHidden = false;
            finalUI.SetActive(true);
        }
    }
}