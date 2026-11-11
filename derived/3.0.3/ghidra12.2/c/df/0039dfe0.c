
void FUN_0039dfe0(long param_1)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x6c);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039e840(*(long *)(param_1 + 0x38) + lVar2);
      lVar2 = lVar2 + 0xa8;
    } while ((ulong)uVar1 * 0xa8 != lVar2);
  }
  return;
}

