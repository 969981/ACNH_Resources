
void FUN_002a9304(long *param_1)

{
  undefined *puVar1;
  
  FUN_002a87b4();
  puVar1 = PTR_DAT_04bce0b8;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_002abfc4(param_1 + 6);
  param_1[0x126] = 0;
  *(undefined4 *)(param_1 + 0x127) = 0;
  FUN_002aa6bc((long)param_1 + 0x93c);
  memset((void *)((long)param_1 + 0x944),0,4);
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0;
  return;
}

