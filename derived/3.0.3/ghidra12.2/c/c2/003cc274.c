
void FUN_003cc274(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = param_1 + 3;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  return;
}

