
void FUN_00591180(undefined8 *param_1)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0xc7fffffff;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  *param_1 = &PTR_LAB_048d4cd8;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[0x14] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0x101;
  *(undefined1 *)((long)param_1 + 0xb2) = 1;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  param_1[0x13] = 0;
  FUN_0043be70(param_1 + 3,"Update All Vertex Frames");
  return;
}

