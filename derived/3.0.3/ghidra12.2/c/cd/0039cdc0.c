
void FUN_0039cdc0(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x6c);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 1) {
      do {
        lVar3 = uVar2 * 8;
        uVar2 = uVar2 + 2;
        *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar3) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x50) + lVar3) = 0xffffffffffffffff;
        *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar3 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x50) + lVar3 + 8) = 0xffffffffffffffff;
      } while (((ulong)uVar1 & 0xfffe) != uVar2);
    }
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar2 * 8) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x50) + uVar2 * 8) = 0xffffffffffffffff;
    }
  }
  return;
}

