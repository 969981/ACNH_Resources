
void FUN_003e1a20(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = (long *)*param_1;
  lVar4 = FUN_003c0150(param_1 + 2);
  uVar1 = 0x9b0;
  if (lVar4 != 0) {
    uVar1 = lVar4 * 2 + 0x9e0;
  }
  uVar6 = 0;
  if (uVar1 != 0) {
    uVar6 = (ulong)param_1[1] / uVar1;
  }
  if (0 < (int)uVar6) {
    do {
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar5 = plVar5 + 0x136;
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
    } while (uVar3 != 0);
  }
  plVar5 = (long *)param_1[6];
  while (plVar5 != param_1 + 5) {
    plVar2 = (long *)plVar5[1];
    lVar4 = *plVar2;
    *(long **)(*plVar5 + 8) = plVar2;
    *plVar2 = *plVar5;
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    plVar5 = (long *)param_1[6];
  }
  plVar5 = (long *)param_1[4];
  while (plVar5 != param_1 + 3) {
    plVar2 = (long *)plVar5[1];
    lVar4 = *plVar2;
    *(long **)(*plVar5 + 8) = plVar2;
    *plVar2 = *plVar5;
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    plVar5 = (long *)param_1[4];
  }
  return;
}

