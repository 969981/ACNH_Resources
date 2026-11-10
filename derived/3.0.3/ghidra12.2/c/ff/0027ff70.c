
undefined8 FUN_0027ff70(long *param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_002212e4();
  if (((((uVar1 & 1) != 0) || (param_3 == 0)) ||
      ((uint)*(byte *)(param_1 + 0xb) <= (param_2 & 0xff))) ||
     (param_3 < *(uint *)((long)param_1 + 0x5c))) {
    return 0;
  }
  if ((*(uint *)((long)param_1 + 0x5c) == param_3) &&
     (param_4 <= *(uint *)(param_1[0xe] + (ulong)(param_2 & 0xff) * 4))) {
    return 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  param_1[6] = (long)FUN_00280040;
  param_1[7] = 0;
  param_1[8] = (long)"RelayRouteManageJob::WaitAllDirectConnectionReport";
  return 1;
}

