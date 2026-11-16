
void FUN_029e5554(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_04a98a70;
  param_1[2] = 0;
  FUN_02a063c0(param_1 + 3);
  *(undefined8 *)((long)param_1 + 0x16bc) = 0;
  *(undefined4 *)(param_1 + 0x2d7) = 0xffff0000;
  param_1[0x2d9] = 0;
  param_1[0x2da] = 0;
  *(undefined4 *)(param_1 + 0x2db) = 0;
  FUN_038e18e4(param_1 + 0x2dc);
  param_1[0x2e6] = 0xffffffff00000000;
  param_1[0x2e5] = param_1 + 0x2e4;
  param_1[0x2e4] = param_1 + 0x2e4;
  return;
}

