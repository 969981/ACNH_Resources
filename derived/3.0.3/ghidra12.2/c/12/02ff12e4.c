
void FUN_02ff12e4(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  lVar1 = (**(code **)(*param_1 + 0xa8))();
  if (((lVar1 != 0) && (lVar1 = (**(code **)(*param_1 + 0xa8))(param_1), lVar1 != 0)) &&
     ((int)param_2[2] < (int)param_2[5])) {
    plVar2 = (long *)param_2[3];
    if (plVar2 != (long *)0x0) {
      param_2[3] = *plVar2;
    }
    *plVar2 = lVar1;
    plVar2[2] = 0;
    plVar3 = plVar2 + 1;
    *plVar3 = 0;
    lVar1 = *param_2;
    *param_2 = (long)plVar3;
    plVar2[2] = (long)param_2;
    *plVar3 = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 8) = plVar3;
    }
    *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  }
  return;
}

