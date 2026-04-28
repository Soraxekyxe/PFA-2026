using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "HarassementState", menuName = "Scriptable Objects/HarassementState")]
public class HarassementState : ScriptableObject
{
    [Header("Sprite Harassment")] public Sprite trampledSoil;
    public Sprite missingFertilizer;
    public Sprite seedEat;
    public Sprite drinkWater;
    public Sprite feather;
    public Sprite shadow;
    public Sprite flowerEat;
    
    [Header("Sprite Healthy")] public Sprite flattenedSoil;
    public Sprite fertilizer;
    public Sprite wellPreparedSoil;
    public Sprite flowerShoot;
    public Sprite deadLeaf;
    public Sprite bud;
    public Sprite flower;

    [Header("Grow")]
    // Niveau de croissance de la fleur ce qui change le sprite de la fleur (exp : 1 = fleur planter, 2 = fleur en bourgeon)
    [Range(1, 7)]
    public int FlowerGrow;


    // ----------- Etat du harcelement ----------- //

    // Liste des Etats
    public enum State
    {
        Healthy,
        TrampledSoil,
        MissingFertilizer,
        SeedEat,
        DrinkWater,
        Feather,
        Shadow,
        FlowerEat,
    }

    // Ici on relie les sprite à la liste des etats
    public Sprite StateSprite(State allState)
    {
        switch (allState)
        {
            case State.TrampledSoil: return trampledSoil;
            case State.MissingFertilizer: return missingFertilizer;
            case State.SeedEat: return seedEat;
            case State.DrinkWater: return drinkWater;
            case State.Feather: return feather;
            case State.Shadow: return shadow;
            case State.FlowerEat: return flowerEat;
            default: return null;

        }
    }

    // Liste de sprite
    public Sprite[] AllStateSprite()
    {
        return new[]
        {
            trampledSoil,
            missingFertilizer,
            seedEat,
            drinkWater,
            feather,
            shadow,
            flowerEat
        };
    }

    // ----------- Stade de croissance de la fleur ----------- //
    
    // Liste des Etats
    public enum FlowerHeatlyState
    {
        FlattenedSoil,
        Fertilizer,
        WellPreparedSoil,
        FlowerShoot,
        DeadLeaf,
        Bud,
        Flower
    }
    
    // Liste de sprite  
    public Sprite[] AllFlowerSprites()
    {
        return new[]
        {
            flattenedSoil,
            fertilizer,
            wellPreparedSoil,
            flowerShoot,
            deadLeaf,
            bud,
            flower
        };
    }
    
    // Ici on relie les sprite à la liste des etats
    public Sprite FlowerHeatlySprite(FlowerHeatlyState state)
    {
        switch (state)
        {
            case FlowerHeatlyState.FlattenedSoil: return flattenedSoil;
            case FlowerHeatlyState.Fertilizer: return fertilizer;
            case FlowerHeatlyState.WellPreparedSoil: return wellPreparedSoil;
            case FlowerHeatlyState.FlowerShoot: return flowerShoot;
            case FlowerHeatlyState.DeadLeaf: return deadLeaf;
            case FlowerHeatlyState.Bud: return bud;
            case FlowerHeatlyState.Flower: return flower;
            default: return null;
        };
    }
    
    // ----------- Indique l'etat actuel de la fleur ----------- //
    
    // Etat actuel de la fleur harceler
    public State currentState;
    
    // Etat actuel de la fleur lorsquelle est soigner
    public FlowerHeatlyState currentFlowerHeatlyState;
}
