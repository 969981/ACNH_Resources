
void FUN_0034fb58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(byte *)((long)param_1 + 0x111) = *(byte *)((long)param_1 + 0x111) | 1;
  return;
}

