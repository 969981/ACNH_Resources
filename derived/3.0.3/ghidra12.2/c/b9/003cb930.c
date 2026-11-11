
void FUN_003cb930(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_2 + 0x288);
  if (plVar1 != (long *)(param_1 + 8)) {
    plVar2 = *(long **)(param_2 + 0x290);
    lVar4 = *plVar2;
    *(long **)(*(long *)(param_2 + 0x288) + 8) = plVar2;
    *plVar2 = *(long *)(param_2 + 0x288);
    *(long **)(lVar4 + 8) = plVar1;
    *(long *)(param_2 + 0x288) = lVar4;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  plVar2 = (long *)(param_1 + 8);
  do {
    plVar3 = plVar2;
    if (plVar3 == plVar5) {
      plVar2 = (long *)*plVar5;
      plVar3 = plVar5;
      break;
    }
    plVar2 = (long *)*plVar3;
  } while (*(int *)(param_2 + 0x204) < *(int *)((long)plVar2 + -0x84));
  lVar4 = *plVar1;
  *plVar1 = (long)plVar2;
  *(long **)(lVar4 + 8) = plVar3;
  *(long **)(*plVar3 + 8) = plVar1;
  *plVar3 = lVar4;
  return;
}

