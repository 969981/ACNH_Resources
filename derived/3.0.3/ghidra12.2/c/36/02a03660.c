
void FUN_02a03660(long param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  
  iVar15 = *(int *)(param_1 + 0x10);
  iVar17 = *(int *)(param_1 + 0x14);
  if (0 < iVar15) {
    iVar15 = iVar15 + -1;
  }
  iVar8 = iVar17;
  if (0 < iVar17) {
    iVar8 = iVar17 + -1;
  }
  *(int *)(param_1 + 8) = param_2[1] - (iVar15 >> 1);
  *(int *)(param_1 + 0xc) = param_2[2] - (iVar8 >> 1);
  uVar3 = (iVar8 >> 1) + *param_2;
  if (((-1 < (int)uVar3) && ((int)uVar3 < iVar17 && uVar3 < *(uint *)(param_1 + 0x30))) &&
     (lVar13 = *(long *)(param_1 + 0x20), lVar13 != 0)) {
    iVar15 = *(int *)(param_1 + 0x2c) + uVar3;
    iVar17 = 0;
    if (*(int *)(param_1 + 0x28) <= iVar15) {
      iVar17 = *(int *)(param_1 + 0x28);
    }
    iVar15 = iVar15 - iVar17;
    puVar18 = (undefined8 *)(lVar13 + (long)iVar15 * 0x30);
    plVar1 = puVar18 + 3;
    piVar2 = (int *)(puVar18 + 5);
    piVar12 = (int *)((long)puVar18 + 0x24);
    piVar12[0] = 0;
    piVar12[1] = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    *puVar18 = *(undefined8 *)(param_2 + 4);
    lVar20 = *(long *)(param_2 + 4);
    if ((lVar20 == 0) || (lVar19 = *(long *)(lVar20 + 8), lVar19 == lVar20)) {
      iVar17 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      iVar17 = 0;
      iVar5 = *(int *)(param_1 + 0x10);
      bVar10 = false;
      lVar11 = lVar19 + -8;
      piVar14 = (int *)(lVar13 + (long)iVar15 * 0x30 + 0x20);
      iVar8 = iVar4;
      do {
        lVar9 = *(long *)(lVar19 + -8);
        if (iVar4 + iVar5 + -1 < (int)*(short *)(lVar9 + 8)) break;
        puVar18[2] = lVar11;
        sVar7 = *(short *)(lVar9 + 8);
        if (iVar4 <= sVar7) {
          if (!bVar10) {
            puVar18[1] = lVar11;
            sVar7 = *(short *)(lVar9 + 8);
          }
          iVar16 = iVar17;
          if (iVar8 < sVar7) {
            do {
              iVar17 = *piVar2;
              iVar6 = *piVar14;
              iVar16 = iVar17;
              if (iVar6 <= iVar17) goto LAB_02a037e4;
              iVar16 = iVar17 + 1;
              *piVar2 = iVar16;
              if (*plVar1 == 0) goto LAB_02a037e4;
              iVar8 = iVar8 + 1;
              iVar16 = 0;
              if (iVar6 <= *piVar12 + iVar17) {
                iVar16 = iVar6;
              }
              *(undefined8 *)(*plVar1 + (long)((*piVar12 + iVar17) - iVar16) * 8) = 0;
            } while (iVar8 < *(short *)(lVar9 + 8));
            iVar16 = *piVar2;
          }
LAB_02a037e4:
          iVar6 = *piVar14;
          iVar17 = iVar16;
          if (iVar6 <= iVar16) break;
          iVar17 = iVar16 + 1;
          *piVar2 = iVar17;
          if (*plVar1 == 0) break;
          iVar17 = 0;
          if (iVar6 <= *piVar12 + iVar16) {
            iVar17 = iVar6;
          }
          *(long *)(*plVar1 + (long)((*piVar12 + iVar16) - iVar17) * 8) = lVar9;
          iVar17 = *piVar2;
          if (*piVar14 <= iVar17) break;
          iVar8 = iVar8 + 1;
          bVar10 = true;
        }
        lVar19 = *(long *)(lVar19 + 8);
        lVar11 = lVar19 + -8;
      } while (lVar11 != lVar20 + -8);
    }
    piVar14 = (int *)(lVar13 + (long)iVar15 * 0x30 + 0x20);
    iVar15 = *piVar14;
    if (iVar17 < iVar15) {
      do {
        *piVar2 = iVar17 + 1;
        if (*plVar1 == 0) {
          return;
        }
        iVar8 = 0;
        if (iVar15 <= *piVar12 + iVar17) {
          iVar8 = iVar15;
        }
        *(undefined8 *)(*plVar1 + (long)((*piVar12 + iVar17) - iVar8) * 8) = 0;
        iVar17 = *piVar2;
        iVar15 = *piVar14;
      } while (iVar17 < iVar15);
    }
  }
  return;
}

