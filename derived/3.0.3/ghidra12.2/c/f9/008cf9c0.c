
void FUN_008cf9c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[1];
  while (plVar2 != param_1) {
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar3 = (long *)plVar2[1];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    plVar2[-2] = param_1[3];
    param_1[3] = (long)(plVar2 + -2);
    plVar2 = plVar1;
  }
  return;
}

