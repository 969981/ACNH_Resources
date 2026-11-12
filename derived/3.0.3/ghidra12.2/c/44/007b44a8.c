
void FUN_007b44a8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = DAT_04ca9180;
  if (DAT_04ca9180 != 0) {
    plVar2 = (long *)(param_1 + 0x20);
    lVar4 = *plVar2;
    plVar5 = *(long **)(param_1 + 0x28);
    if ((plVar5 != (long *)0x0 || lVar4 != 0) && (lVar3 = *(long *)(param_1 + 0x38), lVar3 != 0)) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar5;
        plVar5 = *(long **)(param_1 + 0x28);
      }
      if (plVar5 != (long *)0x0) {
        *plVar5 = *plVar2;
      }
      *plVar2 = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    }
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      plVar5 = *(long **)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (*(long *)(param_1 + 0x20) != 0) {
        *(long **)(*(long *)(param_1 + 0x20) + 8) = plVar5;
        plVar5 = *(long **)(param_1 + 0x28);
      }
      if (plVar5 != (long *)0x0) {
        *plVar5 = *plVar2;
      }
      *plVar2 = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    }
    *(long *)(param_1 + 0x38) = lVar1 + 0x158;
    lVar4 = *(long *)(lVar1 + 0x158);
    *(long **)(lVar1 + 0x158) = plVar2;
    *(long *)(param_1 + 0x20) = lVar4;
    *(long *)(param_1 + 0x28) = lVar1 + 0x158;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar2;
    }
    *(int *)(lVar1 + 0x168) = *(int *)(lVar1 + 0x168) + 1;
  }
  return;
}

