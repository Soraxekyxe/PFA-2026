using System;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;

public class HarassmentManager : MonoBehaviour
{
    [Header("System")]
    [SerializeField] HarassementState harrasmentState;
    [SerializeField] FlowerHarras flowerHarras;

    void Start()
    {
        // Met la croissance de la fleur à 1
        harrasmentState.FlowerGrow = 1;
    }
    
    // ----------- Modifie les etats ----------- //
    
    // Change l'etat du harcelement
    public void HarrasementInDays()
    {
        // L'etat change en fonction de la croissance de la fleur et seulement si elle est déja dans son etat Heathly
        // (en gros la fleur redevient harceler seulement quand elle est soigner)
        
        if (harrasmentState.FlowerGrow == 1)
        {
            harrasmentState.currentState = HarassementState.State.TrampledSoil;
            Debug.Log("nouvelle état :" + harrasmentState.currentState);
        }

        else if (harrasmentState.FlowerGrow == 2 && harrasmentState.currentState == HarassementState.State.Healthy)
        {
            harrasmentState.currentState = HarassementState.State.MissingFertilizer;
            Debug.Log("nouvelle état :" + harrasmentState.currentState);
        }

        else if (harrasmentState.FlowerGrow == 3 && harrasmentState.currentState == HarassementState.State.Healthy)
        {
            harrasmentState.currentState = HarassementState.State.SeedEat;
            Debug.Log("nouvelle état :" + harrasmentState.currentState);
        }

        else if (harrasmentState.FlowerGrow == 4 && harrasmentState.currentState == HarassementState.State.Healthy)
        {
            harrasmentState.currentState = HarassementState.State.DrinkWater;
            Debug.Log("nouvelle état :" + harrasmentState.currentState);
        }

        else if (harrasmentState.FlowerGrow == 5 && harrasmentState.currentState == HarassementState.State.Healthy )
        {
            harrasmentState.currentState = HarassementState.State.Feather;
            Debug.Log("nouvelle état :" + harrasmentState.currentState);
        }

        else if (harrasmentState.FlowerGrow == 6 && harrasmentState.currentState == HarassementState.State.Healthy)
        {
            harrasmentState.currentState = HarassementState.State.Shadow;
            Debug.Log("nouvelle état :" + harrasmentState.currentState);
        }
        
        else if (harrasmentState.FlowerGrow == 7 && harrasmentState.currentState == HarassementState.State.Healthy)
        {
            harrasmentState.currentState = HarassementState.State.FlowerEat;
            Debug.Log("nouvelle état :" + harrasmentState.currentState);
        }
        
        // Lance la fonction qui change le sprite de la fleur
        flowerHarras.UpdateSprite();
    }

    // Change l'etat de la fleur en fonction de sa croissance (FlowerGrow)
    public void HeatlHarrasemen()
    {
        // Change l'etat de la fleur en fonction de son etat de harcelement
        harrasmentState.currentState = HarassementState.State.Healthy;
        Debug.Log("nouvelle état :" + harrasmentState.currentState);

        if (harrasmentState.FlowerGrow == 1)
        {
            harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.FlattenedSoil;
            Debug.Log("nouvelle état :" + harrasmentState.currentFlowerHeatlyState);
        }
        
        else if (harrasmentState.FlowerGrow == 2)
        {
            harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.Fertilizer;
            Debug.Log("nouvelle état :" + harrasmentState.currentFlowerHeatlyState);
        }
        
        else if (harrasmentState.FlowerGrow == 3)
        {
            harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.WellPreparedSoil;
            Debug.Log("nouvelle état :" + harrasmentState.currentFlowerHeatlyState);
        }
        
        else if (harrasmentState.FlowerGrow == 4)
        {
            harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.FlowerShoot;
            Debug.Log("nouvelle état :" + harrasmentState.currentFlowerHeatlyState);
        }
        
        else if (harrasmentState.FlowerGrow == 5)
        {
            harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.DeadLeaf;
            Debug.Log("nouvelle état :" + harrasmentState.currentFlowerHeatlyState);
        }
        
        else if (harrasmentState.FlowerGrow == 6)
        {
            harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.Bud;
            Debug.Log("nouvelle état :" + harrasmentState.currentFlowerHeatlyState);
        }
        
        else if (harrasmentState.FlowerGrow == 7)
        {
            harrasmentState.currentFlowerHeatlyState = HarassementState.FlowerHeatlyState.Flower;
            Debug.Log("nouvelle état :" + harrasmentState.currentFlowerHeatlyState);
        }
        
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
