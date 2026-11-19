
void FUN_03b7b3d0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  uVar4 = (ulong)DAT_04c4ba68;
  if (DAT_04c4ba68 != 0) {
    lVar8 = *(long *)(param_1 + 0x180);
    uVar5 = 0;
    do {
      lVar10 = lVar8 + uVar5 * 0x18;
      iVar2 = *(int *)(lVar10 + 0x10);
      while (0 < iVar2) {
        plVar12 = *(long **)(lVar10 + 8);
        if (*plVar12 != 0) {
          *(long *)(*plVar12 + 8) = plVar12[1];
        }
        if ((long *)plVar12[1] != (long *)0x0) {
          *(long *)plVar12[1] = *plVar12;
        }
        *plVar12 = 0;
        plVar12[1] = 0;
        *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
        plVar12 = (long *)((long)plVar12 +
                          ((long)*(int *)(param_1 + 0x17c) -
                          (long)*(int *)(lVar8 + uVar5 * 0x18 + 0x14)));
        lVar8 = *(long *)(param_1 + 0x168);
        *(long **)(param_1 + 0x168) = plVar12;
        *plVar12 = lVar8;
        plVar12[1] = param_1 + 0x168;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 8) = plVar12;
        }
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        lVar8 = *(long *)(param_1 + 0x180);
        lVar10 = lVar8 + uVar5 * 0x18;
        iVar2 = *(int *)(lVar10 + 0x10);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  if ((*(int *)(param_1 + 0x178) != 0) && (1 < *(int *)(param_1 + 0x178))) {
    puVar1 = (undefined8 *)(param_1 + 0x168);
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x170) + 8);
    if (puVar6 != puVar1) {
      lVar8 = -(long)*(int *)(param_1 + 0x17c);
      do {
        puVar7 = (undefined8 *)puVar6[1];
        puVar11 = (undefined8 *)*puVar6;
        lVar10 = *(long *)((long)puVar6 + lVar8 + 0x20);
        if (0 < *(long *)((long)puVar11 + lVar8 + 0x20) - lVar10) {
          puVar9 = puVar11;
          do {
            puVar9 = (undefined8 *)*puVar9;
            puVar3 = puVar1;
            if (puVar9 == puVar1) break;
            puVar3 = puVar9;
          } while (0 < *(long *)((long)puVar9 + lVar8 + 0x20) - lVar10);
          puVar9 = puVar7;
          if (puVar11 != (undefined8 *)0x0) {
            puVar11[1] = puVar7;
            puVar9 = (undefined8 *)puVar6[1];
          }
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = *puVar6;
          }
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar11 = (undefined8 *)puVar3[1];
          puVar3[1] = puVar6;
          *puVar6 = puVar3;
          puVar6[1] = puVar11;
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = puVar6;
          }
        }
        puVar6 = puVar7;
      } while (puVar7 != puVar1);
    }
  }
  return;
}

