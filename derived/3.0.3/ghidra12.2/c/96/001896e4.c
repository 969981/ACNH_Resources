
void FUN_001896e4(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 <= *(uint *)(param_1 + 8)) {
    iVar1 = *(uint *)(param_1 + 8) - param_2;
  }
  *(int *)(param_1 + 8) = iVar1;
  return;
}

