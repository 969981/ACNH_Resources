
undefined8 FUN_00167c38(long *param_1,ulong *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  *param_2 = param_4 / 6;
  if (param_4 < 6) {
    uVar2 = 0;
    *param_1 = 0;
  }
  else {
    lVar3 = FUN_001689e8(param_5,param_4 / 6 << 3);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      uVar2 = 0xfffffc7b;
    }
    else {
      if (*param_2 != 0) {
        lVar3 = 0;
        uVar5 = 0;
        do {
          lVar4 = *param_1;
          uVar1 = FUN_0016852c(param_3);
          *(uint *)(lVar4 + lVar3) = uVar1 & 0xffff;
          uVar1 = FUN_00168534(param_3 + 2);
          ((uint *)(lVar4 + lVar3))[1] = uVar1;
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 8;
          param_3 = param_3 + 6;
        } while (uVar5 < *param_2);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

