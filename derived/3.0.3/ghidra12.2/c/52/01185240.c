
void FUN_01185240(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_LAB_04983720;
  param_1[4] = (undefined1 *)((long)param_1 + 0x2c);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 5) = 0x40;
  puVar2 = PTR_DAT_04bbb848;
  *(undefined1 *)((long)param_1 + 0x6b) = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x10) = 0x40;
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0xff;
  param_1[0x1b] = 0;
  param_1[2] = puVar2 + 0x10;
  param_1[3] = puVar1 + 0x10;
  param_1[0xe] = puVar1 + 0x10;
  param_1[0xf] = (undefined1 *)((long)param_1 + 0x84);
  return;
}

