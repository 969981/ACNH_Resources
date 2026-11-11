
void FUN_003bbbc0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  param_1[4] = 0;
  param_1[5] = 0;
  plVar2 = (long *)param_1[3];
  while (plVar2 != param_1 + 2) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    plVar2 = (long *)param_1[3];
  }
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

