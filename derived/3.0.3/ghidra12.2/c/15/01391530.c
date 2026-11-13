
void FUN_01391530(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  
  uVar6 = 0;
  do {
    piVar15 = (int *)(param_1 + 0x20 + ((long)((ulong)uVar6 << 0x20) >> 0x1c));
    iVar2 = *piVar15;
    if (iVar2 != 0) {
      lVar12 = *(long *)(piVar15 + 2);
      iVar13 = 0;
      do {
        lVar14 = lVar12 + (long)iVar13 * 0x30;
        piVar15 = (int *)(lVar14 + 0x28);
        *(undefined4 *)(lVar14 + 0x10) = 0;
        if (0 < *piVar15) {
          lVar7 = lVar12 + (long)iVar13 * 0x30;
          lVar10 = 0;
          do {
            iVar4 = *(int *)(lVar7 + 0x24);
            iVar11 = *(int *)(lVar7 + 0x20);
            iVar3 = 0;
            if (iVar11 <= (int)lVar10 + iVar4) {
              iVar3 = iVar11;
            }
            (*(code *)**(undefined8 **)
                        (*(long *)(lVar14 + 0x18) + ((lVar10 - iVar3) + (long)iVar4) * 0x18))();
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < *piVar15);
        }
        *piVar15 = 0;
        *(undefined4 *)(lVar12 + (long)iVar13 * 0x30 + 0x24) = 0;
        iVar13 = iVar13 + 1;
      } while (iVar2 != iVar13);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x1e);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    iVar13 = 0;
    lVar12 = *(long *)(param_1 + 0x18);
    do {
      lVar14 = lVar12 + (long)iVar13 * 0x18;
      uVar6 = *(uint *)(lVar14 + 8);
      if (uVar6 != 0) {
        lVar14 = *(long *)(lVar14 + 0x10);
        uVar9 = 0;
        do {
          piVar15 = (int *)(lVar14 + ((long)((ulong)uVar9 << 0x20) >> 0x1c));
          iVar3 = *piVar15;
          if (iVar3 != 0) {
            lVar10 = *(long *)(piVar15 + 2);
            iVar11 = 0;
            do {
              FUN_0139543c(lVar10 + (long)iVar11 * 0x518);
              iVar11 = iVar11 + 1;
            } while (iVar3 != iVar11);
          }
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
      }
      iVar13 = iVar13 + 1;
    } while (iVar2 != iVar13);
  }
  puVar1 = (undefined8 *)(param_1 + 0x208);
  puVar5 = *(undefined8 **)(param_1 + 0x210);
  while (puVar5 != puVar1) {
    puVar8 = (undefined8 *)puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = puVar8;
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 **)(param_1 + 0x210) = puVar1;
  *(undefined8 **)(param_1 + 0x208) = puVar1;
  return;
}

