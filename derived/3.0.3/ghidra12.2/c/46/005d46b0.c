
void FUN_005d46b0(undefined8 *param_1)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x17fffffff;
  param_1[5] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  *param_1 = &PTR_LAB_048d49e0;
  FUN_0043be70(param_1 + 3,"Simulate");
  return;
}

