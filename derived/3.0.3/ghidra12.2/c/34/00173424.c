
void FUN_00173424(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    FUN_00173344(param_1);
    return;
  }
  if (lVar2 == param_1[2] + -1) {
    param_1[2] = lVar2;
    return;
  }
  *(undefined8 *)(*param_1 + lVar2 * 8) = *(undefined8 *)(*param_1 + (param_1[2] + -1) * 8);
  **(long **)(*param_1 + *param_2 * 8) = *param_2;
  param_1[2] = param_1[2] + -1;
  iVar1 = (*(code *)param_1[4])(param_2,*(undefined8 *)(*param_1 + *param_2 * 8));
  if (iVar1 == 0) {
    FUN_001732b0(param_1,*param_2);
    return;
  }
  FUN_00173380(param_1);
  return;
}

