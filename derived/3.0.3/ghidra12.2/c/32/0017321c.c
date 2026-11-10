
undefined8 FUN_0017321c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1[2];
  lVar1 = *param_1;
  if ((ulong)param_1[3] <= uVar3) {
    uVar2 = param_1[3] * 2;
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    lVar1 = FUN_00168a34(param_1[1],lVar1,uVar2 << 3);
    if (lVar1 == 0) {
      return 0xfffffc7b;
    }
    uVar3 = param_1[2];
    param_1[3] = uVar2;
    *param_1 = lVar1;
  }
  *(long **)(lVar1 + uVar3 * 8) = param_2;
  *param_2 = param_1[2];
  param_1[2] = param_1[2] + 1;
  FUN_001732b0(param_1);
  return 0;
}

