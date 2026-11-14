
void FUN_017b3420(long param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  puVar4 = PTR_DAT_04bb2640;
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar10 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar8 = FUN_006bd550(*puVar10,0);
    if ((iVar8 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0)))) {
      fVar27 = 320.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      uVar15 = 0;
      uVar16 = 1;
      fVar17 = 320.0;
      do {
        uVar11 = DAT_05aed670;
        if (DAT_05aed670 != 0) {
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar10 = (undefined8 *)
                      (**(code **)(**(long **)puVar4 + 0x18))
                                (*(long **)puVar4,*(undefined4 *)(DAT_05aed670 + 0x338));
            FUN_006bd550(*puVar10,0);
            uVar11 = DAT_05aed670;
            if (DAT_05aed670 == 0) goto LAB_017b35d0;
          }
          if (*(long *)(DAT_05aed670 + 0x330) == 0) {
            uVar11 = 0;
          }
          else {
            puVar10 = (undefined8 *)
                      (**(code **)(**(long **)puVar4 + 0x18))
                                (*(long **)puVar4,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar8 = FUN_006bd550(*puVar10,0);
            uVar11 = 0;
            if ((iVar8 == 0x758f7eaf) && (uVar11 = DAT_05aed670, DAT_05aed670 != 0)) {
              uVar11 = 0;
              if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                uVar11 = (ulong)*(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x260);
              }
            }
          }
        }
LAB_017b35d0:
        if ((uint)uVar11 <= uVar15) {
          return;
        }
        if (DAT_05aed670 != 0) {
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar10 = (undefined8 *)
                      (**(code **)(**(long **)puVar4 + 0x18))
                                (*(long **)puVar4,*(undefined4 *)(DAT_05aed670 + 0x338));
            FUN_006bd550(*puVar10,0);
            if (DAT_05aed670 == 0) goto LAB_017b3540;
          }
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar10 = (undefined8 *)
                      (**(code **)(**(long **)puVar4 + 0x18))
                                (*(long **)puVar4,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar8 = FUN_006bd550(*puVar10,0);
            if ((((iVar8 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
                (lVar13 = *(long *)(DAT_05aed670 + 0x330), lVar13 != 0)) &&
               (uVar15 < *(uint *)(lVar13 + 0x260))) {
              lVar13 = lVar13 + 0x250;
              if (6 < uVar15) {
                uVar14 = uVar16 & 0xfffffff8;
                do {
                  uVar14 = uVar14 - 8;
                  lVar13 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar13 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                    + 8);
                } while (uVar14 != 0);
              }
              if ((uVar15 + 1 & 7) != 0) {
                uVar14 = uVar16 & 7;
                do {
                  lVar13 = *(long *)(lVar13 + 8);
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              if ((lVar13 != 0) && (lVar13 != 0x40)) {
                uVar14 = *(int *)(lVar13 + -8) - 1;
                if (uVar14 < 3) {
                  fVar18 = *(float *)(&DAT_041770fc + (long)(int)uVar14 * 4);
                }
                else {
                  fVar18 = 15.0;
                  if (*(int *)(lVar13 + -8) != 4) {
                    fVar18 = 0.0;
                  }
                }
                fVar19 = *(float *)(lVar13 + -0x34);
                fVar22 = *(float *)(lVar13 + -0x2c);
                fVar20 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + -0x20));
                pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                                  ((ulong)(long)(fVar20 * 11930465.0) >> 0x18 & 0xff) * 0x10);
                fVar23 = pfVar1[2];
                fVar21 = pfVar1[3];
                fVar25 = *pfVar1;
                fVar26 = pfVar1[1];
                puVar10 = (undefined8 *)
                          (**(code **)(**(long **)puVar4 + 0x18))
                                    (*(long **)puVar4,*(undefined4 *)(DAT_05aed670 + 0x338));
                iVar9 = FUN_006bd550(*puVar10,0);
                iVar8 = 0;
                if ((iVar9 == 0x758f7eaf) && (iVar8 = 0, DAT_05aed670 != 0)) {
                  iVar8 = 0;
                  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                    iVar8 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
                  }
                }
                if ((((DAT_05292380 != iVar8) || (DAT_05292338 == 0)) ||
                    (iVar8 = FUN_017ba638(), iVar8 < 3)) || (uVar15 != 3)) {
                  if (DAT_05aed670 == 0) {
LAB_017b3824:
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = 0;
                    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                      puVar10 = (undefined8 *)
                                (**(code **)(**(long **)puVar4 + 0x18))
                                          (*(long **)puVar4,*(undefined4 *)(DAT_05aed670 + 0x338));
                      iVar8 = FUN_006bd550(*puVar10,0);
                      if ((iVar8 != 0x758f7eaf) || (DAT_05aed670 == 0)) goto LAB_017b3824;
                      iVar8 = 0;
                      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                        iVar8 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
                      }
                    }
                  }
                  if (DAT_05292408 == iVar8) {
                    if ((DAT_05aed670 == 0) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
LAB_017b3890:
                      bVar7 = true;
                    }
                    else {
                      puVar10 = (undefined8 *)
                                (**(code **)(**(long **)puVar4 + 0x18))
                                          (*(long **)puVar4,*(undefined4 *)(DAT_05aed670 + 0x338));
                      iVar8 = FUN_006bd550(*puVar10,0);
                      if ((iVar8 != 0x758f7eaf) ||
                         ((DAT_05aed670 == 0 || (*(long *)(DAT_05aed670 + 0x330) == 0))))
                      goto LAB_017b3890;
                      bVar7 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 0;
                    }
                    if ((uVar15 == 1) && (bVar7)) goto LAB_017b3978;
                    uVar11 = DAT_05aed670;
                    if (DAT_05aed670 != 0) {
                      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                        puVar10 = (undefined8 *)
                                  (**(code **)(**(long **)puVar4 + 0x18))
                                            (*(long **)puVar4,*(undefined4 *)(DAT_05aed670 + 0x338))
                        ;
                        iVar8 = FUN_006bd550(*puVar10,0);
                        if (iVar8 != 0x758f7eaf) goto LAB_017b38fc;
                        uVar11 = DAT_05aed670;
                        if (DAT_05aed670 == 0) goto LAB_017b3950;
                        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                          if ((uVar15 == 0) &&
                             (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 1))
                          goto LAB_017b3978;
                          goto LAB_017b3908;
                        }
                      }
LAB_017b394c:
                      uVar11 = 0;
                    }
                  }
                  else {
LAB_017b38fc:
                    uVar11 = DAT_05aed670;
                    if (DAT_05aed670 != 0) {
                      if (*(long *)(DAT_05aed670 + 0x330) == 0) goto LAB_017b394c;
LAB_017b3908:
                      puVar10 = (undefined8 *)
                                (**(code **)(**(long **)puVar4 + 0x18))
                                          (*(long **)puVar4,*(undefined4 *)(DAT_05aed670 + 0x338));
                      iVar8 = FUN_006bd550(*puVar10,0);
                      uVar11 = 0;
                      if ((iVar8 == 0x758f7eaf) && (uVar11 = DAT_05aed670, DAT_05aed670 != 0)) {
                        uVar11 = 0;
                        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                          uVar11 = (ulong)*(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
                        }
                      }
                    }
                  }
LAB_017b3950:
                  if ((uVar15 != 1) || (DAT_05292430 != (int)uVar11)) {
                    fVar24 = (float)((uint)(long)(fVar20 * 11930465.0) & 0xffffff) * 5.9604645e-08;
                    fVar25 = fVar25 + fVar24 * fVar26;
                    fVar19 = fVar19 + fVar18 * fVar25;
                    fVar20 = fVar29;
                    if (0.7 < fVar25) {
                      iVar8 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
                      bVar7 = false;
                      bVar5 = true;
                      bVar6 = false;
                      if (*(int *)(param_1 + 0x10) < iVar8) {
                        bVar7 = false;
                        bVar5 = false;
                        bVar6 = true;
                        if (!NAN(fVar17) && !NAN(fVar19)) {
                          bVar7 = fVar17 < fVar19;
                          bVar5 = fVar17 == fVar19;
                          bVar6 = false;
                        }
                      }
                      if (bVar5 || bVar7 != bVar6) goto LAB_017b3540;
                      iVar2 = *(int *)(param_1 + 0x20);
                      iVar3 = *(int *)(param_1 + 0x24);
                      iVar12 = *(int *)(param_1 + 0x14);
                      iVar9 = iVar8;
                      if (iVar2 <= iVar8) {
                        iVar9 = iVar2;
                      }
                      if (iVar8 <= iVar2) {
                        iVar8 = iVar2;
                      }
                      *(int *)(param_1 + 0x10) = iVar9;
                      *(int *)(param_1 + 0x20) = iVar8;
                      iVar8 = iVar12;
                      if (iVar3 <= iVar12) {
                        iVar8 = iVar3;
                      }
                      if (iVar12 <= iVar3) {
                        iVar12 = iVar3;
                      }
                      fVar17 = fVar19;
                    }
                    else {
                      if (-0.7 <= fVar25) {
                        fVar23 = fVar23 + fVar24 * fVar21;
                        fVar20 = fVar22 + fVar18 * fVar23;
                        iVar12 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
                        if (fVar23 <= 0.7) {
                          bVar7 = false;
                          if ((iVar12 <= *(int *)(param_1 + 0x24)) &&
                             (bVar7 = false, !NAN(fVar29) && !NAN(fVar20))) {
                            bVar7 = fVar29 < fVar20;
                          }
                          if (bVar7) {
                            iVar8 = *(int *)(param_1 + 0x20);
                            iVar3 = iVar12 + -1;
                            iVar9 = *(int *)(param_1 + 0x10);
                            iVar12 = *(int *)(param_1 + 0x14);
                            iVar2 = iVar9;
                            if (iVar8 <= iVar9) {
                              iVar2 = iVar8;
                            }
                            if (iVar9 <= iVar8) {
                              iVar9 = iVar8;
                            }
                            iVar8 = iVar12;
                            if (iVar3 <= iVar12) {
                              iVar8 = iVar3;
                            }
                            if (iVar12 <= iVar3) {
                              iVar12 = iVar3;
                            }
                            *(int *)(param_1 + 0x10) = iVar2;
                            goto LAB_017b3b18;
                          }
                        }
                        else {
                          bVar7 = false;
                          bVar5 = true;
                          bVar6 = false;
                          if (*(int *)(param_1 + 0x14) < iVar12) {
                            bVar7 = false;
                            bVar5 = false;
                            bVar6 = true;
                            if (!NAN(fVar27) && !NAN(fVar19)) {
                              bVar7 = fVar27 < fVar19;
                              bVar5 = fVar27 == fVar19;
                              bVar6 = false;
                            }
                          }
                          if (!bVar5 && bVar7 == bVar6) {
                            iVar2 = *(int *)(param_1 + 0x20);
                            iVar3 = *(int *)(param_1 + 0x24);
                            iVar9 = *(int *)(param_1 + 0x10);
                            iVar8 = iVar9;
                            if (iVar2 <= iVar9) {
                              iVar8 = iVar2;
                            }
                            if (iVar9 <= iVar2) {
                              iVar9 = iVar2;
                            }
                            *(int *)(param_1 + 0x10) = iVar8;
                            iVar8 = iVar12;
                            if (iVar3 <= iVar12) {
                              iVar8 = iVar3;
                            }
                            if (iVar12 <= iVar3) {
                              iVar12 = iVar3;
                            }
                            fVar27 = fVar20;
                            fVar20 = fVar29;
LAB_017b3b18:
                            *(int *)(param_1 + 0x20) = iVar9;
                            goto LAB_017b3530;
                          }
                        }
                        goto LAB_017b3540;
                      }
                      iVar8 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
                      bVar7 = false;
                      if ((iVar8 <= *(int *)(param_1 + 0x20)) &&
                         (bVar7 = false, !NAN(fVar28) && !NAN(fVar19))) {
                        bVar7 = fVar28 < fVar19;
                      }
                      if (!bVar7) goto LAB_017b3978;
                      iVar2 = *(int *)(param_1 + 0x10);
                      iVar12 = *(int *)(param_1 + 0x14);
                      iVar8 = iVar8 + -1;
                      iVar3 = *(int *)(param_1 + 0x24);
                      iVar9 = iVar2;
                      if (iVar8 <= iVar2) {
                        iVar9 = iVar8;
                      }
                      if (iVar2 <= iVar8) {
                        iVar2 = iVar8;
                      }
                      *(int *)(param_1 + 0x10) = iVar9;
                      iVar8 = iVar12;
                      if (iVar3 <= iVar12) {
                        iVar8 = iVar3;
                      }
                      if (iVar12 <= iVar3) {
                        iVar12 = iVar3;
                      }
                      *(int *)(param_1 + 0x20) = iVar2;
                      fVar28 = fVar19;
                    }
LAB_017b3530:
                    *(int *)(param_1 + 0x14) = iVar8;
                    *(int *)(param_1 + 0x24) = iVar12;
                    fVar29 = fVar20;
                    goto LAB_017b3540;
                  }
                }
LAB_017b3978:
              }
            }
          }
        }
LAB_017b3540:
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 + 1;
      } while( true );
    }
  }
  return;
}

