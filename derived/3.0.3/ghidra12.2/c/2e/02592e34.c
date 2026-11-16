
void FUN_02592e34(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CloudIslandID";
  if (*(long *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      return;
    }
    lVar2 = 0;
  }
  else {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,*param_2);
    lVar2 = *(long *)(param_1 + 8);
    if (*(int *)(param_1 + 0x28) == 0) {
      local_40 = puVar1 + 0x10;
      pcStack_38 = "NewCloudIslandID";
      if (lVar2 != 0) {
        FUN_02605660(lVar2,&local_40,param_2[1]);
        lVar2 = *(long *)(param_1 + 8);
      }
    }
  }
  puVar1 = puVar1 + 0x10;
  pcStack_38 = "CloudIslandSize";
  if (lVar2 != 0) {
    local_40 = puVar1;
    FUN_026054d0(lVar2,&local_40,(long)*(int *)(param_2 + 2));
    pcStack_38 = "CloudIslandPattern";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)*(int *)((long)param_2 + 0x14));
    }
  }
  return;
}

