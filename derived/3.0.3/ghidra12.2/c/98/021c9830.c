
void FUN_021c9830(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = DAT_04ceac30;
  plVar1 = (long *)(param_1 + 0x55fd0);
  lVar4 = *plVar1;
  plVar5 = *(long **)(param_1 + 0x55fd8);
  if ((plVar5 != (long *)0x0 || lVar4 != 0) && (lVar3 = *(long *)(param_1 + 0x55fe8), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x55fe8) = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x55fd8);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x55fd8) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x55fe8);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x55fd8);
    *(undefined8 *)(param_1 + 0x55fe8) = 0;
    if (*plVar1 != 0) {
      *(long **)(*plVar1 + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x55fd8);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x55fd8) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x55fe8) = lVar2 + 200;
  lVar4 = *(long *)(lVar2 + 200);
  *(long **)(lVar2 + 200) = plVar1;
  *plVar1 = lVar4;
  *(long *)(param_1 + 0x55fd8) = lVar2 + 200;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(lVar2 + 0xd8) = *(int *)(lVar2 + 0xd8) + 1;
  return;
}

