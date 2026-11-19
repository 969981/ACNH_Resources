
void FUN_03bef220(long param_1,uint *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  ulong *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong *puVar20;
  
  uVar7 = *(uint *)(param_1 + 8);
  lVar2 = 0;
  if (uVar7 != 0) {
    lVar2 = param_1 + (ulong)*(uint *)(param_1 + 4) * 4 + (ulong)*param_2 * 4 + (ulong)uVar7 * 2 +
            ((ulong)uVar7 & 1) * 2 + 0x30;
  }
  uVar11 = (ulong)(uint)(*(int *)(param_1 + 0x2c) + (int)param_1);
  uVar14 = *(ulong *)PTR_DAT_04bb38c8 | uVar11;
  uVar19 = uVar14 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar11) {
    uVar19 = uVar14;
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  lVar12 = uVar19 + (ulong)*(uint *)(param_1 + 0x14) * 8 + (ulong)*(uint *)(param_1 + 0x18) * 0xc +
           (ulong)*(uint *)(param_1 + 0x1c) * 0x18;
  lVar3 = 0;
  if (uVar10 != 0) {
    lVar3 = lVar12;
  }
  lVar4 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar4 = lVar12 + (ulong)uVar10 * 0x10;
  }
  puVar17 = (ulong *)PTR_DAT_04bb38c0;
  if (uVar7 != 0) {
    uVar19 = 0;
    do {
      lVar12 = lVar2 + uVar19 * 0x20;
      if (((*(ushort *)(lVar12 + 6) & 1) != 0) && (uVar7 = *(uint *)(lVar12 + 0x18), uVar7 != 0)) {
        piVar15 = (int *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)uVar7);
        piVar5 = piVar15 + 0x40000000;
        if (*puVar17 <= (ulong)uVar7) {
          piVar5 = piVar15;
        }
        if ((*piVar5 == 0) && (*(char *)((long)piVar5 + 0x16) != '\0')) {
          uVar11 = (ulong)*(ushort *)(piVar5 + 5);
          if (*(ushort *)(piVar5 + 5) == 0xffff) {
            uVar14 = (ulong)*(uint *)(param_3 + 0x3c);
            pcVar13 = (char *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)(uint)piVar5[3]);
            pcVar6 = pcVar13 + 0x100000000;
            if (*puVar17 <= (ulong)(uint)piVar5[3]) {
              pcVar6 = pcVar13;
            }
            if (*(uint *)(param_3 + 0x3c) != 0) {
              uVar11 = 0;
              do {
                lVar12 = *(long *)(*(long *)(param_3 + 0x40) + uVar11 * 8);
                if (lVar12 != 0) {
                  (**(code **)(*(long *)(lVar12 + 8) + 0x18))((long *)(lVar12 + 8));
                  iVar8 = strcmp(pcVar6,*(char **)(lVar12 + 0x10));
                  if (iVar8 == 0) {
                    if (uVar11 != 0xffffffff) {
                      *(short *)(piVar5 + 5) = (short)uVar11;
                      goto LAB_03bef354;
                    }
                    break;
                  }
                  uVar14 = (ulong)*(uint *)(param_3 + 0x3c);
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar14);
            }
          }
          else {
LAB_03bef354:
            lVar12 = *(long *)(*(long *)(param_3 + 0x40) + ((long)(short)uVar11 & 0xffffffffU) * 8);
            if (*(int *)(lVar12 + 0x60) == 0) {
              iVar8 = piVar5[2];
              if (piVar5[1] <= iVar8) {
                lVar16 = (long)piVar5[1];
                do {
                  uVar7 = *(uint *)(lVar2 + lVar16 * 0x20 + 0x1c);
                  if (uVar7 != 0) {
                    uVar14 = *(ulong *)PTR_DAT_04bb38c8 | (ulong)uVar7;
                    uVar11 = uVar14 + 0x100000000;
                    if (*puVar17 <= (ulong)uVar7) {
                      uVar11 = uVar14;
                    }
                    if (*(char *)(uVar11 + 6) == '\0') {
                      pcVar13 = (char *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(uVar11 + 8));
                      uVar14 = (ulong)*(uint *)(lVar12 + 0x6c);
                      pcVar6 = pcVar13 + 0x100000000;
                      if (*puVar17 <= (ulong)*(uint *)(uVar11 + 8)) {
                        pcVar6 = pcVar13;
                      }
                      if ((int)*(uint *)(lVar12 + 0x6c) < 1) {
                        uVar9 = 0xffffffff;
                      }
                      else {
                        puVar18 = (undefined4 *)(*(long *)(lVar12 + 0x70) + 8);
                        do {
                          if ((*(char **)(puVar18 + -2) != (char *)0x0) &&
                             (iVar8 = strcmp(*(char **)(puVar18 + -2),pcVar6), iVar8 == 0)) {
                            uVar9 = *puVar18;
                            goto LAB_03bef49c;
                          }
                          puVar18 = puVar18 + 4;
                          uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                        uVar9 = 0xffffffff;
LAB_03bef49c:
                        puVar17 = (ulong *)PTR_DAT_04bb38c0;
                      }
                      *(undefined4 *)(uVar11 + 0xc) = uVar9;
                      *(undefined1 *)(uVar11 + 6) = 1;
                      iVar8 = piVar5[2];
                    }
                  }
                  bVar1 = lVar16 < iVar8;
                  lVar16 = lVar16 + 1;
                } while (bVar1);
              }
            }
          }
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_1 + 8));
    uVar10 = *(uint *)(param_1 + 0x20);
  }
  if (uVar10 != 0) {
    uVar19 = 0;
    puVar20 = (ulong *)PTR_DAT_04bb38c8;
    do {
      lVar2 = lVar3 + uVar19 * 0x10;
      if (*(int *)(lVar2 + 4) != 0) {
        uVar11 = (ulong)*(uint *)(lVar3 + uVar19 * 0x10);
        pcVar13 = (char *)(*puVar20 | uVar11);
        uVar14 = (ulong)*(uint *)(param_3 + 0x3c);
        pcVar6 = pcVar13 + 0x100000000;
        if (*puVar17 <= uVar11) {
          pcVar6 = pcVar13;
        }
        if (*(uint *)(param_3 + 0x3c) != 0) {
          uVar11 = 0;
          do {
            lVar12 = *(long *)(*(long *)(param_3 + 0x40) + uVar11 * 8);
            if (lVar12 != 0) {
              (**(code **)(*(long *)(lVar12 + 8) + 0x18))((long *)(lVar12 + 8));
              iVar8 = strcmp(pcVar6,*(char **)(lVar12 + 0x10));
              if (iVar8 == 0) {
                if ((uVar11 != 0xffffffff) &&
                   (lVar12 = *(long *)(*(long *)(param_3 + 0x40) + uVar11 * 8),
                   *(int *)(lVar12 + 0x60) == 0)) {
                  iVar8 = *(int *)(lVar2 + 0xc);
                  lVar16 = (long)*(int *)(lVar2 + 8);
                  if (*(int *)(lVar2 + 8) <= iVar8) {
                    do {
                      uVar7 = *(uint *)(lVar4 + lVar16 * 0x14 + 8);
                      if (uVar7 != 0) {
                        uVar14 = *puVar20 | (ulong)uVar7;
                        uVar11 = uVar14 + 0x100000000;
                        if (*puVar17 <= (ulong)uVar7) {
                          uVar11 = uVar14;
                        }
                        if (*(char *)(uVar11 + 6) == '\0') {
                          pcVar13 = (char *)(*puVar20 | (ulong)*(uint *)(uVar11 + 8));
                          uVar14 = (ulong)*(uint *)(lVar12 + 0x6c);
                          pcVar6 = pcVar13 + 0x100000000;
                          if (*puVar17 <= (ulong)*(uint *)(uVar11 + 8)) {
                            pcVar6 = pcVar13;
                          }
                          if ((int)*(uint *)(lVar12 + 0x6c) < 1) {
                            uVar9 = 0xffffffff;
                          }
                          else {
                            puVar18 = (undefined4 *)(*(long *)(lVar12 + 0x70) + 8);
                            do {
                              if ((*(char **)(puVar18 + -2) != (char *)0x0) &&
                                 (iVar8 = strcmp(*(char **)(puVar18 + -2),pcVar6), iVar8 == 0)) {
                                uVar9 = *puVar18;
                                goto LAB_03bef65c;
                              }
                              puVar18 = puVar18 + 4;
                              uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                            uVar9 = 0xffffffff;
LAB_03bef65c:
                            puVar17 = (ulong *)PTR_DAT_04bb38c0;
                          }
                          puVar20 = (ulong *)PTR_DAT_04bb38c8;
                          *(undefined4 *)(uVar11 + 0xc) = uVar9;
                          *(undefined1 *)(uVar11 + 6) = 1;
                          iVar8 = *(int *)(lVar2 + 0xc);
                        }
                      }
                      bVar1 = lVar16 < iVar8;
                      lVar16 = lVar16 + 1;
                    } while (bVar1);
                  }
                }
                break;
              }
              uVar14 = (ulong)*(uint *)(param_3 + 0x3c);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar14);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_1 + 0x20));
  }
  return;
}

