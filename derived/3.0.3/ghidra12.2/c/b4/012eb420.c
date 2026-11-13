
/* WARNING: Removing unreachable block (ram,0x012ec23c) */
/* WARNING: Removing unreachable block (ram,0x012ec2a0) */

undefined4 FUN_012eb420(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  int *piVar18;
  ushort uVar19;
  uint uVar20;
  long lVar21;
  uint *puVar22;
  long *plVar23;
  long *plVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  undefined4 local_14c;
  undefined8 local_130;
  undefined8 local_128;
  uint *local_120;
  int local_118;
  int local_114;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined *local_b0;
  float local_a8;
  undefined4 local_a4;
  byte local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  
  local_a8 = 0.0;
  sVar10 = *(short *)PTR_DAT_04bb6298;
  local_b0 = PTR_DAT_04bbfe68 + 0x10;
  lVar21 = *(long *)PTR_DAT_04bb2720;
  if (lVar21 == 0) {
    puVar30 = &DAT_055c04a0;
  }
  else {
    puVar30 = &DAT_055c04a0;
    if (*(long *)(lVar21 + 0x330) != 0) {
      puVar30 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
      iVar14 = FUN_006bd550(*puVar30,0);
      puVar30 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar30 = &DAT_055c04a0;
      }
    }
  }
  local_a4 = *(undefined4 *)(puVar30 + 7);
  local_a0 = FUN_017baf44();
  puVar13 = PTR_DAT_04bc00c8;
  puVar12 = PTR_DAT_04bb43c0;
  local_d0 = param_2 + 8;
  local_c8 = param_2 + 0x18;
  iVar5 = *(int *)(param_2 + 0x10);
  local_b4 = *(int *)(param_2 + 0x14);
  local_a0 = local_a0 & 1;
  iVar14 = *(int *)(param_2 + 0x24) + 1;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  if (iVar14 == local_b4) {
    local_14c = 0;
  }
  else {
    local_14c = 0;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    puVar30 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
    plVar23 = (long *)PTR_DAT_04bbbc68;
    local_c0 = puVar1;
    local_b8 = iVar5;
    do {
      local_d8 = 0;
      local_e0 = puVar1;
      FUN_01a5033c(&local_e8,&local_b0,0,&local_c0,&local_e0);
      if ((short)local_e8 == -2) goto LAB_012eb834;
      lVar31 = *(long *)puVar12;
      uVar15 = FUN_0277d6c4(&local_e8);
      lVar21 = *(long *)puVar12;
      if (lVar21 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((*(uint *)(lVar31 + 0x1d8) <= uVar15) ||
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_012eb710;
        local_100 = (uint *)0x0;
        local_110 = PTR_DAT_04bc0510 + 0x10;
        local_108 = (undefined *)CONCAT44(uStack_e4,local_e8);
        uVar15 = FUN_0277d6c4(&local_108);
        if (*(long *)puVar12 != 0) {
          lVar21 = *(long *)(lVar21 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            lVar21 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(&local_e8);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if (uVar15 < *(uint *)(lVar21 + 0x1d8)) {
              puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8);
              if (puVar22 != (uint *)0x0) {
                local_100 = puVar22;
              }
            }
          }
        }
        uVar17 = FUN_01ae5f4c(&local_110);
        if (((uVar17 & 1) == 0) || ((*(byte *)(param_1 + 8) & 1) == 0)) {
          uVar17 = FUN_01ae59b0(&local_110);
          if (((uVar17 & 1) == 0) || ((*(uint *)(param_1 + 8) >> 1 & 1) == 0)) goto LAB_012eb710;
          local_130 = (undefined8 *)CONCAT44(local_130._4_4_,0x76);
          if (local_100 == (uint *)0x0) {
            local_98 = 2.63444e-43;
          }
          else {
            uVar15 = *local_100;
            local_98 = 0.0;
            if ((uVar15 != 0) && (local_100 != (uint *)(ulong)uVar15)) {
              puVar22 = (uint *)((long)local_100 - (long)(ulong)uVar15);
              local_98 = 0.0;
              if (*puVar22 != 0) {
                uVar15 = puVar22[1];
                if ((uVar15 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar22 + 10) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
                  if (lVar21 != 0) {
                    uVar20 = 0;
                    if ((ulong)uVar15 != 0) {
                      uVar20 = (uint)((ulong)((long)local_100 - lVar21) / (ulong)uVar15);
                    }
                    if (*puVar22 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((uVar20 < *(uint *)puVar13) &&
                       (local_98 = (float)(uint)*(ushort *)
                                                 (*(long *)(puVar13 + 8) + (long)(int)uVar20 * 2),
                       (uint)local_98 < 0xbd)) goto LAB_012eb91c;
                  }
                }
                local_98 = 0.0;
              }
            }
          }
LAB_012eb91c:
          if ((local_98 == 1.65353e-43) && ((*(uint *)(param_1 + 8) >> 6 & 1) == 0))
          goto LAB_012eb834;
        }
        goto LAB_012eb934;
      }
LAB_012eb710:
      lVar21 = *plVar23;
      if (lVar21 != 0) {
        if ((*(long *)(lVar21 + 0xb0) != 0) && (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) {
          if ((*(long *)(lVar21 + 0x488) != 0) && (*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0)) {
            if ((*(long *)(lVar21 + 0x2b0) != 0) && (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0))
            {
              uVar15 = FUN_0277d6c4(&local_e8);
              uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
              if ((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                FUN_0124c030(&local_110,&local_e8);
                iVar16 = FUN_0123db50(&local_108,local_100);
                if (((((6 < iVar16 - 0xbU) || (uVar17 = FUN_0124e7e0(&local_110), (uVar17 & 1) != 0)
                      ) || ((*(byte *)(param_1 + 8) >> 4 & 1) == 0)) &&
                    ((iVar16 = FUN_0123db50(&local_108,local_100), iVar16 != 0x2d ||
                     ((*(byte *)(param_1 + 8) >> 2 & 1) == 0)))) &&
                   ((uVar17 = FUN_0123d890(local_100,4), (uVar17 & 1) == 0 ||
                    ((*(byte *)(param_1 + 8) >> 3 & 1) == 0)))) {
                  iVar16 = FUN_0123db50(&local_108,local_100);
                  if (((iVar16 - 2U & 0xfffffff9) != 0) || ((*(uint *)(param_1 + 8) >> 5 & 1) == 0))
                  {
                    if ((*(uint *)(param_1 + 8) >> 7 & 1) != 0) {
                      iVar16 = FUN_0123db50(&local_108,local_100);
                      if (iVar16 == 0x2e) goto LAB_012eb934;
                    }
                    goto LAB_012eb834;
                  }
                }
LAB_012eb934:
                local_100 = (uint *)0x0;
                local_108 = PTR_DAT_04bb2010 + 0x10;
                local_f0 = 0;
                local_110 = puVar2;
                local_f8 = local_108;
                FUN_0277f02c(&local_e8,&local_110);
                iVar16 = (int)local_100 + (int)local_d8;
                iVar27 = (int)local_f0 + (int)local_d8;
                iVar25 = local_100._4_4_ + local_d8._4_4_;
                iVar28 = local_f0._4_4_ + local_d8._4_4_;
                local_100 = (uint *)CONCAT44(iVar25,iVar16);
                local_f0 = CONCAT44(iVar28,iVar27);
                sVar11 = *(short *)PTR_DAT_04bb6298;
                if (sVar11 != -1) {
                  local_130 = (undefined8 *)CONCAT44(local_130._4_4_,3);
                  puVar22 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
                  if (0xff < (uint)(int)sVar11) {
                    puVar22 = (uint *)PTR_DAT_04bc39f8;
                  }
                  if (((((*puVar22 >> 3 & 1) != 0) &&
                       (lVar21 = *(long *)PTR_DAT_04bb5c90, iVar16 <= *(int *)(lVar21 + 0x38))) &&
                      (*(int *)(lVar21 + 0x28) <= iVar27)) &&
                     ((iVar25 <= *(int *)(lVar21 + 0x3c) && (*(int *)(lVar21 + 0x2c) <= iVar28))))
                  goto LAB_012eb834;
                }
                if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
                  lVar21 = *(long *)PTR_DAT_04bb27a8;
                  if (lVar21 != 0) {
                    if ((*(ushort *)(lVar21 + 0x4b68) & 1) != 0) {
                      iVar16 = *(int *)(lVar21 + 0x4b6c);
                      iVar8 = *(int *)(lVar21 + 0x4b70);
                      lVar21 = *(long *)PTR_DAT_04bb4948;
                      piVar18 = (int *)(**(code **)(*(long *)(lVar21 + 0x2c0) + 0xf0))
                                                 (lVar21 + 0x2c0);
                      iVar6 = *piVar18;
                      iVar7 = piVar18[1];
                      piVar18 = (int *)(**(code **)(*(long *)(lVar21 + 0x2f8) + 0xf0))
                                                 (lVar21 + 0x2f8);
                      iVar9 = *piVar18;
                      lVar21 = (**(code **)(*(long *)(lVar21 + 0x2f8) + 0xf0))(lVar21 + 0x2f8);
                      iVar6 = iVar6 + iVar16 * 0x20;
                      plVar23 = (long *)PTR_DAT_04bbbc68;
                      iVar27 = (int)local_f0;
                      iVar25 = local_100._4_4_;
                      iVar28 = local_f0._4_4_;
                      iVar16 = (int)local_100;
                      if ((((int)local_100 <= iVar6 + iVar9 + -1) && (iVar6 <= (int)local_f0)) &&
                         ((iVar7 = iVar7 + iVar8 * 0x20,
                          local_100._4_4_ <= iVar7 + *(int *)(lVar21 + 4) + -1 &&
                          (iVar7 <= local_f0._4_4_)))) goto LAB_012eb834;
                    }
                  }
                }
                lVar21 = *(long *)PTR_DAT_04bbc218;
                if (*(long *)(lVar21 + 0x210) != lVar21 + 0x208) {
                  lVar29 = (long)*(int *)(lVar21 + 0x21c);
                  lVar31 = *(long *)(lVar21 + 0x210) - lVar29;
                  do {
                    if ((((*(short *)(lVar31 + 0x24) == sVar10) &&
                         (iVar16 <= *(int *)(lVar31 + 0x48))) && (*(int *)(lVar31 + 0x38) <= iVar27)
                        ) && ((iVar25 <= *(int *)(lVar31 + 0x4c) &&
                              (*(int *)(lVar31 + 0x3c) <= iVar28)))) goto LAB_012eb834;
                    lVar31 = *(long *)(lVar31 + lVar29 + 8) - lVar29;
                  } while (lVar31 != (lVar21 + 0x208) - lVar29);
                }
                lVar31 = *(long *)puVar12;
                uVar15 = FUN_0277d6c4(&local_e8);
                lVar21 = *(long *)puVar12;
                if (lVar21 == 0) {
LAB_012ebbbc:
                  lVar21 = *plVar23;
                  if ((lVar21 != 0) &&
                     (((((*(long *)(lVar21 + 0xb0) != 0 &&
                         (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
                        (*(long *)(lVar21 + 0x488) != 0)) &&
                       ((*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0 &&
                        (*(long *)(lVar21 + 0x2b0) != 0)))) &&
                      (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0)))) {
                    uVar15 = FUN_0277d6c4(&local_e8);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                    if ((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                      FUN_0124c030(&local_130,&local_e8);
                      iVar16 = FUN_0123db50(&local_128,local_120);
                      if ((iVar16 - 2U & 0xfffffff9) == 0) {
                        fStack_94 = (float)local_100._4_4_ * 5.0 + 1.25;
                        local_98 = (float)(int)local_100 * 5.0 + 1.25;
                        fVar33 = (float)local_f0._4_4_ * 5.0 + 5.0 + -1.25;
                        fVar32 = (float)(int)local_f0 * 5.0 + 5.0 + -1.25;
                        local_90 = fVar32;
                        if (fVar32 <= local_98) {
                          local_90 = local_98;
                          local_98 = fVar32;
                        }
                        fStack_8c = fVar33;
                        if (fVar33 <= fStack_94) {
                          fStack_8c = fStack_94;
                          fStack_94 = fVar33;
                        }
                        uVar17 = FUN_0251eac0(&local_98,PTR_DAT_04bb32e0,0);
                        if ((uVar17 & 1) == 0) {
                          uVar17 = FUN_01735000(&local_98,*(undefined4 *)PTR_DAT_04bb3238,
                                                *(undefined4 *)PTR_DAT_04bb3238,0);
                          if ((uVar17 & 1) == 0) goto LAB_012ebfdc;
                        }
                        goto LAB_012eb834;
                      }
                    }
                  }
                }
                else {
                  lVar31 = *(long *)(lVar31 + 0x57e58);
                  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                  if ((*(uint *)(lVar31 + 0x1d8) <= uVar15) ||
                     (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar15 * 8) == 0))
                  goto LAB_012ebbbc;
                  local_120 = (uint *)0x0;
                  local_130 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
                  local_128 = (undefined **)CONCAT44(uStack_e4,local_e8);
                  uVar15 = FUN_0277d6c4(&local_128);
                  if (*(long *)puVar12 == 0) {
                    puVar22 = (uint *)0x0;
                  }
                  else {
                    lVar21 = *(long *)(lVar21 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                    if ((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                      lVar21 = *(long *)PTR_DAT_04bc0428;
                      uVar15 = FUN_0277d6c4(&local_e8);
                      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                      if (uVar15 < *(uint *)(lVar21 + 0x1d8)) {
                        puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8);
                        if (puVar22 != (uint *)0x0) {
                          local_120 = puVar22;
                        }
                        goto LAB_012ebdb4;
                      }
                    }
                    puVar22 = (uint *)0x0;
                  }
LAB_012ebdb4:
                  uVar17 = FUN_01ae59b0(&local_130);
                  if ((uVar17 & 1) != 0) {
                    if (puVar22 == (uint *)0x0) goto LAB_012ebf18;
                    uVar15 = *puVar22;
                    uVar20 = 0;
                    if ((uVar15 != 0) && (puVar22 != (uint *)(ulong)uVar15)) {
                      puVar26 = (uint *)((long)puVar22 - (long)(ulong)uVar15);
                      uVar20 = 0;
                      if (*puVar26 != 0) {
                        uVar15 = puVar26[1];
                        if ((uVar15 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                          lVar21 = 0xc;
                          if (*(char *)((long)puVar26 + 10) != '\0') {
                            lVar21 = 0x1c;
                          }
                          lVar21 = (long)puVar26 + lVar21 + (ulong)(ushort)puVar26[2] * 8;
                          if (lVar21 != 0) {
                            uVar20 = 0;
                            if ((ulong)uVar15 != 0) {
                              uVar20 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar15);
                            }
                            if (*puVar26 <= uVar20) {
                              uVar20 = 0xffffffff;
                            }
                            if ((uVar20 < *(uint *)PTR_DAT_04bc0048) &&
                               (uVar20 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                (long)(int)uVar20 * 2), uVar20 < 0x52))
                            goto LAB_012ebe50;
                          }
                        }
                        uVar20 = 0;
                      }
                    }
LAB_012ebe50:
                    if (8 < uVar20 - 1) {
                      uVar15 = *puVar22;
                      local_98 = 0.0;
                      if ((uVar15 != 0) && (puVar22 != (uint *)(ulong)uVar15)) {
                        puVar26 = (uint *)((long)puVar22 - (long)(ulong)uVar15);
                        local_98 = 0.0;
                        if (*puVar26 != 0) {
                          uVar15 = puVar26[1];
                          if ((uVar15 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                            lVar21 = 0xc;
                            if (*(char *)((long)puVar26 + 10) != '\0') {
                              lVar21 = 0x1c;
                            }
                            lVar21 = (long)puVar26 + lVar21 + (ulong)(ushort)puVar26[2] * 8;
                            if (lVar21 != 0) {
                              uVar20 = 0;
                              if ((ulong)uVar15 != 0) {
                                uVar20 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar15);
                              }
                              if (*puVar26 <= uVar20) {
                                uVar20 = 0xffffffff;
                              }
                              if ((uVar20 < *(uint *)PTR_DAT_04bc0048) &&
                                 (local_98 = (float)(uint)*(ushort *)
                                                           (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                           (long)(int)uVar20 * 2),
                                 (uint)local_98 < 0x52)) goto LAB_012ebf1c;
                            }
                          }
LAB_012ebf18:
                          local_98 = 0.0;
                        }
                      }
LAB_012ebf1c:
                      if (((uint)local_98 & 0xfffffffe) != 10) goto LAB_012ebfd4;
                    }
                    fStack_94 = (float)local_100._4_4_ * 5.0 + 1.25;
                    local_98 = (float)(int)local_100 * 5.0 + 1.25;
                    fVar33 = (float)local_f0._4_4_ * 5.0 + 5.0 + -1.25;
                    fVar32 = (float)(int)local_f0 * 5.0 + 5.0 + -1.25;
                    local_90 = fVar32;
                    if (fVar32 <= local_98) {
                      local_90 = local_98;
                      local_98 = fVar32;
                    }
                    fStack_8c = fVar33;
                    if (fVar33 <= fStack_94) {
                      fStack_8c = fStack_94;
                      fStack_94 = fVar33;
                    }
                    uVar17 = FUN_0251eac0(&local_98,PTR_DAT_04bb32e0,0);
                    if (((uVar17 & 1) != 0) ||
                       (uVar17 = FUN_01735000(&local_98,*(undefined4 *)PTR_DAT_04bb3238,
                                              *(undefined4 *)PTR_DAT_04bb3238,0), (uVar17 & 1) != 0)
                       ) {
                      plVar23 = (long *)PTR_DAT_04bbbc68;
                      goto LAB_012eb834;
                    }
                  }
LAB_012ebfd4:
                  plVar23 = (long *)PTR_DAT_04bbbc68;
                }
LAB_012ebfdc:
                if (*(char *)(param_2 + 0x28) == '\0') {
                  if (*(char *)(param_2 + 0x29) != '\0') {
                    iVar27 = (int)local_100;
                    local_118 = (int)local_100;
                    local_114 = local_100._4_4_;
                    local_120 = (uint *)(PTR_DAT_04bb2010 + 0x10);
                    iVar16 = local_f0._4_4_ + 1;
                    local_130 = &local_108;
                    local_128 = &local_f8;
                    if (iVar16 != local_100._4_4_) {
                      do {
                        FUN_01a50240(&local_98,&local_b0,1,&local_120);
                        if (local_98._0_2_ != -2) {
                          lVar21 = *(long *)puVar12;
                          uVar15 = FUN_0277d6c4(&local_98);
                          if (*(long *)puVar12 != 0) {
                            lVar21 = *(long *)(lVar21 + 0x57e58);
                            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                            if ((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
                               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0))
                            {
                              FUN_012ec534(&local_98);
                            }
                          }
                        }
                        if (local_118 < *(int *)(local_128 + 1)) {
                          local_118 = local_118 + 1;
                        }
                        else {
                          local_114 = local_114 + 1;
                          local_118 = *(int *)(local_130 + 1);
                        }
                      } while (iVar27 != local_118 || iVar16 != local_114);
                    }
                    FUN_012ec534(&local_e8);
                  }
                  FUN_01513b9c(&local_c0,0,1);
                  fVar32 = local_a8;
                  iVar27 = (int)local_100;
                  local_118 = (int)local_100;
                  local_114 = local_100._4_4_;
                  local_120 = (uint *)(PTR_DAT_04bb2010 + 0x10);
                  iVar16 = local_f0._4_4_ + 1;
                  local_130 = &local_108;
                  local_128 = &local_f8;
                  if (iVar16 != local_100._4_4_) {
                    do {
                      uVar17 = FUN_01a4f798(&local_b0,1,&local_120);
                      if ((uVar17 & 1) != 0) {
                        if (fVar32 == 0.0) {
LAB_012ec214:
                          plVar23 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_012ec218:
                          lVar21 = *plVar23;
                        }
                        else {
                          if (fVar32 != 0.0) {
                            if (fVar32 == 0.0) goto LAB_012ec214;
                            plVar24 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                            plVar23 = plVar24 + (uint)fVar32;
                            if (0x38 < (uint)fVar32) {
                              plVar23 = plVar24;
                            }
                            goto LAB_012ec218;
                          }
                          lVar21 = 0;
                        }
                        local_98 = 1.4013e-45;
                        if (*(long *)(lVar21 + 0xe0) != 0) {
                          FUN_012e5af4(*(long *)(lVar21 + 0xe0),&local_120);
                        }
                      }
                      if (local_118 < *(int *)(local_128 + 1)) {
                        local_118 = local_118 + 1;
                      }
                      else {
                        local_114 = local_114 + 1;
                        local_118 = *(int *)(local_130 + 1);
                      }
                    } while (iVar27 != local_118 || iVar16 != local_114);
                  }
                  uVar17 = FUN_01a4f798(&local_b0,0,&local_e0);
                  plVar23 = (long *)PTR_DAT_04bbbc68;
                  if ((uVar17 & 1) != 0) {
                    if (local_a8 == 0.0) {
                      local_130 = (undefined8 *)((ulong)local_130._4_4_ << 0x20);
LAB_012ec27c:
                      plVar24 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_012ec280:
                      lVar21 = *plVar24;
                    }
                    else {
                      local_98 = local_a8;
                      if (local_a8 != 0.0) {
                        local_130 = (undefined8 *)CONCAT44(local_130._4_4_,local_a8);
                        if (local_a8 == 0.0) goto LAB_012ec27c;
                        plVar3 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                        plVar24 = plVar3 + (uint)local_a8;
                        if (0x38 < (uint)local_a8) {
                          plVar24 = plVar3;
                        }
                        goto LAB_012ec280;
                      }
                      lVar21 = 0;
                    }
                    local_130 = (undefined8 *)((ulong)local_130 & 0xffffffff00000000);
                    if (*(long *)(lVar21 + 0xd0) != 0) {
                      FUN_012e5af4(*(long *)(lVar21 + 0xd0),&local_e0);
                    }
                  }
                  lVar31 = *(long *)puVar12;
                  uVar15 = FUN_0277d6c4(&local_e8);
                  lVar21 = *(long *)puVar12;
                  if (lVar21 == 0) {
LAB_012ec428:
                    lVar21 = *plVar23;
                    if (((lVar21 != 0) &&
                        (((*(long *)(lVar21 + 0xb0) != 0 &&
                          (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)) &&
                         (*(long *)(lVar21 + 0x488) != 0)))) &&
                       (((*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0 &&
                         (*(long *)(lVar21 + 0x2b0) != 0)) &&
                        (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0)))) {
                      uVar15 = FUN_0277d6c4(&local_e8);
                      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                      if ((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                        FUN_0124c030(&local_130,&local_e8);
                        iVar16 = FUN_0123db50(&local_128,local_120);
                        uVar4 = 2;
                        if (iVar16 != 0x2d) {
                          uVar4 = 6;
                        }
                        FUN_01225ba0(*(undefined8 *)PTR_DAT_04bb4778,&local_c0,uVar4);
                      }
                    }
                  }
                  else {
                    lVar31 = *(long *)(lVar31 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                    if ((*(uint *)(lVar31 + 0x1d8) <= uVar15) ||
                       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar15 * 8) == 0))
                    goto LAB_012ec428;
                    local_120 = (uint *)0x0;
                    local_128 = (undefined **)CONCAT44(uStack_e4,local_e8);
                    local_130 = puVar30;
                    uVar15 = FUN_0277d6c4(&local_128);
                    if (*(long *)puVar12 == 0) {
LAB_012ec4d8:
                      uVar19 = 0;
                    }
                    else {
                      lVar21 = *(long *)(lVar21 + 0x57e58);
                      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                      if ((*(uint *)(lVar21 + 0x1d8) <= uVar15) ||
                         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) == 0))
                      goto LAB_012ec4d8;
                      lVar21 = *(long *)PTR_DAT_04bc0428;
                      uVar15 = FUN_0277d6c4(&local_e8);
                      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                      if ((*(uint *)(lVar21 + 0x1d8) <= uVar15) ||
                         (puVar22 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8),
                         puVar22 == (uint *)0x0)) goto LAB_012ec4d8;
                      uVar19 = 0;
                      uVar15 = *puVar22;
                      local_120 = puVar22;
                      if ((uVar15 != 0) && (puVar22 != (uint *)(ulong)uVar15)) {
                        puVar26 = (uint *)((long)puVar22 - (long)(ulong)uVar15);
                        uVar19 = 0;
                        if (*puVar26 != 0) {
                          uVar15 = puVar26[1];
                          if ((uVar15 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                            lVar21 = 0xc;
                            if (*(char *)((long)puVar26 + 10) != '\0') {
                              lVar21 = 0x1c;
                            }
                            lVar21 = (long)puVar26 + lVar21 + (ulong)(ushort)puVar26[2] * 8;
                            if (lVar21 != 0) {
                              uVar20 = 0;
                              if ((ulong)uVar15 != 0) {
                                uVar20 = (uint)((ulong)((long)puVar22 - lVar21) / (ulong)uVar15);
                              }
                              if (*puVar26 <= uVar20) {
                                uVar20 = 0xffffffff;
                              }
                              if ((uVar20 < *(uint *)PTR_DAT_04bc0048) &&
                                 (uVar19 = *(ushort *)
                                            (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar20 * 2
                                            ), uVar19 < 0x52)) goto LAB_012ec4e4;
                            }
                          }
                          uVar19 = 0;
                        }
                      }
                    }
LAB_012ec4e4:
                    local_98 = 9.10844e-44;
                    if (uVar19 == 0x41) {
                      FUN_015549a0(*(long *)PTR_DAT_04bb4c80 + 0x2540,sVar10,&local_e0);
                    }
                  }
                  FUN_01a188c0(&local_110);
                  local_14c = 1;
                }
              }
            }
          }
        }
      }
LAB_012eb834:
      if (local_b8 < *(int *)(local_c8 + 8)) {
        local_b8 = local_b8 + 1;
      }
      else {
        local_b8 = *(int *)(local_d0 + 8);
        local_b4 = local_b4 + 1;
      }
    } while ((iVar5 != local_b8) || (iVar14 != local_b4));
  }
  return local_14c;
}

