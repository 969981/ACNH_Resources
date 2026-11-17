
byte FUN_02ac5574(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined4 local_28;
  int local_24;
  
  local_24 = FUN_02a6cb24(param_1 + 0x298);
  if (local_24 != 0) {
    return 0;
  }
  local_28 = 0;
  uVar5 = FUN_02b67620(&local_28,*(undefined4 *)(param_1 + 0x2a0));
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c0) != -1) {
    iVar3 = FUN_021d9f50(local_28);
    if (*(int *)(param_1 + 0x2c0) == -1) {
      bVar1 = false;
    }
    else {
      iVar4 = FUN_021d9f50(local_28);
      bVar1 = iVar4 == 1;
    }
    if ((iVar3 == 0) && (!bVar1)) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x2c4) == -1) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_021d9f50(local_28);
    bVar1 = iVar3 == 0;
    if (*(int *)(param_1 + 0x2c4) != -1) {
      iVar3 = FUN_021d9f50(local_28);
      bVar2 = iVar3 != 1;
      goto LAB_02ac5654;
    }
  }
  bVar2 = true;
LAB_02ac5654:
  return bVar1 & bVar2;
}

