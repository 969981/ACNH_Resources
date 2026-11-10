
void FUN_002a92dc(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(int *)(param_1 + 0x1c) + 1;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  *(uint *)(param_1 + 0x1c) = uVar1 - uVar3 * uVar2;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  return;
}

