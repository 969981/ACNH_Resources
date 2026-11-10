
long FUN_0016b4d4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar3 = 0;
  do {
    plVar1 = param_1 + 3;
    plVar2 = param_1 + 4;
    param_1 = (long *)*param_1;
    lVar3 = (lVar3 + *plVar2) - *plVar1;
  } while (param_1 != (long *)0x0);
  return lVar3;
}

