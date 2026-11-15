
void FUN_020008a0(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  iVar2 = *param_2;
  if ((iVar2 != 0) && (plVar1 = *(long **)(param_1 + 8), (int)plVar1[2] < (int)plVar1[5])) {
    plVar4 = (long *)plVar1[3];
    if (plVar4 != (long *)0x0) {
      plVar1[3] = *plVar4;
      iVar2 = *param_2;
    }
    *(int *)plVar4 = iVar2;
    plVar4[2] = 0;
    plVar5 = plVar4 + 1;
    *plVar5 = 0;
    lVar3 = *plVar1;
    *plVar1 = (long)plVar5;
    plVar4[2] = (long)plVar1;
    *plVar5 = lVar3;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar5;
    }
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  }
  return;
}

