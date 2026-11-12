
void FUN_007e2700(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  long lVar27;
  uint *puVar28;
  int iVar29;
  int iVar30;
  uint local_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint *local_90;
  uint local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) && (lVar16 = FUN_026f480c(), lVar16 != 0)) {
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    plVar22 = (long *)PTR_DAT_04bb43c0;
    uVar25 = 0;
    do {
      lVar9 = lVar16 + 0x118 + (ulong)uVar25 * 0x2488;
      if (5 < uVar25) {
        lVar9 = lVar16 + 0x118;
      }
      uVar23 = 0;
      local_84 = uVar25;
      do {
        local_d4 = 0;
        lVar10 = lVar9 + 0x70 + (ulong)uVar23 * 0x70;
        if (7 < uVar23) {
          lVar10 = lVar9 + 0x70;
        }
        lVar5 = lVar10 + 0x38;
        local_88 = uVar23;
        do {
          uVar24 = 0;
          do {
            uVar13 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x18))(lVar5);
            uVar14 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x20))(lVar5);
            uVar8 = local_d4;
            if (uVar13 <= local_d4) {
              uVar8 = 0;
            }
            uVar13 = uVar24;
            if (uVar14 <= uVar24) {
              uVar13 = 0;
            }
            if ((*(long **)(lVar10 + 0x60) == (long *)0x0) ||
               (puVar17 = (undefined8 *)**(long **)(lVar10 + 0x60), puVar17 == (undefined8 *)0x0)) {
              uVar18 = 0;
            }
            else {
              uVar18 = (**(code **)*puVar17)();
              uVar18 = uVar18 & 0xffffffff;
            }
            lVar19 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))(lVar5,uVar8,uVar13);
            lVar27 = *plVar22;
            uVar14 = FUN_0277d6c4(lVar19 + *(long *)(lVar10 + 0x40));
            if (*plVar22 != 0) {
              lVar19 = *(long *)(lVar27 + 0x57e58);
              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((uVar14 < *(uint *)(lVar19 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                lVar19 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))(lVar5,uVar8,uVar13);
                local_90 = (uint *)0x0;
                puVar6 = (undefined4 *)(lVar19 + *(long *)(lVar10 + 0x40));
                lVar19 = *plVar22;
                local_98 = *puVar6;
                uStack_94 = puVar6[1];
                local_a0 = puVar2;
                uVar14 = FUN_0277d6c4(&local_98);
                if (*plVar22 == 0) {
LAB_007e29b8:
                  puVar28 = (uint *)0x0;
                }
                else {
                  lVar19 = *(long *)(lVar19 + 0x57e58);
                  uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                  if ((*(uint *)(lVar19 + 0x1d8) <= uVar14) ||
                     (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8) == 0))
                  goto LAB_007e29b8;
                  lVar19 = *(long *)PTR_DAT_04bc0428;
                  uVar14 = FUN_0277d6c4(puVar6);
                  uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                  if (*(uint *)(lVar19 + 0x1d8) <= uVar14) goto LAB_007e29b8;
                  puVar28 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar14 * 8);
                  if (puVar28 != (uint *)0x0) {
                    local_90 = puVar28;
                  }
                }
                uVar20 = FUN_01ae89e0(&local_a0);
                if ((uVar20 & 1) == 0) {
                  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xac);
                  if (puVar28 == (uint *)0x0) {
                    uVar14 = 0xbc;
                  }
                  else {
                    uVar15 = *puVar28;
                    uVar14 = 0;
                    if ((uVar15 != 0) && (puVar28 != (uint *)(ulong)uVar15)) {
                      puVar26 = (uint *)((long)puVar28 - (long)(ulong)uVar15);
                      uVar14 = 0;
                      if (*puVar26 != 0) {
                        uVar14 = puVar26[1];
                        if ((uVar14 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                          lVar19 = 0xc;
                          if (*(char *)((long)puVar26 + 10) != '\0') {
                            lVar19 = 0x1c;
                          }
                          lVar19 = (long)puVar26 + lVar19 + (ulong)(ushort)puVar26[2] * 8;
                          if (lVar19 != 0) {
                            uVar15 = 0;
                            if ((ulong)uVar14 != 0) {
                              uVar15 = (uint)((ulong)((long)puVar28 - lVar19) / (ulong)uVar14);
                            }
                            if (*puVar26 <= uVar15) {
                              uVar15 = 0xffffffff;
                            }
                            if ((uVar15 < *(uint *)PTR_DAT_04bc00c8) &&
                               (uVar14 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar15 * 2), uVar14 < 0xbd))
                            goto LAB_007e2a68;
                          }
                        }
                        uVar14 = 0;
                      }
                    }
                  }
LAB_007e2a68:
                  local_80 = CONCAT44(local_80._4_4_,uVar14);
                  if (uVar14 == 0xac) goto LAB_007e2a7c;
                  lVar19 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))(lVar5,uVar8,uVar13);
                  puVar7 = (undefined2 *)(lVar19 + *(long *)(lVar10 + 0x40));
                  local_d0 = *puVar7;
                  local_ce = *(undefined1 *)(puVar7 + 1);
                  local_cd = *(undefined1 *)((long)puVar7 + 3);
                  local_cc = *(undefined4 *)(puVar7 + 2);
                  uVar20 = FUN_01b01270(&local_d0);
                  if ((uVar20 & 1) == 0) goto LAB_007e2ae4;
                  local_b8 = 0;
                  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
                  puStack_c0 = PTR_DAT_04bb2010 + 0x10;
                  local_a8 = 0;
                  local_b0 = puStack_c0;
                  lVar19 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))(lVar5,uVar8,uVar13);
                  FUN_012e5518(&local_c8,lVar19 + *(long *)(lVar10 + 0x40));
                  iVar1 = local_a8._4_4_ + 1;
                  if (iVar1 != local_b8._4_4_) {
                    iVar12 = (int)local_b8;
                    iVar30 = local_b8._4_4_;
                    iVar29 = (int)local_b8;
                    do {
                      uVar8 = iVar29 + local_d4;
                      if ((uVar8 < 0x14) && (uVar13 = iVar30 + uVar24, uVar13 < 0x14)) {
                        uVar14 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x18))(lVar5);
                        uVar15 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x20))(lVar5);
                        if (uVar14 <= uVar8) {
                          uVar8 = 0;
                        }
                        if (uVar15 <= uVar13) {
                          uVar13 = 0;
                        }
                        if ((*(long *)(lVar10 + 0x60) == 0) ||
                           (puVar17 = *(undefined8 **)(*(long *)(lVar10 + 0x60) + 0x10),
                           puVar17 == (undefined8 *)0x0)) {
                          uVar20 = 0;
                          if (iVar30 == 0 && iVar29 == 0) goto LAB_007e2e48;
                        }
                        else {
                          uVar20 = (**(code **)*puVar17)();
                          uVar20 = uVar20 & 0xffffffff;
                          if (iVar30 == 0 && iVar29 == 0) {
LAB_007e2e48:
                            if ((*(long *)(lVar10 + 0x60) != 0) &&
                               (*(long *)(*(long *)(lVar10 + 0x60) + 0x20) != 0)) {
                              local_80 = *(undefined8 *)(lVar10 + 0x40);
                              local_78 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))
                                                   (lVar5,uVar8,uVar13);
                              uStack_70 = 8;
                              plVar22 = *(long **)(*(long *)(lVar10 + 0x60) + 0x20);
                              (**(code **)(*plVar22 + 0x20))(plVar22,&local_80);
                            }
                            lVar19 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))
                                               (lVar5,uVar8,uVar13);
                            puVar7 = (undefined2 *)(lVar19 + *(long *)(lVar10 + 0x40));
                            *puVar7 = local_d0;
                            *(undefined1 *)(puVar7 + 1) = local_ce;
                            *(undefined1 *)((long)puVar7 + 3) = local_cd;
                            *(undefined4 *)(puVar7 + 2) = local_cc;
                          }
                        }
                        if ((((uVar20 & 1) != 0) && (*(long *)(lVar10 + 0x60) != 0)) &&
                           (puVar17 = *(undefined8 **)(*(long *)(lVar10 + 0x60) + 0x18),
                           puVar17 != (undefined8 *)0x0)) {
                          (**(code **)*puVar17)();
                        }
                      }
                      if (iVar29 < (int)local_a8) {
                        iVar29 = iVar29 + 1;
                      }
                      else {
                        iVar30 = iVar30 + 1;
                        iVar29 = (int)local_b8;
                      }
                    } while (iVar12 != iVar29 || iVar1 != iVar30);
                  }
                }
                else {
LAB_007e2a7c:
                  local_b8 = 0;
                  local_a8 = 0;
                  local_c8 = puVar3;
                  puStack_c0 = puVar4;
                  local_b0 = puVar4;
                  lVar19 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))(lVar5,uVar8,uVar13);
                  FUN_012e5518(&local_c8,lVar19 + *(long *)(lVar10 + 0x40));
                  iVar1 = local_a8._4_4_ + 1;
                  if (iVar1 != local_b8._4_4_) {
                    iVar12 = (int)local_b8;
                    iVar30 = local_b8._4_4_;
                    iVar29 = (int)local_b8;
                    do {
                      uVar8 = iVar29 + local_d4;
                      if ((uVar8 < 0x14) && (uVar13 = iVar30 + uVar24, uVar13 < 0x14)) {
                        uVar14 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x18))(lVar5);
                        uVar15 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x20))(lVar5);
                        lVar19 = *(long *)(lVar10 + 0x60);
                        if (uVar14 <= uVar8) {
                          uVar8 = 0;
                        }
                        if (uVar15 <= uVar13) {
                          uVar13 = 0;
                        }
                        if ((lVar19 == 0) || (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0))
                        {
                          uVar20 = 0;
                          if (iVar30 != 0 || iVar29 != 0) goto LAB_007e2bcc;
joined_r0x007e2c40:
                          if ((lVar19 != 0) && (*(long *)(lVar19 + 0x20) != 0)) {
                            local_80 = *(undefined8 *)(lVar10 + 0x40);
                            local_78 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))
                                                 (lVar5,uVar8,uVar13);
                            uStack_70 = 8;
                            plVar22 = *(long **)(*(long *)(lVar10 + 0x60) + 0x20);
                            (**(code **)(*plVar22 + 0x20))(plVar22,&local_80);
                          }
                          lVar19 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))
                                             (lVar5,uVar8,uVar13);
                          puVar11 = PTR_DAT_04bb37e0;
                          puVar7 = (undefined2 *)(lVar19 + *(long *)(lVar10 + 0x40));
                          *puVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
                          *(undefined *)(puVar7 + 1) = puVar11[2];
                          *(undefined *)((long)puVar7 + 3) = puVar11[3];
                          *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar11 + 4);
                        }
                        else {
                          uVar20 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
                          lVar19 = *(long *)(lVar10 + 0x60);
                          uVar20 = uVar20 & 0xffffffff;
                          if (iVar30 == 0 && iVar29 == 0) goto joined_r0x007e2c40;
LAB_007e2bcc:
                          if ((lVar19 != 0) && (*(long *)(lVar19 + 0x20) != 0)) {
                            local_80 = *(undefined8 *)(lVar10 + 0x40);
                            local_78 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))
                                                 (lVar5,uVar8,uVar13);
                            uStack_70 = 8;
                            plVar22 = *(long **)(*(long *)(lVar10 + 0x60) + 0x20);
                            (**(code **)(*plVar22 + 0x20))(plVar22,&local_80);
                          }
                          lVar19 = (**(code **)(*(long *)(lVar10 + 0x38) + 0x28))
                                             (lVar5,uVar8,uVar13);
                          uVar21 = FUN_0277da10(lVar19 + *(long *)(lVar10 + 0x40));
                          if ((uVar21 & 1) == 0) {
                            lVar19 = *(long *)(lVar10 + 0x60);
                            goto joined_r0x007e2c40;
                          }
                        }
                        if ((((uVar20 & 1) != 0) && (*(long *)(lVar10 + 0x60) != 0)) &&
                           (puVar17 = *(undefined8 **)(*(long *)(lVar10 + 0x60) + 0x18),
                           puVar17 != (undefined8 *)0x0)) {
                          (**(code **)*puVar17)();
                        }
                      }
                      if (iVar29 < (int)local_a8) {
                        iVar29 = iVar29 + 1;
                      }
                      else {
                        iVar30 = iVar30 + 1;
                        iVar29 = (int)local_b8;
                      }
                    } while (iVar12 != iVar29 || iVar1 != iVar30);
                  }
                }
                plVar22 = (long *)PTR_DAT_04bb43c0;
              }
            }
LAB_007e2ae4:
            if ((((uVar18 & 1) != 0) && (*(long *)(lVar10 + 0x60) != 0)) &&
               (puVar17 = *(undefined8 **)(*(long *)(lVar10 + 0x60) + 8),
               puVar17 != (undefined8 *)0x0)) {
              (**(code **)*puVar17)();
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 != 0x14);
          local_d4 = local_d4 + 1;
        } while (local_d4 != 0x14);
        uVar24 = 8;
        if ((int)uVar23 < 8) {
          uVar24 = uVar23 + 1;
        }
        uVar23 = uVar24;
      } while (uVar24 != 8);
      uVar23 = 6;
      if ((int)uVar25 < 6) {
        uVar23 = uVar25 + 1;
      }
      uVar25 = uVar23;
    } while (uVar23 != 6);
  }
  return;
}

