
void FUN_0214e518(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if ((int)param_1[2] < (int)param_1[5]) {
    plVar2 = (long *)param_1[3];
    if (plVar2 != (long *)0x0) {
      param_1[3] = *plVar2;
    }
    *plVar2 = 0;
    *(undefined1 *)plVar2 = *param_2;
    *(undefined1 *)((long)plVar2 + 1) = param_2[1];
    *(undefined1 *)((long)plVar2 + 2) = param_2[2];
    *(undefined1 *)((long)plVar2 + 3) = param_2[3];
    *(undefined4 *)((long)plVar2 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)(plVar2 + 1) = param_2[8];
    *(undefined1 *)((long)plVar2 + 9) = param_2[9];
    uVar1 = param_2[10];
    plVar3 = plVar2 + 2;
    *plVar3 = 0;
    plVar2[3] = 0;
    *(undefined1 *)((long)plVar2 + 10) = uVar1;
    lVar4 = *param_1;
    *param_1 = (long)plVar3;
    *plVar3 = lVar4;
    plVar2[3] = (long)param_1;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}

