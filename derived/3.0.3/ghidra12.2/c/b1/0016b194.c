
void FUN_0016b194(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (*(int *)(param_1 + 4) != -1)) {
    iVar1 = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      FUN_00168a0c(param_1[1],param_1,*param_1);
      return;
    }
  }
  return;
}

