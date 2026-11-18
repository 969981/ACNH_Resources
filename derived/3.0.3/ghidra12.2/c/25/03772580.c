
/* WARNING: Type propagation algorithm not settling */

int FUN_03772580(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int local_b4 [2];
  undefined8 local_ac;
  undefined4 local_a4;
  uint local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb3968;
  lVar12 = *(long *)PTR_DAT_04bb4e28;
  if (lVar11 == 0 || lVar12 == 0) goto LAB_037729d0;
  if (*(int *)(lVar12 + 0xe0) != 0) {
    lVar6 = 0;
    lVar8 = (long)*(int *)(lVar12 + 0xe0) << 3;
    do {
      if (*param_1 == *(uint *)(*(long *)(*(long *)(lVar12 + 0xe8) + lVar6 * 8) + 8)) {
        local_b4[0] = *(int *)(*(long *)(*(long *)(lVar12 + 0xe8) + lVar6 * 8) + 0xd8);
        goto LAB_0377260c;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  local_b4[0] = 0;
LAB_0377260c:
  local_98 = (undefined **)0x400000003;
  local_90 = (int *)0x600000005;
  local_88 = (int *)0x200000001;
  local_80 = 0xe0000000d;
  local_78 = 0xf00000010;
  local_70 = 0x90000000a;
  local_68 = 0x1100000011;
  local_60 = 0xb0000000b;
  local_58 = 0xf00000012;
  local_50 = 0x90000000c;
  local_48 = 0xa00000008;
  local_98._0_4_ = 3;
  if (local_b4[0] == 3) {
    local_98._4_4_ = 4;
    local_9c = local_98._4_4_;
  }
  else {
    local_9c = (int)local_98;
    if (local_b4[0] != 4) {
      local_90._0_4_ = 5;
      if (local_b4[0] == 5) {
        local_90._4_4_ = 6;
        local_9c = local_90._4_4_;
      }
      else {
        local_9c = (int)local_90;
        if (local_b4[0] != 6) {
          local_88._0_4_ = 1;
          if (local_b4[0] == 1) {
            local_88._4_4_ = 2;
            local_9c = local_88._4_4_;
          }
          else {
            local_9c = (int)local_88;
            if (local_b4[0] != 2) {
              local_80._0_4_ = 0xd;
              if (local_b4[0] == 0xd) {
                local_80._4_4_ = 0xe;
                local_9c = local_80._4_4_;
              }
              else {
                local_9c = (int)local_80;
                if (local_b4[0] != 0xe) {
                  local_78._0_4_ = 0x10;
                  if (local_b4[0] == 0x10) {
                    local_78._4_4_ = 0xf;
                    local_9c = local_78._4_4_;
                  }
                  else {
                    local_9c = (int)local_78;
                    if (local_b4[0] != 0xf) {
                      local_70._0_4_ = 10;
                      if (local_b4[0] == 10) {
                        local_70._4_4_ = 9;
                        local_9c = local_70._4_4_;
                      }
                      else {
                        local_9c = (int)local_70;
                        if (local_b4[0] != 9) {
                          local_68._0_4_ = 0x11;
                          if (local_b4[0] == 0x11) {
                            local_68._4_4_ = 0x11;
                            local_9c = local_68._4_4_;
                          }
                          else {
                            local_9c = (int)local_68;
                            if (local_b4[0] != 0x11) {
                              local_60._0_4_ = 0xb;
                              if (local_b4[0] == 0xb) {
                                local_60._4_4_ = 0xb;
                                local_9c = local_60._4_4_;
                              }
                              else {
                                local_9c = (int)local_60;
                                if (local_b4[0] != 0xb) {
                                  local_58._0_4_ = 0x12;
                                  if (local_b4[0] == 0x12) {
                                    local_58._4_4_ = 0xf;
                                    local_9c = local_58._4_4_;
                                  }
                                  else {
                                    local_9c = (int)local_58;
                                    if (local_b4[0] != 0xf) {
                                      local_50._0_4_ = 0xc;
                                      if (local_b4[0] == 0xc) {
                                        local_50._4_4_ = 9;
                                        local_9c = local_50._4_4_;
                                      }
                                      else {
                                        local_9c = (int)local_50;
                                        if (local_b4[0] != 9) {
                                          local_48._0_4_ = 8;
                                          if (local_b4[0] == 8) {
                                            local_48._4_4_ = 10;
                                            local_9c = local_48._4_4_;
                                          }
                                          else {
                                            local_9c = (int)local_48;
                                            if (local_b4[0] != 10) goto LAB_037729d0;
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
            }
          }
        }
      }
    }
  }
  if ((local_9c == 0) || (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 == 0)) goto LAB_037729d0;
  uVar13 = *param_1;
  if ((uVar13 == 0) ||
     (((plVar10 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0 ||
       ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar13)))) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_03772914;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_03772914:
    uVar13 = 0;
  }
  if (plVar10 != (long *)0x0) {
    lVar6 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      local_a0 = *param_1;
      local_a4 = *(undefined4 *)(plVar10[0xd] + 0x280);
      local_ac = *(undefined8 *)(plVar10[0xd] + 0x278);
      local_b4[0] = *(int *)PTR_DAT_04bb3238;
      local_b4[1] = 0x7f7fffff;
      local_80 = lVar12;
      if (*(int *)(lVar12 + 0xe0) != 0) {
        lVar7 = *(long *)(lVar12 + 0xe8);
        lVar8 = (long)*(int *)(lVar12 + 0xe0) << 3;
        lVar12 = 0;
        lVar6 = lVar8;
        do {
          if (local_a0 == *(uint *)(*(long *)(lVar7 + lVar12 * 8) + 8)) {
            if (*(int *)(*(long *)(lVar7 + lVar12 * 8) + 0xd8) == 0xf) goto LAB_03772a74;
            break;
          }
          lVar12 = lVar12 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
        lVar12 = 0;
        lVar6 = lVar8;
        do {
          if (local_a0 == *(uint *)(*(long *)(lVar7 + lVar12 * 8) + 8)) {
            if (*(int *)(*(long *)(lVar7 + lVar12 * 8) + 0xd8) == 9) goto LAB_03772a74;
            break;
          }
          lVar12 = lVar12 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
        lVar12 = 0;
        do {
          if (local_a0 == *(uint *)(*(long *)(lVar7 + lVar12 * 8) + 8)) {
            if (*(int *)(*(long *)(lVar7 + lVar12 * 8) + 0xd8) == 8) {
LAB_03772a74:
              local_90 = local_b4;
              local_98 = &PTR_FUN_04b46c00;
              local_88 = &local_9c;
              if (*(int *)(lVar11 + 0xb88) == 0) {
                return local_b4[0];
              }
              lVar12 = (long)*(int *)(lVar11 + 0xb88) << 3;
              puVar9 = *(undefined8 **)(lVar11 + 0xb90);
              do {
                (*(code *)*local_98)(&local_98,*puVar9);
                lVar12 = lVar12 + -8;
                puVar9 = puVar9 + 1;
              } while (lVar12 != 0);
              return local_b4[0];
            }
            break;
          }
          lVar12 = lVar12 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      local_90 = local_b4;
      local_98 = &PTR_FUN_04b46c28;
      local_88 = &local_9c;
      if (*(int *)(lVar11 + 0xb88) != 0) {
        lVar12 = (long)*(int *)(lVar11 + 0xb88) << 3;
        puVar9 = *(undefined8 **)(lVar11 + 0xb90);
        do {
          (*(code *)*local_98)(&local_98,*puVar9);
          lVar12 = lVar12 + -8;
          puVar9 = puVar9 + 1;
        } while (lVar12 != 0);
      }
      return local_b4[0];
    }
  }
LAB_037729d0:
  return *(undefined4 *)PTR_DAT_04bb3238;
}

