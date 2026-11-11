
void FUN_003d8ec8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd0458;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[0x6d] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_003d2dd4(param_1 + 0x100);
  param_1[0x100] = (long)(PTR_DAT_04bd0460 + 0x10);
  FUN_003d2dd4(param_1 + 0x10a);
  puVar1 = PTR_DAT_04bd0468;
  param_1[0x114] = (long)(param_1 + 0x114);
  param_1[0x115] = (long)(param_1 + 0x114);
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x6c0] = 0;
  param_1[0x6c1] = 0;
  param_1[0x10a] = (long)(puVar1 + 0x10);
  param_1[0x6c2] = (long)(param_1 + 0x6c2);
  param_1[0x6c3] = (long)(param_1 + 0x6c2);
  FUN_003bd740(param_1 + 0x116,param_1 + 0x119,0x1f00,0xf8);
  memset(param_1 + 0xe,0,0x27f);
  return;
}

