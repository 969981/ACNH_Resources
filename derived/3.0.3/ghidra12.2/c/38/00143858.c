
undefined8 FUN_00143858(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    return 0xffffffff;
  }
  do {
    if (*plVar1 == param_2) {
      FUN_00143b00(param_1,plVar1,0);
      return 0;
    }
    plVar1 = (long *)plVar1[2];
  } while (plVar1 != (long *)0x0);
  return 0xffffffff;
}

