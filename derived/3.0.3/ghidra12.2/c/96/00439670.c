
void FUN_00439670(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  plVar2 = *(long **)(param_1 + 8);
  iVar5 = (int)plVar2[3];
  lVar4 = (long)(int)plVar2[1];
  lVar8 = *(long *)(param_1 + 0x18);
  iVar9 = iVar5 + -1;
  if (0 < (int)plVar2[1]) {
    lVar7 = *plVar2;
    if (*(long *)(lVar7 + lVar4 * 0x18 + -0x10) == lVar8) {
      lVar6 = lVar4 * 0x18;
      do {
        lVar8 = *(long *)(lVar7 + lVar6 + -0x18);
        iVar9 = *(int *)(lVar7 + lVar6 + -8);
        *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
        plVar2 = *(long **)(param_1 + 8);
        lVar4 = lVar4 + -1;
        if (lVar4 < 1) break;
        lVar7 = *plVar2;
        lVar1 = lVar7 + lVar6;
        lVar6 = lVar6 + -0x18;
      } while (*(long *)(lVar1 + -0x28) == lVar8);
    }
    iVar5 = (int)plVar2[3];
    if (iVar9 < iVar5 + -1) {
      lVar4 = *(long *)(param_1 + 0x30);
      lVar7 = (long)(iVar5 + -1);
      do {
        if (lVar4 != 0) {
          (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                    (*(long **)(param_1 + 0x38),lVar4,*(undefined8 *)(param_1 + 0x10));
          *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
          plVar2 = *(long **)(param_1 + 8);
        }
        lVar4 = *(long *)(plVar2[2] + lVar7 * 8);
        lVar7 = lVar7 + -1;
        *(long *)(param_1 + 0x30) = lVar4;
      } while (iVar9 < lVar7);
      iVar5 = (int)plVar2[3];
    }
  }
  if (iVar5 <= iVar9 || iVar9 + 1 < iVar5) {
    *(int *)(plVar2 + 3) = iVar9 + 1;
  }
  plVar2 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 0x18) = lVar8;
  if ((int)plVar2[3] == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    iVar5 = (int)plVar2[1];
  }
  else {
    *(long *)(param_1 + 0x20) =
         *(long *)(param_1 + 0x10) + *(long *)(plVar2[2] + (long)((int)plVar2[3] + -1) * 8);
    iVar5 = (int)plVar2[1];
  }
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*plVar2 + (long)(iVar5 + -1) * 0x18 + 8);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  return;
}

