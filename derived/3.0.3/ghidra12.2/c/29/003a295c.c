
void FUN_003a295c(long *param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  
  *(int *)(param_1 + 2) = param_3;
  iVar1 = param_2 + 0x1f >> 5;
  *(int *)((long)param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 3) = param_2;
  if (param_2 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined2 *)((long)param_1 + 0x1c) = 0;
    return;
  }
  *param_1 = param_4;
  if (param_3 == 1) {
    param_1[1] = param_4;
    *(undefined2 *)((long)param_1 + 0x1c) = 0;
    return;
  }
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  param_1[1] = param_4 + (long)iVar1 * 4;
  return;
}

