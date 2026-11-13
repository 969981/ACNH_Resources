
void FUN_014b0df0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  uint *puVar21;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined *local_90;
  int local_88;
  int local_84;
  undefined *local_80;
  uint local_78;
  undefined4 uStack_74;
  byte local_70;
  uint local_64;
  
  puVar12 = PTR_DAT_04bb43c0;
  puVar11 = PTR_DAT_04bb2010;
  lVar19 = 0x32;
  puVar2 = PTR_DAT_04bbfe68 + 0x10;
  puVar3 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  puVar4 = PTR_DAT_04bb5438 + 0x10;
  puVar5 = PTR_DAT_04bb2010 + 0x10;
  puVar6 = PTR_DAT_04bc0510 + 0x10;
  do {
    local_78 = (uint)lVar19;
    puVar8 = puVar3 + lVar19;
    if (0x38 < local_78) {
      puVar8 = puVar3;
    }
    uStack_74 = *puVar8;
    local_80 = puVar2;
    local_70 = FUN_017baf44();
    local_70 = local_70 & 1;
    if (local_78 == 0) {
      local_a0 = (ulong)local_a0._4_4_ << 0x20;
LAB_014b0f10:
      plVar17 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_014b0f14:
      if (*plVar17 != 0) {
        local_80 = puVar4;
        lVar15 = FUN_01a4fa00(&local_80);
        local_a0 = lVar15 + 8;
        local_98 = lVar15 + 0x18;
        iVar10 = *(int *)(lVar15 + 0x10);
        local_84 = *(int *)(lVar15 + 0x14);
        iVar1 = *(int *)(lVar15 + 0x24) + 1;
        local_90 = puVar5;
        local_88 = iVar10;
        if (iVar1 != local_84) {
          do {
            uVar16 = FUN_014fd19c(&local_80,&local_90,1);
            if ((uVar16 & 1) != 0) {
              local_b0 = puVar11 + 0x10;
              uStack_a8 = 0;
              FUN_01a5033c(&local_b8,&local_80,1,&local_90,&local_b0);
              lVar15 = *(long *)puVar12;
              uVar13 = FUN_0277d6c4(&local_b8);
              lVar20 = *(long *)puVar12;
              if (lVar20 != 0) {
                lVar15 = *(long *)(lVar15 + 0x57e58);
                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar13 < *(uint *)(lVar15 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                  local_c0 = (uint *)0x0;
                  local_d0 = PTR_DAT_04bc0510 + 0x10;
                  local_c8 = local_b8;
                  uStack_c4 = uStack_b4;
                  uVar13 = FUN_0277d6c4(&local_c8);
                  if (*(long *)puVar12 == 0) {
LAB_014b10bc:
                    puVar21 = (uint *)0x0;
                  }
                  else {
                    lVar15 = *(long *)(lVar20 + 0x57e58);
                    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                    if ((*(uint *)(lVar15 + 0x1d8) <= uVar13) ||
                       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8) == 0))
                    goto LAB_014b10bc;
                    lVar15 = *(long *)PTR_DAT_04bc0428;
                    uVar13 = FUN_0277d6c4(&local_b8);
                    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                    if (*(uint *)(lVar15 + 0x1d8) <= uVar13) goto LAB_014b10bc;
                    puVar21 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8);
                    if (puVar21 != (uint *)0x0) {
                      local_c0 = puVar21;
                    }
                  }
                  uVar16 = FUN_01ae6f00(&local_d0);
                  if ((uVar16 & 1) != 0) {
                    if (puVar21 == (uint *)0x0) goto LAB_014b1210;
                    uVar13 = *puVar21;
                    local_64 = 0;
                    if ((uVar13 != 0) && (puVar21 != (uint *)(ulong)uVar13)) {
                      puVar18 = (uint *)((long)puVar21 - (long)(ulong)uVar13);
                      local_64 = 0;
                      if (*puVar18 != 0) {
                        uVar13 = puVar18[1];
                        if ((uVar13 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                          lVar15 = 0xc;
                          if (*(char *)((long)puVar18 + 10) != '\0') {
                            lVar15 = 0x1c;
                          }
                          lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
                          if (lVar15 != 0) {
                            uVar9 = 0;
                            if ((ulong)uVar13 != 0) {
                              uVar9 = (uint)((ulong)((long)puVar21 - lVar15) / (ulong)uVar13);
                            }
                            if (*puVar18 <= uVar9) {
                              uVar9 = 0xffffffff;
                            }
                            if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
                               (local_64 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                  (long)(int)uVar9 * 2), local_64 < 0x52))
                            goto LAB_014b115c;
                          }
                        }
                        local_64 = 0;
                      }
                    }
LAB_014b115c:
                    if ((local_64 & 0xfffffffe) != 0x12) {
                      uVar13 = *puVar21;
                      local_64 = 0;
                      if ((uVar13 != 0) && (puVar21 != (uint *)(ulong)uVar13)) {
                        puVar18 = (uint *)((long)puVar21 - (long)(ulong)uVar13);
                        local_64 = 0;
                        if (*puVar18 != 0) {
                          uVar13 = puVar18[1];
                          if ((uVar13 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                            lVar15 = 0xc;
                            if (*(char *)((long)puVar18 + 10) != '\0') {
                              lVar15 = 0x1c;
                            }
                            lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
                            if (lVar15 != 0) {
                              uVar9 = 0;
                              if ((ulong)uVar13 != 0) {
                                uVar9 = (uint)((ulong)((long)puVar21 - lVar15) / (ulong)uVar13);
                              }
                              if (*puVar18 <= uVar9) {
                                uVar9 = 0xffffffff;
                              }
                              if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
                                 (local_64 = (uint)*(ushort *)
                                                    (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                    (long)(int)uVar9 * 2), local_64 < 0x52))
                              goto LAB_014b1214;
                            }
                          }
LAB_014b1210:
                          local_64 = 0;
                        }
                      }
LAB_014b1214:
                      if ((((0x10 < local_64) || ((1 << (ulong)(local_64 & 0x1f) & 0x17000U) == 0))
                          || (iVar14 = FUN_0277d6c4(&local_c8), iVar14 == 0x39ef)) ||
                         (iVar14 == 0x38ec)) {
                        local_64 = 0;
                        if (((puVar21 != (uint *)0x0) && (uVar13 = *puVar21, uVar13 != 0)) &&
                           (puVar21 != (uint *)(ulong)uVar13)) {
                          puVar18 = (uint *)((long)puVar21 - (long)(ulong)uVar13);
                          local_64 = 0;
                          if (*puVar18 != 0) {
                            uVar13 = puVar18[1];
                            if ((uVar13 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                              lVar15 = 0xc;
                              if (*(char *)((long)puVar18 + 10) != '\0') {
                                lVar15 = 0x1c;
                              }
                              lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
                              if (lVar15 != 0) {
                                uVar9 = 0;
                                if ((ulong)uVar13 != 0) {
                                  uVar9 = (uint)((ulong)((long)puVar21 - lVar15) / (ulong)uVar13);
                                }
                                if (*puVar18 <= uVar9) {
                                  uVar9 = 0xffffffff;
                                }
                                if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
                                   (local_64 = (uint)*(ushort *)
                                                      (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                      (long)(int)uVar9 * 2), local_64 < 0x52))
                                goto LAB_014b12ec;
                              }
                            }
                            local_64 = 0;
                          }
                        }
LAB_014b12ec:
                        if ((local_64 != 0x14) && (local_64 != 0x11)) goto LAB_014b1320;
                      }
                    }
                    FUN_014fd424(&local_80,0,&local_b0,1);
                  }
                }
              }
            }
LAB_014b1320:
            if (local_88 < *(int *)(local_98 + 8)) {
              local_88 = local_88 + 1;
            }
            else {
              local_84 = local_84 + 1;
              local_88 = *(int *)(local_a0 + 8);
            }
          } while (iVar10 != local_88 || iVar1 != local_84);
        }
        lVar15 = FUN_01a4fa00(&local_80);
        local_a0 = lVar15 + 8;
        local_98 = lVar15 + 0x18;
        local_90 = puVar11 + 0x10;
        iVar1 = *(int *)(lVar15 + 0x24) + 1;
        iVar10 = *(int *)(lVar15 + 0x10);
        local_84 = *(int *)(lVar15 + 0x14);
        local_88 = iVar10;
        if (iVar1 != local_84) {
          do {
            uVar16 = FUN_014fd19c(&local_80,&local_90,0);
            if ((uVar16 & 1) != 0) {
              local_b0 = puVar11 + 0x10;
              uStack_a8 = 0;
              FUN_01a5033c(&local_b8,&local_80,0,&local_90,&local_b0);
              lVar15 = *(long *)puVar12;
              uVar13 = FUN_0277d6c4(&local_b8);
              lVar20 = *(long *)puVar12;
              if (lVar20 != 0) {
                lVar15 = *(long *)(lVar15 + 0x57e58);
                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar13 < *(uint *)(lVar15 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                  local_c0 = (uint *)0x0;
                  local_c8 = local_b8;
                  uStack_c4 = uStack_b4;
                  local_d0 = puVar6;
                  uVar13 = FUN_0277d6c4(&local_c8);
                  if (*(long *)puVar12 == 0) {
LAB_014b1460:
                    puVar21 = (uint *)0x0;
                  }
                  else {
                    lVar15 = *(long *)(lVar20 + 0x57e58);
                    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                    if ((*(uint *)(lVar15 + 0x1d8) <= uVar13) ||
                       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8) == 0))
                    goto LAB_014b1460;
                    lVar15 = *(long *)PTR_DAT_04bc0428;
                    uVar13 = FUN_0277d6c4(&local_b8);
                    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                    if (*(uint *)(lVar15 + 0x1d8) <= uVar13) goto LAB_014b1460;
                    puVar21 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8);
                    if (puVar21 != (uint *)0x0) {
                      local_c0 = puVar21;
                    }
                  }
                  uVar16 = FUN_01ae6f00(&local_d0);
                  if ((uVar16 & 1) != 0) {
                    if (puVar21 == (uint *)0x0) goto LAB_014b15b4;
                    uVar13 = *puVar21;
                    local_64 = 0;
                    if ((uVar13 != 0) && (puVar21 != (uint *)(ulong)uVar13)) {
                      puVar18 = (uint *)((long)puVar21 - (long)(ulong)uVar13);
                      local_64 = 0;
                      if (*puVar18 != 0) {
                        uVar13 = puVar18[1];
                        if ((uVar13 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                          lVar15 = 0xc;
                          if (*(char *)((long)puVar18 + 10) != '\0') {
                            lVar15 = 0x1c;
                          }
                          lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
                          if (lVar15 != 0) {
                            uVar9 = 0;
                            if ((ulong)uVar13 != 0) {
                              uVar9 = (uint)((ulong)((long)puVar21 - lVar15) / (ulong)uVar13);
                            }
                            if (*puVar18 <= uVar9) {
                              uVar9 = 0xffffffff;
                            }
                            if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
                               (local_64 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                  (long)(int)uVar9 * 2), local_64 < 0x52))
                            goto LAB_014b1500;
                          }
                        }
                        local_64 = 0;
                      }
                    }
LAB_014b1500:
                    if ((local_64 & 0xfffffffe) != 0x12) {
                      uVar13 = *puVar21;
                      local_64 = 0;
                      if ((uVar13 != 0) && (puVar21 != (uint *)(ulong)uVar13)) {
                        puVar18 = (uint *)((long)puVar21 - (long)(ulong)uVar13);
                        local_64 = 0;
                        if (*puVar18 != 0) {
                          uVar13 = puVar18[1];
                          if ((uVar13 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                            lVar15 = 0xc;
                            if (*(char *)((long)puVar18 + 10) != '\0') {
                              lVar15 = 0x1c;
                            }
                            lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
                            if (lVar15 != 0) {
                              uVar9 = 0;
                              if ((ulong)uVar13 != 0) {
                                uVar9 = (uint)((ulong)((long)puVar21 - lVar15) / (ulong)uVar13);
                              }
                              if (*puVar18 <= uVar9) {
                                uVar9 = 0xffffffff;
                              }
                              if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
                                 (local_64 = (uint)*(ushort *)
                                                    (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                    (long)(int)uVar9 * 2), local_64 < 0x52))
                              goto LAB_014b15b8;
                            }
                          }
LAB_014b15b4:
                          local_64 = 0;
                        }
                      }
LAB_014b15b8:
                      if ((((0x10 < local_64) || ((1 << (ulong)(local_64 & 0x1f) & 0x17000U) == 0))
                          || (iVar14 = FUN_0277d6c4(&local_c8), iVar14 == 0x39ef)) ||
                         (iVar14 == 0x38ec)) {
                        local_64 = 0;
                        if (((puVar21 != (uint *)0x0) && (uVar13 = *puVar21, uVar13 != 0)) &&
                           (puVar21 != (uint *)(ulong)uVar13)) {
                          puVar18 = (uint *)((long)puVar21 - (long)(ulong)uVar13);
                          local_64 = 0;
                          if (*puVar18 != 0) {
                            uVar13 = puVar18[1];
                            if ((uVar13 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                              lVar15 = 0xc;
                              if (*(char *)((long)puVar18 + 10) != '\0') {
                                lVar15 = 0x1c;
                              }
                              lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
                              if (lVar15 != 0) {
                                uVar9 = 0;
                                if ((ulong)uVar13 != 0) {
                                  uVar9 = (uint)((ulong)((long)puVar21 - lVar15) / (ulong)uVar13);
                                }
                                if (*puVar18 <= uVar9) {
                                  uVar9 = 0xffffffff;
                                }
                                if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
                                   (local_64 = (uint)*(ushort *)
                                                      (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                      (long)(int)uVar9 * 2), local_64 < 0x52))
                                goto LAB_014b1690;
                              }
                            }
                            local_64 = 0;
                          }
                        }
LAB_014b1690:
                        if ((local_64 != 0x14) && (local_64 != 0x11)) goto LAB_014b16c0;
                      }
                    }
                    FUN_014fd424(&local_80,0,&local_b0,0);
                  }
                }
              }
            }
LAB_014b16c0:
            if (local_88 < *(int *)(local_98 + 8)) {
              local_88 = local_88 + 1;
            }
            else {
              local_84 = local_84 + 1;
              local_88 = *(int *)(local_a0 + 8);
            }
          } while (iVar10 != local_88 || iVar1 != local_84);
        }
      }
    }
    else {
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,local_78);
      if (local_78 != 0) {
        local_a0 = CONCAT44(local_a0._4_4_,local_78);
        if (local_78 == 0) goto LAB_014b0f10;
        plVar7 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
        plVar17 = plVar7 + local_78;
        if (0x38 < local_78) {
          plVar17 = plVar7;
        }
        goto LAB_014b0f14;
      }
    }
    lVar19 = lVar19 + 1;
    if (lVar19 == 0x39) {
      return;
    }
  } while( true );
}

