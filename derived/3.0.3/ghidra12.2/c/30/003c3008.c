
void FUN_003c3008(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = &DAT_3f8000003f800000;
  param_1[1] = 0;
  return;
}

