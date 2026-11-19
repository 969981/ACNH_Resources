
void FUN_03c5d8d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  (**(code **)(*param_1 + 0x30))();
  if ((long *)param_1[0x2b] != param_1 + 0x2a) {
    lVar2 = (long)*(int *)((long)param_1 + 0x164);
    plVar1 = (long *)(param_1[0x2b] - lVar2);
    do {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      plVar1 = (long *)(*(long *)((long)plVar1 + lVar2 + 8) - lVar2);
    } while (plVar1 != (long *)((long)(param_1 + 0x2a) - lVar2));
  }
  lVar2 = param_1[0x2d];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 8) != lVar2)) {
    lVar3 = (long)*(int *)(lVar2 + 0x14);
    plVar1 = (long *)(*(long *)(lVar2 + 8) - lVar3);
    do {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      plVar1 = (long *)(*(long *)((long)plVar1 + lVar3 + 8) - lVar3);
    } while (plVar1 != (long *)(lVar2 - lVar3));
  }
  lVar2 = param_1[0x2e];
  if ((lVar2 != 0) && (*(long *)(lVar2 + 8) != lVar2)) {
    lVar3 = (long)*(int *)(lVar2 + 0x14);
    plVar1 = (long *)(*(long *)(lVar2 + 8) - lVar3);
    do {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      plVar1 = (long *)(*(long *)((long)plVar1 + lVar3 + 8) - lVar3);
    } while (plVar1 != (long *)(lVar2 - lVar3));
  }
  if ((long *)param_1[0x33] != param_1 + 0x32) {
    lVar3 = (long)*(int *)((long)param_1 + 0x1a4);
    lVar2 = param_1[0x33] - lVar3;
    do {
      FUN_03ea8060(lVar2);
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != (long)(param_1 + 0x32) - lVar3);
  }
  if ((long *)param_1[0x30] != param_1 + 0x2f) {
    lVar2 = (long)*(int *)((long)param_1 + 0x18c);
    plVar1 = (long *)(param_1[0x30] - lVar2);
    do {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      plVar1 = (long *)(*(long *)((long)plVar1 + lVar2 + 8) - lVar2);
    } while (plVar1 != (long *)((long)(param_1 + 0x2f) - lVar2));
  }
  if ((long *)param_1[8] != param_1 + 7) {
    lVar3 = (long)*(int *)((long)param_1 + 0x4c);
    lVar2 = param_1[8] - lVar3;
    do {
      FUN_03c5d8d0(lVar2);
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != (long)(param_1 + 7) - lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x03c5daac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}

