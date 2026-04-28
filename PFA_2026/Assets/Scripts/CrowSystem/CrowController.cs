using UnityEngine;

public class CrowController : MonoBehaviour
{
    public Crow crow;
    
    public void DigSoil()
    {
        crow.DiggingInTheSoil();
    }

    public void StopDigSoil()
    {
        crow.StopDiggingInTheSoil();
    }
}
