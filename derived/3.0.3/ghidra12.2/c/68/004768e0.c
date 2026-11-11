
void FUN_004768e0(undefined8 *param_1)

{
  FUN_00421d30();
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0x8000004000000000;
  param_1[5] = 0;
  param_1[6] = param_1 + 8;
  *param_1 = &PTR_FUN_04865270;
  param_1[1] = 0;
  FUN_0043cbe0(param_1 + 0x88);
  return;
}

