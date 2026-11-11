
void FUN_003b4974(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_0484e5f0;
  param_1[1] = 0;
  return;
}

