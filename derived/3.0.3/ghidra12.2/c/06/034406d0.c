
/* WARNING: Type propagation algorithm not settling */

void FUN_034406d0(long param_1)

{
  bool bVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *******ppppppplVar20;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  long *******local_a8 [2];
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  
  local_90 = *(undefined8 *)(param_1 + 8);
  local_88 = *(undefined8 *)(param_1 + 0x10);
  plVar2 = (long *)(param_1 + 0x18);
  iVar13 = *(int *)(param_1 + 0x2c);
  if (*(long **)(param_1 + 0x20) != plVar2) {
    lVar26 = (long)iVar13;
    plVar25 = (long *)((long)*(long **)(param_1 + 0x20) - lVar26);
    do {
      (**(code **)(*plVar25 + 0x20))(plVar25);
      plVar25 = (long *)(*(long *)((long)plVar25 + lVar26 + 8) - lVar26);
    } while (plVar25 != (long *)((long)plVar2 - lVar26));
    iVar13 = *(int *)(param_1 + 0x2c);
  }
  if ((1 < *(int *)(param_1 + 0x28)) &&
     (plVar25 = *(long **)(*(long *)(param_1 + 0x20) + 8), plVar25 != plVar2)) {
    lVar26 = (long)-iVar13;
    do {
      plVar14 = (long *)((long)plVar25 + lVar26);
      plVar22 = (long *)*plVar25;
      plVar21 = (long *)plVar25[1];
      plVar17 = (long *)((long)plVar22 + lVar26);
      fVar28 = *(float *)((long)plVar17 + 0x8c);
      fVar35 = *(float *)((long)plVar17 + 0x94);
      bVar4 = *(float *)((long)plVar14 + 0x8c) <= *(float *)((long)plVar14 + 0x94) &&
              *(float *)(plVar14 + 0x11) <= *(float *)(plVar14 + 0x12);
      bVar3 = false;
      bVar5 = false;
      bVar6 = false;
      if (*(float *)(plVar17 + 0x11) <= *(float *)(plVar17 + 0x12)) {
        bVar3 = false;
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar28) && !NAN(fVar35)) {
          bVar3 = fVar28 < fVar35;
          bVar5 = fVar28 == fVar35;
          bVar6 = false;
        }
      }
      if (bVar5 || bVar3 != bVar6) {
        if (*(float *)((long)plVar14 + 0x8c) <= *(float *)((long)plVar14 + 0x94) &&
            *(float *)(plVar14 + 0x11) <= *(float *)(plVar14 + 0x12)) {
          (**(code **)(*plVar17 + 0x28))();
          fVar35 = fVar28;
          (**(code **)(*plVar14 + 0x28))(plVar14);
          bVar4 = 0.0 < fVar28 - fVar35;
          if (0.0 <= fVar28 - fVar35) goto LAB_03440800;
        }
      }
      else {
LAB_03440800:
        if (bVar4) {
          do {
            plVar22 = (long *)*plVar22;
            if (plVar22 == plVar2) {
              plVar22 = plVar2;
              break;
            }
            plVar17 = (long *)((long)plVar22 + lVar26);
            fVar28 = *(float *)((long)plVar17 + 0x8c);
            fVar35 = *(float *)((long)plVar17 + 0x94);
            bVar4 = *(float *)((long)plVar14 + 0x8c) <= *(float *)((long)plVar14 + 0x94) &&
                    *(float *)(plVar14 + 0x11) <= *(float *)(plVar14 + 0x12);
            bVar3 = false;
            bVar5 = false;
            bVar6 = false;
            if (*(float *)(plVar17 + 0x11) <= *(float *)(plVar17 + 0x12)) {
              bVar3 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar28) && !NAN(fVar35)) {
                bVar3 = fVar28 < fVar35;
                bVar5 = fVar28 == fVar35;
                bVar6 = false;
              }
            }
            if (bVar5 || bVar3 != bVar6) {
              if (*(float *)((long)plVar14 + 0x94) < *(float *)((long)plVar14 + 0x8c) ||
                  *(float *)(plVar14 + 0x11) > *(float *)(plVar14 + 0x12)) break;
              (**(code **)(*plVar17 + 0x28))();
              fVar35 = fVar28;
              (**(code **)(*plVar14 + 0x28))(plVar14);
              bVar4 = 0.0 < fVar28 - fVar35;
              if (fVar28 - fVar35 < 0.0) break;
            }
          } while (bVar4);
          plVar14 = (long *)plVar25[1];
          if (*plVar25 != 0) {
            *(long **)(*plVar25 + 8) = plVar14;
            plVar14 = (long *)plVar25[1];
          }
          if (plVar14 != (long *)0x0) {
            *plVar14 = *plVar25;
          }
          *plVar25 = 0;
          plVar25[1] = 0;
          puVar18 = (undefined8 *)plVar22[1];
          plVar22[1] = (long)plVar25;
          *plVar25 = (long)plVar22;
          plVar25[1] = (long)puVar18;
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = plVar25;
          }
        }
      }
      plVar25 = plVar21;
    } while (plVar21 != plVar2);
    iVar13 = *(int *)(param_1 + 0x2c);
  }
  if (*(long **)(param_1 + 0x20) != plVar2) {
    iVar16 = 0;
    lVar15 = (long)-iVar13;
    lVar26 = lVar15 + (long)*(long **)(param_1 + 0x20);
    do {
      *(int *)(lVar26 + 0x34) = iVar16;
      iVar16 = iVar16 + 1;
      lVar26 = *(long *)(lVar26 + iVar13 + 8) + lVar15;
    } while (lVar26 != lVar15 + (long)plVar2);
    if (*(long **)(param_1 + 0x20) != plVar2) {
      lVar26 = (long)*(int *)(param_1 + 0x2c);
      fVar28 = (float)local_90;
      fVar35 = local_90._4_4_;
      fVar36 = (float)local_88;
      fVar37 = local_88._4_4_;
      plVar25 = (long *)((long)*(long **)(param_1 + 0x20) - lVar26);
      do {
        fVar29 = *(float *)((long)plVar25 + 0x8c);
        fVar33 = *(float *)((long)plVar25 + 0x94);
        bVar4 = false;
        bVar3 = false;
        bVar5 = false;
        if (*(float *)(plVar25 + 0x11) <= *(float *)(plVar25 + 0x12)) {
          bVar4 = false;
          bVar3 = false;
          bVar5 = true;
          if (!NAN(fVar29) && !NAN(fVar33)) {
            bVar4 = fVar29 < fVar33;
            bVar3 = fVar29 == fVar33;
            bVar5 = false;
          }
        }
        if (bVar3 || bVar4 != bVar5) {
          fVar29 = *(float *)(plVar25 + 0x14);
          *(undefined4 *)(plVar25 + 6) = 0;
          fVar33 = *(float *)(plVar25 + 0x13);
          if (fVar28 <= fVar33) {
            if (fVar36 < fVar29) {
              fVar33 = fVar36 - (fVar29 - fVar33);
              *(float *)(plVar25 + 0x14) = fVar36;
              *(float *)(plVar25 + 0x13) = fVar33;
              fVar29 = fVar36;
            }
          }
          else {
            fVar29 = (fVar29 - fVar33) + fVar28;
            *(float *)(plVar25 + 0x13) = fVar28;
            *(float *)(plVar25 + 0x14) = fVar29;
            fVar33 = fVar28;
          }
          fVar31 = *(float *)((long)plVar25 + 0xa4);
          fVar34 = *(float *)((long)plVar25 + 0x9c);
          if (fVar35 <= fVar34) {
            if (fVar37 < fVar31) {
              fVar34 = fVar37 - (fVar31 - fVar34);
              *(float *)((long)plVar25 + 0xa4) = fVar37;
              *(float *)((long)plVar25 + 0x9c) = fVar34;
              fVar31 = fVar37;
            }
          }
          else {
            fVar31 = (fVar31 - fVar34) + fVar35;
            *(float *)((long)plVar25 + 0x9c) = fVar35;
            *(float *)((long)plVar25 + 0xa4) = fVar31;
            fVar34 = fVar35;
          }
          fVar32 = *(float *)((long)plVar25 + 0xac);
          fVar27 = fVar32;
          if (NAN(fVar32)) {
            fVar27 = 0.0;
          }
          fVar30 = *(float *)(plVar25 + 0x16);
          if (NAN(fVar32)) {
            fVar30 = 0.0;
          }
          fVar27 = fVar27 + (float)(int)((fVar33 + fVar29) * 0.5);
          fVar30 = fVar30 + (float)(int)((fVar34 + fVar31) * 0.5);
          *(float *)((long)plVar25 + 0x5c) = fVar27;
          *(float *)(plVar25 + 0xc) = fVar30;
          if ((int)plVar25[0x15] != 2) {
            fVar27 = (float)(**(code **)(*plVar25 + 0x28))(plVar25);
          }
          *(float *)(plVar25 + 5) = fVar27;
          *(float *)((long)plVar25 + 0x2c) = fVar30;
        }
        plVar25 = (long *)(*(long *)((long)plVar25 + lVar26 + 8) - lVar26);
      } while ((long *)((long)plVar2 - lVar26) != plVar25);
      iVar13 = *(int *)(param_1 + 0x2c);
      iVar16 = *(int *)(param_1 + 0x30);
      local_94 = 0x18;
      if (plVar2 != *(long **)(param_1 + 0x20)) {
        lVar26 = (long)*(long **)(param_1 + 0x20) - (long)iVar13;
        lVar15 = (long)plVar2 - (long)iVar13;
        do {
          while( true ) {
            fVar28 = *(float *)(lVar26 + 0x8c);
            fVar35 = *(float *)(lVar26 + 0x94);
            bVar4 = false;
            bVar3 = false;
            bVar5 = false;
            if (*(float *)(lVar26 + 0x88) <= *(float *)(lVar26 + 0x90)) {
              bVar4 = false;
              bVar3 = false;
              bVar5 = true;
              if (!NAN(fVar28) && !NAN(fVar35)) {
                bVar4 = fVar28 < fVar35;
                bVar3 = fVar28 == fVar35;
                bVar5 = false;
              }
            }
            if ((bVar3 || bVar4 != bVar5) && (*(int *)(lVar26 + 0xa8) == 2)) break;
            lVar26 = (long)-iVar13 + *(long *)(lVar26 + iVar13 + 8);
            if (lVar15 == lVar26) goto LAB_03440a60;
          }
          local_a8[1] = (long *******)(lVar26 + local_94);
          *local_a8[1] = (long ******)local_a8;
          local_a8[1][1] = (long ******)local_a8;
          local_98 = 1;
          plVar25 = *(long **)(param_1 + 0x20);
          if (plVar25 != plVar2) {
            uVar9 = (ulong)*(int *)(param_1 + 0x2c);
            uVar23 = 1;
            lVar24 = (long)plVar25 - uVar9;
            uVar10 = uVar9;
            local_a8[0] = local_a8[1];
LAB_0344106c:
            uVar8 = (uint)uVar9;
            if ((long ********)local_a8[1] == local_a8) {
              do {
                lVar24 = -uVar10 + *(long *)(lVar24 + (int)uVar8 + 8);
              } while ((long)plVar2 - uVar10 != lVar24);
            }
            else {
              lVar11 = (long)local_94;
              do {
                if (lVar24 != lVar26) {
                  fVar28 = *(float *)(lVar24 + 0x8c);
                  fVar35 = *(float *)(lVar24 + 0x94);
                  bVar4 = false;
                  bVar3 = false;
                  bVar5 = false;
                  if (*(float *)(lVar24 + 0x88) <= *(float *)(lVar24 + 0x90)) {
                    bVar4 = false;
                    bVar3 = false;
                    bVar5 = true;
                    if (!NAN(fVar28) && !NAN(fVar35)) {
                      bVar4 = fVar28 < fVar35;
                      bVar3 = fVar28 == fVar35;
                      bVar5 = false;
                    }
                  }
                  if (((bVar3 || bVar4 != bVar5) && (*(int *)(lVar24 + 0xa8) == 2)) &&
                     (ppppppplVar20 = (long *******)(lVar24 + lVar11),
                     ppppppplVar20[1] == (long ******)0x0 && *ppppppplVar20 == (long ******)0x0)) {
                    lVar12 = (long)local_a8[1] - lVar11;
                    do {
                      bVar4 = false;
                      if ((*(float *)(lVar12 + 0x98) < *(float *)(lVar24 + 0xa0)) &&
                         (bVar4 = false,
                         !NAN(*(float *)(lVar24 + 0x98)) && !NAN(*(float *)(lVar12 + 0xa0)))) {
                        bVar4 = *(float *)(lVar24 + 0x98) < *(float *)(lVar12 + 0xa0);
                      }
                      if (bVar4) {
                        bVar4 = false;
                        if ((*(float *)(lVar12 + 0x9c) < *(float *)(lVar24 + 0xa4)) &&
                           (bVar4 = false,
                           !NAN(*(float *)(lVar24 + 0x9c)) && !NAN(*(float *)(lVar12 + 0xa4)))) {
                          bVar4 = *(float *)(lVar24 + 0x9c) < *(float *)(lVar12 + 0xa4);
                        }
                        if (bVar4) {
                          *ppppppplVar20 = (long ******)local_a8[0];
                          ppppppplVar20[1] = (long ******)local_a8;
                          if (local_a8[0] != (long *******)0x0) {
                            local_a8[0][1] = (long ******)ppppppplVar20;
                          }
                          uVar23 = uVar23 + 1;
                          local_98 = local_98 + 1;
                          uVar8 = *(uint *)(param_1 + 0x2c);
                          uVar10 = (ulong)(int)uVar8;
                          plVar25 = *(long **)(param_1 + 0x20);
                          uVar9 = (ulong)uVar8;
                          lVar24 = (long)plVar25 - uVar10;
                          local_a8[0] = ppppppplVar20;
                          if (plVar25 == plVar2) goto LAB_034411cc;
                          goto LAB_0344106c;
                        }
                      }
                      lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
                    } while (lVar12 != (long)local_a8 - lVar11);
                  }
                }
                lVar24 = -uVar10 + *(long *)(lVar24 + (int)uVar8 + 8);
              } while ((long)plVar2 - uVar10 != lVar24);
            }
            if (uVar23 < 2) goto LAB_03441284;
LAB_034411cc:
            if (0 < iVar16) {
              local_b0 = 0x1800000000;
              local_c0 = &local_c0;
              local_b8 = &local_c0;
              if (plVar25 != plVar2) {
                lVar15 = (long)(int)-uVar8;
                lVar26 = lVar15 + (long)plVar25;
                local_c0 = &local_c0;
                local_b8 = &local_c0;
                do {
                  fVar28 = *(float *)(lVar26 + 0x8c);
                  fVar35 = *(float *)(lVar26 + 0x94);
                  bVar4 = false;
                  bVar3 = false;
                  bVar5 = false;
                  if (*(float *)(lVar26 + 0x88) <= *(float *)(lVar26 + 0x90)) {
                    bVar4 = false;
                    bVar3 = false;
                    bVar5 = true;
                    if (!NAN(fVar28) && !NAN(fVar35)) {
                      bVar4 = fVar28 < fVar35;
                      bVar3 = fVar28 == fVar35;
                      bVar5 = false;
                    }
                  }
                  if (((bVar3 || bVar4 != bVar5) && (*(int *)(lVar26 + 0xa8) == 2)) &&
                     (((long *)(lVar26 + local_94))[1] == 0 && *(long *)(lVar26 + local_94) == 0)) {
                    puVar18 = (undefined8 *)(lVar26 + local_b0._4_4_);
                    *puVar18 = local_c0;
                    puVar18[1] = &local_c0;
                    if (local_c0 != (undefined8 *)0x0) {
                      local_c0[1] = puVar18;
                    }
                    local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
                    local_c0 = puVar18;
                  }
                  lVar26 = *(long *)(lVar26 + (int)uVar8 + 8) + lVar15;
                } while (lVar26 != lVar15 + (long)plVar2);
              }
              uVar10 = FUN_03441520(local_a8,&local_c0,&local_90);
              iVar13 = *(int *)(param_1 + 0x2c);
              if (((uVar10 & 1) == 0) && (*(long **)(param_1 + 0x20) != plVar2)) {
                lVar15 = (long)iVar13;
                lVar26 = (long)*(long **)(param_1 + 0x20) - lVar15;
                do {
                  *(undefined4 *)(lVar26 + 0x30) = 0;
                  *(undefined4 *)(lVar26 + 0x28) = *(undefined4 *)(lVar26 + 0x5c);
                  *(undefined4 *)(lVar26 + 0x2c) = *(undefined4 *)(lVar26 + 0x60);
                  lVar26 = *(long *)(lVar26 + lVar15 + 8) - lVar15;
                } while (lVar26 != (long)plVar2 - lVar15);
                iVar13 = *(int *)(param_1 + 0x2c);
              }
              if ((1 < *(int *)(param_1 + 0x28)) &&
                 (plVar25 = *(long **)(*(long *)(param_1 + 0x20) + 8), plVar25 != plVar2)) {
                lVar26 = (long)-iVar13;
                do {
                  plVar14 = (long *)plVar25[1];
                  plVar17 = (long *)*plVar25;
                  fVar35 = *(float *)((long)plVar25 + lVar26 + 0x8c);
                  fVar37 = *(float *)((long)plVar25 + lVar26 + 0x94);
                  fVar28 = *(float *)((long)plVar17 + lVar26 + 0x8c);
                  bVar4 = *(float *)((long)plVar25 + lVar26 + 0x88) <=
                          *(float *)((long)plVar25 + lVar26 + 0x90);
                  fVar36 = *(float *)((long)plVar17 + lVar26 + 0x94);
                  bVar3 = fVar35 <= fVar37 && bVar4;
                  bVar5 = false;
                  bVar6 = false;
                  bVar7 = false;
                  if (*(float *)((long)plVar17 + lVar26 + 0x88) <=
                      *(float *)((long)plVar17 + lVar26 + 0x90)) {
                    bVar5 = false;
                    bVar6 = false;
                    bVar7 = true;
                    if (!NAN(fVar28) && !NAN(fVar36)) {
                      bVar5 = fVar28 < fVar36;
                      bVar6 = fVar28 == fVar36;
                      bVar7 = false;
                    }
                  }
                  bVar1 = bVar3;
                  if (((!bVar6 && bVar5 == bVar7) ||
                      ((fVar35 <= fVar37 && bVar4 &&
                       (fVar28 = *(float *)((long)plVar17 + lVar26 + 0x60) -
                                 *(float *)((long)plVar25 + lVar26 + 0x60), bVar1 = 0.0 < fVar28,
                       0.0 <= fVar28)))) && (bVar1)) {
                    plVar22 = plVar17;
                    while (plVar22 = (long *)*plVar22, plVar22 != plVar2) {
                      fVar28 = *(float *)((long)plVar22 + lVar26 + 0x8c);
                      fVar36 = *(float *)((long)plVar22 + lVar26 + 0x94);
                      bVar5 = false;
                      bVar6 = false;
                      bVar7 = false;
                      if (*(float *)((long)plVar22 + lVar26 + 0x88) <=
                          *(float *)((long)plVar22 + lVar26 + 0x90)) {
                        bVar5 = false;
                        bVar6 = false;
                        bVar7 = true;
                        if (!NAN(fVar28) && !NAN(fVar36)) {
                          bVar5 = fVar28 < fVar36;
                          bVar6 = fVar28 == fVar36;
                          bVar7 = false;
                        }
                      }
                      bVar1 = bVar3;
                      if (((bVar6 || bVar5 != bVar7) &&
                          ((fVar37 < fVar35 || !bVar4 ||
                           (fVar28 = *(float *)((long)plVar22 + lVar26 + 0x60) -
                                     *(float *)((long)plVar25 + lVar26 + 0x60), bVar1 = 0.0 < fVar28
                           , fVar28 < 0.0)))) || (!bVar1)) goto LAB_03441410;
                    }
                    plVar22 = plVar2;
LAB_03441410:
                    plVar21 = plVar14;
                    if (plVar17 != (long *)0x0) {
                      plVar17[1] = (long)plVar14;
                      plVar21 = (long *)plVar25[1];
                    }
                    if (plVar21 != (long *)0x0) {
                      *plVar21 = *plVar25;
                    }
                    *plVar25 = 0;
                    plVar25[1] = 0;
                    puVar18 = (undefined8 *)plVar22[1];
                    plVar22[1] = (long)plVar25;
                    *plVar25 = (long)plVar22;
                    plVar25[1] = (long)puVar18;
                    if (puVar18 != (undefined8 *)0x0) {
                      *puVar18 = plVar25;
                    }
                  }
                  plVar25 = plVar14;
                } while (plVar14 != plVar2);
                iVar13 = *(int *)(param_1 + 0x2c);
              }
              lVar26 = *(long *)(param_1 + 0x20);
              puVar18 = local_b8;
              if ((undefined8 **)local_b8 != &local_c0) {
                do {
                  puVar19 = (undefined8 *)puVar18[1];
                  *puVar18 = 0;
                  puVar18[1] = 0;
                  puVar18 = puVar19;
                } while ((undefined8 **)puVar19 != &local_c0);
              }
              while ((long ********)local_a8[1] != local_a8) {
                ppppppplVar20 = (long *******)local_a8[1][1];
                *local_a8[1] = (long ******)0x0;
                local_a8[1][1] = (long ******)0x0;
                local_a8[1] = ppppppplVar20;
              }
              lVar26 = -iVar13 + lVar26;
              lVar15 = (long)-iVar13 + (long)plVar2;
              iVar16 = iVar16 + -1;
              goto LAB_034414c4;
            }
            while ((long ********)local_a8[1] != local_a8) {
              ppppppplVar20 = (long *******)local_a8[1][1];
              *local_a8[1] = (long ******)0x0;
              local_a8[1][1] = (long ******)0x0;
              local_a8[1] = ppppppplVar20;
            }
            break;
          }
LAB_03441284:
          lVar26 = *(long *)(lVar26 + iVar13 + 8);
          while ((long ********)local_a8[1] != local_a8) {
            ppppppplVar20 = (long *******)local_a8[1][1];
            *local_a8[1] = (long ******)0x0;
            local_a8[1][1] = (long ******)0x0;
            local_a8[1] = ppppppplVar20;
          }
          lVar26 = -iVar13 + lVar26;
LAB_034414c4:
        } while (lVar15 != lVar26);
      }
      goto LAB_03440a60;
    }
  }
  iVar16 = *(int *)(param_1 + 0x30);
  local_94 = 0x18;
LAB_03440a60:
  if (*(long **)(param_1 + 0x20) != plVar2) {
    lVar15 = (long)*(int *)(param_1 + 0x2c);
    lVar26 = (long)*(long **)(param_1 + 0x20) - lVar15;
    do {
      *(undefined4 *)(lVar26 + 0x30) = 0;
      if (*(int *)(lVar26 + 0xa8) == 2) {
        *(undefined4 *)(lVar26 + 0x28) = *(undefined4 *)(lVar26 + 0x5c);
        *(undefined4 *)(lVar26 + 0x2c) = *(undefined4 *)(lVar26 + 0x60);
      }
      lVar26 = *(long *)(lVar26 + lVar15 + 8) - lVar15;
    } while (lVar26 != (long)plVar2 - lVar15);
    if (plVar2 != *(long **)(param_1 + 0x20)) {
      iVar13 = *(int *)(param_1 + 0x2c);
      lVar26 = (long)*(long **)(param_1 + 0x20) - (long)iVar13;
      lVar15 = (long)plVar2 - (long)iVar13;
      do {
        while( true ) {
          fVar28 = *(float *)(lVar26 + 0x8c);
          fVar35 = *(float *)(lVar26 + 0x94);
          bVar4 = false;
          bVar3 = false;
          bVar5 = false;
          if (*(float *)(lVar26 + 0x88) <= *(float *)(lVar26 + 0x90)) {
            bVar4 = false;
            bVar3 = false;
            bVar5 = true;
            if (!NAN(fVar28) && !NAN(fVar35)) {
              bVar4 = fVar28 < fVar35;
              bVar3 = fVar28 == fVar35;
              bVar5 = false;
            }
          }
          if ((bVar3 || bVar4 != bVar5) && (*(int *)(lVar26 + 0xa8) != 0)) break;
          lVar26 = (long)-iVar13 + *(long *)(lVar26 + iVar13 + 8);
          if (lVar15 == lVar26) {
            return;
          }
        }
        local_a8[1] = (long *******)(lVar26 + local_94);
        *local_a8[1] = (long ******)local_a8;
        local_a8[1][1] = (long ******)local_a8;
        local_98 = 1;
        plVar25 = *(long **)(param_1 + 0x20);
        if (plVar25 == plVar2) {
LAB_03440d48:
          lVar26 = *(long *)(lVar26 + iVar13 + 8);
          while ((long ********)local_a8[1] != local_a8) {
            ppppppplVar20 = (long *******)local_a8[1][1];
            *local_a8[1] = (long ******)0x0;
            local_a8[1][1] = (long ******)0x0;
            local_a8[1] = ppppppplVar20;
          }
          lVar26 = -iVar13 + lVar26;
        }
        else {
          uVar9 = (ulong)*(int *)(param_1 + 0x2c);
          uVar23 = 1;
          lVar24 = (long)plVar25 - uVar9;
          uVar10 = uVar9;
          local_a8[0] = local_a8[1];
LAB_03440b70:
          uVar8 = (uint)uVar9;
          if ((long ********)local_a8[1] == local_a8) {
            do {
              lVar24 = -uVar10 + *(long *)(lVar24 + (int)uVar8 + 8);
            } while ((long)plVar2 - uVar10 != lVar24);
          }
          else {
            lVar11 = (long)local_94;
            do {
              if (lVar24 != lVar26) {
                fVar28 = *(float *)(lVar24 + 0x8c);
                fVar35 = *(float *)(lVar24 + 0x94);
                bVar4 = false;
                bVar3 = false;
                bVar5 = false;
                if (*(float *)(lVar24 + 0x88) <= *(float *)(lVar24 + 0x90)) {
                  bVar4 = false;
                  bVar3 = false;
                  bVar5 = true;
                  if (!NAN(fVar28) && !NAN(fVar35)) {
                    bVar4 = fVar28 < fVar35;
                    bVar3 = fVar28 == fVar35;
                    bVar5 = false;
                  }
                }
                if (((bVar3 || bVar4 != bVar5) && (*(int *)(lVar24 + 0xa8) != 0)) &&
                   (ppppppplVar20 = (long *******)(lVar24 + lVar11),
                   ppppppplVar20[1] == (long ******)0x0 && *ppppppplVar20 == (long ******)0x0)) {
                  lVar12 = (long)local_a8[1] - lVar11;
                  do {
                    bVar4 = false;
                    if ((*(float *)(lVar12 + 0x98) < *(float *)(lVar24 + 0xa0)) &&
                       (bVar4 = false,
                       !NAN(*(float *)(lVar24 + 0x98)) && !NAN(*(float *)(lVar12 + 0xa0)))) {
                      bVar4 = *(float *)(lVar24 + 0x98) < *(float *)(lVar12 + 0xa0);
                    }
                    if (bVar4) {
                      bVar4 = false;
                      if ((*(float *)(lVar12 + 0x9c) < *(float *)(lVar24 + 0xa4)) &&
                         (bVar4 = false,
                         !NAN(*(float *)(lVar24 + 0x9c)) && !NAN(*(float *)(lVar12 + 0xa4)))) {
                        bVar4 = *(float *)(lVar24 + 0x9c) < *(float *)(lVar12 + 0xa4);
                      }
                      if (bVar4) {
                        *ppppppplVar20 = (long ******)local_a8[0];
                        ppppppplVar20[1] = (long ******)local_a8;
                        if (local_a8[0] != (long *******)0x0) {
                          local_a8[0][1] = (long ******)ppppppplVar20;
                        }
                        uVar23 = uVar23 + 1;
                        local_98 = local_98 + 1;
                        uVar8 = *(uint *)(param_1 + 0x2c);
                        uVar10 = (ulong)(int)uVar8;
                        plVar25 = *(long **)(param_1 + 0x20);
                        uVar9 = (ulong)uVar8;
                        lVar24 = (long)plVar25 - uVar10;
                        local_a8[0] = ppppppplVar20;
                        if (plVar25 == plVar2) goto LAB_03440ca0;
                        goto LAB_03440b70;
                      }
                    }
                    lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
                  } while (lVar12 != (long)local_a8 - lVar11);
                }
              }
              lVar24 = -uVar10 + *(long *)(lVar24 + (int)uVar8 + 8);
            } while ((long)plVar2 - uVar10 != lVar24);
          }
          if (uVar23 < 2) goto LAB_03440d48;
LAB_03440ca0:
          if (iVar16 < 1) {
            while ((long ********)local_a8[1] != local_a8) {
              ppppppplVar20 = (long *******)local_a8[1][1];
              *local_a8[1] = (long ******)0x0;
              local_a8[1][1] = (long ******)0x0;
              local_a8[1] = ppppppplVar20;
            }
            return;
          }
          local_b0 = 0x1800000000;
          local_c0 = &local_c0;
          local_b8 = &local_c0;
          if (plVar25 != plVar2) {
            lVar15 = (long)(int)-uVar8;
            lVar26 = lVar15 + (long)plVar25;
            local_c0 = &local_c0;
            local_b8 = &local_c0;
            do {
              fVar28 = *(float *)(lVar26 + 0x8c);
              fVar35 = *(float *)(lVar26 + 0x94);
              bVar4 = false;
              bVar3 = false;
              bVar5 = false;
              if (*(float *)(lVar26 + 0x88) <= *(float *)(lVar26 + 0x90)) {
                bVar4 = false;
                bVar3 = false;
                bVar5 = true;
                if (!NAN(fVar28) && !NAN(fVar35)) {
                  bVar4 = fVar28 < fVar35;
                  bVar3 = fVar28 == fVar35;
                  bVar5 = false;
                }
              }
              if (((bVar3 || bVar4 != bVar5) && (*(int *)(lVar26 + 0xa8) != 0)) &&
                 (((long *)(lVar26 + local_94))[1] == 0 && *(long *)(lVar26 + local_94) == 0)) {
                puVar18 = (undefined8 *)(lVar26 + local_b0._4_4_);
                *puVar18 = local_c0;
                puVar18[1] = &local_c0;
                if (local_c0 != (undefined8 *)0x0) {
                  local_c0[1] = puVar18;
                }
                local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
                local_c0 = puVar18;
              }
              lVar26 = *(long *)(lVar26 + (int)uVar8 + 8) + lVar15;
            } while (lVar26 != lVar15 + (long)plVar2);
          }
          uVar10 = FUN_03441520(local_a8,&local_c0,&local_90);
          iVar13 = *(int *)(param_1 + 0x2c);
          if (((uVar10 & 1) == 0) && (*(long **)(param_1 + 0x20) != plVar2)) {
            lVar15 = (long)iVar13;
            lVar26 = (long)*(long **)(param_1 + 0x20) - lVar15;
            do {
              *(undefined4 *)(lVar26 + 0x30) = 0;
              *(undefined4 *)(lVar26 + 0x2c) = *(undefined4 *)(lVar26 + 0x60);
              *(undefined4 *)(lVar26 + 0x28) = *(undefined4 *)(lVar26 + 0x5c);
              lVar26 = *(long *)(lVar26 + lVar15 + 8) - lVar15;
            } while (lVar26 != (long)plVar2 - lVar15);
            iVar13 = *(int *)(param_1 + 0x2c);
          }
          if ((1 < *(int *)(param_1 + 0x28)) &&
             (plVar25 = *(long **)(*(long *)(param_1 + 0x20) + 8), plVar25 != plVar2)) {
            lVar26 = (long)-iVar13;
            do {
              plVar14 = (long *)plVar25[1];
              plVar17 = (long *)*plVar25;
              fVar35 = *(float *)((long)plVar25 + lVar26 + 0x8c);
              fVar37 = *(float *)((long)plVar25 + lVar26 + 0x94);
              fVar28 = *(float *)((long)plVar17 + lVar26 + 0x8c);
              bVar4 = *(float *)((long)plVar25 + lVar26 + 0x88) <=
                      *(float *)((long)plVar25 + lVar26 + 0x90);
              fVar36 = *(float *)((long)plVar17 + lVar26 + 0x94);
              bVar3 = fVar35 <= fVar37 && bVar4;
              bVar5 = false;
              bVar6 = false;
              bVar7 = false;
              if (*(float *)((long)plVar17 + lVar26 + 0x88) <=
                  *(float *)((long)plVar17 + lVar26 + 0x90)) {
                bVar5 = false;
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar28) && !NAN(fVar36)) {
                  bVar5 = fVar28 < fVar36;
                  bVar6 = fVar28 == fVar36;
                  bVar7 = false;
                }
              }
              bVar1 = bVar3;
              if (((!bVar6 && bVar5 == bVar7) ||
                  ((fVar35 <= fVar37 && bVar4 &&
                   (fVar28 = *(float *)((long)plVar17 + lVar26 + 0x60) -
                             *(float *)((long)plVar25 + lVar26 + 0x60), bVar1 = 0.0 < fVar28,
                   0.0 <= fVar28)))) && (bVar1)) {
                plVar22 = plVar17;
                while (plVar22 = (long *)*plVar22, plVar22 != plVar2) {
                  fVar28 = *(float *)((long)plVar22 + lVar26 + 0x8c);
                  fVar36 = *(float *)((long)plVar22 + lVar26 + 0x94);
                  bVar5 = false;
                  bVar6 = false;
                  bVar7 = false;
                  if (*(float *)((long)plVar22 + lVar26 + 0x88) <=
                      *(float *)((long)plVar22 + lVar26 + 0x90)) {
                    bVar5 = false;
                    bVar6 = false;
                    bVar7 = true;
                    if (!NAN(fVar28) && !NAN(fVar36)) {
                      bVar5 = fVar28 < fVar36;
                      bVar6 = fVar28 == fVar36;
                      bVar7 = false;
                    }
                  }
                  bVar1 = bVar3;
                  if (((bVar6 || bVar5 != bVar7) &&
                      ((fVar37 < fVar35 || !bVar4 ||
                       (fVar28 = *(float *)((long)plVar22 + lVar26 + 0x60) -
                                 *(float *)((long)plVar25 + lVar26 + 0x60), bVar1 = 0.0 < fVar28,
                       fVar28 < 0.0)))) || (!bVar1)) goto LAB_03440ed4;
                }
                plVar22 = plVar2;
LAB_03440ed4:
                plVar21 = plVar14;
                if (plVar17 != (long *)0x0) {
                  plVar17[1] = (long)plVar14;
                  plVar21 = (long *)plVar25[1];
                }
                if (plVar21 != (long *)0x0) {
                  *plVar21 = *plVar25;
                }
                *plVar25 = 0;
                plVar25[1] = 0;
                puVar18 = (undefined8 *)plVar22[1];
                plVar22[1] = (long)plVar25;
                *plVar25 = (long)plVar22;
                plVar25[1] = (long)puVar18;
                if (puVar18 != (undefined8 *)0x0) {
                  *puVar18 = plVar25;
                }
              }
              plVar25 = plVar14;
            } while (plVar14 != plVar2);
            iVar13 = *(int *)(param_1 + 0x2c);
          }
          lVar26 = *(long *)(param_1 + 0x20);
          puVar18 = local_b8;
          if ((undefined8 **)local_b8 != &local_c0) {
            do {
              puVar19 = (undefined8 *)puVar18[1];
              *puVar18 = 0;
              puVar18[1] = 0;
              puVar18 = puVar19;
            } while ((undefined8 **)puVar19 != &local_c0);
          }
          while ((long ********)local_a8[1] != local_a8) {
            ppppppplVar20 = (long *******)local_a8[1][1];
            *local_a8[1] = (long ******)0x0;
            local_a8[1][1] = (long ******)0x0;
            local_a8[1] = ppppppplVar20;
          }
          lVar26 = -iVar13 + lVar26;
          lVar15 = (long)-iVar13 + (long)plVar2;
          iVar16 = iVar16 + -1;
        }
      } while (lVar15 != lVar26);
    }
  }
  return;
}

