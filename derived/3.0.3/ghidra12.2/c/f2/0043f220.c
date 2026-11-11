
void FUN_0043f220(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if ((*param_2 == 0) || (uVar1 = FUN_00427860(param_2[1],param_3,1), uVar1 < 2)) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  FUN_0043f280(param_1,param_2,uVar1);
  return;
}

