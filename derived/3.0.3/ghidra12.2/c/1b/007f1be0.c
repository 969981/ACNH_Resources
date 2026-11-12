
void FUN_007f1be0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined2 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_16e0 [5792];
  undefined1 auStack_22 [2];
  
  puVar3 = PTR_DAT_04bb3170;
  uVar12 = *param_1;
  if (0 < (int)uVar12) {
    uVar13 = 0;
    do {
      FUN_007ef010(auStack_22,*(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar13 * 8));
      FUN_007e4920(auStack_16e0,auStack_22);
      iVar4 = FUN_007e7930(auStack_16e0);
      if (uVar13 < *param_1) {
        lVar6 = (long)(int)uVar13;
        puVar8 = *(undefined2 **)(*(long *)(param_1 + 2) + lVar6 * 8);
        if (iVar4 == *(int *)(puVar8 + 2)) {
          *puVar8 = *(undefined2 *)puVar3;
          *(undefined4 *)(*(long *)(*(long *)(param_1 + 2) + lVar6 * 8) + 4) = 0;
          if ((int)uVar13 < (int)*param_1) {
            puVar10 = *(undefined8 **)(param_1 + 4);
            do {
              puVar11 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar6 * 8);
              lVar6 = lVar6 + 1;
              *puVar11 = puVar10;
              *(undefined8 **)(param_1 + 4) = puVar11;
              puVar10 = puVar11;
            } while (lVar6 < (int)(uVar13 + 1));
          }
          if ((-1 < (int)uVar13) && (uVar5 = *param_1, (int)uVar13 < (int)uVar5)) {
            uVar1 = uVar13 + 1;
            uVar2 = uVar5 - uVar1;
            if (uVar2 != 0 && (int)uVar1 <= (int)uVar5) {
              memmove((void *)(*(long *)(param_1 + 2) + (ulong)uVar13 * 8),
                      (void *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 8),
                      -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
              uVar5 = *param_1;
            }
            *param_1 = uVar5 - 1;
          }
          uVar13 = uVar13 - 1;
          uVar12 = uVar12 - 1;
        }
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar12);
  }
  if (DAT_0537d558 != 0) {
    lVar6 = *(long *)(DAT_0537d558 + 0x10);
    iVar4 = *(int *)(lVar6 + 0x380);
    if ((1 < iVar4 - 0x25U) && (iVar4 != 0x23)) {
      if (iVar4 != 0x24) {
        return;
      }
      if ((*(long *)(lVar6 + 0x3c8) != 0) && (-1 < (int)*(uint *)(lVar6 + 0x3d8))) {
        lVar7 = (ulong)*(uint *)(lVar6 + 0x3d8) + 1;
        plVar9 = (long *)(*(long *)(lVar6 + 0x3c8) + 8);
        do {
          if ((undefined *)plVar9[-1] == PTR_LAB_04bc12b0 && *plVar9 == 0) {
            return;
          }
          plVar9 = plVar9 + 4;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    if (0 < (int)*param_1) {
      lVar6 = 0;
      puVar10 = *(undefined8 **)(param_1 + 4);
      do {
        puVar11 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar6 * 8);
        lVar6 = lVar6 + 1;
        *puVar11 = puVar10;
        *(undefined8 **)(param_1 + 4) = puVar11;
        puVar10 = puVar11;
      } while (lVar6 < (int)*param_1);
    }
    *param_1 = 0;
  }
  return;
}

