
void FUN_003ddb18(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0x400000004;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_LAB_0484f660;
  *(undefined8 *)((long)param_1 + 0x54) = 0x200000001;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x400000003;
  *(undefined4 *)((long)param_1 + 100) = 5;
  return;
}

