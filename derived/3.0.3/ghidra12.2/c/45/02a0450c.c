
long * FUN_02a0450c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_1[5] <= (int)param_1[2]) {
    return (long *)0x0;
  }
  plVar1 = (long *)param_1[3];
  if (plVar1 != (long *)0x0) {
    param_1[3] = *plVar1;
  }
  plVar1[2] = 0;
  *plVar1 = 0;
  plVar2 = plVar1 + 1;
  *plVar2 = 0;
  lVar3 = *param_1;
  *param_1 = (long)plVar2;
  plVar1[2] = (long)param_1;
  *plVar2 = lVar3;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return plVar1;
}

