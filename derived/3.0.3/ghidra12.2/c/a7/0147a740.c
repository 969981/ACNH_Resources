
void FUN_0147a740(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1 != param_2) {
    iVar4 = (int)param_2[2];
    iVar1 = (int)param_1[5];
    if (iVar4 <= (int)param_1[5]) {
      iVar1 = iVar4;
    }
    plVar3 = (long *)param_1[1];
    if ((long *)param_1[1] != param_1) {
      do {
        plVar5 = (long *)plVar3[1];
        plVar6 = plVar5;
        if (*plVar3 != 0) {
          *(long **)(*plVar3 + 8) = plVar5;
          plVar6 = (long *)plVar3[1];
        }
        if (plVar6 != (long *)0x0) {
          *plVar6 = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        plVar3[-1] = param_1[3];
        param_1[3] = (long)(plVar3 + -1);
        plVar3 = plVar5;
      } while (plVar5 != param_1);
      iVar4 = (int)param_2[2];
    }
    lVar2 = param_2[1];
    if (iVar4 < 1) {
      lVar2 = 0;
    }
    if ((((0 < iVar1) && (lVar2 != 0)) && (plVar3 = (long *)(lVar2 + -8), plVar3 != (long *)0x0)) &&
       (iVar4 = (int)param_1[2], iVar4 < (int)param_1[5])) {
      do {
        if (iVar4 < (int)param_1[5]) {
          plVar5 = (long *)param_1[3];
          if (plVar5 != (long *)0x0) {
            param_1[3] = *plVar5;
          }
          lVar2 = *plVar3;
          plVar5[2] = 0;
          plVar6 = plVar5 + 1;
          *plVar6 = 0;
          *(int *)plVar5 = (int)lVar2;
          lVar2 = *param_1;
          *param_1 = (long)plVar6;
          plVar5[2] = (long)param_1;
          *plVar6 = lVar2;
          if (lVar2 != 0) {
            *(long **)(lVar2 + 8) = plVar6;
          }
          iVar4 = (int)param_1[2] + 1;
          *(int *)(param_1 + 2) = iVar4;
        }
        if (iVar1 < 2) {
          return;
        }
        if ((long *)plVar3[2] == param_2) {
          return;
        }
        plVar3 = (long *)plVar3[2] + -1;
        iVar1 = iVar1 + -1;
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}

