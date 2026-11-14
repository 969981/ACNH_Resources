
undefined8 FUN_01508a18(uint *param_1,float *param_2,int *param_3)

{
  float *pfVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_e8;
  float local_e4;
  uint local_e0;
  uint uStack_dc;
  uint local_c4;
  undefined4 uStack_c0;
  uint local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  uint local_98;
  uint local_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  uint local_64;
  
  local_78 = 0;
  local_80 = PTR_DAT_04bbfe68 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar6 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar17 + 7);
  local_70 = FUN_017baf44();
  fVar19 = param_2[3];
  local_70 = local_70 & 1;
  local_94 = (int)fVar19 + 0xa0000000U >> 0x1e;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)fVar19 >> 0x15) & 0x7f0));
  fVar19 = (float)((uint)fVar19 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar21 = *pfVar1 + fVar19 * pfVar1[1];
  fVar19 = pfVar1[2] + fVar19 * pfVar1[3];
  fVar22 = fVar21 * 0.0;
  fVar19 = fVar19 + fVar19;
  fVar24 = fVar21 * (fVar21 + fVar21);
  fVar25 = fVar22 * (fVar22 + fVar22);
  fVar23 = fVar19 * fVar22;
  fVar19 = fVar21 * fVar19;
  local_80 = PTR_DAT_04bb3140 + 0x10;
  local_90 = PTR_DAT_04bb2010 + 0x10;
  fVar20 = *param_2 +
           (fVar21 * (fVar22 + fVar22) - fVar23) * 0.0 + ((1.0 - fVar24) - fVar25) * 0.0 +
           (fVar19 + fVar25) * 5.0;
  fVar19 = param_2[2] +
           (fVar23 + (fVar21 + fVar21) * fVar22) * 0.0 + (fVar25 - fVar19) * 0.0 +
           ((1.0 - fVar25) - fVar24) * 5.0;
  local_88 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  iStack_84 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  puVar10 = (uint *)FUN_014fbd50(&local_80,0,&local_90);
  uVar9 = *puVar10;
  local_98 = uVar9;
  uVar11 = FUN_015039ac(&local_98);
  puVar3 = PTR_DAT_04bb27c0;
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  pfVar1 = param_2 + 4;
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    bVar2 = false;
    plVar18 = (long *)0x0;
  }
  else {
    if ((((uVar9 == 0) ||
         (plVar18 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                              ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
        ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar9)) {
      plVar18 = (long *)0x0;
    }
    if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar14 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar12 + 0x60))();
      if (iVar6 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_01508cd8;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01508cd8:
      uVar9 = 0;
    }
    if (plVar18 == (long *)0x0) {
      bVar2 = false;
    }
    else {
      lVar14 = plVar18[0x2a];
      uVar7 = *(uint *)(plVar18 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar8 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb5920);
      puVar4 = PTR_DAT_04bb43c0;
      bVar2 = false;
      if ((((int)lVar14 == 1) && ((uVar8 & uVar9) != 0)) && ((uVar7 >> 4 & 1) != 0)) {
        local_e0 = 0;
        if (plVar18[0xe] == 0) {
          iVar6 = -1;
        }
        else {
          iVar6 = *(int *)(plVar18[0xe] + 0x280);
        }
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar6);
        if (iVar6 == 0) {
          uStack_a4 = *(undefined4 *)((long)plVar18 + 0x28c);
          local_a0 = (uint *)0x0;
          local_b0 = PTR_DAT_04bc0510 + 0x10;
          local_a8 = (undefined4)plVar18[0x51];
          lVar14 = *(long *)PTR_DAT_04bb43c0;
          uVar9 = FUN_0277d6c4(&local_a8);
          if (*(long *)puVar4 == 0) {
LAB_01508e14:
            puVar10 = (uint *)0x0;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar9) ||
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
            goto LAB_01508e14;
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(plVar18 + 0x51);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (*(uint *)(lVar14 + 0x1d8) <= uVar9) goto LAB_01508e14;
            puVar10 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8);
            if (puVar10 != (uint *)0x0) {
              local_a0 = puVar10;
            }
          }
          local_b4 = -param_2[3];
          FUN_01508700(&local_98,&local_b4);
          if (plVar18[0x151] == 0) {
            uVar9 = 0;
          }
          else {
            local_e0 = 0;
            if (((puVar10 != (uint *)0x0) && (uVar9 = *puVar10, uVar9 != 0)) &&
               (puVar10 != (uint *)(ulong)uVar9)) {
              puVar16 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
              local_e0 = 0;
              if (*puVar16 != 0) {
                uVar9 = puVar16[1];
                if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar16 + 10) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar16 + lVar14 + (ulong)(ushort)puVar16[2] * 8;
                  if (lVar14 != 0) {
                    uVar7 = 0;
                    if ((ulong)uVar9 != 0) {
                      uVar7 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar9);
                    }
                    if (*puVar16 <= uVar7) {
                      uVar7 = 0xffffffff;
                    }
                    if ((uVar7 < *(uint *)PTR_DAT_04bc0048) &&
                       (local_e0 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar7 * 2),
                       local_e0 < 0x52)) goto LAB_01508ec8;
                  }
                }
                local_e0 = 0;
              }
            }
LAB_01508ec8:
            if (local_e0 - 0x1e < 4) {
              local_b8 = (undefined4)(long)((float)(int)local_94 * 90.0 * 11930465.0);
              uVar9 = FUN_01508370(&local_98,&local_b8);
            }
            else {
              uVar9 = FUN_01433400();
            }
          }
          if (1 < *param_3 - 1U) {
            local_e0 = 0;
            if (((puVar10 != (uint *)0x0) && (uVar7 = *puVar10, uVar7 != 0)) &&
               (puVar10 != (uint *)(ulong)uVar7)) {
              puVar16 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
              local_e0 = 0;
              if (*puVar16 != 0) {
                uVar7 = puVar16[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar16 + 10) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar16 + lVar14 + (ulong)(ushort)puVar16[2] * 8;
                  if (lVar14 != 0) {
                    uVar8 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar8 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar7);
                    }
                    if (*puVar16 <= uVar8) {
                      uVar8 = 0xffffffff;
                    }
                    if ((uVar8 < *(uint *)PTR_DAT_04bc0048) &&
                       (local_e0 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar8 * 2),
                       local_e0 < 0x52)) goto LAB_01508fc8;
                  }
                }
                local_e0 = 0;
              }
            }
LAB_01508fc8:
            if ((0x10 < local_e0) || ((1 << (ulong)(local_e0 & 0x1f) & 0x17000U) == 0)) {
              local_e0 = 0;
              if ((puVar10 != (uint *)0x0) &&
                 ((uVar7 = *puVar10, uVar7 != 0 && (puVar10 != (uint *)(ulong)uVar7)))) {
                puVar16 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
                local_e0 = 0;
                if (*puVar16 != 0) {
                  uVar7 = puVar16[1];
                  if ((uVar7 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                    lVar14 = 0xc;
                    if (*(char *)((long)puVar16 + 10) != '\0') {
                      lVar14 = 0x1c;
                    }
                    lVar14 = (long)puVar16 + lVar14 + (ulong)(ushort)puVar16[2] * 8;
                    if (lVar14 != 0) {
                      uVar8 = 0;
                      if ((ulong)uVar7 != 0) {
                        uVar8 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar7);
                      }
                      if (*puVar16 <= uVar8) {
                        uVar8 = 0xffffffff;
                      }
                      if ((uVar8 < *(uint *)PTR_DAT_04bc0048) &&
                         (local_e0 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar8 * 2)
                         , local_e0 < 0x52)) goto LAB_01509120;
                    }
                  }
                  local_e0 = 0;
                }
              }
LAB_01509120:
              if (((local_e0 & 0xfffffffe) != 0x12) &&
                 (uVar11 = FUN_01ae69e4(&local_b0,0x11), (uVar11 & 1) == 0)) {
                uVar7 = FUN_01aefaac(&local_b0);
                uVar9 = uVar9 & uVar7;
              }
            }
            if ((uVar9 & 1) != 0) {
              uVar11 = FUN_01aeec60(&local_b0);
              if ((uVar11 & 1) == 0) {
                uVar11 = FUN_01aeef8c(&local_b0);
                if ((uVar11 & 1) != 0) {
                  local_e0 = (int)(long)((float)(*(int *)(plVar18[0xd] + 0x2b4) + 0x20000000U >>
                                                0x1e) * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
                  if (local_e0 != local_94) goto LAB_01509994;
                  goto LAB_01509154;
                }
                uVar11 = FUN_01aef03c(&local_b0);
                if ((uVar11 & 1) == 0) goto LAB_01509994;
                local_c4 = *(int *)(plVar18[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
                local_e0 = (int)(long)((float)local_c4 * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
                if (local_c4 == local_94) goto LAB_01509994;
              }
              else {
                local_e0 = *(int *)(plVar18[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
              }
              if (local_e0 == local_94) goto LAB_01509994;
            }
          }
        }
LAB_01509154:
        bVar2 = true;
      }
    }
  }
  puVar10 = (uint *)FUN_014fbd50(&local_80,1,&local_90);
  uVar9 = *puVar10;
  local_bc = uVar9;
  uVar11 = FUN_015039ac(&local_bc);
  if (((uVar11 & 1) != 0) && (lVar14 = *(long *)puVar3, lVar14 != 0)) {
    if ((uVar9 == 0) ||
       (((plVar12 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                              ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0 ||
         ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar9)))) {
      plVar12 = (long *)0x0;
    }
    if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
      plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar14 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar13 + 0x60))();
      if (iVar6 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_01509218;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01509218:
      uVar9 = 0;
    }
    if (plVar12 != (long *)0x0) {
      lVar14 = plVar12[0x2a];
      uVar7 = *(uint *)(plVar12 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb5920);
      puVar3 = PTR_DAT_04bb43c0;
      if ((((int)lVar14 == 1) && ((uVar8 & uVar9) != 0)) && ((uVar7 >> 4 & 1) != 0)) {
        local_e0 = 0;
        if (plVar12[0xe] == 0) {
          iVar6 = -1;
        }
        else {
          iVar6 = *(int *)(plVar12[0xe] + 0x280);
        }
        if (iVar6 == 0) {
          uStack_a4 = *(undefined4 *)((long)plVar12 + 0x28c);
          local_a0 = (uint *)0x0;
          local_b0 = PTR_DAT_04bc0510 + 0x10;
          local_a8 = (undefined4)plVar12[0x51];
          lVar14 = *(long *)PTR_DAT_04bb43c0;
          uVar9 = FUN_0277d6c4(&local_a8);
          if (*(long *)puVar3 == 0) {
LAB_0150934c:
            puVar10 = (uint *)0x0;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar9) ||
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
            goto LAB_0150934c;
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(plVar12 + 0x51);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (*(uint *)(lVar14 + 0x1d8) <= uVar9) goto LAB_0150934c;
            puVar10 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8);
            if (puVar10 != (uint *)0x0) {
              local_a0 = puVar10;
            }
          }
          local_c4 = *(uint *)(plVar18 + 0x51);
          uStack_c0 = *(undefined4 *)((long)plVar18 + 0x28c);
          if (*param_3 == 2) {
            lVar14 = *(long *)puVar3;
            uVar9 = FUN_0277d6c4(&local_c4);
            if (*(long *)puVar3 != 0) {
              lVar14 = *(long *)(lVar14 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                FUN_01ad5d04(&local_e0,&local_c4);
                uVar11 = FUN_01ae6020(&local_e0);
                if ((uVar11 & 1) == 0) {
                  return 0;
                }
              }
            }
          }
          FUN_01476a50(&local_e0,plVar18);
          uVar11 = FUN_01aef228(&local_e0,(int)param_2[3] + 0x20000000U >> 0x1e);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          local_e4 = -param_2[3];
          FUN_01508700(&local_bc,&local_e4);
          local_64 = 0;
          local_e0 = 0;
          if (((puVar10 != (uint *)0x0) && (uVar9 = *puVar10, uVar9 != 0)) &&
             (puVar10 != (uint *)(ulong)uVar9)) {
            puVar16 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
            local_64 = 0;
            if (*puVar16 != 0) {
              uVar9 = puVar16[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                lVar14 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar16 + lVar14 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar14 != 0) {
                  uVar7 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar7 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar9);
                  }
                  if (*puVar16 <= uVar7) {
                    uVar7 = 0xffffffff;
                  }
                  if ((uVar7 < *(uint *)PTR_DAT_04bc0048) &&
                     (local_64 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar7 * 2),
                     local_64 < 0x52)) goto LAB_01509498;
                }
              }
              local_64 = 0;
            }
          }
LAB_01509498:
          if ((local_64 != 0) &&
             ((1 < *param_3 - 1U ||
              (uVar11 = (**(code **)(*(long *)plVar12[0x151] + 0x1c0))
                                  ((long *)plVar12[0x151],pfVar1), (uVar11 & 1) == 0)))) {
            uVar11 = FUN_01aeec60(&local_b0);
            if ((uVar11 & 1) == 0) {
              uVar11 = FUN_01aeef8c(&local_b0);
              if ((uVar11 & 1) != 0) {
                local_e0 = (int)(long)((float)(*(int *)(plVar12[0xd] + 0x2b4) + 0x20000000U >> 0x1e)
                                       * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
                if (local_e0 != local_94) goto LAB_01509a74;
                goto LAB_015094ac;
              }
              uVar11 = FUN_01aef03c(&local_b0);
              if ((uVar11 & 1) == 0) goto LAB_01509a74;
              local_64 = *(int *)(plVar12[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
              local_e0 = (int)(long)((float)local_64 * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
              if (local_64 == local_94) goto LAB_01509a74;
            }
            else {
              local_e0 = *(int *)(plVar12[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
            }
            if (local_e0 == local_94) {
LAB_01509a74:
              FUN_01479cd8(plVar12,param_1,pfVar1);
              return 1;
            }
          }
        }
      }
    }
  }
LAB_015094ac:
  puVar3 = PTR_DAT_04bb43c0;
  if (!bVar2) {
    return 0;
  }
  local_e0 = 0;
  if (plVar18[0xe] == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(plVar18[0xe] + 0x280);
  }
  if (iVar6 != 0) {
    return 0;
  }
  uStack_a4 = *(undefined4 *)((long)plVar18 + 0x28c);
  local_a0 = (uint *)0x0;
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a8 = (undefined4)plVar18[0x51];
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar3 == 0) {
LAB_0150958c:
    puVar10 = (uint *)0x0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0150958c;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(plVar18 + 0x51);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar9) goto LAB_0150958c;
    puVar10 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8);
    if (puVar10 != (uint *)0x0) {
      local_a0 = puVar10;
    }
  }
  local_e8 = -param_2[3];
  FUN_01508700(&local_98,&local_e8);
  if ((*param_3 - 1U < 2) &&
     (uVar11 = (**(code **)(*(long *)plVar18[0x151] + 0x1c0))((long *)plVar18[0x151],pfVar1),
     (uVar11 & 1) != 0)) {
    return 0;
  }
  uVar11 = FUN_01aeec60(&local_b0);
  if ((uVar11 & 1) != 0) {
    local_e0 = *(int *)(plVar18[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
    if (local_e0 != local_94) {
      return 0;
    }
    if (param_1 == (uint *)0x0) {
      return 1;
    }
    lVar14 = plVar18[0x151];
    if (lVar14 == 0) {
      return 1;
    }
    FUN_01476a50(&local_e0,plVar18);
    *param_1 = local_e0;
    param_1[1] = uStack_dc;
    param_1[4] = *(uint *)(plVar18 + 0x59);
    param_1[5] = *(uint *)((long)plVar18 + 0x2cc);
    param_1[6] = *(uint *)(plVar18 + 0x5a);
    lVar15 = plVar18[0xd];
    param_1[7] = *(uint *)(lVar15 + 0x278);
    param_1[8] = *(uint *)(lVar15 + 0x27c);
    param_1[9] = *(uint *)(lVar15 + 0x280);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(lVar14 + 0x30a);
    *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)(lVar14 + 0x308);
    bVar5 = (**(code **)(*(long *)plVar18[0x151] + 0x1c0))((long *)plVar18[0x151],pfVar1);
    *(byte *)((long)param_1 + 0x2a) = bVar5 & 1;
    param_1[0xb] = *(uint *)(plVar18 + 0x46);
    return 1;
  }
  if (puVar10 == (uint *)0x0) goto LAB_01509850;
  uVar9 = *puVar10;
  uVar7 = 0;
  if ((uVar9 != 0) && (puVar10 != (uint *)(ulong)uVar9)) {
    puVar16 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
    uVar7 = 0;
    if (*puVar16 != 0) {
      uVar9 = puVar16[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + lVar14 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar14 != 0) {
          uVar7 = 0;
          if ((ulong)uVar9 != 0) {
            uVar7 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar9);
          }
          if (*puVar16 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar7 * 2),
             uVar7 < 0x52)) goto LAB_01509724;
        }
      }
      uVar7 = 0;
    }
  }
LAB_01509724:
  if (uVar7 - 0x1f < 2) {
    local_e0 = (int)(long)((float)(*(int *)(plVar18[0xd] + 0x2b4) + 0x20000000U >> 0x1e) * 90.0 *
                          11930465.0) + 0xa0000000U >> 0x1e;
    if (local_e0 == local_94) {
      return 0;
    }
    goto LAB_01509994;
  }
  uVar9 = *puVar10;
  local_e0 = 0;
  if ((uVar9 != 0) && (puVar10 != (uint *)(ulong)uVar9)) {
    puVar16 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
    local_e0 = 0;
    if (*puVar16 != 0) {
      uVar9 = puVar16[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + lVar14 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar14 != 0) {
          uVar7 = 0;
          if ((ulong)uVar9 != 0) {
            uVar7 = (uint)((ulong)((long)puVar10 - lVar14) / (ulong)uVar9);
          }
          if (*puVar16 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < *(uint *)PTR_DAT_04bc0048) &&
             (local_e0 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar7 * 2),
             local_e0 < 0x52)) goto LAB_01509854;
        }
      }
LAB_01509850:
      local_e0 = 0;
    }
  }
LAB_01509854:
  if (local_e0 == 0x21) {
    local_c4 = *(int *)(plVar18[0xd] + 0x2b4) + 0x20000000U >> 0x1e;
    local_e0 = (int)(long)((float)local_c4 * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
    if ((local_c4 != local_94) && (local_e0 != local_94)) {
      return 0;
    }
  }
LAB_01509994:
  FUN_01479cd8(plVar18,param_1,pfVar1);
  return 1;
}

