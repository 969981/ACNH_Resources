
void FUN_004624e0(undefined8 *param_1,undefined1 param_2,undefined2 param_3,undefined8 param_4,
                 undefined2 param_5,undefined8 param_6)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = param_5;
  *(undefined2 *)((long)param_1 + 0xc) = param_3;
  param_1[2] = 0;
  param_1[3] = param_6;
  *param_1 = &PTR_LAB_048634a0;
  param_1[4] = param_4;
  return;
}

