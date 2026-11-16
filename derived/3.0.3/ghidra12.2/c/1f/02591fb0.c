
void FUN_02591fb0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_38;
  char *pcStack_30;
  byte local_24 [4];
  
  FUN_02602950(param_1,0x38);
  puVar1 = PTR_DAT_04bb2020;
  if ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 1) &&
     (*(byte *)(*(long *)PTR_DAT_04bb39b0 + 0x160) - 1 < 0xfe)) {
    uVar3 = 1;
    goto LAB_02592064;
  }
  if ((1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) &&
     (lVar4 = **(long **)PTR_DAT_04bb27d0, 1 < *(byte *)(lVar4 + 0x476))) {
    if (*(int *)(lVar4 + 0x508) != 0 && *(char *)(lVar4 + 0x55d) != '\0') {
      uVar3 = 2;
      goto LAB_02592064;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0) {
      uVar3 = 3;
      if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0) {
        uVar3 = 0;
      }
      goto LAB_02592064;
    }
  }
  uVar3 = 0;
LAB_02592064:
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "MultiPlayStatus";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_38,uVar3);
  }
  FUN_02603730(param_1);
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_24[0] = *(byte *)(param_1 + 0x18);
    uVar2 = FUN_02669430(local_24);
    uVar2 = uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  local_38 = puVar1 + 0x10;
  pcStack_30 = "IsInMyVillage";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_38,uVar2);
  }
  return;
}

