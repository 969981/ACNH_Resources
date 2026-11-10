
long * FUN_002237a8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 2) == 0) {
    return (long *)0x0;
  }
  plVar2 = (long *)*param_1;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
  lVar1 = *plVar2;
  *(long *)(lVar1 + 8) = plVar2[1];
  *(long *)plVar2[1] = lVar1;
  *plVar2 = 0;
  plVar2[1] = 0;
  return plVar2;
}

