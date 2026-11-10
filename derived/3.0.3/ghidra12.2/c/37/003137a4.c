
void FUN_003137a4(long *param_1)

{
  undefined *puVar1;
  
  FUN_0031a400();
  puVar1 = PTR_DAT_04bcea50;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puVar1 = PTR_DAT_04bce920 + 0x10;
  param_1[0x1d] = 0;
  param_1[0x19] = (long)puVar1;
  param_1[0x1c] = 0;
  param_1[0x1b] = (long)(param_1 + 0x1c);
  FUN_00186524(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 0x20) = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x22] = (long)(param_1 + 0x20);
  param_1[0x23] = 0x10;
  param_1[0x1f] = (long)(puVar1 + 0x10);
  param_1[0x25] = (long)(puVar1 + 0x10);
  param_1[0x28] = (long)(param_1 + 0x26);
  param_1[0x29] = 0x10;
  *param_1 = (long)&PTR_FUN_0484abc8;
  FUN_00313854(param_1);
  return;
}

