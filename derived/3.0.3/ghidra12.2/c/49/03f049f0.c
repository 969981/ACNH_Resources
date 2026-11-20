
undefined8 FUN_03f049f0(long param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  float *pfVar23;
  ushort *puVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  uint *puVar33;
  long lVar34;
  undefined8 *puVar35;
  float *pfVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_ec [12];
  float local_e0;
  float local_d0;
  float local_c0;
  undefined1 auStack_bc [12];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  
  local_b0 = *(undefined8 *)PTR_DAT_04bb4bc8;
  local_a8 = *(undefined4 *)(PTR_DAT_04bb4bc8 + 8);
  local_a4 = *(undefined8 *)PTR_DAT_04bb3ea0;
  local_9c = *(undefined4 *)(PTR_DAT_04bb3ea0 + 8);
  local_98 = *(undefined8 *)PTR_DAT_04bb4bd0;
  local_90 = *(undefined4 *)(PTR_DAT_04bb4bd0 + 8);
  pfVar23 = (float *)((long)&local_b0 + (ulong)param_3 * 3 * 4);
  pfVar8 = pfVar23;
  if (2 < param_3) {
    pfVar8 = (float *)&local_b0;
  }
  lVar26 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_2) {
    param_2 = 0;
  }
  puVar2 = (uint *)(lVar26 + (long)(int)param_2 * 0x10);
  uVar9 = *puVar2;
  if (0 < (int)uVar9) {
    if (2 < param_3) {
      pfVar23 = (float *)&local_b0;
    }
    uVar30 = 0;
    puVar4 = PTR_DAT_04bb3498 + 0x10;
    do {
      lVar20 = *(long *)(lVar26 + (long)(int)param_2 * 0x10 + 8);
      uVar22 = uVar30;
      if (*puVar2 <= uVar30) {
        uVar22 = 0;
      }
      puVar3 = (uint *)(lVar20 + (ulong)uVar22 * 0x10);
      uVar10 = *puVar3;
      if (0 < (int)uVar10) {
        uVar31 = 0;
        plVar5 = (long *)(lVar20 + (ulong)uVar22 * 0x10 + 8);
        do {
          lVar20 = *plVar5;
          uVar22 = uVar31;
          if (*puVar3 <= uVar31) {
            uVar22 = 0;
          }
          lVar34 = lVar20 + (ulong)uVar22 * 0xa8;
          lVar21 = (long)(short)*(ushort *)(lVar34 + 0x70);
          if (lVar21 != -1 && *(short *)(lVar34 + 0x72) != -1) {
            lVar32 = lVar20 + (ulong)uVar22 * 0xa8;
            plVar17 = (long *)**(undefined8 **)
                                (*(long *)(*(long *)(param_1 + 0x28) + 0x38) + lVar21 * 8);
            (**(code **)(*plVar17 + 0x60))(plVar17,lVar32,auStack_bc,(int)*(short *)(lVar34 + 0x72))
            ;
            puVar33 = (uint *)(lVar32 + 0x84);
            uVar37 = *puVar33;
            pfVar36 = (float *)(lVar32 + 0x88);
            pfVar36[0] = 0.0;
            pfVar36[1] = 0.0;
            *puVar33 = uVar37 & 0xfffffff9;
            *(undefined8 *)(lVar32 + 0x90) = 0x3f80000000000000;
            if ((uVar37 & 1) != 0) {
              uVar12 = *(ushort *)(lVar34 + 0x72);
              if (-1 < (short)uVar12) {
                uVar13 = *(ushort *)(lVar34 + 0x70);
                puVar35 = (undefined8 *)
                          **(undefined8 **)
                            (*(long *)(*(long *)(param_1 + 0x28) + 0x38) + (long)(short)uVar13 * 8);
                if (((*PTR_DAT_04bb3490 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar16 != 0)) {
                  *(undefined **)PTR_DAT_04bb3488 = puVar4;
                  __cxa_guard_release(PTR_DAT_04bb3490);
                }
                if ((((puVar35 != (undefined8 *)0x0) &&
                     (uVar18 = (**(code **)*puVar35)(puVar35,PTR_DAT_04bb3488), (uVar18 & 1) != 0))
                    && ((long *)puVar35[0x22] != (long *)0x0)) &&
                   (lVar21 = *(long *)puVar35[0x22], lVar21 != 0)) {
                  uVar11 = *(ushort *)(lVar21 + 0x38);
                  uVar37 = (uint)(short)uVar12;
                  if (((int)(short)uVar12 < (int)(uint)uVar11) &&
                     (lVar21 = *(long *)(lVar21 + 0x10), lVar21 != 0)) {
                    uVar18 = (ulong)uVar12;
                    uVar27 = uVar11 - uVar18;
                    if (~uVar18 + (ulong)uVar11 < 3) {
                      iVar16 = -1;
                    }
                    else {
                      uVar28 = uVar27 & 0xfffffffffffffffc;
                      puVar24 = (ushort *)(lVar21 + uVar18 * 0x60 + 0xea);
                      iVar16 = -1;
                      do {
                        iVar19 = (int)uVar18;
                        iVar25 = iVar19;
                        if (puVar24[-0x60] != uVar37) {
                          iVar25 = iVar16;
                        }
                        uVar11 = *puVar24;
                        if (puVar24[-0x30] == uVar37) {
                          iVar25 = iVar19 + 1;
                        }
                        puVar1 = puVar24 + 0x30;
                        puVar24 = puVar24 + 0xc0;
                        iVar6 = iVar19 + 2;
                        if (uVar11 != uVar37) {
                          iVar6 = iVar25;
                        }
                        uVar18 = uVar18 + 4;
                        iVar16 = iVar19 + 3;
                        if ((uint)*puVar1 != (int)(short)uVar12) {
                          iVar16 = iVar6;
                        }
                        uVar28 = uVar28 - 4;
                      } while (uVar28 != 0);
                    }
                    uVar27 = uVar27 & 3;
                    if (uVar27 != 0) {
                      puVar24 = (ushort *)(lVar21 + uVar18 * 0x60 + 0x2a);
                      iVar25 = iVar16;
                      do {
                        iVar16 = (int)uVar18;
                        if ((uint)*puVar24 != (int)(short)uVar12) {
                          iVar16 = iVar25;
                        }
                        uVar18 = (ulong)((int)uVar18 + 1);
                        uVar27 = uVar27 - 1;
                        puVar24 = puVar24 + 0x30;
                        iVar25 = iVar16;
                      } while (uVar27 != 0);
                    }
                    if (iVar16 != -1) {
                      uVar37 = 0;
                      do {
                        uVar7 = uVar37;
                        if (*puVar3 <= uVar37) {
                          uVar7 = 0;
                        }
                        if (*(uint *)(*plVar5 + (ulong)uVar7 * 0xa8 + 0x70) ==
                            ((uint)uVar13 | iVar16 << 0x10)) {
                          *(uint *)(lVar20 + (ulong)uVar22 * 0xa8 + 0x78) = uVar37;
                          break;
                        }
                        uVar37 = uVar37 + 1;
                      } while (uVar10 != uVar37);
                      plVar17 = (long *)**(undefined8 **)
                                          (*(long *)(*(long *)(param_1 + 0x28) + 0x38) +
                                          (long)(short)uVar13 * 8);
                      (**(code **)(*plVar17 + 0x60))
                                (plVar17,auStack_ec,auStack_bc,(int)(short)iVar16);
                      fVar38 = SQRT(local_d0 * local_d0 + local_e0 * local_e0 + local_c0 * local_c0)
                      ;
                      fVar42 = local_e0;
                      fVar40 = local_d0;
                      fVar44 = local_c0;
                      if (0.0 < fVar38) {
                        fVar38 = 1.0 / fVar38;
                        fVar42 = local_e0 * fVar38;
                        fVar40 = local_d0 * fVar38;
                        fVar44 = local_c0 * fVar38;
                      }
                      fVar47 = *pfVar8;
                      fVar45 = pfVar23[1];
                      fVar46 = pfVar23[2];
                      fVar38 = fVar40 * fVar45 + fVar47 * fVar42;
                      fVar39 = fVar38 + fVar46 * fVar44;
                      fVar38 = -(fVar44 * fVar46) - fVar38;
                      if (0.0 <= fVar39) {
                        fVar38 = fVar39;
                      }
                      fVar38 = 1.0 - fVar38;
                      bVar14 = false;
                      bVar15 = true;
                      if (-1.1920929e-07 <= fVar38) {
                        bVar14 = false;
                        bVar15 = true;
                        if (!NAN(fVar38)) {
                          bVar14 = fVar38 == 1.1920929e-07;
                          bVar15 = 1.1920929e-07 <= fVar38;
                        }
                      }
                      if (!bVar15 || bVar14) {
                        fVar41 = 0.0;
                        fVar38 = 1.0;
                        fVar44 = 0.0;
                        fVar43 = 0.0;
                        uVar22 = 6;
                        if (0.0 <= fVar39) {
                          uVar22 = 2;
                        }
                        *puVar33 = uVar22 | *puVar33 & 0xfffffff9;
                      }
                      else {
                        *puVar33 = *puVar33 & 0xfffffff9 | (uint)(fVar39 < 0.0) << 2;
                        if (fVar39 < 0.0) {
                          fVar39 = ((-(fVar45 * fVar40) - fVar47 * fVar42) - fVar46 * fVar44) + 1.0;
                          if (fVar39 <= 1.1920929e-06) goto LAB_03f04ef4;
                          fVar38 = SQRT(fVar39 + fVar39);
                          if (NAN(fVar38)) {
                            fVar38 = sqrtf(fVar39 + fVar39);
                          }
                          fVar43 = 1.0 / fVar38;
                          fVar38 = fVar38 * 0.5;
                          fVar41 = (fVar44 * fVar45 + -fVar46 * fVar40) * fVar43;
                          fVar44 = (fVar42 * fVar46 + -fVar47 * fVar44) * fVar43;
                          fVar43 = (fVar40 * fVar47 + -fVar45 * fVar42) * fVar43;
                        }
                        else {
                          fVar39 = fVar39 + 1.0;
                          if (fVar39 <= 1.1920929e-06) {
LAB_03f04ef4:
                            fVar38 = 0.0;
                            if ((fVar40 < -1.1920929e-06) || (1.1920929e-06 < fVar40)) {
                              fVar42 = (fVar42 * fVar42) / (fVar40 * fVar40);
                              fVar40 = 1.0 / (fVar42 + 1.0);
                              fVar42 = fVar42 * fVar40;
                              fVar41 = -SQRT(fVar40);
                              fVar44 = SQRT(fVar42);
                              if (NAN(fVar44)) {
                                fVar44 = sqrtf(fVar42);
                                fVar38 = 0.0;
                                fVar43 = 0.0;
                              }
                              else {
                                fVar43 = 0.0;
                              }
                            }
                            else {
                              fVar41 = 0.0;
                              fVar44 = 1.0;
                              fVar43 = 0.0;
                            }
                          }
                          else {
                            fVar43 = SQRT(fVar39 + fVar39);
                            if (NAN(fVar43)) {
                              fVar43 = sqrtf(fVar39 + fVar39);
                            }
                            fVar38 = fVar43 * 0.5;
                            fVar43 = 1.0 / fVar43;
                            fVar41 = (-(fVar44 * fVar45) + fVar46 * fVar40) * fVar43;
                            fVar44 = (-(fVar42 * fVar46) + fVar47 * fVar44) * fVar43;
                            fVar43 = (-(fVar40 * fVar47) + fVar45 * fVar42) * fVar43;
                          }
                        }
                      }
                      *pfVar36 = fVar41;
                      *(float *)(lVar32 + 0x8c) = fVar44;
                      *(float *)(lVar32 + 0x90) = fVar43;
                      *(float *)(lVar32 + 0x94) = fVar38;
                    }
                  }
                }
              }
            }
          }
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar10);
        uVar22 = *puVar3;
        if (0 < (int)uVar22) {
          uVar18 = 0;
          uVar27 = (ulong)uVar22;
          do {
            if (0 < (int)uVar27) {
              uVar28 = 0;
              puVar33 = (uint *)(*plVar5 + 0x78);
              do {
                if (*puVar33 == uVar18) {
                  uVar29 = uVar18;
                  if (uVar27 <= uVar18) {
                    uVar29 = 0;
                  }
                  *(int *)(*plVar5 + uVar29 * 0xa8 + 0x7c) = (int)uVar28;
                  uVar27 = (ulong)*puVar3;
                  break;
                }
                uVar28 = uVar28 + 1;
                puVar33 = puVar33 + 0x2a;
              } while (uVar27 != uVar28);
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar22);
          if (0 < (int)uVar27) {
            uVar18 = 0;
            do {
              lVar20 = *plVar5;
              uVar28 = uVar18;
              if (*puVar3 <= uVar18) {
                uVar28 = 0;
              }
              if (-1 < *(int *)(lVar20 + uVar28 * 0xa8 + 0x78)) {
                uVar22 = *(uint *)(lVar20 + uVar28 * 0xa8 + 0x7c);
                uVar29 = (ulong)uVar22;
                if ((int)uVar22 < 0) {
                  iVar16 = 0;
                }
                else {
                  if (*puVar3 <= uVar29) {
                    uVar29 = 0;
                  }
                  iVar16 = *(int *)(lVar20 + uVar29 * 0xa8 + 0x80) + 1;
                }
                *(int *)(lVar20 + uVar28 * 0xa8 + 0x80) = iVar16;
              }
              uVar18 = uVar18 + 1;
            } while (uVar27 != uVar18);
          }
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar9);
  }
  return 1;
}

