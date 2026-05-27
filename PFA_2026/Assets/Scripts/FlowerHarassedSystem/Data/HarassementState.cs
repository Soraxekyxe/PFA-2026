using UnityEngine;

[CreateAssetMenu(fileName = "HarassementState", menuName = "Scriptable Objects/HarassementState")]
public class HarassementState : ScriptableObject
{
    [Header("Ancien Sprite Harassment")]
    public Sprite[] trampledSoil;
    public Sprite[] missingFertilizer;
    public Sprite[] seedEat;
    public Sprite[] drinkWater;
    public Sprite[] feather;
    public Sprite[] shadow;
    public Sprite[] flowerEat;

    [Header("Sprite Healthy")]
    public Sprite flattenedSoil;
    public Sprite fertilizer;
    public Sprite wellPreparedSoil;
    public Sprite flowerShoot;
    public Sprite deadLeaf;
    public Sprite bud;
    public Sprite flower;

    [Header("Grow")]
    [Range(1, 7)]
    public int FlowerGrow;

    [Header("Vie")]
    public int MaxHealth = 100;
    public int CurrentHealth;

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

    public State currentState;

    public Sprite StateSprite(State allState, int spriteIndex)
    {
        switch (allState)
        {
            case State.TrampledSoil: return GetSpriteFromArray(trampledSoil, spriteIndex);
            case State.MissingFertilizer: return GetSpriteFromArray(missingFertilizer, spriteIndex);
            case State.SeedEat: return GetSpriteFromArray(seedEat, spriteIndex);
            case State.DrinkWater: return GetSpriteFromArray(drinkWater, spriteIndex);
            case State.Feather: return GetSpriteFromArray(feather, spriteIndex);
            case State.Shadow: return GetSpriteFromArray(shadow, spriteIndex);
            case State.FlowerEat: return GetSpriteFromArray(flowerEat, spriteIndex);
            default: return null;
        }
    }

    private Sprite GetSpriteFromArray(Sprite[] sprites, int index)
    {
        if (sprites == null || sprites.Length == 0)
        {
            Debug.LogWarning("Aucun sprite assigné pour cet état !");
            return null;
        }

        index = Mathf.Clamp(index, 0, sprites.Length - 1);
        return sprites[index];
    }

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

    public FlowerHeatlyState currentFlowerHeatlyState;

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
        }
    }

    // ---------------- NOUVEAU SYSTEME VISUEL FLEUR ISOLEE ----------------

    public enum HarassmentVisualState
    {
        TrampledSoil,
        RakedSoil,
        DugSoil,

        MissingFertilizer,
        SoilWithFertilizer,

        MissingSeed,
        SoilWithSeed,
        CoveredSoil,

        MissingWater,
        WateredSoil,

        FeatherFlower,
        FlowerWithDeadLeaves,
        FlowerWithoutDeadLeaves,

        ShadowFlower,
        FlowerWithoutShadow,
        FlowerWithReflectivePanel,

        EatenPetals,
        NeedMagic,
        FullyGrownFlower,
        FlowerWithLadybug
    }

    [Header("Nouveaux sprites fleur isolée")]
    public Sprite trampledSoilVisual;
    public Sprite rakedSoilVisual;
    public Sprite dugSoilVisual;

    public Sprite missingFertilizerVisual;
    public Sprite soilWithFertilizerVisual;

    public Sprite missingSeedVisual;
    public Sprite soilWithSeedVisual;
    public Sprite coveredSoilVisual;

    public Sprite missingWaterVisual;
    public Sprite wateredSoilVisual;

    public Sprite featherFlowerVisual;
    public Sprite flowerWithDeadLeavesVisual;
    public Sprite flowerWithoutDeadLeavesVisual;

    public Sprite shadowFlowerVisual;
    public Sprite flowerWithoutShadowVisual;
    public Sprite flowerWithReflectivePanelVisual;

    public Sprite eatenPetalsVisual;
    public Sprite needMagicVisual;
    public Sprite fullyGrownFlowerVisual;
    public Sprite flowerWithLadybugVisual;

    public HarassmentVisualState currentHarassmentVisualState;

    public Sprite GetHarassmentVisualSprite(HarassmentVisualState state)
    {
        switch (state)
        {
            case HarassmentVisualState.TrampledSoil: return trampledSoilVisual;
            case HarassmentVisualState.RakedSoil: return rakedSoilVisual;
            case HarassmentVisualState.DugSoil: return dugSoilVisual;

            case HarassmentVisualState.MissingFertilizer: return missingFertilizerVisual;
            case HarassmentVisualState.SoilWithFertilizer: return soilWithFertilizerVisual;

            case HarassmentVisualState.MissingSeed: return missingSeedVisual;
            case HarassmentVisualState.SoilWithSeed: return soilWithSeedVisual;
            case HarassmentVisualState.CoveredSoil: return coveredSoilVisual;

            case HarassmentVisualState.MissingWater: return missingWaterVisual;
            case HarassmentVisualState.WateredSoil: return wateredSoilVisual;

            case HarassmentVisualState.FeatherFlower: return featherFlowerVisual;
            case HarassmentVisualState.FlowerWithDeadLeaves: return flowerWithDeadLeavesVisual;
            case HarassmentVisualState.FlowerWithoutDeadLeaves: return flowerWithoutDeadLeavesVisual;

            case HarassmentVisualState.ShadowFlower: return shadowFlowerVisual;
            case HarassmentVisualState.FlowerWithoutShadow: return flowerWithoutShadowVisual;
            case HarassmentVisualState.FlowerWithReflectivePanel: return flowerWithReflectivePanelVisual;

            case HarassmentVisualState.EatenPetals: return eatenPetalsVisual;
            case HarassmentVisualState.NeedMagic: return needMagicVisual;
            case HarassmentVisualState.FullyGrownFlower: return fullyGrownFlowerVisual;
            case HarassmentVisualState.FlowerWithLadybug: return flowerWithLadybugVisual;

            default: return trampledSoilVisual;
        }
    }
}