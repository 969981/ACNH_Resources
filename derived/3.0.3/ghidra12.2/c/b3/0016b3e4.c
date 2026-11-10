
undefined8 FUN_0016b3e4(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long local_28;
  
  if (param_2 < (ulong)param_1[7]) {
    return 0xfffffe0b;
  }
  local_28 = 0;
  uVar1 = FUN_0016b370(&local_28,param_2,param_1[2]);
  if ((int)uVar1 == 0) {
    FUN_0016b478(param_1);
    uVar1 = 0;
    *param_1 = local_28;
    param_1[1] = local_28;
    *(long *)(local_28 + 0x18) = *(long *)(local_28 + 0x18) + param_1[7];
    *(long *)(param_1[1] + 0x20) = *(long *)(param_1[1] + 0x20) + param_1[7];
    param_1[3] = param_2;
    param_1[5] = 1;
  }
  return uVar1;
}

