
void FUN_02081400(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = FUN_0277d6c4(param_3);
  if (iVar2 == 0x360b) {
    FUN_021ea950(param_1,*(undefined8 *)(param_2 + 8));
    return;
  }
  iVar2 = FUN_0277d6c4(param_3);
  if (iVar2 == 0x392e) {
    FUN_021ea1d0(param_1,*(undefined8 *)(param_2 + 8));
    return;
  }
  iVar2 = FUN_0277d6c4(param_3);
  if (iVar2 == 0x217d) {
    FUN_021ea800(param_1,*(undefined8 *)(param_2 + 8));
    return;
  }
  iVar2 = FUN_0277d6c4(param_3);
  if (iVar2 == 0x1df5) {
    local_14 = 1;
    FUN_021ea5f0(param_1,*(undefined8 *)(param_2 + 8),&local_14);
  }
  else {
    iVar2 = FUN_0277d6c4(param_3);
    if (iVar2 == 0x3928) {
      FUN_021ea4a0(param_1,*(undefined8 *)(param_2 + 8));
      return;
    }
    iVar2 = FUN_0277d6c4(param_3);
    if (iVar2 == 0x3931) {
      local_18 = FUN_00a8c014(DAT_04da7238);
      FUN_021ea320(param_1,*(undefined8 *)(param_2 + 8),&local_18);
    }
    else {
      iVar2 = FUN_0277d6c4(param_3);
      if (iVar2 == 0x392f) {
        FUN_021e9c30(param_1,*(undefined8 *)(param_2 + 8),1);
        return;
      }
      iVar2 = FUN_0277d6c4(param_3);
      if (iVar2 == 0x1515) {
        FUN_01e3b790(param_1,*(undefined8 *)(param_2 + 8));
        return;
      }
      uVar1 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = uVar1;
    }
  }
  return;
}

