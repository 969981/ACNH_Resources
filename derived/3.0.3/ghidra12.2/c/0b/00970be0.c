
void FUN_00970be0(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  float *pfVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  char cVar18;
  uint uVar19;
  char cVar20;
  char cVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined *local_90;
  uint local_88;
  uint uStack_84;
  
  puVar9 = PTR_DAT_04bb2720;
  uVar26 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  iVar16 = 4;
  if ((param_3 & 1) == 0) {
    iVar16 = 8;
  }
  uVar4 = *(uint *)(param_2 + 0x20);
  uVar6 = *(uint *)(param_2 + 0x24);
  puVar25 = (undefined8 *)PTR_DAT_04bb2640;
  if ((int)uVar5 <= (int)uVar6) {
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    uVar23 = uVar5;
    do {
      if (((int)uVar26 <= (int)uVar4) && (-1 < (int)uVar23)) {
        iVar12 = 0;
        uVar30 = uVar26;
        do {
          if (((-1 < (int)uVar30) && (uVar30 < *(uint *)(param_1 + 0x38))) &&
             (uVar23 < *(uint *)(param_1 + 0x3c))) {
            uVar28 = uVar30 + *(uint *)(param_1 + 0x38) * uVar23;
            lVar17 = *(long *)(param_1 + 0x60) + (long)(int)uVar28 * 0x34;
            lVar22 = *(long *)(param_1 + 0x50) + (long)(int)uVar28 * 0x34;
            if (*(uint *)(param_1 + 0x58) <= uVar28) {
              lVar17 = 0;
            }
            if (*(uint *)(param_1 + 0x48) <= uVar28) {
              lVar22 = 0;
            }
            if ((*(long *)(param_1 + 0x60) == 0) || (lVar17 == 0)) {
              cVar18 = *(char *)(lVar22 + 0x30);
              cVar20 = *(char *)(lVar22 + 0x31);
              cVar21 = *(char *)(lVar22 + 0x32);
LAB_00970ee0:
              cVar8 = *(char *)(lVar22 + 0x33);
            }
            else {
              cVar18 = *(char *)(lVar17 + 0x30);
              if (cVar18 == '\t' || cVar18 == '\a') {
                cVar18 = *(char *)(lVar22 + 0x30);
              }
              cVar20 = *(char *)(lVar17 + 0x31);
              if (cVar20 == '\t' || cVar20 == '\a') {
                cVar20 = *(char *)(lVar22 + 0x31);
              }
              cVar21 = *(char *)(lVar17 + 0x32);
              if ((cVar21 == '\t') || (cVar21 == '\a')) {
                cVar21 = *(char *)(lVar22 + 0x32);
              }
              cVar8 = *(char *)(lVar17 + 0x33);
              if ((cVar8 == '\a') || (cVar8 == '\t')) goto LAB_00970ee0;
            }
            if (((cVar18 == '\a' && cVar20 == '\a') && cVar21 == '\a') && cVar8 == '\a') {
              if (iVar12 != 0) {
                if (iVar16 < iVar12) {
                  iVar12 = 0;
                }
                else {
                  uVar28 = uVar30 - iVar12;
                  iVar12 = 0;
                  if ((int)uVar28 < (int)uVar30) {
                    do {
                      local_90 = PTR_DAT_04bb2010 + 0x10;
                      local_88 = uVar28;
                      uStack_84 = uVar23;
                      uVar15 = FUN_0097062c(&local_90);
                      if ((uVar15 & 1) == 0) {
                        lVar17 = *(long *)puVar9;
                        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x330) != 0)) {
                          puVar14 = (undefined8 *)
                                    (**(code **)(*(long *)*puVar25 + 0x18))
                                              ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                          iVar12 = FUN_006bd550(*puVar14,0);
                          if ((iVar12 == 0x758f7eaf) &&
                             ((lVar17 = *(long *)puVar9, lVar17 != 0 &&
                              (*(long *)(lVar17 + 0x330) != 0)))) {
                            uVar24 = 0;
                            uVar29 = 1;
                            do {
                              uVar19 = 0;
                              if (lVar17 != 0) {
                                if (*(long *)(lVar17 + 0x330) != 0) {
                                  puVar14 = (undefined8 *)
                                            (**(code **)(*(long *)*puVar25 + 0x18))
                                                      ((long *)*puVar25,
                                                       *(undefined4 *)(lVar17 + 0x338));
                                  FUN_006bd550(*puVar14,0);
                                  lVar17 = *(long *)puVar9;
                                  uVar19 = 0;
                                  if (lVar17 == 0) goto LAB_00971070;
                                }
                                if (*(long *)(lVar17 + 0x330) == 0) {
                                  uVar19 = 0;
                                }
                                else {
                                  puVar14 = (undefined8 *)
                                            (**(code **)(*(long *)*puVar25 + 0x18))
                                                      ((long *)*puVar25,
                                                       *(undefined4 *)(lVar17 + 0x338));
                                  iVar12 = FUN_006bd550(*puVar14,0);
                                  uVar19 = 0;
                                  if (iVar12 == 0x758f7eaf) {
                                    uVar19 = 0;
                                    if (*(long *)puVar9 != 0) {
                                      lVar17 = *(long *)(*(long *)puVar9 + 0x330);
                                      uVar19 = 0;
                                      if (lVar17 != 0) {
                                        uVar19 = *(uint *)(lVar17 + 0x260);
                                      }
                                    }
                                  }
                                }
                              }
LAB_00971070:
                              if (uVar19 <= uVar24) break;
                              lVar17 = *(long *)puVar9;
                              if (lVar17 != 0) {
                                if (*(long *)(lVar17 + 0x330) != 0) {
                                  puVar14 = (undefined8 *)
                                            (**(code **)(*(long *)*puVar25 + 0x18))
                                                      ((long *)*puVar25,
                                                       *(undefined4 *)(lVar17 + 0x338));
                                  FUN_006bd550(*puVar14,0);
                                  lVar17 = *(long *)puVar9;
                                  if (lVar17 == 0) goto LAB_00970fe0;
                                }
                                if (*(long *)(lVar17 + 0x330) != 0) {
                                  puVar14 = (undefined8 *)
                                            (**(code **)(*(long *)*puVar25 + 0x18))
                                                      ((long *)*puVar25,
                                                       *(undefined4 *)(lVar17 + 0x338));
                                  iVar12 = FUN_006bd550(*puVar14,0);
                                  lVar17 = *(long *)puVar9;
                                  if ((((iVar12 == 0x758f7eaf) && (lVar17 != 0)) &&
                                      (lVar22 = *(long *)(lVar17 + 0x330), lVar22 != 0)) &&
                                     (uVar24 < *(uint *)(lVar22 + 0x260))) {
                                    lVar22 = lVar22 + 0x250;
                                    if (6 < uVar24) {
                                      uVar19 = uVar29 & 0xfffffff8;
                                      do {
                                        uVar19 = uVar19 - 8;
                                        lVar22 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(*(long *)(*(long *)(lVar22 + 8) + 8) + 8)
                                                  + 8) + 8) + 8) + 8) + 8);
                                      } while (uVar19 != 0);
                                    }
                                    if ((uVar24 + 1 & 7) != 0) {
                                      uVar19 = uVar29 & 7;
                                      do {
                                        lVar22 = *(long *)(lVar22 + 8);
                                        uVar19 = uVar19 - 1;
                                      } while (uVar19 != 0);
                                    }
                                    if ((lVar22 != 0) && (lVar22 != 0x40)) {
                                      fVar31 = (float)NEON_ucvtf(*(undefined4 *)(lVar22 + -0x20));
                                      fVar32 = *(float *)(lVar22 + -0x1c) +
                                               *(float *)(lVar22 + -0x24) * 0.5 + 0.0;
                                      pfVar2 = (float *)(PTR_DAT_04bb2d00 +
                                                        ((ulong)(long)(fVar31 * 11930465.0) >> 0x18
                                                        & 0xff) * 0x10);
                                      fVar31 = (float)((uint)(long)(fVar31 * 11930465.0) & 0xffffff)
                                               * 5.9604645e-08;
                                      fVar33 = *(float *)(lVar22 + -0x34) +
                                               fVar32 * (*pfVar2 + fVar31 * pfVar2[1]);
                                      fVar31 = *(float *)(lVar22 + -0x2c) +
                                               fVar32 * (pfVar2[2] + fVar31 * pfVar2[3]);
                                      uVar19 = uVar28;
                                      if (fVar33 < 0.0) {
                                        uVar19 = uVar28 + 1;
                                      }
                                      iVar12 = uVar19 - (int)((float)(int)fVar33 / 5.0);
                                      uVar19 = uVar23;
                                      if (fVar31 < 0.0) {
                                        uVar19 = uVar23 + 1;
                                      }
                                      iVar27 = uVar19 - (int)((float)(int)fVar31 / 5.0);
                                      iVar13 = FUN_0096ff30(uVar24);
                                      iVar7 = -iVar13;
                                      bVar10 = iVar13 <= iVar12;
                                      puVar25 = (undefined8 *)PTR_DAT_04bb2640;
                                      if ((((!bVar10 && iVar7 < iVar12) && iVar27 != iVar7) &&
                                          (((!bVar10 && iVar12 != iVar7) &&
                                           (bVar10 || iVar7 <= iVar12)) && iVar27 + iVar13 < 0) ==
                                          (((!bVar10 && iVar12 != iVar7) &&
                                           (bVar10 || iVar7 <= iVar12)) && SBORROW4(iVar27,iVar7)))
                                          && iVar27 < iVar13) goto LAB_00970f20;
                                      lVar17 = *(long *)puVar9;
                                    }
                                  }
                                }
                              }
LAB_00970fe0:
                              uVar24 = uVar24 + 1;
                              uVar29 = uVar29 + 1;
                            } while( true );
                          }
                        }
                      }
                      else {
LAB_00970f20:
                        uVar24 = uVar28 + *(int *)(param_1 + 0x38) * uVar23;
                        puVar1 = (uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar24 * 4);
                        if (*(uint *)(param_1 + 0x68) <= uVar24) {
                          puVar1 = (uint *)0x0;
                        }
                        *puVar1 = *puVar1 | 0x80;
                      }
                      uVar28 = uVar28 + 1;
                    } while (uVar28 != uVar30);
                    iVar12 = 0;
                  }
                }
              }
            }
            else {
              iVar12 = iVar12 + 1;
            }
          }
          bVar10 = uVar30 != uVar4;
          uVar30 = uVar30 + 1;
        } while (bVar10);
        if (((iVar12 != 0) && (iVar12 <= iVar16)) &&
           (uVar30 = (uVar4 + 1) - iVar12, (int)uVar30 <= (int)uVar4)) {
          do {
            local_90 = puVar3;
            local_88 = uVar30;
            uStack_84 = uVar23;
            uVar15 = FUN_0097062c(&local_90);
            if ((uVar15 & 1) == 0) {
              lVar17 = *(long *)puVar9;
              if ((lVar17 != 0) && (*(long *)(lVar17 + 0x330) != 0)) {
                puVar14 = (undefined8 *)
                          (**(code **)(*(long *)*puVar25 + 0x18))
                                    ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                iVar12 = FUN_006bd550(*puVar14,0);
                if ((iVar12 == 0x758f7eaf) &&
                   ((lVar17 = *(long *)puVar9, lVar17 != 0 && (*(long *)(lVar17 + 0x330) != 0)))) {
                  uVar28 = 0;
                  uVar24 = 1;
                  do {
                    uVar29 = 0;
                    if (lVar17 != 0) {
                      if (*(long *)(lVar17 + 0x330) != 0) {
                        puVar14 = (undefined8 *)
                                  (**(code **)(*(long *)*puVar25 + 0x18))
                                            ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                        FUN_006bd550(*puVar14,0);
                        lVar17 = *(long *)puVar9;
                        uVar29 = 0;
                        if (lVar17 == 0) goto LAB_009713e0;
                      }
                      if (*(long *)(lVar17 + 0x330) == 0) {
                        uVar29 = 0;
                      }
                      else {
                        puVar14 = (undefined8 *)
                                  (**(code **)(*(long *)*puVar25 + 0x18))
                                            ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                        iVar12 = FUN_006bd550(*puVar14,0);
                        uVar29 = 0;
                        if (iVar12 == 0x758f7eaf) {
                          uVar29 = 0;
                          if (*(long *)puVar9 != 0) {
                            lVar17 = *(long *)(*(long *)puVar9 + 0x330);
                            uVar29 = 0;
                            if (lVar17 != 0) {
                              uVar29 = *(uint *)(lVar17 + 0x260);
                            }
                          }
                        }
                      }
                    }
LAB_009713e0:
                    if (uVar29 <= uVar28) break;
                    lVar17 = *(long *)puVar9;
                    if (lVar17 != 0) {
                      if (*(long *)(lVar17 + 0x330) != 0) {
                        puVar14 = (undefined8 *)
                                  (**(code **)(*(long *)*puVar25 + 0x18))
                                            ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                        FUN_006bd550(*puVar14,0);
                        lVar17 = *(long *)puVar9;
                        if (lVar17 == 0) goto LAB_00971350;
                      }
                      if (*(long *)(lVar17 + 0x330) != 0) {
                        puVar14 = (undefined8 *)
                                  (**(code **)(*(long *)*puVar25 + 0x18))
                                            ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                        iVar12 = FUN_006bd550(*puVar14,0);
                        lVar17 = *(long *)puVar9;
                        if ((((iVar12 == 0x758f7eaf) && (lVar17 != 0)) &&
                            (lVar22 = *(long *)(lVar17 + 0x330), lVar22 != 0)) &&
                           (uVar28 < *(uint *)(lVar22 + 0x260))) {
                          lVar22 = lVar22 + 0x250;
                          if (6 < uVar28) {
                            uVar29 = uVar24 & 0xfffffff8;
                            do {
                              uVar29 = uVar29 - 8;
                              lVar22 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(*(long *)(lVar22 + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8);
                            } while (uVar29 != 0);
                          }
                          if ((uVar28 + 1 & 7) != 0) {
                            uVar29 = uVar24 & 7;
                            do {
                              lVar22 = *(long *)(lVar22 + 8);
                              uVar29 = uVar29 - 1;
                            } while (uVar29 != 0);
                          }
                          if ((lVar22 != 0) && (lVar22 != 0x40)) {
                            fVar31 = (float)NEON_ucvtf(*(undefined4 *)(lVar22 + -0x20));
                            fVar32 = *(float *)(lVar22 + -0x1c) + *(float *)(lVar22 + -0x24) * 0.5 +
                                     0.0;
                            pfVar2 = (float *)(PTR_DAT_04bb2d00 +
                                              ((ulong)(long)(fVar31 * 11930465.0) >> 0x18 & 0xff) *
                                              0x10);
                            fVar31 = (float)((uint)(long)(fVar31 * 11930465.0) & 0xffffff) *
                                     5.9604645e-08;
                            fVar33 = *(float *)(lVar22 + -0x34) +
                                     fVar32 * (*pfVar2 + fVar31 * pfVar2[1]);
                            fVar31 = *(float *)(lVar22 + -0x2c) +
                                     fVar32 * (pfVar2[2] + fVar31 * pfVar2[3]);
                            uVar29 = uVar30;
                            if (fVar33 < 0.0) {
                              uVar29 = uVar30 + 1;
                            }
                            iVar12 = uVar29 - (int)((float)(int)fVar33 / 5.0);
                            uVar29 = uVar23;
                            if (fVar31 < 0.0) {
                              uVar29 = uVar23 + 1;
                            }
                            iVar27 = uVar29 - (int)((float)(int)fVar31 / 5.0);
                            iVar13 = FUN_0096ff30(uVar28);
                            iVar7 = -iVar13;
                            bVar10 = iVar13 <= iVar12;
                            puVar25 = (undefined8 *)PTR_DAT_04bb2640;
                            if ((((!bVar10 && iVar7 < iVar12) && iVar27 != iVar7) &&
                                (((!bVar10 && iVar12 != iVar7) && (bVar10 || iVar7 <= iVar12)) &&
                                iVar27 + iVar13 < 0) ==
                                (((!bVar10 && iVar12 != iVar7) && (bVar10 || iVar7 <= iVar12)) &&
                                SBORROW4(iVar27,iVar7))) && iVar27 < iVar13) goto LAB_00971290;
                            lVar17 = *(long *)puVar9;
                          }
                        }
                      }
                    }
LAB_00971350:
                    uVar28 = uVar28 + 1;
                    uVar24 = uVar24 + 1;
                  } while( true );
                }
              }
            }
            else {
LAB_00971290:
              uVar28 = uVar30 + *(int *)(param_1 + 0x38) * uVar23;
              puVar1 = (uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar28 * 4);
              if (*(uint *)(param_1 + 0x68) <= uVar28) {
                puVar1 = (uint *)0x0;
              }
              *puVar1 = *puVar1 | 0x80;
            }
            bVar10 = uVar30 != uVar4;
            uVar30 = uVar30 + 1;
          } while (bVar10);
        }
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 <= (int)uVar6);
  }
  if ((int)uVar26 <= (int)uVar4) {
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    do {
      if (((int)uVar5 <= (int)uVar6) && (-1 < (int)uVar26)) {
        iVar12 = 0;
        uVar23 = uVar5;
        do {
          if (((-1 < (int)uVar23) && (uVar26 < *(uint *)(param_1 + 0x38))) &&
             (uVar23 < *(uint *)(param_1 + 0x3c))) {
            uVar30 = uVar26 + *(uint *)(param_1 + 0x38) * uVar23;
            lVar17 = *(long *)(param_1 + 0x60) + (long)(int)uVar30 * 0x34;
            lVar22 = *(long *)(param_1 + 0x50) + (long)(int)uVar30 * 0x34;
            if (*(uint *)(param_1 + 0x58) <= uVar30) {
              lVar17 = 0;
            }
            if (*(uint *)(param_1 + 0x48) <= uVar30) {
              lVar22 = 0;
            }
            if ((*(long *)(param_1 + 0x60) == 0) || (lVar17 == 0)) {
              cVar18 = *(char *)(lVar22 + 0x30);
              cVar20 = *(char *)(lVar22 + 0x31);
              cVar21 = *(char *)(lVar22 + 0x32);
LAB_009716cc:
              cVar8 = *(char *)(lVar22 + 0x33);
            }
            else {
              cVar18 = *(char *)(lVar17 + 0x30);
              if (cVar18 == '\t' || cVar18 == '\a') {
                cVar18 = *(char *)(lVar22 + 0x30);
              }
              cVar20 = *(char *)(lVar17 + 0x31);
              if (cVar20 == '\t' || cVar20 == '\a') {
                cVar20 = *(char *)(lVar22 + 0x31);
              }
              cVar21 = *(char *)(lVar17 + 0x32);
              if ((cVar21 == '\t') || (cVar21 == '\a')) {
                cVar21 = *(char *)(lVar22 + 0x32);
              }
              cVar8 = *(char *)(lVar17 + 0x33);
              if ((cVar8 == '\a') || (cVar8 == '\t')) goto LAB_009716cc;
            }
            if (((cVar18 == '\a' && cVar20 == '\a') && cVar21 == '\a') && cVar8 == '\a') {
              if (iVar12 != 0) {
                if (iVar16 < iVar12) {
                  iVar12 = 0;
                }
                else {
                  uVar30 = uVar23 - iVar12;
                  iVar12 = 0;
                  if ((int)uVar30 < (int)uVar23) {
                    do {
                      local_90 = puVar3;
                      local_88 = uVar26;
                      uStack_84 = uVar30;
                      uVar15 = FUN_0097062c(&local_90);
                      if ((uVar15 & 1) == 0) {
                        lVar17 = *(long *)puVar9;
                        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x330) != 0)) {
                          puVar14 = (undefined8 *)
                                    (**(code **)(*(long *)*puVar25 + 0x18))
                                              ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                          iVar12 = FUN_006bd550(*puVar14,0);
                          if ((iVar12 == 0x758f7eaf) &&
                             ((lVar17 = *(long *)puVar9, lVar17 != 0 &&
                              (*(long *)(lVar17 + 0x330) != 0)))) {
                            uVar28 = 0;
                            uVar24 = 1;
                            do {
                              uVar29 = 0;
                              if (lVar17 != 0) {
                                if (*(long *)(lVar17 + 0x330) != 0) {
                                  puVar14 = (undefined8 *)
                                            (**(code **)(*(long *)*puVar25 + 0x18))
                                                      ((long *)*puVar25,
                                                       *(undefined4 *)(lVar17 + 0x338));
                                  FUN_006bd550(*puVar14,0);
                                  lVar17 = *(long *)puVar9;
                                  uVar29 = 0;
                                  if (lVar17 == 0) goto LAB_00971850;
                                }
                                if (*(long *)(lVar17 + 0x330) == 0) {
                                  uVar29 = 0;
                                }
                                else {
                                  puVar14 = (undefined8 *)
                                            (**(code **)(*(long *)*puVar25 + 0x18))
                                                      ((long *)*puVar25,
                                                       *(undefined4 *)(lVar17 + 0x338));
                                  iVar12 = FUN_006bd550(*puVar14,0);
                                  uVar29 = 0;
                                  if (iVar12 == 0x758f7eaf) {
                                    uVar29 = 0;
                                    if (*(long *)puVar9 != 0) {
                                      lVar17 = *(long *)(*(long *)puVar9 + 0x330);
                                      uVar29 = 0;
                                      if (lVar17 != 0) {
                                        uVar29 = *(uint *)(lVar17 + 0x260);
                                      }
                                    }
                                  }
                                }
                              }
LAB_00971850:
                              if (uVar29 <= uVar28) break;
                              lVar17 = *(long *)puVar9;
                              if (lVar17 != 0) {
                                if (*(long *)(lVar17 + 0x330) != 0) {
                                  puVar14 = (undefined8 *)
                                            (**(code **)(*(long *)*puVar25 + 0x18))
                                                      ((long *)*puVar25,
                                                       *(undefined4 *)(lVar17 + 0x338));
                                  FUN_006bd550(*puVar14,0);
                                  lVar17 = *(long *)puVar9;
                                  if (lVar17 == 0) goto LAB_009717c4;
                                }
                                if (*(long *)(lVar17 + 0x330) != 0) {
                                  puVar14 = (undefined8 *)
                                            (**(code **)(*(long *)*puVar25 + 0x18))
                                                      ((long *)*puVar25,
                                                       *(undefined4 *)(lVar17 + 0x338));
                                  iVar12 = FUN_006bd550(*puVar14,0);
                                  lVar17 = *(long *)puVar9;
                                  if ((((iVar12 == 0x758f7eaf) && (lVar17 != 0)) &&
                                      (lVar22 = *(long *)(lVar17 + 0x330), lVar22 != 0)) &&
                                     (uVar28 < *(uint *)(lVar22 + 0x260))) {
                                    lVar22 = lVar22 + 0x250;
                                    if (6 < uVar28) {
                                      uVar29 = uVar24 & 0xfffffff8;
                                      do {
                                        uVar29 = uVar29 - 8;
                                        lVar22 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(*(long *)(*(long *)(lVar22 + 8) + 8) + 8)
                                                  + 8) + 8) + 8) + 8) + 8);
                                      } while (uVar29 != 0);
                                    }
                                    if ((uVar28 + 1 & 7) != 0) {
                                      uVar29 = uVar24 & 7;
                                      do {
                                        lVar22 = *(long *)(lVar22 + 8);
                                        uVar29 = uVar29 - 1;
                                      } while (uVar29 != 0);
                                    }
                                    if ((lVar22 != 0) && (lVar22 != 0x40)) {
                                      fVar31 = (float)NEON_ucvtf(*(undefined4 *)(lVar22 + -0x20));
                                      fVar32 = *(float *)(lVar22 + -0x1c) +
                                               *(float *)(lVar22 + -0x24) * 0.5 + 0.0;
                                      pfVar2 = (float *)(PTR_DAT_04bb2d00 +
                                                        ((ulong)(long)(fVar31 * 11930465.0) >> 0x18
                                                        & 0xff) * 0x10);
                                      fVar31 = (float)((uint)(long)(fVar31 * 11930465.0) & 0xffffff)
                                               * 5.9604645e-08;
                                      fVar33 = *(float *)(lVar22 + -0x34) +
                                               fVar32 * (*pfVar2 + fVar31 * pfVar2[1]);
                                      fVar31 = *(float *)(lVar22 + -0x2c) +
                                               fVar32 * (pfVar2[2] + fVar31 * pfVar2[3]);
                                      uVar29 = uVar26;
                                      if (fVar33 < 0.0) {
                                        uVar29 = uVar26 + 1;
                                      }
                                      iVar12 = uVar29 - (int)((float)(int)fVar33 / 5.0);
                                      uVar29 = uVar30;
                                      if (fVar31 < 0.0) {
                                        uVar29 = uVar30 + 1;
                                      }
                                      iVar27 = uVar29 - (int)((float)(int)fVar31 / 5.0);
                                      iVar13 = FUN_0096ff30(uVar28);
                                      iVar7 = -iVar13;
                                      bVar10 = iVar13 <= iVar12;
                                      puVar25 = (undefined8 *)PTR_DAT_04bb2640;
                                      if ((((!bVar10 && iVar7 < iVar12) && iVar27 != iVar7) &&
                                          (((!bVar10 && iVar12 != iVar7) &&
                                           (bVar10 || iVar7 <= iVar12)) && iVar27 + iVar13 < 0) ==
                                          (((!bVar10 && iVar12 != iVar7) &&
                                           (bVar10 || iVar7 <= iVar12)) && SBORROW4(iVar27,iVar7)))
                                          && iVar27 < iVar13) goto LAB_00971710;
                                      lVar17 = *(long *)puVar9;
                                    }
                                  }
                                }
                              }
LAB_009717c4:
                              uVar28 = uVar28 + 1;
                              uVar24 = uVar24 + 1;
                            } while( true );
                          }
                        }
                      }
                      else {
LAB_00971710:
                        uVar28 = uVar26 + *(int *)(param_1 + 0x38) * uVar30;
                        puVar1 = (uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar28 * 4);
                        if (*(uint *)(param_1 + 0x68) <= uVar28) {
                          puVar1 = (uint *)0x0;
                        }
                        *puVar1 = *puVar1 | 0x80;
                      }
                      uVar30 = uVar30 + 1;
                    } while (uVar30 != uVar23);
                    iVar12 = 0;
                  }
                }
              }
            }
            else {
              iVar12 = iVar12 + 1;
            }
          }
          bVar10 = uVar23 != uVar6;
          uVar23 = uVar23 + 1;
        } while (bVar10);
        if (((iVar12 != 0) && (iVar12 <= iVar16)) &&
           (uVar23 = (uVar6 + 1) - iVar12, (int)uVar23 <= (int)uVar6)) {
          do {
            local_90 = PTR_DAT_04bb2010 + 0x10;
            local_88 = uVar26;
            uStack_84 = uVar23;
            uVar15 = FUN_0097062c(&local_90);
            if ((uVar15 & 1) == 0) {
              lVar17 = *(long *)puVar9;
              if ((lVar17 != 0) && (*(long *)(lVar17 + 0x330) != 0)) {
                puVar14 = (undefined8 *)
                          (**(code **)(*(long *)*puVar25 + 0x18))
                                    ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                iVar12 = FUN_006bd550(*puVar14,0);
                if ((iVar12 == 0x758f7eaf) &&
                   ((lVar17 = *(long *)puVar9, lVar17 != 0 && (*(long *)(lVar17 + 0x330) != 0)))) {
                  uVar30 = 0;
                  uVar28 = 1;
                  do {
                    uVar24 = 0;
                    if (lVar17 != 0) {
                      if (*(long *)(lVar17 + 0x330) != 0) {
                        puVar14 = (undefined8 *)
                                  (**(code **)(*(long *)*puVar25 + 0x18))
                                            ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                        FUN_006bd550(*puVar14,0);
                        lVar17 = *(long *)puVar9;
                        uVar24 = 0;
                        if (lVar17 == 0) goto LAB_00971bc0;
                      }
                      if (*(long *)(lVar17 + 0x330) == 0) {
                        uVar24 = 0;
                      }
                      else {
                        puVar14 = (undefined8 *)
                                  (**(code **)(*(long *)*puVar25 + 0x18))
                                            ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                        iVar12 = FUN_006bd550(*puVar14,0);
                        uVar24 = 0;
                        if (iVar12 == 0x758f7eaf) {
                          uVar24 = 0;
                          if (*(long *)puVar9 != 0) {
                            lVar17 = *(long *)(*(long *)puVar9 + 0x330);
                            uVar24 = 0;
                            if (lVar17 != 0) {
                              uVar24 = *(uint *)(lVar17 + 0x260);
                            }
                          }
                        }
                      }
                    }
LAB_00971bc0:
                    if (uVar24 <= uVar30) break;
                    lVar17 = *(long *)puVar9;
                    if (lVar17 != 0) {
                      if (*(long *)(lVar17 + 0x330) != 0) {
                        puVar14 = (undefined8 *)
                                  (**(code **)(*(long *)*puVar25 + 0x18))
                                            ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                        FUN_006bd550(*puVar14,0);
                        lVar17 = *(long *)puVar9;
                        if (lVar17 == 0) goto LAB_00971b30;
                      }
                      if (*(long *)(lVar17 + 0x330) != 0) {
                        puVar14 = (undefined8 *)
                                  (**(code **)(*(long *)*puVar25 + 0x18))
                                            ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
                        iVar12 = FUN_006bd550(*puVar14,0);
                        lVar17 = *(long *)puVar9;
                        if ((((iVar12 == 0x758f7eaf) && (lVar17 != 0)) &&
                            (lVar22 = *(long *)(lVar17 + 0x330), lVar22 != 0)) &&
                           (uVar30 < *(uint *)(lVar22 + 0x260))) {
                          lVar22 = lVar22 + 0x250;
                          if (6 < uVar30) {
                            uVar24 = uVar28 & 0xfffffff8;
                            do {
                              uVar24 = uVar24 - 8;
                              lVar22 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(*(long *)(lVar22 + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8) + 8);
                            } while (uVar24 != 0);
                          }
                          if ((uVar30 + 1 & 7) != 0) {
                            uVar24 = uVar28 & 7;
                            do {
                              lVar22 = *(long *)(lVar22 + 8);
                              uVar24 = uVar24 - 1;
                            } while (uVar24 != 0);
                          }
                          if ((lVar22 != 0) && (lVar22 != 0x40)) {
                            fVar31 = (float)NEON_ucvtf(*(undefined4 *)(lVar22 + -0x20));
                            fVar32 = *(float *)(lVar22 + -0x1c) + *(float *)(lVar22 + -0x24) * 0.5 +
                                     0.0;
                            pfVar2 = (float *)(PTR_DAT_04bb2d00 +
                                              ((ulong)(long)(fVar31 * 11930465.0) >> 0x18 & 0xff) *
                                              0x10);
                            fVar31 = (float)((uint)(long)(fVar31 * 11930465.0) & 0xffffff) *
                                     5.9604645e-08;
                            fVar33 = *(float *)(lVar22 + -0x34) +
                                     fVar32 * (*pfVar2 + fVar31 * pfVar2[1]);
                            fVar31 = *(float *)(lVar22 + -0x2c) +
                                     fVar32 * (pfVar2[2] + fVar31 * pfVar2[3]);
                            uVar24 = uVar26;
                            if (fVar33 < 0.0) {
                              uVar24 = uVar26 + 1;
                            }
                            iVar12 = uVar24 - (int)((float)(int)fVar33 / 5.0);
                            uVar24 = uVar23;
                            if (fVar31 < 0.0) {
                              uVar24 = uVar23 + 1;
                            }
                            iVar27 = uVar24 - (int)((float)(int)fVar31 / 5.0);
                            iVar13 = FUN_0096ff30(uVar30);
                            iVar7 = -iVar13;
                            bVar10 = iVar13 <= iVar12;
                            puVar25 = (undefined8 *)PTR_DAT_04bb2640;
                            if ((((!bVar10 && iVar7 < iVar12) && iVar27 != iVar7) &&
                                (((!bVar10 && iVar12 != iVar7) && (bVar10 || iVar7 <= iVar12)) &&
                                iVar27 + iVar13 < 0) ==
                                (((!bVar10 && iVar12 != iVar7) && (bVar10 || iVar7 <= iVar12)) &&
                                SBORROW4(iVar27,iVar7))) && iVar27 < iVar13) goto LAB_00971a64;
                            lVar17 = *(long *)puVar9;
                          }
                        }
                      }
                    }
LAB_00971b30:
                    uVar30 = uVar30 + 1;
                    uVar28 = uVar28 + 1;
                  } while( true );
                }
              }
            }
            else {
LAB_00971a64:
              uVar30 = uVar26 + *(int *)(param_1 + 0x38) * uVar23;
              puVar1 = (uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar30 * 4);
              if (*(uint *)(param_1 + 0x68) <= uVar30) {
                puVar1 = (uint *)0x0;
              }
              *puVar1 = *puVar1 | 0x80;
            }
            bVar10 = uVar23 != uVar6;
            uVar23 = uVar23 + 1;
          } while (bVar10);
        }
      }
      bVar10 = uVar26 != uVar4;
      uVar26 = uVar26 + 1;
    } while (bVar10);
  }
  puVar3 = PTR_DAT_04bbe4b0;
  iVar12 = *(int *)(param_2 + 0x14);
  iVar16 = *(int *)(param_2 + 0x24) + 1;
  if (iVar16 != iVar12) {
    iVar7 = *(int *)(param_2 + 0x10);
    iVar27 = iVar7;
    do {
      lVar17 = *(long *)puVar9;
      iVar13 = 0;
      if (lVar17 != 0) {
        if (*(long *)(lVar17 + 0x330) == 0) {
          iVar13 = 0;
        }
        else {
          puVar14 = (undefined8 *)
                    (**(code **)(*(long *)*puVar25 + 0x18))
                              ((long *)*puVar25,*(undefined4 *)(lVar17 + 0x338));
          iVar11 = FUN_006bd550(*puVar14,0);
          iVar13 = 0;
          if (iVar11 == 0x758f7eaf) {
            iVar13 = 0;
            if (*(long *)puVar9 != 0) {
              lVar17 = *(long *)(*(long *)puVar9 + 0x330);
              iVar13 = 0;
              if (lVar17 != 0) {
                iVar13 = *(int *)(lVar17 + 0x244);
              }
            }
          }
        }
      }
      if (((iVar27 - 0x1aU < 0xe) && (*(int *)(puVar3 + 0x90) == iVar13 && iVar12 - 0x26U < 4)) ||
         ((iVar27 - 0x1aU < 0xb &&
          (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x3ee08254 && iVar12 - 0x12U < 3)))) {
        uVar26 = iVar27 + *(int *)(param_1 + 0x38) * iVar12;
        puVar1 = (uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar26 * 4);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,7);
        if (*(uint *)(param_1 + 0x68) <= uVar26) {
          puVar1 = (uint *)0x0;
        }
        *puVar1 = *puVar1 | 0x80;
      }
      if (iVar27 < *(int *)(param_2 + 0x20)) {
        iVar27 = iVar27 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
        iVar27 = *(int *)(param_2 + 0x10);
      }
    } while ((iVar7 != iVar27) || (iVar16 != iVar12));
  }
  return;
}

