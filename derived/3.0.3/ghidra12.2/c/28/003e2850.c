
void FUN_003e2850(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN_003dd5ac(param_1 + 0x10);
  plVar6 = (long *)*param_1;
  lVar3 = FUN_003c0150(param_1 + 2);
  uVar8 = 0x11d40;
  if (lVar3 != 0) {
    uVar8 = lVar3 * 2 + 0x11d70;
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    uVar7 = (ulong)param_1[1] / uVar8;
  }
  if (0 < (int)uVar7) {
    do {
      (**(code **)(*plVar6 + 8))(plVar6);
      plVar6 = plVar6 + 0x23a8;
      uVar2 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  plVar6 = (long *)param_1[6];
  while (plVar6 != param_1 + 5) {
    plVar1 = (long *)plVar6[1];
    lVar3 = *plVar1;
    *(long **)(*plVar6 + 8) = plVar1;
    *plVar1 = *plVar6;
    *(long **)(lVar3 + 8) = plVar6;
    *plVar6 = lVar3;
    plVar6 = (long *)param_1[6];
  }
  plVar6 = (long *)param_1[4];
  while (plVar6 != param_1 + 3) {
    plVar1 = (long *)plVar6[1];
    lVar3 = *plVar1;
    *(long **)(*plVar6 + 8) = plVar1;
    *plVar1 = *plVar6;
    *(long **)(lVar3 + 8) = plVar6;
    *plVar6 = lVar3;
    plVar6 = (long *)param_1[4];
  }
  puVar5 = (undefined8 *)param_1[0xf];
  while (puVar5 != param_1 + 0xe) {
    nn::os::SleepThread(5000000);
    puVar5 = (undefined8 *)param_1[0xf];
  }
  uVar8 = (ulong)param_1[0xb] / 0x3640;
  if (0 < (int)uVar8) {
    lVar3 = param_1[10];
    do {
      FUN_003d8f90(lVar3);
      lVar3 = lVar3 + 0x3640;
      uVar2 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  plVar6 = (long *)param_1[0xd];
  while (plVar6 != param_1 + 0xc) {
    plVar1 = (long *)plVar6[1];
    lVar3 = *plVar1;
    *(long **)(*plVar6 + 8) = plVar1;
    *plVar1 = *plVar6;
    *(long **)(lVar3 + 8) = plVar6;
    *plVar6 = lVar3;
    plVar6 = (long *)param_1[0xd];
  }
  uVar4 = FUN_003ca198();
  FUN_003ca50c(uVar4,param_1 + 7);
  return;
}

