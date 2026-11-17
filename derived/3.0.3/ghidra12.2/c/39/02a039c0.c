
void FUN_02a039c0(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  int iVar21;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 8);
  if (0 < iVar4) {
    iVar4 = iVar4 + -1;
  }
  uVar17 = (param_2 - iVar5) - (iVar4 >> 1);
  uVar3 = -uVar17;
  if (-1 < (int)uVar17) {
    uVar3 = uVar17;
  }
  if ((int)uVar17 < 1) {
    if (-1 < (int)uVar17) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x30);
    if (iVar4 != 0) {
      iVar14 = 0;
      uVar17 = uVar3;
      if (uVar3 < 2) {
        uVar17 = 1;
      }
      do {
        iVar10 = *(int *)(param_1 + 0x2c) + iVar14;
        iVar21 = 0;
        if (*(int *)(param_1 + 0x28) <= iVar10) {
          iVar21 = *(int *)(param_1 + 0x28);
        }
        iVar10 = iVar10 - iVar21;
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x30);
        plVar15 = (long *)*puVar12;
        if (plVar15 != (long *)0x0) {
          uVar18 = 0;
          *(int *)(param_1 + 8) = iVar5;
          lVar16 = *(long *)(param_1 + 0x20) + (long)iVar10 * 0x30;
          piVar1 = (int *)(lVar16 + 0x28);
          do {
            iVar11 = *(int *)(param_1 + 0x28);
            iVar10 = *(int *)(param_1 + 0x2c) + iVar14;
            lVar6 = *(long *)(param_1 + 0x20);
            iVar9 = *(int *)(param_1 + 8) + -1;
            *(int *)(param_1 + 8) = iVar9;
            iVar21 = 0;
            if (iVar11 <= iVar10) {
              iVar21 = iVar11;
            }
            plVar13 = (long *)(lVar6 + (long)(iVar10 - iVar21) * 0x30 + 8);
            plVar20 = (long *)*plVar13;
            plVar19 = (long *)(*plVar15 + -8);
            if (plVar20 != (long *)0x0) {
              plVar19 = plVar20;
            }
            for (; plVar19 != plVar15 + -1; plVar19 = (long *)(plVar19[1] + -8)) {
              lVar8 = *plVar19;
              iVar21 = (int)*(short *)(lVar8 + 8);
              if (iVar9 != iVar21 && iVar21 <= iVar9) break;
              if (iVar9 == iVar21) {
                *plVar13 = (long)plVar19;
                iVar11 = *(int *)(param_1 + 0x28);
                lVar6 = *(long *)(param_1 + 0x20);
                iVar10 = *(int *)(param_1 + 0x2c) + iVar14;
                goto LAB_02a03cd0;
              }
            }
            lVar8 = 0;
LAB_02a03cd0:
            iVar21 = 0;
            if (iVar11 <= iVar10) {
              iVar21 = iVar11;
            }
            plVar19 = (long *)(lVar6 + (long)(iVar10 - iVar21) * 0x30 + 0x10);
            plVar13 = (long *)*plVar19;
            if ((plVar13 != (long *)0x0) &&
               (iVar10 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) + -1,
               iVar10 < *(short *)(*plVar13 + 8))) {
              plVar13 = (long *)(plVar13[1] + -8);
              if ((plVar13 == plVar15 + -1) || (iVar10 < *(short *)(*plVar13 + 8))) {
                plVar13 = (long *)0x0;
              }
              *plVar19 = (long)plVar13;
            }
            iVar10 = *piVar1;
            if (0 < iVar10) {
              *piVar1 = iVar10 + -1;
              iVar10 = iVar10 + -1;
            }
            iVar21 = *(int *)(lVar16 + 0x20);
            if (iVar10 < iVar21) {
              iVar11 = *(int *)(lVar16 + 0x24);
              *piVar1 = iVar10 + 1;
              lVar6 = puVar12[3];
              iVar10 = iVar21;
              if (0 < iVar11) {
                iVar10 = iVar11;
              }
              *(int *)(lVar16 + 0x24) = iVar10 + -1;
              if (lVar6 != 0) {
                if (iVar10 <= iVar21) {
                  iVar21 = 0;
                }
                *(long *)(lVar6 + (long)((iVar10 + -1) - iVar21) * 8) = lVar8;
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar17);
        }
        iVar14 = iVar14 + 1;
      } while (iVar4 != iVar14);
    }
    uVar3 = -uVar3;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x30);
    if (iVar4 != 0) {
      iVar14 = 0;
      do {
        iVar10 = *(int *)(param_1 + 0x2c) + iVar14;
        iVar21 = 0;
        if (*(int *)(param_1 + 0x28) <= iVar10) {
          iVar21 = *(int *)(param_1 + 0x28);
        }
        iVar10 = iVar10 - iVar21;
        plVar15 = (long *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 0x30);
        lVar16 = *plVar15;
        if (lVar16 != 0) {
          uVar17 = 0;
          *(int *)(param_1 + 8) = iVar5;
          lVar6 = *(long *)(param_1 + 0x20) + (long)iVar10 * 0x30;
          plVar19 = (long *)(lVar16 + -8);
          piVar1 = (int *)(lVar6 + 0x28);
          piVar2 = (int *)(lVar6 + 0x24);
          do {
            iVar21 = *(int *)(param_1 + 8);
            *(int *)(param_1 + 8) = iVar21 + 1;
            iVar9 = *(int *)(param_1 + 0x28);
            iVar10 = *(int *)(param_1 + 0x2c) + iVar14;
            iVar11 = 0;
            if (iVar9 <= iVar10) {
              iVar11 = iVar9;
            }
            lVar8 = *(long *)(param_1 + 0x20);
            puVar12 = (undefined8 *)(lVar8 + (long)(iVar10 - iVar11) * 0x30 + 0x10);
            plVar20 = (long *)*puVar12;
            plVar13 = (long *)(*(long *)(lVar16 + 8) + -8);
            if (plVar20 != (long *)0x0) {
              plVar13 = plVar20;
            }
            if (plVar13 != plVar19) {
              iVar21 = *(int *)(param_1 + 0x10) + iVar21;
              do {
                lVar7 = *plVar13;
                if (iVar21 < *(short *)(lVar7 + 8)) break;
                if (iVar21 == *(short *)(lVar7 + 8)) {
                  *puVar12 = plVar13;
                  iVar9 = *(int *)(param_1 + 0x28);
                  lVar8 = *(long *)(param_1 + 0x20);
                  iVar10 = *(int *)(param_1 + 0x2c) + iVar14;
                  goto LAB_02a03b00;
                }
                plVar13 = (long *)(plVar13[2] + -8);
              } while (plVar13 != plVar19);
            }
            lVar7 = 0;
LAB_02a03b00:
            iVar21 = 0;
            if (iVar9 <= iVar10) {
              iVar21 = iVar9;
            }
            plVar13 = (long *)(lVar8 + (long)(iVar10 - iVar21) * 0x30 + 8);
            plVar20 = (long *)*plVar13;
            if ((plVar20 != (long *)0x0) && ((int)*(short *)(*plVar20 + 8) < *(int *)(param_1 + 8)))
            {
              plVar20 = (long *)(plVar20[2] + -8);
              if ((plVar20 == plVar19) || ((int)*(short *)(*plVar20 + 8) < *(int *)(param_1 + 8))) {
                plVar20 = (long *)0x0;
              }
              *plVar13 = (long)plVar20;
            }
            iVar10 = *piVar1;
            iVar21 = *(int *)(lVar6 + 0x20);
            if (0 < iVar10) {
              *piVar1 = iVar10 + -1;
              iVar11 = 0;
              if (*piVar2 + 1 < iVar21) {
                iVar11 = *piVar2 + 1;
              }
              *piVar2 = iVar11;
              iVar10 = iVar10 + -1;
            }
            if (iVar10 < iVar21) {
              *piVar1 = iVar10 + 1;
              lVar8 = plVar15[3];
              if (lVar8 != 0) {
                iVar11 = 0;
                if (iVar21 <= *piVar2 + iVar10) {
                  iVar11 = iVar21;
                }
                *(long *)(lVar8 + (long)((*piVar2 + iVar10) - iVar11) * 8) = lVar7;
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar3);
        }
        iVar14 = iVar14 + 1;
      } while (iVar4 != iVar14);
    }
  }
  *(uint *)(param_1 + 8) = uVar3 + iVar5;
  return;
}

