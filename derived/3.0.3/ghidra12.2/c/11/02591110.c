
void FUN_02591110(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  byte local_58 [16];
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  local_58[0] = 0x34;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0x35;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0x36;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0;
  local_58[0xc] = 0x37;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  local_58[0xf] = 0;
  FUN_02602950(param_1,*(undefined4 *)
                        (local_34 +
                        (long)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28) * 2) * 4 + -0x24)
              );
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "HavePoint";
  if (*(long *)(param_1 + 8) != 0) {
    local_48 = puVar1;
    FUN_026054d0(*(long *)(param_1 + 8),&local_48,(long)param_2[1]);
    pcStack_40 = "TotalPoint";
    if (*(long *)(param_1 + 8) != 0) {
      local_48 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_48,(long)param_2[2]);
    }
  }
  if ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 1) &&
     (*(byte *)(*(long *)PTR_DAT_04bb39b0 + 0x160) - 1 < 0xfe)) {
    uVar5 = 1;
    goto LAB_02591240;
  }
  if ((1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) &&
     (lVar6 = **(long **)PTR_DAT_04bb27d0, 1 < *(byte *)(lVar6 + 0x476))) {
    if ((*(int *)(lVar6 + 0x508) != 0) && (*(char *)(lVar6 + 0x55d) != '\0')) {
      uVar5 = 2;
      goto LAB_02591240;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0) {
      uVar5 = 3;
      if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0) {
        uVar5 = 0;
      }
      goto LAB_02591240;
    }
  }
  uVar5 = 0;
LAB_02591240:
  local_48 = puVar2 + 0x10;
  pcStack_40 = "MultiPlayStatus";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_48,uVar5);
  }
  FUN_02603730(param_1);
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_34[0] = *(byte *)(param_1 + 0x18);
    uVar4 = FUN_02669430(local_34);
    uVar4 = uVar4 & 1;
  }
  else {
    uVar4 = 0;
  }
  local_48 = puVar2 + 0x10;
  pcStack_40 = "IsInMyVillage";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_48,uVar4);
  }
  if (*(int *)(param_1 + 0x2c) == 1) {
    uVar3 = FUN_0277d6c4(param_2 + 3);
    local_48 = puVar2 + 0x10;
    pcStack_40 = "ExchangeItemUniqueId";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_48,uVar3);
    }
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    local_48 = puVar2 + 0x10;
    pcStack_40 = "GetPoint";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_48,(long)*param_2);
    }
  }
  return;
}

