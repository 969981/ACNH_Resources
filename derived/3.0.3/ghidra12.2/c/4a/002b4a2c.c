
void FUN_002b4a2c(long *param_1)

{
  undefined *puVar1;
  
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bce160;
  param_1[2] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  FUN_002236b0();
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_002236b0();
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[0xc] = 0;
  FUN_002236b0();
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_002236b0(param_1 + 0xe);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0xfd;
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  return;
}

