
void FUN_0086d868(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = DAT_04ceac30;
  lVar3 = *(long *)(param_1 + 0x430);
  plVar5 = *(long **)(lVar3 + 0x28);
  plVar1 = (long *)(lVar3 + 0x20);
  lVar6 = *plVar1;
  if ((plVar5 != (long *)0x0 || lVar6 != 0) && (lVar4 = *(long *)(lVar3 + 0x38), lVar4 != 0)) {
    *(undefined8 *)(lVar3 + 0x38) = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
      plVar5 = *(long **)(lVar3 + 0x28);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar3 + 0x38);
  if (lVar6 != 0) {
    plVar5 = *(long **)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x38) = 0;
    if (*(long *)(lVar3 + 0x20) != 0) {
      *(long **)(*(long *)(lVar3 + 0x20) + 8) = plVar5;
      plVar5 = *(long **)(lVar3 + 0x28);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  *(long *)(lVar3 + 0x38) = lVar2 + 0x88;
  lVar6 = *(long *)(lVar2 + 0x88);
  *(long **)(lVar2 + 0x88) = plVar1;
  *(long *)(lVar3 + 0x20) = lVar6;
  *(long *)(lVar3 + 0x28) = lVar2 + 0x88;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar1;
  }
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  lVar2 = DAT_04ceac30;
  lVar3 = *(long *)(param_1 + 0x438);
  plVar5 = *(long **)(lVar3 + 0x28);
  plVar1 = (long *)(lVar3 + 0x20);
  lVar6 = *plVar1;
  if ((plVar5 != (long *)0x0 || lVar6 != 0) && (lVar4 = *(long *)(lVar3 + 0x38), lVar4 != 0)) {
    *(undefined8 *)(lVar3 + 0x38) = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
      plVar5 = *(long **)(lVar3 + 0x28);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar3 + 0x38);
  if (lVar6 != 0) {
    plVar5 = *(long **)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x38) = 0;
    if (*(long *)(lVar3 + 0x20) != 0) {
      *(long **)(*(long *)(lVar3 + 0x20) + 8) = plVar5;
      plVar5 = *(long **)(lVar3 + 0x28);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  *(long *)(lVar3 + 0x38) = lVar2 + 0xa8;
  lVar6 = *(long *)(lVar2 + 0xa8);
  *(long **)(lVar2 + 0xa8) = plVar1;
  *(long *)(lVar3 + 0x20) = lVar6;
  *(long *)(lVar3 + 0x28) = lVar2 + 0xa8;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar1;
  }
  lVar3 = DAT_04ceac30;
  *(int *)(lVar2 + 0xb8) = *(int *)(lVar2 + 0xb8) + 1;
  lVar2 = *(long *)(param_1 + 0x440);
  plVar5 = *(long **)(lVar2 + 0x28);
  plVar1 = (long *)(lVar2 + 0x20);
  lVar6 = *plVar1;
  if ((plVar5 != (long *)0x0 || lVar6 != 0) && (lVar4 = *(long *)(lVar2 + 0x38), lVar4 != 0)) {
    *(undefined8 *)(lVar2 + 0x38) = 0;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
      plVar5 = *(long **)(lVar2 + 0x28);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  lVar6 = *(long *)(lVar2 + 0x38);
  if (lVar6 != 0) {
    plVar5 = *(long **)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    if (*(long *)(lVar2 + 0x20) != 0) {
      *(long **)(*(long *)(lVar2 + 0x20) + 8) = plVar5;
      plVar5 = *(long **)(lVar2 + 0x28);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar1;
    }
    *plVar1 = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  *(long *)(lVar2 + 0x38) = lVar3 + 200;
  lVar6 = *(long *)(lVar3 + 200);
  *(long **)(lVar3 + 200) = plVar1;
  *(long *)(lVar2 + 0x20) = lVar6;
  *(long *)(lVar2 + 0x28) = lVar3 + 200;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar1;
  }
  *(int *)(lVar3 + 0xd8) = *(int *)(lVar3 + 0xd8) + 1;
  return;
}

