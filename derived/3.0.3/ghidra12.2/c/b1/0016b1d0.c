
undefined8 FUN_0016b1d0(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = param_1[1] - *param_1;
  if (param_2 <= uVar3) {
    return 0;
  }
  uVar3 = uVar3 * 2;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  lVar1 = FUN_00168a34(param_3,*param_1,uVar3);
  if (lVar1 == 0) {
    uVar2 = 0xfffffc7b;
  }
  else {
    lVar4 = *param_1;
    uVar2 = 0;
    param_1[2] = lVar1 + (param_1[2] - lVar4);
    param_1[3] = lVar1 + (param_1[3] - lVar4);
    param_1[4] = lVar1 + (param_1[4] - lVar4);
    *param_1 = lVar1;
    param_1[1] = lVar1 + uVar3;
  }
  return uVar2;
}

