
undefined8 FUN_02a8b440(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x4c) = 0;
  uVar1 = *(uint *)(param_1 + 0x48);
  if (6 < uVar1) {
    return 1;
  }
  if ((1 << (ulong)(uVar1 & 0x1f) & 0x58U) == 0) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x24U) == 0) {
      if (uVar1 != 1) {
        return 1;
      }
      iVar2 = FUN_01392d64(param_1 + 0x1a8);
      iVar3 = FUN_01392d64(param_1 + 0x1f0);
      if (iVar2 == 3) {
        return 0;
      }
      if (iVar3 == 3) {
        return 0;
      }
      *(bool *)(param_1 + 0x4c) = iVar3 == 1 && iVar2 == 1;
      *(bool *)(param_1 + 0x4d) = iVar3 == 2 && iVar2 == 1;
      return 1;
    }
    lVar4 = param_1 + 0x238;
  }
  else {
    lVar4 = param_1 + 0x1a8;
  }
  iVar2 = FUN_01392d64(lVar4);
  if (iVar2 == 3) {
    return 0;
  }
  *(bool *)(param_1 + 0x4c) = iVar2 == 1;
  return 1;
}

