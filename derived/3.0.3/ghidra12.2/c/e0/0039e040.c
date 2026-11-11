
void FUN_0039e040(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x6c);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039e8c0(*(long *)(param_1 + 0x38) + lVar2,param_2);
      lVar2 = lVar2 + 0xa8;
    } while ((ulong)uVar1 * 0xa8 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x6a);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_003a0df0(*(long *)(param_1 + 0x28) + lVar2,param_2);
      lVar2 = lVar2 + 0x60;
    } while ((ulong)uVar1 * 0x60 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x68);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_003a0a30(*(long *)(param_1 + 0x20) + lVar2,param_2);
      lVar2 = lVar2 + 0x58;
    } while ((ulong)uVar1 * 0x58 != lVar2);
  }
  return;
}

