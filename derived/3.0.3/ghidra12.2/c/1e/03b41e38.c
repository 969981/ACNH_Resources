
void FUN_03b41e38(undefined8 *param_1)

{
  param_1[8] = 0;
  *param_1 = &PTR_FUN_04b76280;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0x3f800000;
  param_1[5] = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0xc) = 0xbf800000bf800000;
  *(undefined8 *)((long)param_1 + 0x14) = 0xbf800000bf800000;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xbf800000;
  return;
}

