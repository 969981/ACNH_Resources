
void FUN_00562a50(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x7fffffff;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  param_1[5] = 0;
  param_1[6] = -0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  puVar1 = PTR_DAT_04bddde0;
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  param_1[0xb] = 0;
  param_1[0xc] = -0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = -0x8000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = -0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = -0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = -0x8000000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = -0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = -0x8000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = -0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = -0x8000000000000000;
  FUN_0043be70(param_1 + 3,"Skin Operator");
  return;
}

