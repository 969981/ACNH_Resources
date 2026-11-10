
void FUN_002098d4(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_001fbdb4();
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_04bcc1e0;
  param_1[0x11] = param_1 + 0x12;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_0483ecc0;
  param_1[0x15] = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 1;
  param_1[0x17] = 0xffffffffffffffff;
  param_1[0x19] = 0xffffffffffffffff;
  FUN_001a10d0(param_1 + 0x15,3);
  return;
}

