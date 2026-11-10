
long FUN_002a9194(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(int *)(param_1 + 0x14) + 1;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  if (uVar1 - uVar3 * uVar2 == *(int *)(param_1 + 0x1c)) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  FUN_0022b7ac(*(long *)(param_1 + 8) + (ulong)uVar3 * 0x660);
  uVar1 = *(int *)(param_1 + 0x14) + 1;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = uVar1 / uVar2;
  }
  *(uint *)(param_1 + 0x14) = uVar1 - uVar4 * uVar2;
  return *(long *)(param_1 + 8) + (ulong)uVar3 * 0x660;
}

