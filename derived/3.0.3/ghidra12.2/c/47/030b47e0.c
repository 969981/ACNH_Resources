
undefined8 FUN_030b47e0(float param_1,long param_2,float *param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  
  iVar5 = *(int *)(param_2 + 0x18);
  if (iVar5 == 0) {
    return 0;
  }
  uVar7 = 0;
  iVar16 = 0;
  piVar1 = (int *)(param_2 + 0xafccc);
  lVar2 = param_2 + 0xafcb8;
  do {
    iVar3 = *(int *)(param_2 + 0x14) + iVar16;
    lVar17 = *(long *)(param_2 + 8);
    iVar18 = 0;
    if (*(int *)(param_2 + 0x10) <= iVar3) {
      iVar18 = *(int *)(param_2 + 0x10);
    }
    iVar3 = iVar3 - iVar18;
    pfVar6 = *(float **)(lVar17 + (long)iVar3 * 8);
    if (((pfVar6 != (float *)0x0) && (*(char *)((long)pfVar6 + 0x17) != '\0')) &&
       (SQRT((pfVar6[1] - param_3[1]) * (pfVar6[1] - param_3[1]) +
             (*pfVar6 - *param_3) * (*pfVar6 - *param_3)) <= param_1)) {
      lVar11 = *(long *)((long)*piVar1 + (long)pfVar6);
      lVar8 = lVar11 - *piVar1;
      while (lVar11 != lVar2 && lVar8 != 0) {
        if (*(char *)(lVar8 + 0x15) != '\0') {
          if ((*(char *)(lVar8 + 0x17) == '\0') || (*(char *)(lVar8 + 0x16) != '\0')) break;
          *(undefined1 *)(lVar8 + 0x16) = 1;
          plVar15 = *(long **)(param_2 + 0xafce0);
          if (plVar15 == (long *)0x0) break;
          if (*(char *)(lVar8 + 0x18) == '\0') {
            *(undefined4 *)(lVar8 + 0x1c) = 3;
            iVar18 = (int)plVar15[2];
            iVar10 = (int)plVar15[1];
            if (iVar18 < iVar10) {
              *(int *)(plVar15 + 2) = iVar18 + 1;
              iVar18 = *(int *)((long)plVar15 + 0xc) + iVar18;
              iVar14 = 0;
              if (iVar10 <= iVar18) {
                iVar14 = iVar10;
              }
              *(long *)(*plVar15 + (long)(iVar18 - iVar14) * 8) = lVar8;
            }
            *(undefined1 *)(lVar8 + 0x18) = 1;
          }
          piVar9 = (int *)plVar15[0x15f93];
          if (piVar9 == (int *)0x0) break;
          iVar18 = *piVar9;
          iVar10 = 2;
          if ((iVar18 != 0) && (iVar18 != 4)) {
            if (iVar18 != 3) break;
            iVar10 = 5;
          }
          *piVar9 = iVar10;
          break;
        }
        iVar18 = *piVar1;
        lVar11 = *(long *)(lVar8 + iVar18);
        if (*(char *)(lVar8 + 0x17) != '\0') {
          *(undefined1 *)(lVar8 + 0x17) = 0;
          plVar15 = *(long **)(param_2 + 0xafce0);
          if (plVar15 != (long *)0x0) {
            if (*(char *)(lVar8 + 0x18) == '\0') {
              *(undefined4 *)(lVar8 + 0x1c) = 2;
              iVar10 = (int)plVar15[2];
              iVar14 = (int)plVar15[1];
              if (iVar10 < iVar14) {
                *(int *)(plVar15 + 2) = iVar10 + 1;
                iVar10 = *(int *)((long)plVar15 + 0xc) + iVar10;
                iVar4 = 0;
                if (iVar14 <= iVar10) {
                  iVar4 = iVar14;
                }
                *(long *)(*plVar15 + (long)(iVar10 - iVar4) * 8) = lVar8;
              }
              *(undefined1 *)(lVar8 + 0x18) = 1;
              piVar9 = (int *)plVar15[0x15f93];
            }
            else {
              if (*(int *)(lVar8 + 0x1c) == 3) {
                *(undefined4 *)(lVar8 + 0x1c) = 2;
                *(undefined1 *)(lVar8 + 0x16) = 0;
              }
              piVar9 = (int *)plVar15[0x15f93];
            }
            if (piVar9 != (int *)0x0) {
              iVar10 = *piVar9;
              iVar14 = 2;
              if ((iVar10 != 0) && (iVar10 != 4)) {
                if (iVar10 != 3) goto LAB_030b48b0;
                iVar14 = 5;
              }
              *piVar9 = iVar14;
            }
          }
LAB_030b48b0:
          *(int *)(param_2 + 0xafcd4) = *(int *)(param_2 + 0xafcd4) + -1;
        }
        lVar8 = lVar11 - iVar18;
      }
      lVar11 = (long)*piVar1;
      lVar8 = *(long *)((long)pfVar6 + lVar11 + 8);
      lVar12 = lVar8 - lVar11;
      if (lVar8 == lVar2 || lVar12 == 0) {
        lVar8 = -lVar11;
      }
      else {
        do {
          iVar18 = *piVar1;
          if (*(char *)(lVar12 + 0x15) != '\0') goto LAB_030b4a98;
          lVar8 = *(long *)(lVar12 + iVar18 + 8);
          if (*(char *)(lVar12 + 0x17) != '\0') {
            *(undefined1 *)(lVar12 + 0x17) = 0;
            plVar15 = *(long **)(param_2 + 0xafce0);
            if (plVar15 != (long *)0x0) {
              if (*(char *)(lVar12 + 0x18) == '\0') {
                *(undefined4 *)(lVar12 + 0x1c) = 2;
                iVar10 = (int)plVar15[2];
                iVar14 = (int)plVar15[1];
                if (iVar10 < iVar14) {
                  *(int *)(plVar15 + 2) = iVar10 + 1;
                  iVar10 = *(int *)((long)plVar15 + 0xc) + iVar10;
                  iVar4 = 0;
                  if (iVar14 <= iVar10) {
                    iVar4 = iVar14;
                  }
                  *(long *)(*plVar15 + (long)(iVar10 - iVar4) * 8) = lVar12;
                }
                *(undefined1 *)(lVar12 + 0x18) = 1;
                piVar9 = (int *)plVar15[0x15f93];
              }
              else {
                if (*(int *)(lVar12 + 0x1c) == 3) {
                  *(undefined4 *)(lVar12 + 0x1c) = 2;
                  *(undefined1 *)(lVar12 + 0x16) = 0;
                }
                piVar9 = (int *)plVar15[0x15f93];
              }
              if (piVar9 != (int *)0x0) {
                iVar10 = *piVar9;
                iVar14 = 2;
                if ((iVar10 != 0) && (iVar10 != 4)) {
                  if (iVar10 != 3) goto LAB_030b49b8;
                  iVar14 = 5;
                }
                *piVar9 = iVar14;
              }
            }
LAB_030b49b8:
            *(int *)(param_2 + 0xafcd4) = *(int *)(param_2 + 0xafcd4) + -1;
          }
          lVar12 = lVar8 - iVar18;
        } while (lVar8 != lVar2 && lVar12 != 0);
        iVar18 = *piVar1;
LAB_030b4a98:
        lVar11 = (long)iVar18;
        lVar8 = (long)-iVar18;
      }
      lVar13 = (long)iVar3 * 8;
      lVar19 = *(long *)(lVar17 + lVar13);
      lVar12 = *(long *)(lVar11 + lVar19 + 8);
      lVar11 = 0;
      if (lVar12 != lVar2) {
        lVar11 = lVar8 + lVar12;
      }
      *(long *)(lVar17 + lVar13) = lVar11;
      if ((lVar19 != 0) && (*(char *)(lVar19 + 0x17) != '\0')) {
        *(undefined1 *)(lVar19 + 0x17) = 0;
        plVar15 = *(long **)(param_2 + 0xafce0);
        if (plVar15 != (long *)0x0) {
          if (*(char *)(lVar19 + 0x18) == '\0') {
            *(undefined4 *)(lVar19 + 0x1c) = 2;
            iVar3 = (int)plVar15[2];
            iVar18 = (int)plVar15[1];
            if (iVar3 < iVar18) {
              *(int *)(plVar15 + 2) = iVar3 + 1;
              iVar3 = *(int *)((long)plVar15 + 0xc) + iVar3;
              iVar10 = 0;
              if (iVar18 <= iVar3) {
                iVar10 = iVar18;
              }
              *(long *)(*plVar15 + (long)(iVar3 - iVar10) * 8) = lVar19;
            }
            *(undefined1 *)(lVar19 + 0x18) = 1;
            piVar9 = (int *)plVar15[0x15f93];
          }
          else {
            if (*(int *)(lVar19 + 0x1c) == 3) {
              *(undefined4 *)(lVar19 + 0x1c) = 2;
              *(undefined1 *)(lVar19 + 0x16) = 0;
            }
            piVar9 = (int *)plVar15[0x15f93];
          }
          if (piVar9 != (int *)0x0) {
            iVar3 = *piVar9;
            iVar18 = 2;
            if ((iVar3 != 0) && (iVar3 != 4)) {
              if (iVar3 != 3) goto LAB_030b4828;
              iVar18 = 5;
            }
            *piVar9 = iVar18;
          }
        }
LAB_030b4828:
        *(int *)(param_2 + 0xafcd4) = *(int *)(param_2 + 0xafcd4) + -1;
      }
      uVar7 = 1;
      *(int *)(param_2 + 0xafcd0) = *(int *)(param_2 + 0xafcd0) + -1;
    }
    iVar16 = iVar16 + 1;
    if (iVar5 == iVar16) {
      return uVar7;
    }
  } while( true );
}

