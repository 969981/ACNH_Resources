
void FUN_0043bd90(ulong *param_1,long param_2,int param_3)

{
  ulong uVar1;
  
  param_3 = param_3 - (int)param_2;
  *param_1 = 0;
  if ((param_2 == 0) && (param_3 == -1)) {
    return;
  }
  if (param_2 == 0) {
    *param_1 = 0;
    return;
  }
  if (param_3 < 0) {
    uVar1 = FUN_0043a3e0(param_2);
  }
  else {
    uVar1 = FUN_0043a430(param_2,param_3);
  }
  *param_1 = uVar1 | 1;
  return;
}

