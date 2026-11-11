
undefined8 FUN_003dc588(long *param_1,ulong param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x40))();
  if (param_3 == 2) {
    if (0 < (long)param_2) {
      lVar3 = (**(code **)(*param_1 + 0x38))(param_1);
      lVar1 = lVar3 + param_2;
      if (lVar2 <= (long)(lVar3 + param_2)) {
        lVar1 = lVar2;
      }
      param_1[4] = lVar1;
      return 0;
    }
    uVar4 = (**(code **)(*param_1 + 0x38))(param_1);
    uVar5 = uVar4;
    if (((long)param_2 < 0) && (uVar5 = 0, (long)-param_2 < (long)uVar4)) {
      lVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      param_1[4] = lVar2 + param_2;
      return 0;
    }
  }
  else {
    if (param_3 == 1) {
      param_1[4] = lVar2 - (param_2 & (long)param_2 >> 0x3f);
      return 0;
    }
    if (param_3 != 0) {
      param_1[4] = 0;
      return 0;
    }
    uVar5 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
  }
  param_1[4] = uVar5;
  return 0;
}

