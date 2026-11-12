
void FUN_008cf224(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if ((int)param_1[2] < (int)param_1[5]) {
    plVar2 = (long *)param_1[3];
    if (plVar2 != (long *)0x0) {
      param_1[3] = *plVar2;
    }
    uVar1 = *param_2;
    plVar2[1] = 0;
    plVar2[3] = 0;
    *(undefined4 *)plVar2 = uVar1;
    plVar3 = plVar2 + 2;
    *plVar3 = 0;
    lVar4 = *param_1;
    *param_1 = (long)plVar3;
    plVar2[3] = (long)param_1;
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}

