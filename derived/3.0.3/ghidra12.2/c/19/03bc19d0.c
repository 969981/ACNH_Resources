
void FUN_03bc19d0(long *param_1)

{
  param_1[2] = 0;
  *param_1 = (long)&PTR_LAB_04b7ab20;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffff000d;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_038e18e4(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}

