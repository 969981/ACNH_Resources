
void FUN_032ae014(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0x200000000;
  puVar1 = PTR_DAT_04bc8f90 + 0x10;
  *(undefined4 *)(param_1 + 8) = 2;
  param_1[9] = puVar1;
  param_1[10] = 0;
  puVar2 = PTR_DAT_04bc8e98 + 0x10;
  param_1[0x1b] = puVar1;
  param_1[0x1c] = 0;
  param_1[0xf] = puVar2;
  param_1[0x10] = 0;
  param_1[0x15] = puVar2;
  param_1[0x16] = 0;
  param_1[0x21] = puVar2;
  param_1[0x22] = 0;
  puVar1 = PTR_DAT_04bc8e60 + 0x10;
  param_1[0x27] = puVar2;
  param_1[0x28] = 0;
  param_1[0x2d] = puVar1;
  param_1[0x2e] = 0;
  param_1[0x33] = puVar1;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x40a0000;
  *(undefined1 *)(param_1 + 0x39) = 6;
  return;
}

