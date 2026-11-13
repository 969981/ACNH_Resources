
/* WARNING: Removing unreachable block (ram,0x014a5acc) */
/* WARNING: Removing unreachable block (ram,0x014a5b5c) */
/* WARNING: Removing unreachable block (ram,0x014a5bec) */
/* WARNING: Removing unreachable block (ram,0x014a5c7c) */

bool FUN_014a5960(long *param_1,undefined ***param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined **local_128;
  undefined *puStack_120;
  undefined **local_118;
  undefined4 local_110;
  undefined **local_108;
  undefined8 local_100;
  int local_f8;
  undefined *puStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined *puStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined *puStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined *puStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined3 local_90;
  undefined1 uStack_8d;
  undefined3 uStack_8c;
  int local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  
  if (param_1 == (long *)0x0) {
    return false;
  }
  local_78 = 0;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar6 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar17 + 7);
  local_70 = FUN_017baf44();
  puVar5 = PTR_DAT_04bb2010;
  local_70 = local_70 & 1;
  local_84 = 0;
  local_118 = param_2[2];
  local_110 = *(undefined4 *)(param_2 + 3);
  local_80 = PTR_DAT_04bb3140 + 0x10;
  local_f8 = 0;
  puStack_120 = PTR_DAT_04bb2010 + 0x10;
  local_128 = &PTR_LAB_049a6570;
  local_108 = &puStack_f4;
  local_100 = 4;
  if (&local_128 != param_2) {
    iVar2 = *(int *)(param_2 + 6);
    iVar6 = iVar2;
    if (3 < iVar2) {
      iVar6 = 4;
    }
    if (0 < iVar2) {
      ppuVar16 = param_2[4];
      iVar2 = 0;
      if (*(int *)(param_2 + 5) <= *(int *)((long)param_2 + 0x2c)) {
        iVar2 = *(int *)(param_2 + 5);
      }
      iVar2 = *(int *)((long)param_2 + 0x2c) - iVar2;
      uStack_ec = *(undefined4 *)(ppuVar16 + (long)iVar2 * 3 + 1);
      uStack_e8 = *(undefined4 *)((long)ppuVar16 + (long)iVar2 * 0x18 + 0xc);
      puStack_f4 = PTR_DAT_04bb2010 + 0x10;
      uStack_e4 = *(undefined4 *)(ppuVar16 + (long)iVar2 * 3 + 2);
      local_f8 = 1;
      if (iVar6 != 1) {
        lVar12 = (long)*(int *)((long)param_2 + 0x2c) + 1;
        ppuVar16 = param_2[4];
        iVar2 = 0;
        if (*(int *)(param_2 + 5) <= (int)lVar12) {
          iVar2 = *(int *)(param_2 + 5);
        }
        lVar12 = lVar12 - iVar2;
        uStack_d4 = *(undefined4 *)(ppuVar16 + lVar12 * 3 + 1);
        uStack_d0 = *(undefined4 *)((long)ppuVar16 + lVar12 * 0x18 + 0xc);
        puStack_dc = PTR_DAT_04bb2010 + 0x10;
        uStack_cc = *(undefined4 *)(ppuVar16 + lVar12 * 3 + 2);
        local_f8 = 2;
        if (iVar6 != 2) {
          lVar12 = (long)*(int *)((long)param_2 + 0x2c) + 2;
          ppuVar16 = param_2[4];
          iVar2 = 0;
          if (*(int *)(param_2 + 5) <= (int)lVar12) {
            iVar2 = *(int *)(param_2 + 5);
          }
          lVar12 = lVar12 - iVar2;
          uStack_bc = *(undefined4 *)(ppuVar16 + lVar12 * 3 + 1);
          uStack_b8 = *(undefined4 *)((long)ppuVar16 + lVar12 * 0x18 + 0xc);
          puStack_c4 = PTR_DAT_04bb2010 + 0x10;
          uStack_b4 = *(undefined4 *)(ppuVar16 + lVar12 * 3 + 2);
          local_f8 = 3;
          if (iVar6 != 3) {
            lVar12 = (long)*(int *)((long)param_2 + 0x2c) + 3;
            ppuVar16 = param_2[4];
            iVar6 = 0;
            if (*(int *)(param_2 + 5) <= (int)lVar12) {
              iVar6 = *(int *)(param_2 + 5);
            }
            lVar12 = lVar12 - iVar6;
            local_f8 = 4;
            uStack_a4 = *(undefined4 *)(ppuVar16 + lVar12 * 3 + 1);
            uStack_a0 = *(undefined4 *)((long)ppuVar16 + lVar12 * 0x18 + 0xc);
            puStack_ac = PTR_DAT_04bb2010 + 0x10;
            uStack_9c = *(undefined4 *)(ppuVar16 + lVar12 * 3 + 2);
          }
        }
      }
    }
  }
  local_90 = (undefined3)*(undefined4 *)(param_2 + 0x13);
  uStack_8d = (undefined1)*(undefined4 *)((long)param_2 + 0x9b);
  uStack_8c = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x9b) >> 8);
  puVar8 = (uint *)FUN_014fbd50(&local_80,0,&puStack_120);
  uVar3 = *puVar8;
  if ((uVar3 != 0) && (lVar12 = *(long *)PTR_DAT_04bb27c0, lVar12 != 0)) {
    plVar20 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                        ((ulong)(uVar3 >> 0x11) & 0x7ff8));
    if ((plVar20 == (long *)0x0) ||
       (((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar20 + 0x46) != uVar3)))) {
      plVar20 = (long *)0x0;
    }
    if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar9 + 0x60))();
    }
    if (plVar20 != (long *)0x0) {
      uVar4 = *(uint *)(plVar20 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
      if ((uVar4 >> 4 & 1) != 0) {
        lVar15 = plVar20[0xf];
        if (*(long *)(lVar15 + 0x280) == lVar15 + 0x278) {
          lVar12 = 0;
        }
        else {
          lVar18 = (long)*(int *)(lVar15 + 0x28c);
          lVar12 = 0;
          lVar19 = *(long *)(lVar15 + 0x280) - lVar18;
          do {
            if ((*(byte *)(lVar19 + 0x30) >> 1 & 1) == 0) {
LAB_014a5df4:
              lVar13 = 0;
            }
            else {
              uVar10 = FUN_03f2d924(lVar19 + 0x28);
              if ((uVar10 & 1) == 0) goto LAB_014a5df4;
              iVar6 = FUN_03f2da54(lVar19 + 0x28);
              lVar13 = (long)iVar6;
            }
            lVar12 = lVar13 + lVar12;
            lVar19 = *(long *)(lVar19 + lVar18 + 8) - lVar18;
          } while (lVar19 != (lVar15 + 0x278) - lVar18);
        }
        iVar6 = local_f8;
        if (local_f8 != 0) {
          iVar2 = local_84 + 1;
          iVar21 = 0;
          puVar1 = PTR_DAT_04bb3290 + 0x10;
          plVar20 = (long *)PTR_DAT_04bb27c0;
          do {
            iVar7 = 0;
            if ((int)local_100 <= local_100._4_4_ + iVar21) {
              iVar7 = (int)local_100;
            }
            iVar7 = (local_100._4_4_ + iVar21) - iVar7;
            local_138 = *(undefined4 *)(local_108 + (long)iVar7 * 3 + 1);
            local_134 = *(undefined4 *)((long)local_108 + (long)iVar7 * 0x18 + 0xc);
            local_130 = *(undefined4 *)(local_108 + (long)iVar7 * 3 + 2);
            local_140 = puVar5 + 0x10;
            puVar8 = (uint *)FUN_014fbd50(&local_80,iVar2,&local_140);
            uVar4 = *puVar8;
            if (uVar4 != 0) {
              lVar15 = *plVar20;
              if (lVar15 != 0) {
                plVar9 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                                   ((ulong)(uVar4 >> 0x11) & 0x7ff8));
                if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
                   (*(uint *)(plVar9 + 0x46) != uVar4)) {
                  plVar9 = (long *)0x0;
                }
                if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
                  plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                         (*(long *)PTR_DAT_04bb3350 + 0x68));
                  (**(code **)(*plVar11 + 0x60))();
                }
                if (plVar9 != (long *)0x0) {
                  uVar4 = *(uint *)(plVar9 + 0x49);
                  if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar7 != 0)) {
                    *(undefined **)PTR_DAT_04bb5920 = puVar1;
                    __cxa_guard_release(PTR_DAT_04bb5928);
                  }
                  (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
                  if ((uVar4 >> 4 & 1) != 0) {
                    lVar15 = plVar9[0xf];
                    if (*(long *)(lVar15 + 0x280) == lVar15 + 0x278) {
                      lVar19 = 0;
                    }
                    else {
                      lVar13 = (long)*(int *)(lVar15 + 0x28c);
                      lVar19 = 0;
                      lVar18 = *(long *)(lVar15 + 0x280) - lVar13;
                      do {
                        if ((*(byte *)(lVar18 + 0x30) >> 1 & 1) == 0) {
LAB_014a5ff0:
                          lVar14 = 0;
                        }
                        else {
                          uVar10 = FUN_03f2d924(lVar18 + 0x28);
                          if ((uVar10 & 1) == 0) goto LAB_014a5ff0;
                          iVar7 = FUN_03f2da54(lVar18 + 0x28);
                          lVar14 = (long)iVar7;
                        }
                        lVar19 = lVar14 + lVar19;
                        lVar18 = *(long *)(lVar18 + lVar13 + 8) - lVar13;
                      } while (lVar18 != (lVar15 + 0x278) - lVar13);
                    }
                    lVar12 = lVar19 + lVar12;
                    plVar20 = (long *)PTR_DAT_04bb27c0;
                  }
                }
              }
            }
            iVar21 = iVar21 + 1;
          } while (iVar6 != iVar21);
        }
        goto LAB_014a5d98;
      }
    }
  }
  lVar12 = 0;
LAB_014a5d98:
  *param_1 = lVar12;
  return uVar3 != 0;
}

