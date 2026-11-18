
undefined8 FUN_035c5900(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 <= (ulong)param_1[4]) {
    return 0;
  }
  if ((long)param_2 < 0) {
LAB_035c5a04:
    uVar3 = 0x80000007;
  }
  else {
    uVar1 = (**(code **)(*(long *)*param_1 + 0x28))();
    if ((uVar1 & 1) == 0) {
      if (param_1[3] == 0) {
        (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[2]);
        param_1[2] = 0;
      }
      lVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 << 1,param_1[1]);
      if (lVar2 == 0) goto LAB_035c5a04;
      lVar4 = param_1[2];
      if (lVar4 != 0) {
        if (param_1[3] != 0) {
          uVar1 = 0;
          do {
            lVar4 = uVar1 * 2;
            uVar1 = uVar1 + 1;
            *(undefined2 *)(lVar2 + lVar4) = *(undefined2 *)(param_1[2] + lVar4);
          } while (uVar1 < (ulong)param_1[3]);
          lVar4 = param_1[2];
        }
        (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,lVar4);
      }
      param_1[2] = lVar2;
    }
    else {
      lVar2 = (**(code **)(*(long *)*param_1 + 0x20))
                        ((long *)*param_1,param_1[2],param_2 << 1,param_1[1]);
      if (lVar2 == 0) goto LAB_035c5a04;
      param_1[2] = lVar2;
    }
    uVar3 = 0;
    param_1[4] = param_2;
  }
  return uVar3;
}

