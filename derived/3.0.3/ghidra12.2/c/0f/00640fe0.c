
void FUN_00640fe0(long *param_1,undefined4 param_2)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x7fffffff;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  param_1[5] = 0;
  param_1[6] = -0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  *param_1 = (long)(PTR_DAT_04bdded0 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = -0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = -0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = -0x8000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = -0x8000000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = -0x8000000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = -0x8000000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = -0x8000000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = -0x8000000000000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = -0x8000000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = -0x8000000000000000;
  param_1[0x1f] = 0;
  param_1[0x20] = -0x8000000000000000;
  FUN_0043be70(param_1 + 3,"Mesh Mesh Deform Operator");
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}

