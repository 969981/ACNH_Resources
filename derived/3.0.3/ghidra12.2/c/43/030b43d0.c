
void FUN_030b43d0(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  
  plVar6 = (long *)(param_1 + 0xafca0);
  iVar13 = *(int *)(param_1 + 0xafcc8);
  lVar10 = (long)*(int *)(param_1 + 0xafccc);
  plVar7 = (long *)(param_1 + 0xafcb8);
  plVar16 = (long *)*plVar7;
  plVar9 = plVar16;
  if (iVar13 < 1) {
    plVar9 = (long *)0x0;
  }
  lVar8 = (long)plVar9 - lVar10;
  if ((plVar9 != (long *)0x0 && lVar8 != 0) && (*(char *)(lVar8 + 0x15) == '\0')) {
    uVar11 = *(uint *)(param_1 + 0xafcd0);
    if (uVar11 >> 4 < 0x271) {
      lVar12 = -lVar10;
      lVar14 = lVar12 + (long)plVar16;
      lVar2 = lVar12 + (long)plVar7;
      if (plVar16 != plVar7) {
        do {
          if (*(char *)(lVar14 + 0x15) != '\0') {
            lVar17 = lVar14;
            goto LAB_030b4454;
          }
          lVar14 = *(long *)(lVar14 + lVar10) + lVar12;
        } while (lVar14 != lVar2);
      }
      lVar17 = lVar2;
LAB_030b4454:
      lVar15 = *(long *)(param_1 + 0xafcc0) + lVar12;
      if (lVar17 != lVar2) {
        lVar15 = lVar14;
      }
      if (lVar15 != lVar2) {
        do {
          if (uVar11 >> 4 < 0x271) {
            *(undefined2 *)(lVar15 + 0x15) = 0x101;
            uVar11 = *(int *)(param_1 + 0xafcd0) + 1;
            *(uint *)(param_1 + 0xafcd0) = uVar11;
          }
          lVar15 = *(long *)(lVar15 + lVar10 + 8) + lVar12;
        } while (lVar15 != lVar2);
        if (*(char *)(lVar8 + 0x15) != '\0') {
          return;
        }
        iVar13 = *(int *)(param_1 + 0xafcc8);
      }
    }
    if (0 < iVar13) {
      plVar9 = (long *)*plVar7;
      if (*plVar9 != 0) {
        *(long *)(*plVar9 + 8) = plVar9[1];
      }
      if ((long *)plVar9[1] != (long *)0x0) {
        *(long *)plVar9[1] = *plVar9;
      }
      *plVar9 = 0;
      plVar9[1] = 0;
      *(int *)(param_1 + 0xafcc8) = *(int *)(param_1 + 0xafcc8) + -1;
      if (plVar9 != (long *)0x0) {
        iVar13 = *(int *)(param_1 + 0xafccc);
        lVar10 = (long)plVar9 - (long)iVar13;
        if (lVar10 != 0) {
          cVar4 = *(char *)(lVar10 + 0x15);
          while (cVar4 == '\0') {
            plVar9 = (long *)(lVar10 + *(int *)(param_1 + 0xafcb4));
            lVar10 = *plVar6;
            *plVar6 = (long)plVar9;
            *plVar9 = lVar10;
            plVar9[1] = (long)plVar6;
            if (lVar10 != 0) {
              *(long **)(lVar10 + 8) = plVar9;
            }
            *(int *)(param_1 + 0xafcb0) = *(int *)(param_1 + 0xafcb0) + 1;
            *(int *)(param_1 + 0xafcd4) = *(int *)(param_1 + 0xafcd4) + -1;
            if (*(int *)(param_1 + 0xafcc8) < 1) goto LAB_030b45d0;
            plVar9 = (long *)*plVar7;
            if (*plVar9 != 0) {
              *(long *)(*plVar9 + 8) = plVar9[1];
            }
            if ((long *)plVar9[1] != (long *)0x0) {
              *(long *)plVar9[1] = *plVar9;
            }
            *plVar9 = 0;
            plVar9[1] = 0;
            *(int *)(param_1 + 0xafcc8) = *(int *)(param_1 + 0xafcc8) + -1;
            if (plVar9 == (long *)0x0) goto LAB_030b45d0;
            iVar13 = *(int *)(param_1 + 0xafccc);
            lVar10 = (long)plVar9 - (long)iVar13;
            if (lVar10 == 0) goto LAB_030b45d0;
            cVar4 = *(char *)(lVar10 + 0x15);
          }
          plVar6 = (long *)(lVar10 + iVar13);
          lVar10 = *plVar7;
          *plVar7 = (long)plVar6;
          *plVar6 = lVar10;
          plVar6[1] = (long)plVar7;
          if (lVar10 != 0) {
            *(long **)(lVar10 + 8) = plVar6;
          }
          *(int *)(param_1 + 0xafcc8) = *(int *)(param_1 + 0xafcc8) + 1;
        }
      }
    }
LAB_030b45d0:
    plVar6 = *(long **)(param_1 + 0xafce0);
    if (((plVar6 != (long *)0x0) && (iVar13 = (int)plVar6[2], iVar13 != 0)) &&
       (lVar10 = *plVar6, lVar10 != 0)) {
      iVar3 = (int)plVar6[1];
      iVar5 = iVar13 + *(int *)((long)plVar6 + 0xc) + -1;
      iVar1 = 0;
      if (iVar3 <= iVar5) {
        iVar1 = iVar3;
      }
      lVar8 = *(long *)(lVar10 + (long)(iVar5 - iVar1) * 8);
      if (lVar8 != 0) {
        do {
          if (*(char *)(lVar8 + 0x15) != '\0') {
            return;
          }
          if (0 < iVar13) {
            *(int *)(plVar6 + 2) = iVar13 + -1;
            iVar13 = iVar13 + -1;
          }
          if (iVar13 == 0) {
            return;
          }
          iVar1 = *(int *)((long)plVar6 + 0xc) + -1 + iVar13;
          iVar5 = 0;
          if (iVar3 <= iVar1) {
            iVar5 = iVar3;
          }
          lVar8 = *(long *)(lVar10 + (long)(iVar1 - iVar5) * 8);
        } while (lVar8 != 0);
      }
    }
  }
  return;
}

