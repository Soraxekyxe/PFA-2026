using UnityEngine;

public class Crow : MonoBehaviour
{
    [Header("Animation")] 
    public Animator crowAnimation;
    
    
    [Header("State")]
    public bool crowDig {private set; get;}
    public bool crowEatSeed {private set; get;}
    public bool crowEatLeaf {set; private get;}
    public bool crowShadow {set; private get;}
    public bool crowDrink  {set; private get;}
    
    //=== Creuser la terre ===//
    public void DiggingInTheSoil()
    {
        crowAnimation.SetBool("IsDig", true);
        crowDig = true;
    }

    public void StopDiggingInTheSoil()
    {
        crowAnimation.SetBool("IsDig", false);
        crowDig = false;
    }
    
    //=== Manger les graines ===//
    
    public void EatSeed()
    {
        crowEatSeed = true;
    }
    
    //=== Manger les feuilles ===/
    
    public void EatLeaf()
    {
        crowEatLeaf = true;
    }
    
    //=== Faire de l'ombre ===//
    public void MakeShadow()
    {
        crowShadow = true;
    }
    
    //=== Boire l'eau ===//
    public void DrinkWater()
    {
        crowDrink = true;
    }
}
