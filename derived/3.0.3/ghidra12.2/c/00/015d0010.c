
int FUN_015d0010(long param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  
  uVar15 = *param_3;
  uVar13 = param_3[1];
  uVar17 = *param_4;
  uVar16 = param_4[1];
  iVar2 = 1;
  do {
    iVar18 = iVar2;
    if (((int)uVar16 < (int)uVar13) || ((int)uVar17 < (int)uVar15)) break;
    iVar2 = iVar18 + 1;
    uVar8 = uVar15 - 1;
    iVar20 = uVar13 - 1;
    uVar15 = 0x7fffffff;
    uVar19 = 0x80000000;
    uVar11 = 0x80000000;
    uVar14 = 0x7fffffff;
    uVar12 = uVar13;
    uVar21 = uVar13;
    do {
      uVar21 = uVar21 + 1;
      uVar3 = uVar12 + 1;
      uVar9 = uVar12 - 1;
      uVar13 = uVar14;
      uVar14 = uVar8;
      do {
        uVar6 = *(uint *)(param_1 + 0xbb0);
        uVar4 = uVar14 + 1;
        lVar22 = (long)(int)(uVar4 + uVar12 * uVar6);
        if (*(uint *)(param_1 + 0xbb4) <= uVar12 || uVar6 <= uVar4) {
          lVar22 = 0;
        }
        if (*(int *)(*(long *)(param_1 + 3000) + lVar22 * 0x50 + 4) == param_5) {
          iVar7 = uVar14 + uVar12 * *param_2;
          if (*(int *)(*(long *)(param_2 + 2) + (long)(iVar7 + 1) * 4) == iVar18) {
            if ((int)uVar4 < (int)*param_4) {
              uVar5 = uVar14 + 2;
              lVar22 = (long)(int)(uVar5 + uVar12 * uVar6);
              if (*(uint *)(param_1 + 0xbb4) <= uVar12 || uVar6 <= uVar5) {
                lVar22 = 0;
              }
              if (*(int *)(*(long *)(param_1 + 3000) + lVar22 * 0x50 + 4) == param_5) {
                piVar1 = (int *)(*(long *)(param_2 + 2) + (long)(iVar7 + 2) * 4);
                if (param_2[1] <= uVar12 || *param_2 <= uVar5) {
                  piVar1 = (int *)0x0;
                }
                if (*piVar1 == 0) {
                  *piVar1 = iVar2;
                  if ((int)uVar5 <= (int)uVar15) {
                    uVar15 = uVar5;
                  }
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  if ((int)uVar19 <= (int)uVar5) {
                    uVar19 = uVar5;
                  }
                  if ((int)uVar11 <= (int)uVar12) {
                    uVar11 = uVar12;
                  }
                }
              }
            }
            if ((int)*param_3 < (int)uVar4) {
              lVar22 = (long)(int)(uVar14 + uVar12 * *(uint *)(param_1 + 0xbb0));
              if (*(uint *)(param_1 + 0xbb4) <= uVar12 || *(uint *)(param_1 + 0xbb0) <= uVar14) {
                lVar22 = 0;
              }
              if (*(int *)(*(long *)(param_1 + 3000) + lVar22 * 0x50 + 4) == param_5) {
                piVar1 = (int *)(*(long *)(param_2 + 2) +
                                (long)(int)(uVar14 + uVar12 * *param_2) * 4);
                if (param_2[1] <= uVar12 || *param_2 <= uVar14) {
                  piVar1 = (int *)0x0;
                }
                if (*piVar1 == 0) {
                  *piVar1 = iVar2;
                  if ((int)uVar14 <= (int)uVar15) {
                    uVar15 = uVar14;
                  }
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  if ((int)uVar19 <= (int)uVar14) {
                    uVar19 = uVar14;
                  }
                  if ((int)uVar11 <= (int)uVar12) {
                    uVar11 = uVar12;
                  }
                }
              }
            }
            if ((int)uVar12 < (int)param_4[1]) {
              lVar22 = (long)(int)(uVar14 + uVar21 * *(uint *)(param_1 + 0xbb0) + 1);
              if (*(uint *)(param_1 + 0xbb4) <= uVar3 || *(uint *)(param_1 + 0xbb0) <= uVar4) {
                lVar22 = 0;
              }
              if (*(int *)(*(long *)(param_1 + 3000) + lVar22 * 0x50 + 4) == param_5) {
                piVar1 = (int *)(*(long *)(param_2 + 2) +
                                (long)(int)(uVar14 + uVar21 * *param_2 + 1) * 4);
                if (param_2[1] <= uVar3 || *param_2 <= uVar4) {
                  piVar1 = (int *)0x0;
                }
                if (*piVar1 == 0) {
                  *piVar1 = iVar2;
                  if ((int)uVar4 <= (int)uVar15) {
                    uVar15 = uVar4;
                  }
                  if ((int)uVar3 <= (int)uVar13) {
                    uVar13 = uVar3;
                  }
                  if ((int)uVar19 <= (int)uVar4) {
                    uVar19 = uVar4;
                  }
                  if ((int)uVar11 <= (int)uVar3) {
                    uVar11 = uVar3;
                  }
                }
              }
            }
            if ((int)param_3[1] < (int)uVar12) {
              lVar22 = (long)(int)(uVar14 + iVar20 * *(uint *)(param_1 + 0xbb0) + 1);
              if (*(uint *)(param_1 + 0xbb4) <= uVar9 || *(uint *)(param_1 + 0xbb0) <= uVar4) {
                lVar22 = 0;
              }
              if (*(int *)(*(long *)(param_1 + 3000) + lVar22 * 0x50 + 4) == param_5) {
                piVar1 = (int *)(*(long *)(param_2 + 2) +
                                (long)(int)(uVar14 + iVar20 * *param_2 + 1) * 4);
                if (param_2[1] <= uVar9 || *param_2 <= uVar4) {
                  piVar1 = (int *)0x0;
                }
                if (*piVar1 == 0) {
                  *piVar1 = iVar2;
                  if ((int)uVar4 <= (int)uVar15) {
                    uVar15 = uVar4;
                  }
                  if ((int)uVar9 <= (int)uVar13) {
                    uVar13 = uVar9;
                  }
                  if ((int)uVar19 <= (int)uVar4) {
                    uVar19 = uVar4;
                  }
                  if ((int)uVar11 <= (int)uVar9) {
                    uVar11 = uVar9;
                  }
                }
              }
            }
          }
        }
        uVar14 = uVar4;
      } while (uVar17 != uVar4);
      iVar20 = iVar20 + 1;
      bVar10 = uVar12 != uVar16;
      uVar14 = uVar13;
      uVar12 = uVar3;
    } while (bVar10);
    uVar17 = uVar19;
    uVar16 = uVar11;
  } while ((int)uVar15 <= (int)uVar19);
  return iVar18 + -1;
}

