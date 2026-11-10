
void FUN_002a7684(long *param_1)

{
  undefined *puVar1;
  
  FUN_002a87b4();
  puVar1 = PTR_DAT_04bce0b0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_002aba30(param_1 + 7);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1a] = (long)param_1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_002a6dcc((long)param_1 + 0xf4);
  return;
}

