
void FUN_0039c640(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0xa8) != 0) && (*(long *)(param_1 + 0xb0) != 0)) {
    param_4 = (param_4 - param_1) + *(long *)(*(long *)(param_1 + 0xb0) + 8);
  }
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_0039e100(*(long *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  return;
}

