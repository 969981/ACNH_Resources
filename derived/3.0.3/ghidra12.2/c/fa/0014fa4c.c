
undefined8 FUN_0014fa4c(long param_1,long *param_2)

{
  long *plVar1;
  
  if ((param_2 == (long *)0x0) || (plVar1 = (long *)*param_2, plVar1 == (long *)0x0)) {
    return 0;
  }
  do {
    if (*plVar1 == param_1) {
      FUN_00143b00(param_2,plVar1,0);
      return 1;
    }
    plVar1 = (long *)plVar1[2];
  } while (plVar1 != (long *)0x0);
  return 0;
}

