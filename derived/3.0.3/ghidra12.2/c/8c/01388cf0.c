
/* WARNING: Removing unreachable block (ram,0x01388d94) */
/* WARNING: Removing unreachable block (ram,0x01388da0) */

void FUN_01388cf0(uint param_1)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  short sVar11;
  undefined1 uVar12;
  long lVar13;
  undefined1 uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int local_148;
  int iStack_144;
  int local_12c;
  undefined *local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  long local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  int local_70;
  int local_6c;
  
  local_128 = (undefined *)CONCAT44(local_128._4_4_,param_1);
  if (param_1 != 0) {
    if (param_1 == 0) {
      lVar13 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    }
    else {
      plVar2 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar5 = plVar2 + param_1;
      if (0x38 < param_1) {
        plVar5 = plVar2;
      }
      lVar13 = *plVar5;
    }
    if (lVar13 != 0) {
      local_148 = 0;
      iStack_144 = 0;
      local_12c = 0;
      iVar16 = 0;
      local_100 = (undefined **)CONCAT44(local_100._4_4_,1);
      if (param_1 == 1) {
        iVar16 = *(int *)(DAT_050d57c8 + 0x28);
        iStack_144 = *(int *)(DAT_050d57c8 + 0x2c);
        local_12c = *(int *)(DAT_050d57c8 + 0x38);
        local_148 = *(int *)(DAT_050d57c8 + 0x3c);
      }
      if (*(long *)(lVar13 + 0xd0) != 0 && *(long *)(lVar13 + 0xe0) != 0) {
        local_88 = lVar13 + 0x40;
        local_80 = lVar13 + 0x50;
        iVar6 = *(int *)(lVar13 + 0x48);
        local_6c = *(int *)(lVar13 + 0x4c);
        iVar1 = *(int *)(lVar13 + 0x5c) + 1;
        puVar3 = PTR_DAT_04bb2010 + 0x10;
        if (iVar1 != local_6c) {
          local_78 = puVar3;
          local_70 = iVar6;
          do {
            if ((((param_1 != 1) || (local_70 < iVar16)) || (local_12c < local_70)) ||
               ((local_6c < iStack_144 || (local_148 < local_6c)))) {
              local_90 = 0xfffe;
              FUN_0277d4ac(&local_90);
              if (*(long *)(lVar13 + 0xe0) == 0) {
                sVar11 = DAT_05586008;
                uVar12 = DAT_0558600a;
                uVar14 = DAT_0558600b;
                local_90._4_4_ = DAT_0558600c;
              }
              else {
                FUN_012e4d78(&local_100,*(long *)(lVar13 + 0xe0),&local_78);
                sVar11 = (short)local_100;
                uVar12 = local_100._2_1_;
                uVar14 = local_100._3_1_;
                local_90._4_4_ = local_100._4_4_;
              }
              lVar15 = DAT_05150358;
              local_90._0_4_ = CONCAT13(uVar14,CONCAT12(uVar12,sVar11));
              if (1 < (ushort)(sVar11 + 3U)) {
                if ((((DAT_05150358 == 0) || (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
                    ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0 ||
                     (((*(long *)(DAT_05150358 + 0x488) == 0 ||
                       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)) ||
                      (*(long *)(DAT_05150358 + 0x2b0) == 0)))))) ||
                   (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)) {
LAB_01388fc0:
                  local_100 = &PTR_LAB_04a88288;
                  local_f8 = (undefined *)CONCAT44(local_90._4_4_,(undefined4)local_90);
                  iVar8 = FUN_0277d6c4(&local_f8);
                  if (6 < iVar8 - 0xf619U) {
                    if (param_1 == 0x32) {
                      uVar10 = FUN_0277ff58(&local_90);
                      plVar2 = (long *)PTR_DAT_04bb43c0;
                    }
                    else {
                      uVar10 = FUN_0277f7f0(&local_90);
                      plVar2 = (long *)PTR_DAT_04bb43c0;
                    }
                    PTR_DAT_04bb43c0 = (undefined *)plVar2;
                    if ((uVar10 & 1) == 0) {
                      lVar17 = *plVar2;
                      uVar7 = FUN_0277d6c4(&local_90);
                      lVar15 = *plVar2;
                      if (lVar15 != 0) {
                        lVar17 = *(long *)(lVar17 + 0x57e58);
                        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                        if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                          local_98 = 0;
                          local_a8 = &PTR_FUN_04a36b50;
                          local_a0 = (undefined4)local_90;
                          uStack_9c = local_90._4_4_;
                          uVar7 = FUN_0277d6c4(&local_a0);
                          if (DAT_053274a0 != 0) {
                            lVar15 = *(long *)(lVar15 + 0x57e58);
                            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                            if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                              lVar15 = *(long *)PTR_DAT_04bc0428;
                              uVar7 = FUN_0277d6c4(&local_90);
                              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                              if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                                 (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) +
                                                    (long)(int)uVar7 * 8), lVar15 != 0)) {
                                local_98 = lVar15;
                              }
                            }
                          }
                          uVar10 = FUN_01ae59b0(&local_a8);
                          if ((uVar10 & 1) != 0) {
                            iVar8 = FUN_01ae7550(&local_a8);
                            local_100 = (undefined **)CONCAT44(local_100._4_4_,iVar8);
                            if ((iVar8 - 5U & 0xfffffffd) != 0) goto LAB_01389010;
                          }
                          uStack_b0 = 0;
                          local_c0 = 0xfffe;
                          local_b8 = puVar3;
                          FUN_0277d4ac(&local_c0);
                          if (*(long *)(lVar13 + 0xd0) == 0) {
                            uVar12 = DAT_0558600a;
                            uVar14 = DAT_0558600b;
                            uVar9 = DAT_0558600c;
                            sVar11 = DAT_05586008;
                          }
                          else {
                            FUN_012e4f58(&local_100,*(long *)(lVar13 + 0xd0),&local_78,&local_b8);
                            uVar12 = local_100._2_1_;
                            uVar14 = local_100._3_1_;
                            uVar9 = local_100._4_4_;
                            sVar11 = (short)local_100;
                          }
                          puVar4 = PTR_DAT_04bb43c0;
                          local_c0._0_4_ = CONCAT13(uVar14,CONCAT12(uVar12,sVar11));
                          lVar15 = *(long *)PTR_DAT_04bb43c0;
                          local_c0 = CONCAT44(uVar9,(undefined4)local_c0);
                          uVar7 = FUN_0277d6c4(&local_c0);
                          lVar17 = *(long *)puVar4;
                          if (lVar17 != 0) {
                            lVar15 = *(long *)(lVar15 + 0x57e58);
                            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                            if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                              local_c8 = 0;
                              local_d8 = &PTR_FUN_04a36b50;
                              local_d0 = (undefined4)local_c0;
                              uStack_cc = local_c0._4_4_;
                              uVar7 = FUN_0277d6c4(&local_d0);
                              if (DAT_053274a0 != 0) {
                                lVar15 = *(long *)(lVar17 + 0x57e58);
                                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                                if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0
                                   )) {
                                  lVar15 = *(long *)PTR_DAT_04bc0428;
                                  uVar7 = FUN_0277d6c4(&local_c0);
                                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                                  if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                                     (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) +
                                                        (long)(int)uVar7 * 8), lVar15 != 0)) {
                                    local_c8 = lVar15;
                                  }
                                }
                              }
                              uVar10 = FUN_01ae59b0(&local_d8);
                              if ((uVar10 & 1) != 0) {
                                local_f0 = 0;
                                puVar4 = PTR_DAT_04bb2010 + 0x10;
                                local_e0 = 0;
                                local_100 = &PTR_FUN_0498d548;
                                local_f8 = puVar4;
                                local_e8 = puVar4;
                                uVar9 = FUN_01ae98d0(&local_d8);
                                local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar9);
                                uVar10 = FUN_01500520(&local_100,&local_c0,&local_b8,&local_128);
                                if ((uVar10 & 1) != 0) {
                                  local_108 = 0;
                                  local_118 = 0;
                                  local_128 = PTR_DAT_04bbc1a0 + 0x10;
                                  puStack_120 = puVar4;
                                  local_110 = puVar4;
                                  FUN_01afb480(&local_a8,&local_128);
                                  if ((int)local_f0 <= (int)local_118 + local_70) {
                                    if ((int)local_108 + local_70 <= (int)local_e0) {
                                      if (local_f0._4_4_ <= local_118._4_4_ + local_6c) {
                                        if (local_108._4_4_ + local_6c <= local_e0._4_4_)
                                        goto LAB_01389020;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_01389010;
                        }
                      }
                      goto LAB_01389020;
                    }
                  }
                }
                else {
                  uVar7 = FUN_0277d6c4(&local_90);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
                     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
                  goto LAB_01388fc0;
                }
LAB_01389010:
                if (*(long *)(lVar13 + 0xe0) != 0) {
                  FUN_012e5af4(*(long *)(lVar13 + 0xe0),&local_78);
                }
              }
            }
LAB_01389020:
            if (local_70 < *(int *)(local_80 + 8)) {
              local_70 = local_70 + 1;
            }
            else {
              local_70 = *(int *)(local_88 + 8);
              local_6c = local_6c + 1;
            }
          } while ((iVar6 != local_70) || (iVar1 != local_6c));
        }
      }
    }
  }
  return;
}

