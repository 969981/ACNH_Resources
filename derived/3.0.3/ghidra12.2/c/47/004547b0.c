
void FUN_004547b0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  FUN_00421d30();
  param_1[2] = 0;
  param_1[3] = (ulong)param_3;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  *param_1 = &PTR_FUN_04861c08;
  param_1[1] = 0;
  return;
}

