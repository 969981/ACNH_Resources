
void FUN_025fcec0(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_02602950(param_1,0x7c);
    puVar2 = PTR_DAT_04bb2020;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "IsFromResortPlannerApp";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) == 0) {
      lVar3 = *(long *)(param_1 + 0x40);
    }
    else {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,*param_2);
      pcStack_38 = "FacilityID";
      local_40 = puVar1;
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*(int *)(param_2 + 4));
      }
      lVar3 = *(long *)(param_1 + 0x40);
    }
    if (lVar3 != 0) {
      FUN_02611580(lVar3,param_2 + 8);
      pcStack_38 = "RollNpcNum";
      if (*(long *)(param_1 + 8) != 0) {
        local_40 = puVar2 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)*(int *)(*(long *)(param_1 + 0x40) + 8))
        ;
        pcStack_38 = "RollNpc";
        if (*(long *)(param_1 + 8) != 0) {
          local_40 = puVar2 + 0x10;
          FUN_02605b30(*(long *)(param_1 + 8),&local_40,
                       *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10));
        }
      }
    }
  }
  return;
}

