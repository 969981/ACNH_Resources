
void FUN_0039e2ac(long param_1)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x6c);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039ea50(*(long *)(param_1 + 0x38) + lVar2,0);
      lVar2 = lVar2 + 0xa8;
    } while ((ulong)uVar1 * 0xa8 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x6a);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_003a0fe0(*(long *)(param_1 + 0x28) + lVar2,0);
      lVar2 = lVar2 + 0x60;
    } while ((ulong)uVar1 * 0x60 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x68);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_003a0c90(*(long *)(param_1 + 0x20) + lVar2,0);
      lVar2 = lVar2 + 0x58;
    } while ((ulong)uVar1 * 0x58 != lVar2);
  }
  FUN_003a1ae8(*(undefined8 *)(param_1 + 0x18),0);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}

