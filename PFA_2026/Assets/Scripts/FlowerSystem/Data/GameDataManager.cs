using UnityEngine;
using System.Collections.Generic;

public class GameDataManager : MonoBehaviour
{
    public static GameDataManager Instance;

    public List<FlowerData> flowers = new List<FlowerData>();
    public string gardenName;
    public int numberOfPlayers;

    void Awake()
    {
        // Singleton (1 seul manager)
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
            LoadData();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    void LoadData()
    {
        numberOfPlayers = PlayerPrefs.GetInt("NombreJoueurs", 1);
        gardenName = PlayerPrefs.GetString("NomJardin", "Jardin");

        flowers.Clear();

        for (int i = 0; i < numberOfPlayers; i++)
        {
            int type = PlayerPrefs.GetInt("Joueur_" + i + "_TypeFleur", 0);
            string name = PlayerPrefs.GetString("Joueur_" + i + "_NomFleur", "Fleur");

            FlowerData flower = new FlowerData(i + 1, type, name);
            flowers.Add(flower);
        }
    }
}