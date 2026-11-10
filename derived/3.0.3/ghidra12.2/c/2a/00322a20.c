
long FUN_00322a20(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  if ((int)param_1[1] != *(int *)(lVar1 + 0x34)) {
    lVar1 = 0;
  }
  return lVar1;
}

