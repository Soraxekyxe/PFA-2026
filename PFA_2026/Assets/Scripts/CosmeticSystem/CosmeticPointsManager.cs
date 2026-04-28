using UnityEngine;
using TMPro;
using System.Collections;

public class CosmeticPointsManager : MonoBehaviour
{
    public static CosmeticPointsManager Instance;

    [Header("UI")]
    public TextMeshProUGUI scoreText;
    public TextMeshProUGUI scoreText2;
    public TextMeshProUGUI feedbackText;
    

    private int points = 0;

    void Awake()
    {
        Instance = this;
        Debug.Log("✅ CosmeticPointsManager initialisé");
    }

    void Start()
    {
        UpdateUI();
        feedbackText.gameObject.SetActive(false);
    }

    void UpdateUI()
    {
        scoreText.text = points.ToString();
        scoreText2.text = points.ToString();
    }

    // Ajouter des points
    public void AddPoints(int amount)
    {
        points += amount;
        UpdateUI();

        StartCoroutine(ShowFeedback("+" + amount + " points"));
    }

    // Dépenser des points
    public bool SpendPoints(int amount)
    {
        if (points < amount)
            return false;

        points -= amount;
        UpdateUI();
        return true;
    }

    // Affichage du texte "+2 points"
    IEnumerator ShowFeedback(string message)
    {
        feedbackText.text = message;
        feedbackText.gameObject.SetActive(true);

        yield return new WaitForSeconds(1.5f);

        feedbackText.gameObject.SetActive(false);
    }
    
    public int GetPoints()
    {
        return points;
    }
}