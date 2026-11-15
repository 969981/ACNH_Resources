
void FUN_023ea384(long param_1,long *param_2)

{
  undefined *local_20;
  char *pcStack_18;
  
  if (*(int *)(param_1 + 0x21b0) != 0) {
    if (*(int *)(param_1 + 0x21b0) == 1) {
      pcStack_18 = "PlayerDreamOpenEyes";
      goto LAB_023ea47c;
    }
    if (*(int *)(param_1 + 0x21b0) == 2) {
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
        pcStack_18 = "PlayerDreamPreparationKeep";
      }
      else {
        pcStack_18 = "PlayerDreamPreparation";
      }
      goto LAB_023ea47c;
    }
    if (*(int *)(param_1 + 0x21b0) == 3) {
      pcStack_18 = "PlayerDreamPreparationOpenEye";
      goto LAB_023ea47c;
    }
    if (*(int *)(param_1 + 0x21b0) == 4) {
      pcStack_18 = "PlayerDreamWakeUp";
      goto LAB_023ea47c;
    }
    if (*(int *)(param_1 + 0x21b0) == 5) {
      pcStack_18 = "PlayerBedWaitNoMorph";
      goto LAB_023ea47c;
    }
    if (*(int *)(param_1 + 0x21b0) == 6) {
      pcStack_18 = "PlayerBedWaitOpenEyesNoMorph";
      goto LAB_023ea47c;
    }
  }
  pcStack_18 = "CommonBedWait";
LAB_023ea47c:
  local_20 = PTR_DAT_04bb2020 + 0x10;
  (**(code **)(*param_2 + 0x10))(param_2,&local_20);
  return;
}

