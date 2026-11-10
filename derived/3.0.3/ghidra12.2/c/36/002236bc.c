
void FUN_002236bc(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  *param_3 = *param_2;
  param_3[1] = (long)param_2;
  lVar1 = *param_2;
  *param_2 = (long)param_3;
  *(long **)(lVar1 + 8) = param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

