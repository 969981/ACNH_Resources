
void FUN_00167484(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(bool *)(param_1 + 2) = param_4 != 0;
  return;
}

