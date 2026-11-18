
int FUN_034652d0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 local_14;
  
  if ((param_2 == 0) || (uVar1 = *(uint *)(param_1 + 0x20), (int)uVar1 < 1)) {
    return -1;
  }
  uVar4 = 0;
  while (*(int *)(*(long *)(param_1 + 0x28) + uVar4 * 4) != param_3) {
    uVar4 = uVar4 + 1;
    if (uVar1 == uVar4) {
      return -1;
    }
  }
  if (*(uint *)(param_1 + 0x10) <= (uint)uVar4) {
    uVar4 = 0;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + uVar4 * 0x30 + 0x28);
  if (-1 < (int)uVar2) {
    uVar4 = 0;
    while (*(int *)(*(long *)(param_1 + 0x28) + uVar4 * 4) != param_3) {
      uVar4 = uVar4 + 1;
      if (uVar1 == uVar4) {
        return -1;
      }
    }
    if ((uVar2 < 0x40) && (*(int *)(param_2 + (ulong)uVar2 * 0x30 + 0x30) == -1)) {
      return 4;
    }
    if (*(uint *)(param_1 + 0x10) <= (uint)uVar4) {
      uVar4 = 0;
    }
    if (*(int *)(*(long *)(param_1 + 0x18) + uVar4 * 0x30 + 0x2c) != 2) {
      return -2;
    }
    if (uVar2 < 0x40) {
      param_2 = param_2 + (ulong)uVar2 * 0x30;
      if ((*(ushort *)(param_2 + 0xc) >> 4 & 1) == 0) {
        return 0;
      }
      local_14 = *(undefined4 *)(param_2 + 0x20);
      iVar3 = FUN_03464a30(&local_14);
      if (2 < iVar3 - 1U) {
        iVar3 = -1;
      }
      return iVar3;
    }
  }
  return -1;
}

