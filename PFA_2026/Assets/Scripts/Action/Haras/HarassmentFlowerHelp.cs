using UnityEngine;


public class HarassmentFlowerHelp : MonoBehaviour
{
    private int progressIndex = 0;

    private struct HelpStep
    {
        public HarassmentHelpActionType actionType;
        public int unlockDay;

        public HelpStep(HarassmentHelpActionType actionType, int unlockDay)
        {
            this.actionType = actionType;
            this.unlockDay = unlockDay;
        }
    }

    private HelpStep[] steps =
    {
        new HelpStep(HarassmentHelpActionType.RakeSoil, 1),
        new HelpStep(HarassmentHelpActionType.DigSoil, 1),

        new HelpStep(HarassmentHelpActionType.AddFertilizer, 2),

        new HelpStep(HarassmentHelpActionType.PlantSeeds, 3),
        new HelpStep(HarassmentHelpActionType.CoverSoil, 3),

        new HelpStep(HarassmentHelpActionType.Water, 4),

        new HelpStep(HarassmentHelpActionType.RemoveFeathers, 5),
        new HelpStep(HarassmentHelpActionType.RemoveDeadLeaves, 5),

        new HelpStep(HarassmentHelpActionType.Sweep, 6),
        new HelpStep(HarassmentHelpActionType.AddReflectivePanels, 6),

        new HelpStep(HarassmentHelpActionType.RemoveEatenPetals, 7),
        new HelpStep(HarassmentHelpActionType.AddMagicPowder, 7),
        new HelpStep(HarassmentHelpActionType.AddLadybugs, 7)
    };

    public bool IsFinished()
    {
        return progressIndex >= steps.Length;
    }

    public bool HasActionAvailable(int currentDay)
    {
        if (IsFinished())
            return false;

        return currentDay >= playableHelpDay
               && steps[progressIndex].unlockDay == playableHelpDay;
    }

    public HarassmentHelpActionType GetNextRequiredAction()
    {
        if (IsFinished())
            return HarassmentHelpActionType.RakeSoil;

        return steps[progressIndex].actionType;
    }

    public bool CanDoAction(HarassmentHelpActionType actionType, int currentDay)
    {
        if (!HasActionAvailable(currentDay))
            return false;

        return steps[progressIndex].actionType == actionType;
    }

    public bool PerformAction(HarassmentHelpActionType actionType, int currentDay)
    {
        if (!CanDoAction(actionType, currentDay))
            return false;

        progressIndex++;
        return true;
    }
    
    public void AdvanceHelpDay()
    {
        if (IsFinished())
            return;

        if (steps[progressIndex].unlockDay > activeHelpDay)
            activeHelpDay = steps[progressIndex].unlockDay;
    }
    
    public void OnNewRealDay(int currentDay)
    {
        if (currentDay == lastRealDay)
            return;

        lastRealDay = currentDay;

        if (IsFinished())
            return;

        playableHelpDay = steps[progressIndex].unlockDay;
    }
    
    private int activeHelpDay = 1;
    private int playableHelpDay = 1;
    private int lastRealDay = 1;
}