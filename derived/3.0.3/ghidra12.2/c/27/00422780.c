
void FUN_00422780(long *param_1,undefined8 *param_2)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = -0x7fffff8000000000;
  FUN_004225f0(param_1,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  return;
}

