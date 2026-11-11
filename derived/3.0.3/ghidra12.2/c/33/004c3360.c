
void FUN_004c3360(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x9c) = 0xffffffff;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined2 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x12] = 0x8000000000000000;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x16] = 0x8000000000000000;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_0043d3a0(param_1 + 0x17);
  return;
}

