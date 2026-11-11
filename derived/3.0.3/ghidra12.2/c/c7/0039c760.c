
void FUN_0039c760(long param_1)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039e2ac(*(long *)(param_1 + 0x28) + lVar2);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0xe2);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_003a1a10(*(long *)(param_1 + 0x58) + lVar2);
      lVar2 = lVar2 + 0x50;
    } while ((ulong)uVar1 * 0x50 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0xe4);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039ce40(*(long *)(param_1 + 0x68) + lVar2);
      lVar2 = lVar2 + 0x70;
    } while ((ulong)uVar1 * 0x70 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0xe8);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_003a15c0(*(long *)(param_1 + 0x88) + lVar2);
      lVar2 = lVar2 + 0x50;
    } while ((ulong)uVar1 * 0x50 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0xea);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039f2b0(*(long *)(param_1 + 0x98) + lVar2);
      lVar2 = lVar2 + 0x60;
    } while ((ulong)uVar1 * 0x60 != lVar2);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}

