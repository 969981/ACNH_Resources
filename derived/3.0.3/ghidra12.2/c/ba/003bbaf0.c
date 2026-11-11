
void FUN_003bbaf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)param_1[3];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar2 != param_1 + 2) {
    do {
      plVar1 = (long *)plVar2[1];
      lVar3 = *plVar1;
      *(long **)(*plVar2 + 8) = plVar1;
      *plVar1 = *plVar2;
      *(long **)(lVar3 + 8) = plVar2;
      *plVar2 = lVar3;
      plVar2 = (long *)param_1[3];
    } while (plVar2 != param_1 + 2);
    param_2 = *param_1;
    param_3 = param_1[1];
  }
  param_1[4] = param_2;
  param_1[5] = param_3;
  return;
}

