
int FUN_005d4620(long param_1,long param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = *(ushort *)(param_2 + 0x1d8);
  if (uVar2 == 0) {
    return 0;
  }
  lVar1 = param_3 + (ulong)uVar2 * 0x10;
  *(ulong *)(param_1 + 0x40) = lVar1 + (ulong)uVar2 * 0x10;
  uVar3 = (uint)uVar2;
  *(long *)(param_1 + 0x20) = param_3;
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x38) = uVar3;
  *(long *)(param_1 + 0x30) = lVar1;
  *(uint *)(param_1 + 0x48) = uVar3;
  return (uVar3 + (uint)uVar2 * 2) * 0x10;
}

