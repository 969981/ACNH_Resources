
void FUN_019086d0(long param_1)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  piVar1 = (int *)(**(code **)(*(long *)(param_1 + 0x40) + 0xf0))();
  if (*piVar1 == 2) {
    lVar2 = 0;
    if ((0 < *(int *)(param_1 + 0x1f8)) && (*(int *)(param_1 + 0x1d8) != 0)) {
      plVar3 = *(long **)(param_1 + 0x1e0);
LAB_01908744:
      lVar2 = *plVar3;
    }
  }
  else {
    if (*piVar1 != 1) {
      lVar4 = 0;
      goto LAB_0190875c;
    }
    lVar2 = 0;
    if ((0 < *(int *)(param_1 + 0x170)) && (*(int *)(param_1 + 0x150) != 0)) {
      plVar3 = *(long **)(param_1 + 0x158);
      goto LAB_01908744;
    }
  }
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar4 = lVar2 + 0x30;
  }
LAB_0190875c:
  *(long *)(param_1 + 0x30) = lVar4;
  return;
}

