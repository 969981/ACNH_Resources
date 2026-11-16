
void FUN_025951c0(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  
  FUN_02602950(param_1,0x67);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "PlayTime_Daily";
  local_88 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_88,*(undefined8 *)(param_2 + 2));
    pcStack_80 = "WherearenPlayTime_Total";
    local_88 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_88,*(undefined8 *)(param_2 + 4));
      local_88 = puVar2 + 0x10;
      pcStack_80 = "WherearenPlayTime_Daily";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_88,*(undefined8 *)(param_2 + 6));
      }
    }
  }
  FUN_0071b954(&local_88,"%04d-%02d-%02d 00:00:00",param_2[8],param_2[9],param_2[10]);
  pcStack_90 = "MeasureDay";
  if (*(long *)(param_1 + 8) != 0) {
    local_98 = puVar2 + 0x10;
    FUN_02605980(*(long *)(param_1 + 8),&local_98,&local_88);
    pcStack_90 = "Timing";
    if (*(long *)(param_1 + 8) != 0) {
      local_98 = puVar2 + 0x10;
      FUN_02605660(*(long *)(param_1 + 8),&local_98,(long)*param_2);
    }
  }
  local_98 = puVar2 + 0x10;
  pcStack_90 = "HasAOC";
  piVar4 = *(int **)PTR_DAT_04bb43e8;
  if ((0 < *piVar4) && (piVar4[6] != 0)) {
    iVar5 = 0;
    uVar3 = 1;
    do {
      if (*(int *)(*(long *)(piVar4 + 8) + (long)iVar5 * 0x18) == 1000) goto LAB_02595324;
      iVar5 = iVar5 + 1;
    } while (piVar4[6] != iVar5);
  }
  uVar3 = 0;
LAB_02595324:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_98,uVar3);
  }
  return;
}

