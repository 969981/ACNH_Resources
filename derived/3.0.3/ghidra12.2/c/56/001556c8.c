
void FUN_001556c8(undefined8 *param_1)

{
  FUN_00143300(*param_1);
  *param_1 = 0;
  FUN_00143300(param_1[1]);
  param_1[1] = 0;
  FUN_00143300(param_1[2]);
  param_1[2] = 0;
  FUN_00143300(param_1[4]);
  param_1[4] = 0;
  FUN_00143300(param_1[5]);
  param_1[5] = 0;
  FUN_00143300(param_1[6]);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) & 0xfc;
  return;
}

