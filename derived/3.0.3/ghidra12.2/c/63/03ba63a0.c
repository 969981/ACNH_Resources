
void FUN_03ba63a0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x1b0);
    if (plVar4 != (long *)(param_1 + 0x1a8)) {
      plVar1 = (long *)(*(int *)(param_1 + 0x1bc) + param_2);
      do {
        if (plVar4 == plVar1) {
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + -1;
          break;
        }
        plVar4 = (long *)plVar4[1];
      } while (plVar4 != (long *)(param_1 + 0x1a8));
    }
    lVar2 = param_2;
  }
  do {
    lVar3 = *(long *)(*(long *)(param_1 + 0x160) + 0x38);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != lVar3)) {
      lVar5 = (long)*(int *)(lVar3 + 0x14);
      lVar7 = *(long *)(lVar3 + 8) - lVar5;
      lVar6 = lVar7 + lVar5;
      do {
        lVar6 = *(long *)(lVar6 + 8);
        if (lVar7 == param_2) {
          plVar4 = (long *)(lVar2 + *(int *)(lVar3 + 0x14));
          if (*plVar4 != 0) {
            *(long *)(*plVar4 + 8) = plVar4[1];
          }
          if ((long *)plVar4[1] != (long *)0x0) {
            *(long *)plVar4[1] = *plVar4;
          }
          *plVar4 = 0;
          plVar4[1] = 0;
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
        }
        lVar7 = lVar6 - lVar5;
      } while (lVar7 != lVar3 - lVar5);
    }
  } while ((*(long *)(param_1 + 0x58) != 0) &&
          (param_1 = *(long *)(*(long *)(param_1 + 0x58) + 0x20), param_1 != 0));
  return;
}

