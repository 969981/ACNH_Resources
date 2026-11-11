
undefined8 FUN_003c0850(long *param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_4;
  if (0 < param_4) {
    lVar1 = 0;
    do {
      *(undefined1 *)(*param_1 + lVar1) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[1]);
  }
  return 1;
}

