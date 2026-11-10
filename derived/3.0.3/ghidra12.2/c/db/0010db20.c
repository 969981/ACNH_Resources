
bool FUN_0010db20(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = nn::fs::ReadFile(*(undefined8 *)*param_3,(long)*(int *)(param_3 + 1),param_1,param_2);
  return iVar1 == 0;
}

