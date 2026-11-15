
void FUN_021aaee0(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  lVar2 = param_1 + (ulong)param_2 * 0xba0;
  if (9 < param_2) {
    lVar2 = param_1;
  }
  plVar1 = *(long **)(lVar2 + 0x928);
  if (plVar1 != (long *)(lVar2 + 0x920)) {
    plVar3 = plVar1 + -2;
    do {
      if (*(int *)((long)plVar3 + 4) == 5) {
        if (*(long **)(lVar2 + 0xaa0) == plVar3) {
          FUN_0214eb90(lVar2 + 0x8b0,param_2,1);
        }
        else {
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(lVar2 + 0x930) = *(int *)(lVar2 + 0x930) + -1;
          *plVar3 = *(long *)(lVar2 + 0x938);
          *(long **)(lVar2 + 0x938) = plVar3;
        }
        break;
      }
      plVar1 = (long *)plVar1[1];
      plVar3 = plVar1 + -2;
    } while (plVar3 != (long *)(lVar2 + 0x910));
  }
  if (*(uint *)(param_1 + 0x55c28) == param_2) {
    lVar2 = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x55c2c) != param_2) goto LAB_021aafd4;
    lVar2 = 1;
  }
  ((uint *)(param_1 + 0x55c28))[lVar2] = 0xffffffff;
LAB_021aafd4:
  if (*(uint *)(param_1 + 0x55c30) == param_2) {
    lVar2 = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x55c34) != param_2) {
      return;
    }
    lVar2 = 1;
  }
  ((uint *)(param_1 + 0x55c30))[lVar2] = 0xffffffff;
  return;
}

