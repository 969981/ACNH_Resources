
undefined8 FUN_0049da40(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = FUN_004714d0(param_1 + 0x18,param_2,0xffffffffffffffff);
  if ((int)uVar4 < 0) {
    return 0x80040200;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0xb8) + ((long)((ulong)uVar4 << 0x20) >> 0x1d));
  iVar3 = piVar1[1];
  lVar2 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80);
  *param_3 = lVar2 + *piVar1;
  param_3[1] = lVar2 + iVar3;
  return 0;
}

