
void FUN_003fa0c4(long *param_1)

{
  undefined *puVar1;
  undefined1 uStack_11;
  
  FUN_0019a2a8(param_1,2,&uStack_11);
  puVar1 = PTR_DAT_04bd27f0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_001fb850(param_1 + 0x18,0);
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = (long)(puVar1 + 0x10);
  param_1[0x34] = (long)(param_1 + 0x32);
  param_1[0x35] = 0x10;
  FUN_0018b070(param_1 + 0x31,&DAT_0407ebb1,0xffffffffffffffff);
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0xc5] = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  memset(param_1 + 0x3b,0,0x449);
  return;
}

