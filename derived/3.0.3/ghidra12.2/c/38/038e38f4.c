
void FUN_038e38f4(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(int *)(param_1 + 0x20) = param_2;
  *param_1 = &PTR_LAB_04b65448;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000080000000;
  *(undefined4 *)((long)param_1 + 0x104) = param_3;
  *(undefined4 *)(param_1 + 0x21) = param_4;
  *(undefined4 *)((long)param_1 + 0x10c) = param_5;
  param_1[0x26] = 0;
  param_1[4] = 0x7f7fffff7f7fffff;
  param_1[5] = 0xff7fffffff7fffff;
  param_1[0x1e] = 0x3f0000003f000000;
  param_1[0x1f] = 0x3e8000003e800000;
  param_1[0x22] = 0;
  param_1[0x23] = 0xff7fffffff7fffff;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (0x20 < param_2) {
    *(undefined4 *)(param_1 + 0x20) = 0x20;
  }
  *(undefined1 *)(param_1 + 0x16) = 0x1e;
  *(undefined1 *)((long)param_1 + 0xb3) = 0x1e;
  *(undefined8 *)((long)param_1 + 0xb4) = 0x1e1e1e1e1e1e1e1e;
  *(undefined8 *)((long)param_1 + 0xbc) = 0x1e1e1e1e1e1e1e1e;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x1e1e1e1e1e1e1e1e;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined2 *)((long)param_1 + 0xb1) = 0x1e1e;
  *(undefined1 *)((long)param_1 + 0xd3) = 1;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x1e1e1e1e;
  *(undefined2 *)((long)param_1 + 0xd1) = 0x101;
  *(undefined1 **)((long)param_1 + 0xd4) = &DAT_101010101010101;
  *(undefined1 **)((long)param_1 + 0xdc) = &DAT_101010101010101;
  *(undefined1 **)((long)param_1 + 0xe4) = &DAT_101010101010101;
  *(undefined4 *)((long)param_1 + 0xec) = 0x1010101;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

