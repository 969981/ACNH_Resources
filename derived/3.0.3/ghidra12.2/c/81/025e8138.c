
void FUN_025e8138(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  local_50 = 0x6900000068;
  uStack_48 = 0x6b0000006a;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_50 + (long)*(int *)(param_1 + 0x28) * 4));
  FUN_02603510(param_1,*param_2);
  FUN_026035e0(param_1,*param_2);
  puVar1 = PTR_DAT_04bb2020;
  if ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 1) &&
     (*(byte *)(*(long *)PTR_DAT_04bb39b0 + 0x160) - 1 < 0xfe)) {
    uVar2 = 1;
    goto LAB_025e8228;
  }
  if ((1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) &&
     (lVar3 = **(long **)PTR_DAT_04bb27d0, 1 < *(byte *)(lVar3 + 0x476))) {
    if (*(int *)(lVar3 + 0x508) != 0 && *(char *)(lVar3 + 0x55d) != '\0') {
      uVar2 = 2;
      goto LAB_025e8228;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0) {
      uVar2 = 3;
      if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0) {
        uVar2 = 0;
      }
      goto LAB_025e8228;
    }
  }
  uVar2 = 0;
LAB_025e8228:
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "MultiPlayStatus";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar2);
  }
  if ((*(uint *)(param_1 + 0x28) | 2) == 3) {
    local_40 = puVar1 + 0x10;
    pcStack_38 = "Result";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[1]);
    }
  }
  return;
}

