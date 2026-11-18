
void FUN_036a16dc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04bb32e8;
  if (((*(byte *)(param_1 + 0x1c) & 1) != 0) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    uVar2 = FUN_00a8255c(*(long *)PTR_DAT_04bb32e8 + 0x4060,(undefined8 *)(param_1 + 8));
    if (uVar2 != 0) {
      if (((long)uVar2 < 0) || (0x1d < uVar2)) {
        *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)puVar1 + 0x4060);
      }
      else if ((DAT_04d02f58 == 0) || (*(uint *)(DAT_04d02f58 + 0xf5b58) < 0x709)) {
        uVar3 = *(undefined8 *)(*(long *)puVar1 + 0x4060);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (int)uVar2;
        *(undefined8 *)(param_1 + 8) = uVar3;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)uVar2;
      }
      else {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)puVar1 + 0x4060);
      }
    }
  }
  return;
}

