
uint FUN_0039df40(long param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x6c);
  if ((ulong)uVar1 == 0) {
    return 0;
  }
  lVar4 = 0;
  uVar3 = 0;
  do {
    uVar2 = FUN_0039e780(*(long *)(param_1 + 0x38) + lVar4,param_2,param_3);
    lVar4 = lVar4 + 0xa8;
    uVar3 = uVar2 | uVar3;
  } while ((ulong)uVar1 * 0xa8 != lVar4);
  return uVar3;
}

