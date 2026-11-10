
void FUN_003320e0(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *(undefined8 *)(param_1 + 0x490) = 0;
  if (param_2 == 0) {
    FUN_0032c410("Heap is not set in the argument of the resource destruction method.");
    lVar4 = *(long *)(param_1 + 0x518);
  }
  else {
    *(long *)(param_1 + 0x440) = param_2;
    lVar4 = *(long *)(param_1 + 0x518);
  }
  if (lVar4 != 0) {
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + -1;
    (**(code **)(**(long **)(param_1 + 0x440) + 0x18))();
  }
  plVar1 = (long *)(param_1 + 0x438);
  if (*(char *)(param_1 + 0x4a8) != '\0') {
    FUN_003a0840(*(undefined8 *)(*(long *)(param_1 + 0x4b8) + 0x20),*(undefined8 *)(param_1 + 0x4b0)
                );
    FUN_003a08d0(*(undefined8 *)(param_1 + 0x4b8));
    if (*(long *)(param_1 + 0x4c8) != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    *(undefined1 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    *(undefined8 *)(param_1 + 0x4c8) = 0;
  }
  if (*(char *)(param_1 + 0x4e8) != '\0') {
    FUN_003a0840(*(undefined8 *)(*(long *)(param_1 + 0x4f8) + 0x20),*(undefined8 *)(param_1 + 0x4f0)
                );
    FUN_003a08d0(*(undefined8 *)(param_1 + 0x4f8));
    if (*(long *)(param_1 + 0x508) != 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    *(undefined1 *)(param_1 + 0x4e8) = 0;
    *(undefined4 *)(param_1 + 0x510) = 0;
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x500) = 0;
    *(undefined8 *)(param_1 + 0x508) = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + -1;
    (**(code **)(**(long **)(param_1 + 0x440) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + -1;
    (**(code **)(**(long **)(param_1 + 0x440) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_0039c6d0(*(long *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar4 = 0;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x28) + lVar4 * 8);
      FUN_0034f7c4(*(undefined8 *)(lVar7 + 0x80),uVar6);
      FUN_0034f968(*(undefined8 *)(lVar7 + 0x88),uVar6);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x98));
  }
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x48) == *(long *)(lVar4 + 0x40)) {
      FUN_0034915c(*(long *)(lVar4 + 0x48),*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (((param_3 != (long *)0x0) && (*param_3 != 0)) && (iVar5 = *(int *)(param_1 + 0x44), 0 < iVar5)
     ) {
    lVar7 = *(long *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      if (0 < *(int *)(lVar7 + lVar4 * 0x38 + 4)) {
        lVar8 = 0;
        lVar9 = 0x10;
        do {
          lVar2 = lVar4 * 0x38;
          (*(code *)*param_3)(*(undefined8 *)
                               (*(long *)(*(long *)(lVar7 + lVar2 + 0x18) + lVar9) + 0xa40),
                              param_3[1]);
          (*(code *)*param_3)(*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + lVar2 + 0x18) +
                                         lVar9) + 0xa60),param_3[1]);
          (*(code *)*param_3)(*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + lVar2 + 0x18) +
                                         lVar9) + 0xa80),param_3[1]);
          lVar7 = *(long *)(param_1 + 0x50);
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0x430;
        } while (lVar8 < *(int *)(lVar7 + lVar2 + 4));
        iVar5 = *(int *)(param_1 + 0x44);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar5);
  }
  if (0 < *(int *)(param_1 + 0x44)) {
    lVar4 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x50);
      if (0 < *(int *)(lVar7 + lVar4 * 0x38 + 4)) {
        lVar9 = 0;
        lVar8 = 0;
        do {
          lVar7 = *(long *)(lVar7 + lVar4 * 0x38 + 0x18) + lVar9;
          FUN_00322f30(lVar7,*(undefined8 *)(param_1 + 0x10));
          FUN_00323ad4(lVar7,*(undefined8 *)(param_1 + 0x10));
          lVar7 = *(long *)(param_1 + 0x50);
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0x430;
        } while (lVar8 < *(int *)(lVar7 + lVar4 * 0x38 + 4));
      }
      uVar6 = *(undefined8 *)(lVar7 + lVar4 * 0x38 + 0x20);
      *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + -1;
      (**(code **)(**(long **)(param_1 + 0x440) + 0x18))(*(long **)(param_1 + 0x440),uVar6);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x44));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + -1;
    (**(code **)(**(long **)(param_1 + 0x440) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + -1;
    (**(code **)(**(long **)(param_1 + 0x440) + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  uVar3 = FUN_00334574(param_1 + 0xe8);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00334574(param_1 + 0x290);
  }
  else {
    FUN_0033458c(param_1 + 0xe8,*(undefined8 *)(param_1 + 0x10),plVar1);
    uVar3 = FUN_00334574(param_1 + 0x290);
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  FUN_0033458c(param_1 + 0x290,*(undefined8 *)(param_1 + 0x10),plVar1);
  return;
}

