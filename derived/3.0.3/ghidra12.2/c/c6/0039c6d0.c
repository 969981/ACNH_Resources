
void FUN_0039c6d0(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039e1f0(*(long *)(param_1 + 0x28) + lVar2,param_2);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar2 = *(long *)(param_1 + 0xa8);
    if (*(char *)(lVar2 + 0x110) != '\0') {
      FUN_0034915c(lVar2,param_2);
      FUN_003490c0(lVar2);
      return;
    }
  }
  return;
}

