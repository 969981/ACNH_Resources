
long FUN_02a56278(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  iVar2 = *(int *)(DAT_055f6860 + 0x7c0);
  if (iVar2 == -1) {
    return 0;
  }
  if (iVar2 == 0) {
    lVar4 = FUN_0299a520(DAT_055f6860 + 0x7c8,param_1,2);
  }
  else {
    uVar3 = iVar2 - 1;
    if (*(uint *)(DAT_055f6860 + 0x2e70) <= uVar3) {
      uVar3 = 0;
    }
    lVar4 = *(long *)(DAT_055f6860 + 0x2e78) + (long)(int)uVar3 * 0x228 + 0x30;
  }
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 8;
  }
  return lVar1;
}

