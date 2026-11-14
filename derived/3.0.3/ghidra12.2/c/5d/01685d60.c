
/* WARNING: Removing unreachable block (ram,0x01685ee4) */
/* WARNING: Removing unreachable block (ram,0x01685f30) */
/* WARNING: Removing unreachable block (ram,0x01685f0c) */
/* WARNING: Removing unreachable block (ram,0x01685ec0) */

void FUN_01685d60(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  uVar18 = *(uint *)(param_1 + 0x14);
  iVar17 = *(int *)(param_1 + 0x24);
  if ((int)uVar18 <= iVar17) {
    iVar19 = *(int *)(param_1 + 0x20);
    if (iVar19 < *(int *)(param_1 + 0x10)) {
      do {
        uVar18 = uVar18 + 2;
      } while ((int)uVar18 <= iVar17);
    }
    else {
      lVar2 = param_3 + 8;
      lVar3 = param_2 + 8;
      do {
        uVar16 = *(uint *)(param_1 + 0x10);
        if ((int)uVar16 <= iVar19) {
          uVar5 = uVar18 - 4;
          uVar6 = uVar18 - 2;
          uVar7 = uVar18 - 6;
          do {
            iVar14 = DAT_05233984;
            iVar12 = DAT_05233980;
            iVar19 = DAT_05233974;
            iVar17 = DAT_05233970;
            if ((DAT_05233970 <= (int)uVar16 && (int)uVar16 <= DAT_05233980) &&
               (DAT_05233974 <= (int)uVar18 && (int)uVar18 <= DAT_05233984)) {
              uVar21 = (uVar18 & 0x1fffffe) * 0x80 + ((int)uVar16 >> 1);
              uVar22 = uVar21 >> 0xf;
              if ((uVar22 == 0) &&
                 ((*(uint *)(param_4 + 0x3020 + (ulong)(uVar21 >> 5) * 4) >>
                   (ulong)(uVar16 >> 1 & 0x1f) & 1) != 0)) {
                uVar20 = 4;
LAB_01685f3c:
                if ((*(uint *)(param_4 + 0x4028 + (ulong)(uVar21 >> 5) * 4) >>
                     (ulong)(uVar16 >> 1 & 0x1f) & 1) != 0) {
                  uVar21 = uVar16 - 2;
                  if (param_3 != 0) {
                    uVar22 = uVar5;
                    uVar23 = uVar21;
                    do {
                      if ((((iVar17 <= (int)uVar23) && ((int)uVar23 <= iVar12)) &&
                          (iVar19 <= (int)uVar22)) &&
                         (((int)uVar22 <= iVar14 &&
                          (uVar8 = uVar23 + uVar22 * 0x200, uVar8 >> 0x11 == 0)))) {
                        lVar9 = (ulong)(uVar8 >> 5) * 4;
                        *(uint *)(lVar2 + lVar9) =
                             *(uint *)(lVar2 + lVar9) | 1 << (ulong)(uVar23 & 0x1f);
                      }
                      if ((int)uVar23 < (int)(uVar16 + 3)) {
                        uVar23 = uVar23 + 1;
                      }
                      else {
                        uVar22 = uVar22 + 1;
                        uVar23 = uVar21;
                      }
                    } while ((uVar21 != uVar23) || (uVar6 != uVar22));
                  }
                  iVar14 = DAT_05233984;
                  iVar12 = DAT_05233980;
                  iVar19 = DAT_05233974;
                  iVar17 = DAT_05233970;
                  if (param_2 != 0) {
                    uVar22 = uVar5;
                    uVar23 = uVar21;
                    do {
                      if ((((iVar17 <= (int)uVar23) && ((int)uVar23 <= iVar12)) &&
                          (iVar19 <= (int)uVar22)) &&
                         (((int)uVar22 <= iVar14 &&
                          (uVar8 = uVar23 + uVar22 * 0x200, uVar8 >> 0x11 == 0)))) {
                        lVar9 = (ulong)(uVar8 >> 5) * 4;
                        *(uint *)(lVar3 + lVar9) =
                             *(uint *)(lVar3 + lVar9) & (1 << (ulong)(uVar23 & 0x1f) ^ 0xffffffffU);
                      }
                      if ((int)uVar23 < (int)(uVar16 + 3)) {
                        uVar23 = uVar23 + 1;
                      }
                      else {
                        uVar22 = uVar22 + 1;
                        uVar23 = uVar21;
                      }
                    } while ((uVar21 != uVar23) || (uVar6 != uVar22));
                  }
                }
              }
              else {
                if ((uVar22 == 0) &&
                   ((*(uint *)(param_4 + 0x2018 + (ulong)(uVar21 >> 5) * 4) >>
                     (ulong)(uVar16 >> 1 & 0x1f) & 1) != 0)) {
                  uVar20 = 3;
                  goto LAB_01685f3c;
                }
                if ((uVar22 == 0) &&
                   ((*(uint *)(param_4 + 0x1010 + (ulong)(uVar21 >> 5) * 4) >>
                     (ulong)(uVar16 >> 1 & 0x1f) & 1) != 0)) {
                  uVar20 = 2;
                  goto LAB_01685f3c;
                }
                if (uVar22 == 0) {
                  uVar20 = *(uint *)(param_4 + 8 + (ulong)(uVar21 >> 5) * 4) >>
                           (ulong)(uVar16 >> 1 & 0x1f) & 1;
                  goto LAB_01685f3c;
                }
                uVar20 = 0;
                if (uVar22 == 0) goto LAB_01685f3c;
              }
              iVar14 = DAT_05233984;
              iVar12 = DAT_05233980;
              iVar19 = DAT_05233974;
              iVar17 = DAT_05233970;
              if (uVar20 != 0) {
                if (param_3 == 0) {
                  if (param_2 != 0) {
                    iVar1 = uVar16 + 1;
                    uVar21 = uVar6;
                    uVar22 = uVar16;
                    do {
                      if ((((iVar17 <= (int)uVar22) && ((int)uVar22 <= iVar12)) &&
                          (iVar19 <= (int)uVar21)) &&
                         (((int)uVar21 <= iVar14 &&
                          (uVar23 = uVar22 + uVar21 * 0x200, uVar23 >> 0x11 == 0)))) {
                        lVar9 = (ulong)(uVar23 >> 5) * 4;
                        *(uint *)(lVar3 + lVar9) =
                             *(uint *)(lVar3 + lVar9) & (1 << (ulong)(uVar22 & 0x1f) ^ 0xffffffffU);
                      }
                      iVar15 = DAT_05233984;
                      iVar13 = DAT_05233980;
                      iVar11 = DAT_05233974;
                      iVar10 = DAT_05233970;
                      if ((int)uVar22 < iVar1) {
                        uVar22 = uVar22 + 1;
                      }
                      else {
                        uVar21 = uVar21 + 1;
                        uVar22 = uVar16;
                      }
                    } while ((uVar16 != uVar22) || (uVar18 != uVar21));
                    if (uVar20 != 1) {
                      uVar21 = uVar5;
                      uVar22 = uVar16;
                      do {
                        if ((((iVar10 <= (int)uVar22) && ((int)uVar22 <= iVar13)) &&
                            (iVar11 <= (int)uVar21)) &&
                           (((int)uVar21 <= iVar15 &&
                            (uVar23 = uVar22 + uVar21 * 0x200, uVar23 >> 0x11 == 0)))) {
                          lVar9 = (ulong)(uVar23 >> 5) * 4;
                          *(uint *)(lVar3 + lVar9) =
                               *(uint *)(lVar3 + lVar9) &
                               (1 << (ulong)(uVar22 & 0x1f) ^ 0xffffffffU);
                        }
                        iVar14 = DAT_05233984;
                        iVar12 = DAT_05233980;
                        iVar19 = DAT_05233974;
                        iVar17 = DAT_05233970;
                        if ((int)uVar22 < iVar1) {
                          uVar22 = uVar22 + 1;
                        }
                        else {
                          uVar21 = uVar21 + 1;
                          uVar22 = uVar16;
                        }
                      } while ((uVar16 != uVar22) || (uVar6 != uVar21));
                      if (uVar20 != 2) {
                        uVar21 = uVar7;
                        uVar22 = uVar16;
                        do {
                          if ((((iVar17 <= (int)uVar22) && ((int)uVar22 <= iVar12)) &&
                              (iVar19 <= (int)uVar21)) &&
                             (((int)uVar21 <= iVar14 &&
                              (uVar23 = uVar22 + uVar21 * 0x200, uVar23 >> 0x11 == 0)))) {
                            lVar9 = (ulong)(uVar23 >> 5) * 4;
                            *(uint *)(lVar3 + lVar9) =
                                 *(uint *)(lVar3 + lVar9) &
                                 (1 << (ulong)(uVar22 & 0x1f) ^ 0xffffffffU);
                          }
                          iVar15 = DAT_05233984;
                          iVar13 = DAT_05233980;
                          iVar11 = DAT_05233974;
                          iVar10 = DAT_05233970;
                          if ((int)uVar22 < iVar1) {
                            uVar22 = uVar22 + 1;
                          }
                          else {
                            uVar21 = uVar21 + 1;
                            uVar22 = uVar16;
                          }
                        } while ((uVar16 != uVar22) || (uVar5 != uVar21));
                        if (uVar20 != 3) {
                          uVar22 = uVar16;
                          uVar21 = uVar18 - 8;
                          do {
                            if ((((iVar10 <= (int)uVar22) && ((int)uVar22 <= iVar13)) &&
                                (iVar11 <= (int)uVar21)) &&
                               (((int)uVar21 <= iVar15 &&
                                (uVar20 = uVar22 + uVar21 * 0x200, uVar20 >> 0x11 == 0)))) {
                              lVar9 = (ulong)(uVar20 >> 5) * 4;
                              *(uint *)(lVar3 + lVar9) =
                                   *(uint *)(lVar3 + lVar9) &
                                   (1 << (ulong)(uVar22 & 0x1f) ^ 0xffffffffU);
                            }
                            if ((int)uVar22 < iVar1) {
                              uVar22 = uVar22 + 1;
                            }
                            else {
                              uVar21 = uVar21 + 1;
                              uVar22 = uVar16;
                            }
                          } while ((uVar16 != uVar22) || (uVar7 != uVar21));
                        }
                      }
                    }
                  }
                }
                else {
                  iVar1 = uVar16 + 1;
                  if (param_2 == 0) {
                    uVar21 = uVar6;
                    uVar22 = uVar16;
                    do {
                      if ((((iVar17 <= (int)uVar22) && ((int)uVar22 <= iVar12)) &&
                          (iVar19 <= (int)uVar21)) &&
                         (((int)uVar21 <= iVar14 &&
                          (uVar23 = uVar22 + uVar21 * 0x200, uVar23 >> 0x11 == 0)))) {
                        lVar9 = (ulong)(uVar23 >> 5) * 4;
                        *(uint *)(lVar2 + lVar9) =
                             *(uint *)(lVar2 + lVar9) | 1 << (ulong)(uVar22 & 0x1f);
                      }
                      iVar15 = DAT_05233984;
                      iVar13 = DAT_05233980;
                      iVar11 = DAT_05233974;
                      iVar10 = DAT_05233970;
                      if ((int)uVar22 < iVar1) {
                        uVar22 = uVar22 + 1;
                      }
                      else {
                        uVar21 = uVar21 + 1;
                        uVar22 = uVar16;
                      }
                    } while ((uVar16 != uVar22) || (uVar18 != uVar21));
                    if (uVar20 != 1) {
                      uVar21 = uVar5;
                      uVar22 = uVar16;
                      do {
                        if ((((iVar10 <= (int)uVar22) && ((int)uVar22 <= iVar13)) &&
                            (iVar11 <= (int)uVar21)) &&
                           (((int)uVar21 <= iVar15 &&
                            (uVar23 = uVar22 + uVar21 * 0x200, uVar23 >> 0x11 == 0)))) {
                          lVar9 = (ulong)(uVar23 >> 5) * 4;
                          *(uint *)(lVar2 + lVar9) =
                               *(uint *)(lVar2 + lVar9) | 1 << (ulong)(uVar22 & 0x1f);
                        }
                        iVar14 = DAT_05233984;
                        iVar12 = DAT_05233980;
                        iVar19 = DAT_05233974;
                        iVar17 = DAT_05233970;
                        if ((int)uVar22 < iVar1) {
                          uVar22 = uVar22 + 1;
                        }
                        else {
                          uVar21 = uVar21 + 1;
                          uVar22 = uVar16;
                        }
                      } while ((uVar16 != uVar22) || (uVar6 != uVar21));
                      if (uVar20 != 2) {
                        uVar21 = uVar7;
                        uVar22 = uVar16;
                        do {
                          if ((((iVar17 <= (int)uVar22) && ((int)uVar22 <= iVar12)) &&
                              (iVar19 <= (int)uVar21)) &&
                             (((int)uVar21 <= iVar14 &&
                              (uVar23 = uVar22 + uVar21 * 0x200, uVar23 >> 0x11 == 0)))) {
                            lVar9 = (ulong)(uVar23 >> 5) * 4;
                            *(uint *)(lVar2 + lVar9) =
                                 *(uint *)(lVar2 + lVar9) | 1 << (ulong)(uVar22 & 0x1f);
                          }
                          iVar15 = DAT_05233984;
                          iVar13 = DAT_05233980;
                          iVar11 = DAT_05233974;
                          iVar10 = DAT_05233970;
                          if ((int)uVar22 < iVar1) {
                            uVar22 = uVar22 + 1;
                          }
                          else {
                            uVar21 = uVar21 + 1;
                            uVar22 = uVar16;
                          }
                        } while ((uVar16 != uVar22) || (uVar5 != uVar21));
                        if (uVar20 != 3) {
                          uVar22 = uVar16;
                          uVar21 = uVar18 - 8;
                          do {
                            if ((((iVar10 <= (int)uVar22) && ((int)uVar22 <= iVar13)) &&
                                (iVar11 <= (int)uVar21)) &&
                               (((int)uVar21 <= iVar15 &&
                                (uVar20 = uVar22 + uVar21 * 0x200, uVar20 >> 0x11 == 0)))) {
                              lVar9 = (ulong)(uVar20 >> 5) * 4;
                              *(uint *)(lVar2 + lVar9) =
                                   *(uint *)(lVar2 + lVar9) | 1 << (ulong)(uVar22 & 0x1f);
                            }
                            if ((int)uVar22 < iVar1) {
                              uVar22 = uVar22 + 1;
                            }
                            else {
                              uVar21 = uVar21 + 1;
                              uVar22 = uVar16;
                            }
                          } while ((uVar16 != uVar22) || (uVar7 != uVar21));
                        }
                      }
                    }
                  }
                  else {
                    uVar21 = 0;
                    uVar22 = uVar18;
                    do {
                      iVar14 = DAT_05233984;
                      iVar12 = DAT_05233980;
                      iVar19 = DAT_05233974;
                      iVar17 = DAT_05233970;
                      uVar8 = uVar22 - 2;
                      uVar23 = uVar8;
                      uVar24 = uVar16;
                      do {
                        if ((((iVar17 <= (int)uVar24) && ((int)uVar24 <= iVar12)) &&
                            (iVar19 <= (int)uVar23)) &&
                           (((int)uVar23 <= iVar14 &&
                            (uVar4 = uVar24 + uVar23 * 0x200, uVar4 >> 0x11 == 0)))) {
                          lVar9 = (ulong)(uVar4 >> 5) * 4;
                          *(uint *)(lVar2 + lVar9) =
                               *(uint *)(lVar2 + lVar9) | 1 << (ulong)(uVar24 & 0x1f);
                        }
                        iVar15 = DAT_05233984;
                        iVar13 = DAT_05233980;
                        iVar11 = DAT_05233974;
                        iVar10 = DAT_05233970;
                        if ((int)uVar24 < iVar1) {
                          uVar24 = uVar24 + 1;
                        }
                        else {
                          uVar23 = uVar23 + 1;
                          uVar24 = uVar16;
                        }
                      } while ((uVar16 != uVar24) || (uVar22 != uVar23));
                      uVar23 = uVar8;
                      uVar24 = uVar16;
                      do {
                        if ((((iVar10 <= (int)uVar24) && ((int)uVar24 <= iVar13)) &&
                            (iVar11 <= (int)uVar23)) &&
                           (((int)uVar23 <= iVar15 &&
                            (uVar4 = uVar24 + uVar23 * 0x200, uVar4 >> 0x11 == 0)))) {
                          lVar9 = (ulong)(uVar4 >> 5) * 4;
                          *(uint *)(lVar3 + lVar9) =
                               *(uint *)(lVar3 + lVar9) &
                               (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
                        }
                        if ((int)uVar24 < iVar1) {
                          uVar24 = uVar24 + 1;
                        }
                        else {
                          uVar23 = uVar23 + 1;
                          uVar24 = uVar16;
                        }
                      } while ((uVar16 != uVar24) || (uVar22 != uVar23));
                      uVar21 = uVar21 + 1;
                      uVar22 = uVar8;
                    } while (uVar21 != uVar20);
                  }
                }
              }
            }
            iVar19 = *(int *)(param_1 + 0x20);
            uVar16 = uVar16 + 2;
          } while ((int)uVar16 <= iVar19);
          iVar17 = *(int *)(param_1 + 0x24);
        }
        uVar18 = uVar18 + 2;
      } while ((int)uVar18 <= iVar17);
    }
  }
  return;
}

