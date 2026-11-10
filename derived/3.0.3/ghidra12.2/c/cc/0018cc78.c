
void FUN_0018cc78(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_04838c28;
  *(uint *)(param_1 + 1) = param_3;
  *(undefined8 **)(&DAT_04c589f0 + (ulong)param_3 * 8) = param_1;
  return;
}

