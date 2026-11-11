
void FUN_003c2fec(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = 0x100000001;
  param_1[1] = 0x100000001;
  param_1[2] = 0;
  param_1[3] = &DAT_101010101010101;
  param_1[4] = &DAT_101010101010101;
  param_1[5] = &DAT_101010101010101;
  return;
}

