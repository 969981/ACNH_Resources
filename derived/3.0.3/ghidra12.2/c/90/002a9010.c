
void FUN_002a9010(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = 0xffffffffffffffff;
  return;
}

