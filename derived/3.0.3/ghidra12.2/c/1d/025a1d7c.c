
void FUN_025a1d7c(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_40;
  char *pcStack_38;
  
  uVar1 = 0xc;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = 0xd;
  }
  FUN_02602950(param_1,uVar1);
  puVar2 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "UniqueId";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,*param_2);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    local_40 = puVar2 + 0x10;
    pcStack_38 = "AchievementLevel";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,param_2[1]);
    }
  }
  else {
    pcStack_38 = "IsByStock";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar2 + 0x10;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,*(int *)(param_1 + 0x28) == 2);
      pcStack_38 = "IsBonusPoint";
      if (*(long *)(param_1 + 8) != 0) {
        local_40 = puVar2 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_40,*(undefined1 *)(param_2 + 3));
      }
    }
  }
  pcStack_38 = "GetMilePoint";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar2 + 0x10;
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[2]);
    pcStack_38 = "CurMilePoint";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar2 + 0x10;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[4]);
    }
  }
  return;
}

