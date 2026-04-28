using UnityEngine;
using UnityEngine.SceneManagement;

namespace Tuto.UI
{
    [CreateAssetMenu(fileName = "New CarouselEntry", menuName = "UI/Carousel Entry", order = 0)]

    public class CarouselEntry : ScriptableObject
    {
        
        [field: SerializeField] public Sprite EntryGraphic { get; private set; }
        [field: SerializeField] public string Headline  { get; private set; }
        [field: SerializeField, Multiline(10)] public string Description { get; private set; }

        [Header("Interaction")] [SerializeField]
        private string levelNameToload;

        public void Interact()
        {
            SceneManager.LoadScene(levelNameToload);
        }
    }
    
}
