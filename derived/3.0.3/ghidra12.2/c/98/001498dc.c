
long FUN_001498dc(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  *param_2 = 0;
  if (((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) || ((char)param_1[0x3c] != '\0')) {
    return 0;
  }
  param_1 = param_1 + 4;
  lVar2 = FUN_00143bd0(param_1);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)*param_1;
    FUN_00143b00(param_1,(long *)*param_1,0);
    FUN_00143bd0(param_1);
    uVar1 = FUN_0014665c();
    *param_2 = uVar1;
    lVar3 = lVar3 + 0x18;
  }
  return lVar3;
}

