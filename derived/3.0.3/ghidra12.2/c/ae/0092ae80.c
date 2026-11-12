
/* WARNING: Removing unreachable block (ram,0x0092b2d4) */
/* WARNING: Removing unreachable block (ram,0x0092b2ec) */

void FUN_0092ae80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined *local_a8;
  char *pcStack_a0;
  undefined1 auStack_98 [8];
  long local_90;
  undefined1 uStack_69;
  undefined1 *local_68;
  
  puVar1 = PTR_DAT_04bb3728;
  puVar2 = PTR_DAT_04bb2020;
  if (*(char *)(param_1 + 0x48) != '\0') {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb3728;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0xb0) != 1)) {
    local_a8 = PTR_DAT_04bb2020 + 0x10;
    pcStack_a0 = "cloud_island_guest_end";
    lVar10 = *(long *)PTR_DAT_04bb39b0;
    pbVar11 = PTR_DAT_04bb32e0;
    if (lVar10 == 0) {
LAB_0092afbc:
      if (*pbVar11 < 8) goto LAB_0092b034;
LAB_0092afc8:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0092b02c:
        pbVar11 = PTR_DAT_04bb5038;
        goto LAB_0092b034;
      }
      lVar10 = **(long **)PTR_DAT_04bb27d0;
      bVar12 = *(byte *)(lVar10 + 0x473);
      pbVar11 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar3 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar11 = (byte *)(lVar10 + 0x471);
        }
      }
      bVar12 = *pbVar11;
      bVar6 = 7 < bVar12;
      if (bVar6) {
        bVar12 = 0xff;
      }
      local_68 = (undefined1 *)CONCAT71(local_68._1_7_,bVar12);
      if (bVar6) goto LAB_0092b02c;
    }
    else {
      if (*(int *)(lVar10 + 0x15c) != 0) {
        pbVar11 = (byte *)(lVar10 + 0x158);
      }
      if (7 < *pbVar11) {
        if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0092afbc;
        }
        goto LAB_0092afc8;
      }
LAB_0092b034:
      bVar12 = *pbVar11;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_68 = (undefined1 *)CONCAT71(local_68._1_7_,bVar12);
    }
    FUN_025ffac8(auStack_98,&local_a8,&local_68);
    local_a8 = puVar2 + 0x10;
    pcStack_a0 = "SessionId";
    uVar8 = 0;
    if (**(long **)PTR_DAT_04bb27d0 != 0) {
      uVar8 = *(undefined4 *)(**(long **)PTR_DAT_04bb27d0 + 0x548);
    }
    if (local_90 != 0) {
      FUN_026054d0(local_90,&local_a8,uVar8);
    }
    local_a8 = puVar2 + 0x10;
    pcStack_a0 = "FieldSize";
    uVar13 = *(uint *)(*(long *)puVar1 + 0xb0);
    if (uVar13 == 0xffffffff) {
LAB_0092b660:
      local_a8 = puVar2 + 0x10;
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    local_68 = &uStack_69;
    iVar7 = (*(code *)(&PTR_LAB_04a43170)[uVar13])(&local_68,*(long *)puVar1 + 0x58);
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,iVar7);
    if (local_90 != 0) {
      FUN_026054d0(local_90,&local_a8,(long)iVar7);
    }
    local_a8 = puVar2 + 0x10;
    pcStack_a0 = "OutsidePattern";
    uVar13 = *(uint *)(*(long *)puVar1 + 0xb0);
    if (uVar13 == 0xffffffff) goto LAB_0092b660;
    local_68 = &uStack_69;
    iVar7 = (*(code *)(&PTR_LAB_04a43188)[uVar13])(&local_68,*(long *)puVar1 + 0x58);
    if (local_90 != 0) {
      local_68._0_4_ = iVar7;
      FUN_026054d0(local_90,&local_a8,(long)iVar7);
    }
    bVar6 = false;
    goto LAB_0092b25c;
  }
  if (*(char *)(lVar10 + 0xa0) == '\0') {
    return;
  }
  uVar14 = *(undefined8 *)(lVar10 + 0x98);
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  iVar7 = *(int *)(lVar10 + 0x5c);
  iVar4 = *(int *)(lVar10 + 0x60);
  pcStack_a0 = "cloud_island_host_end";
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_0092b154:
    if (*pbVar11 < 8) goto LAB_0092b1cc;
LAB_0092b160:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0092b1c4:
      pbVar11 = PTR_DAT_04bb5038;
      goto LAB_0092b1cc;
    }
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    bVar12 = *(byte *)(lVar10 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar12 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
      if (7 < bVar12) {
        puVar3 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar11 = (byte *)(lVar10 + 0x471);
      }
    }
    bVar12 = *pbVar11;
    bVar6 = 7 < bVar12;
    if (bVar6) {
      bVar12 = 0xff;
    }
    local_68 = (undefined1 *)CONCAT71(local_68._1_7_,bVar12);
    if (bVar6) goto LAB_0092b1c4;
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0092b154;
      }
      goto LAB_0092b160;
    }
LAB_0092b1cc:
    bVar12 = *pbVar11;
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    local_68 = (undefined1 *)CONCAT71(local_68._1_7_,bVar12);
  }
  FUN_025ffac8(auStack_98,&local_a8,&local_68);
  pcStack_a0 = "DataId";
  if (local_90 != 0) {
    local_a8 = puVar2 + 0x10;
    FUN_02605660(local_90,&local_a8,uVar14);
    pcStack_a0 = "FieldSize";
    if (local_90 != 0) {
      local_a8 = puVar2 + 0x10;
      FUN_026054d0(local_90,&local_a8,(long)iVar7);
      local_a8 = puVar2 + 0x10;
      pcStack_a0 = "OutsidePattern";
      if (local_90 != 0) {
        FUN_026054d0(local_90,&local_a8,(long)iVar4);
      }
    }
  }
  bVar6 = true;
LAB_0092b25c:
  pcStack_a0 = "LeaveType";
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,*(int *)(*(long *)puVar1 + 0x298));
  if (local_90 != 0) {
    local_a8 = puVar2 + 0x10;
    FUN_026054d0(local_90,&local_a8,(long)*(int *)(*(long *)puVar1 + 0x298));
  }
  pcStack_a0 = "PlayingSec";
  local_a8 = puVar2 + 0x10;
  lVar10 = nn::os::GetSystemTick();
  if (local_90 != 0) {
    lVar5 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar5 = (lVar10 - *(long *)(param_1 + 0x40)) / *(long *)PTR_DAT_04bb29d0;
    }
    FUN_026054d0(local_90,&local_a8,lVar5);
  }
  local_68 = (undefined1 *)((ulong)local_68 & 0xffffffff00000000);
  if (((DAT_04cf2658 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04cf2658), iVar7 != 0)) {
    DAT_04cf263c = 0x70000000d;
    DAT_04cf2644 = 0x900000008;
    DAT_04cf264c = 0xb0000000a;
    DAT_04cf2654 = 0xc;
    __cxa_guard_release(&DAT_04cf2658);
  }
  if (bVar6) {
    puVar1 = puVar2 + 0x10;
    pcStack_a0 = s_call_cloud_island_npc_04928628;
    local_a8 = puVar1;
    if (local_90 != 0) {
      FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 4));
      pcStack_a0 = s_import_my_design_count_0492863f;
      local_a8 = puVar1;
      if (local_90 != 0) {
        FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 8));
        puVar1 = puVar2 + 0x10;
        pcStack_a0 = s_draw_my_design_count_04928656;
        local_a8 = puVar1;
        if (local_90 != 0) {
          FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0xc));
          pcStack_a0 = s_pave_my_design_count_0492866b;
          local_a8 = puVar1;
          if (local_90 != 0) {
            FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x10));
            puVar1 = puVar2 + 0x10;
            pcStack_a0 = s_bury_pitfall_seed_count_04928680;
            local_a8 = puVar1;
            if (local_90 != 0) {
              FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x14));
              pcStack_a0 = s_catch_insect_count_04928698;
              local_a8 = puVar1;
              if (local_90 != 0) {
                FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x18));
                puVar1 = puVar2 + 0x10;
                pcStack_a0 = s_catch_fish_count_049286ab;
                local_a8 = puVar1;
                if (local_90 != 0) {
                  FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x1c));
                  pcStack_a0 = s_change_house_parts_count_049286bc;
                  local_a8 = puVar1;
                  if (local_90 != 0) {
                    FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x20));
                    puVar1 = puVar2 + 0x10;
                    pcStack_a0 = s_move_house_count_049286d5;
                    local_a8 = puVar1;
                    if (local_90 != 0) {
                      FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x24));
                      pcStack_a0 = s_build_bridge_count_049286e6;
                      local_a8 = puVar1;
                      if (local_90 != 0) {
                        FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x28));
                        puVar1 = puVar2 + 0x10;
                        pcStack_a0 = s_remove_bridge_count_049286f9;
                        local_a8 = puVar1;
                        if (local_90 != 0) {
                          FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x2c));
                          pcStack_a0 = s_build_slope_count_0492870d;
                          local_a8 = puVar1;
                          if (local_90 != 0) {
                            FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x30));
                            puVar2 = puVar2 + 0x10;
                            pcStack_a0 = s_remove_slope_count_0492871f;
                            local_a8 = puVar2;
                            if (local_90 != 0) {
                              FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x34));
                              pcStack_a0 = s_overwrite_cloud_island_name_04928732;
                              local_a8 = puVar2;
                              if (local_90 != 0) {
                                FUN_026054d0(local_90,&local_a8,(long)*(int *)(param_1 + 0x38));
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar7 = 0;
    uVar13 = 0;
    uVar9 = (uint)DAT_04cf263c;
    do {
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,uVar13);
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar9);
      if (uVar9 != uVar13) {
        local_a8 = (undefined *)CONCAT44(local_a8._4_4_,DAT_04cf263c._4_4_);
        if (DAT_04cf263c._4_4_ != uVar13) {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(uint)DAT_04cf2644);
          if ((uint)DAT_04cf2644 != uVar13) {
            local_a8 = (undefined *)CONCAT44(local_a8._4_4_,DAT_04cf2644._4_4_);
            if (DAT_04cf2644._4_4_ != uVar13) {
              local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(uint)DAT_04cf264c);
              if ((uint)DAT_04cf264c != uVar13) {
                local_a8 = (undefined *)CONCAT44(local_a8._4_4_,DAT_04cf264c._4_4_);
                if (DAT_04cf264c._4_4_ != uVar13) {
                  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,DAT_04cf2654);
                  if (DAT_04cf2654 != uVar13) {
                    pcStack_a0 = "";
                    if (uVar13 < 0xe) {
                      pcStack_a0 = (&PTR_s_call_cloud_island_npc_04928750)[uVar13];
                    }
                    local_a8 = puVar2 + 0x10;
                    if (local_90 != 0) {
                      FUN_026054d0(local_90,&local_a8,(long)((int *)(param_1 + 4))[iVar7]);
                      uVar9 = (uint)DAT_04cf263c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      iVar7 = iVar7 + 1;
    } while (uVar13 != 0xe);
  }
  FUN_02601530(auStack_98);
  return;
}

