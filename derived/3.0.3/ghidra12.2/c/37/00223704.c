
void FUN_00223704(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  *(long *)(lVar1 + 8) = param_2[1];
  *(long *)param_2[1] = lVar1;
  iVar2 = *(int *)(param_1 + 0x10);
  *param_2 = 0;
  param_2[1] = 0;
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}

