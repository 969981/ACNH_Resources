
void FUN_03b2bbec(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  param_1[0xc] = 0;
  param_1[8] = 0x2201f;
  param_1[9] = 0;
  param_1[2] = param_1 + 1;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_LAB_04b74e48;
  param_1[1] = param_1 + 1;
  FUN_03b227e0();
  return;
}

