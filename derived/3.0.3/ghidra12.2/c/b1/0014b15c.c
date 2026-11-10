
void FUN_0014b15c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < (int)param_1[4]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_00143b8c(*param_1 + lVar1,param_1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 < (int)param_1[4]);
  }
  FUN_00143300(*param_1);
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

