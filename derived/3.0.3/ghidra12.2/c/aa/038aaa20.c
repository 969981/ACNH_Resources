
long * FUN_038aaa20(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    return (long *)0x0;
  }
  plVar1 = *(long **)(param_1 + 8);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return plVar1;
}

