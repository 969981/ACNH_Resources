
void FUN_00653da0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_048e4e90;
  param_1[1] = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x2000080000000;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  return;
}

