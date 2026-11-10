
undefined8 FUN_00109f20(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 1;
}

