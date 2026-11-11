
void FUN_0039c510(long param_1)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039dfe0(*(long *)(param_1 + 0x28) + lVar2);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0xe4);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039cdc0(*(long *)(param_1 + 0x68) + lVar2);
      lVar2 = lVar2 + 0x70;
    } while ((ulong)uVar1 * 0x70 != lVar2);
  }
  return;
}

