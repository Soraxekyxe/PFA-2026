using System;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.Rendering;

public class HarassmentManager : MonoBehaviour
{
    [Header("System")]
    [SerializeField] HarassementState harrasmentState;
    [SerializeField] FlowerHarras flowerHarras;

    void Start()
    {
        // Met la croissance de la fleur à 1
        harrasmentState.FlowerGrow = 1;
        harrasmentState.CurrentHealth = harrasmentState.MaxHealth;
    }
    
    // ----------- Modifie les etats ----------- //
    
    // Change l'etat du harcelement
    public void HarrasementInDays()
    {
        // L'etat change en fonction de la croissance de la fleur et seulement si elle est déja dans son etat Heathly
        // (en gros la fleur redevient harceler seulement quand elle est soigner)

        harrasmentState.CurrentHealth = 0;
        Debug.Log("vie :"  + harrasmentState.CurrentHealth);
        
        bool isHealthy = harrasmentState.currentState == HarassementState.State.Healthy;

        switch (harrasmentState.FlowerGrow)
        {
            case 1:
                harrasmentState.currentState = HarassementState.State.TrampledSoil;
                break;
            case 2:
                if (isHealthy) harrasmentState.currentState = HarassementState.State.MissingFertilizer;
                break;
            case 3:
                if (isHealthy) harrasmentState.currentState = HarassementState.State.SeedEat;
                break;
            case 4:
                if (isHealthy) harrasmentState.currentState = HarassementState.State.DrinkWater;
                break;
            case 5:
                if (isHealthy) harrasmentState.currentState = HarassementState.State.Feather;
                break;
            case 6:
                if (isHealthy) harrasmentState.currentState = HarassementState.State.Shadow;
                break;
            case 7:
                if (isHealthy) harrasmentState.currentState = HarassementState.State.FlowerEat;
                break;
        }
        Debug.Log("nouvelle état :" + harrasmentState.currentState);
    }

    
    void SetStateAndSprite(HarassementState.State state, int spriteIndex)
    {
        // on change l'état
        harrasmentState.currentState = state;

        Debug.Log("Nouvel état : " + state);
        Debug.Log("Sprite index : " + spriteIndex);

        // on envoie au script visuel
        flowerHarras.UpdateSprite(state, spriteIndex);
    }

    // Change l'etat de la fleur en fonction de sa croissance (FlowerGrow)
    public void HeatlHarrasemen()
    {
        // Change l'etat de la fleur en fonction de son etat de harcelement
        harrasmentState.currentState = HarassementState.State.Healthy;
        Debug.Log("nouvelle état :" + harrasmentState.currentState);
        
        if (harrasmentState.currentState == HarassementState.State.Healthy)

        switch (harrasmentState.FlowerGrow)
        {
            case 1:
                harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.FlattenedSoil;
                break;
            case 2:
                harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.Fertilizer;
                break;
            case 3:
                harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.WellPreparedSoil;
                break;
            case 4 :
                harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.FlowerShoot;
                break;
            case 5 :
                harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.DeadLeaf;
                break;
            case 6 :
                harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.Bud;
                break;
            case 7 :
                harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.Flower;
                break;
        }
        Debug.Log("nouvelle état :" + harrasmentState.currentFlowerHeatlyState);
        
        // Lance la fonction qui change le sprite de la fleur
        flowerHarras.UpdateHealthySprite();
    }
    
    // Augment la croissance de la fleur
    public void GrowingFlower()
    {
        // Si la fleur est soigner alors elle augment son FlowerGrow (indique le stade de croissance de la fleur, ce qui influe sur son sprite actuel)
        if (harrasmentState.currentState == HarassementState.State.Healthy)
        {
            harrasmentState.FlowerGrow++;
            Debug.Log("Grow="  + harrasmentState.FlowerGrow);
        }
    }
}
