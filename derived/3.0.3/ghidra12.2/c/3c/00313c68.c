
void FUN_00313c68(undefined8 *param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_1[10] = puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = puVar1;
  param_1[0xf] = puVar1;
  param_1[0x14] = puVar1;
  param_1[8] = param_1 + 6;
  param_1[9] = 0x10;
  param_1[0xd] = param_1 + 0xb;
  param_1[0xe] = 0x10;
  param_1[0x12] = param_1 + 0x10;
  param_1[0x13] = 0x10;
  param_1[0x17] = param_1 + 0x15;
  param_1[0x18] = 0x10;
  param_1[0x1b] = PTR_DAT_04bce920 + 0x10;
  param_1[0x1e] = 0;
  param_1[0x1d] = param_1 + 0x1e;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = puVar1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x24] = param_1 + 0x22;
  param_1[0x25] = 0x10;
  param_1[0x26] = &PTR_FUN_04a42f10;
  *(undefined8 *)((long)param_1 + 0x13c) = 0x1400000000;
  *param_1 = &PTR_FUN_04849730;
  FUN_00313d28();
  return;
}

