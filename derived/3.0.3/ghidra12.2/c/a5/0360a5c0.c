
undefined8 FUN_0360a5c0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 <= (ulong)param_1[4]) {
    return 0;
  }
  uVar1 = (**(code **)(*(long *)*param_1 + 0x28))();
  if ((uVar1 & 1) == 0) {
    if (param_1[3] == 0) {
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[2]);
      param_1[2] = 0;
    }
    lVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 << 1,param_1[1]);
    if (lVar2 == 0) {
      return 0x80000007;
    }
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      if (param_1[3] != 0) {
        uVar1 = 0;
        do {
          lVar3 = uVar1 * 2;
          uVar1 = uVar1 + 1;
          *(undefined2 *)(lVar2 + lVar3) = *(undefined2 *)(param_1[2] + lVar3);
        } while (uVar1 < (ulong)param_1[3]);
        lVar3 = param_1[2];
      }
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,lVar3);
    }
    param_1[2] = lVar2;
  }
  else {
    lVar2 = (**(code **)(*(long *)*param_1 + 0x20))
                      ((long *)*param_1,param_1[2],param_2 << 1,param_1[1]);
    if (lVar2 == 0) {
      return 0x80000007;
    }
    param_1[2] = lVar2;
  }
  param_1[4] = param_2;
  return 0;
}

