
void FUN_00280518(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  param_1[6] = 0x40001f4;
  param_1[7] = 0x5fd000000000000;
  *(undefined1 *)(param_1 + 8) = 0xfd;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

