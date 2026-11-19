
/* WARNING: Removing unreachable block (ram,0x038a9578) */
/* WARNING: Removing unreachable block (ram,0x038a9634) */

void FUN_038a94d0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 8);
  plVar2 = (long *)(param_1 + 0x28);
  lVar4 = *plVar2;
  plVar5 = *(long **)(param_1 + 0x30);
  if ((plVar5 != (long *)0x0 || lVar4 != 0) && (lVar3 = *(long *)(param_1 + 0x40), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x30);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long **)(*(long *)(param_1 + 0x28) + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x30);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0x40) = lVar1 + 0x1b0;
  lVar4 = *(long *)(lVar1 + 0x1b0);
  *(long **)(lVar1 + 0x1b0) = plVar2;
  *(long *)(param_1 + 0x28) = lVar4;
  *(long *)(param_1 + 0x30) = lVar1 + 0x1b0;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar2;
  }
  *(int *)(lVar1 + 0x1c0) = *(int *)(lVar1 + 0x1c0) + 1;
  plVar2 = (long *)(param_1 + 0x88);
  lVar4 = *plVar2;
  plVar5 = *(long **)(param_1 + 0x90);
  if ((plVar5 != (long *)0x0 || lVar4 != 0) && (lVar3 = *(long *)(param_1 + 0xa0), lVar3 != 0)) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x90);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (*(long *)(param_1 + 0x88) != 0) {
      *(long **)(*(long *)(param_1 + 0x88) + 8) = plVar5;
      plVar5 = *(long **)(param_1 + 0x90);
    }
    if (plVar5 != (long *)0x0) {
      *plVar5 = *plVar2;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long *)(param_1 + 0xa0) = lVar1 + 0x1d0;
  lVar4 = *(long *)(lVar1 + 0x1d0);
  *(long **)(lVar1 + 0x1d0) = plVar2;
  *(long *)(param_1 + 0x88) = lVar4;
  *(long *)(param_1 + 0x90) = lVar1 + 0x1d0;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar2;
  }
  *(int *)(lVar1 + 0x1e0) = *(int *)(lVar1 + 0x1e0) + 1;
  *(undefined8 *)(param_1 + 0x168) = 0x500000002;
  return;
}

