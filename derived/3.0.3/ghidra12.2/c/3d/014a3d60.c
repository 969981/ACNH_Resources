
/* WARNING: Removing unreachable block (ram,0x014a3fac) */
/* WARNING: Removing unreachable block (ram,0x014a4038) */
/* WARNING: Removing unreachable block (ram,0x014a40c4) */
/* WARNING: Removing unreachable block (ram,0x014a4150) */

void FUN_014a3d60(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined **ppuVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined ***pppuVar24;
  long lVar25;
  uint uVar26;
  undefined ***pppuVar27;
  undefined *puVar28;
  int iVar29;
  ulong local_170;
  int local_15c;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_13c;
  ulong local_138;
  uint local_12c;
  undefined **local_128;
  undefined *puStack_120;
  int local_118;
  int local_114;
  int local_110;
  undefined **local_108;
  undefined8 local_100;
  uint local_f8;
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
  undefined4 uStack_90;
  undefined3 uStack_8c;
  int local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  
  plVar20 = *(long **)(param_1 + 0x1580);
  pppuVar3 = (undefined ***)(param_1 + 0x14d8);
  if (plVar20 == (long *)(param_1 + 0x1578)) {
    uVar19 = 0;
    iVar29 = 0;
  }
  else {
    iVar29 = 0;
    uVar19 = 0;
    pppuVar24 = (undefined ***)(plVar20 + -0x14);
    do {
      plVar20 = (long *)plVar20[1];
      local_128 = (undefined **)0x0;
      uVar8 = FUN_014a5960(&local_128,pppuVar24);
      pppuVar24 = (undefined ***)(plVar20 + -0x14);
      iVar29 = iVar29 + (uVar8 & 1);
      ppuVar17 = local_128;
      if ((uVar8 & 1) == 0) {
        ppuVar17 = (undefined **)0x0;
      }
      uVar19 = (long)ppuVar17 + uVar19;
    } while (pppuVar24 != pppuVar3);
  }
  local_78 = 0;
  uVar21 = *(ulong *)(param_1 + 0x16e20);
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar23 = &DAT_055c04a0;
  }
  else {
    puVar23 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar9 = FUN_006bd550(*puVar23,0);
      puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar23 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar23 + 7);
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  lVar14 = *(long *)(param_1 + 0x1580);
  local_84 = 0;
  pppuVar24 = (undefined ***)(lVar14 + -0xa0);
  local_80 = PTR_DAT_04bb3140 + 0x10;
  if (pppuVar24 == pppuVar3) {
    return;
  }
  local_170 = 0;
  if (uVar19 <= uVar21) {
    local_170 = uVar21 - uVar19;
  }
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bb3290 + 0x10;
  puVar28 = PTR_DAT_04bb2010;
LAB_014a3f0c:
  lVar14 = *(long *)(lVar14 + 8);
  if (*(char *)((long)pppuVar24 + 0x9e) != '\0') goto LAB_014a3f00;
  local_110 = *(int *)(pppuVar24 + 3);
  local_128 = &PTR_LAB_049a6570;
  local_118 = *(int *)(pppuVar24 + 2);
  local_114 = *(int *)((long)pppuVar24 + 0x14);
  local_f8 = 0;
  local_100 = 4;
  if (&local_128 != pppuVar24) {
    iVar6 = *(int *)(pppuVar24 + 6);
    iVar9 = iVar6;
    if (3 < iVar6) {
      iVar9 = 4;
    }
    if (0 < iVar6) {
      ppuVar17 = pppuVar24[4];
      iVar6 = 0;
      if (*(int *)(pppuVar24 + 5) <= *(int *)((long)pppuVar24 + 0x2c)) {
        iVar6 = *(int *)(pppuVar24 + 5);
      }
      iVar6 = *(int *)((long)pppuVar24 + 0x2c) - iVar6;
      uStack_ec = *(undefined4 *)(ppuVar17 + (long)iVar6 * 3 + 1);
      uStack_e8 = *(undefined4 *)((long)ppuVar17 + (long)iVar6 * 0x18 + 0xc);
      puStack_f4 = puVar28 + 0x10;
      uStack_e4 = *(undefined4 *)(ppuVar17 + (long)iVar6 * 3 + 2);
      local_f8 = 1;
      if (iVar9 != 1) {
        lVar18 = (long)*(int *)((long)pppuVar24 + 0x2c) + 1;
        ppuVar17 = pppuVar24[4];
        iVar6 = 0;
        if (*(int *)(pppuVar24 + 5) <= (int)lVar18) {
          iVar6 = *(int *)(pppuVar24 + 5);
        }
        lVar18 = lVar18 - iVar6;
        uStack_d4 = *(undefined4 *)(ppuVar17 + lVar18 * 3 + 1);
        uStack_d0 = *(undefined4 *)((long)ppuVar17 + lVar18 * 0x18 + 0xc);
        puStack_dc = puVar28 + 0x10;
        uStack_cc = *(undefined4 *)(ppuVar17 + lVar18 * 3 + 2);
        local_f8 = 2;
        if (iVar9 != 2) {
          lVar18 = (long)*(int *)((long)pppuVar24 + 0x2c) + 2;
          ppuVar17 = pppuVar24[4];
          iVar6 = 0;
          if (*(int *)(pppuVar24 + 5) <= (int)lVar18) {
            iVar6 = *(int *)(pppuVar24 + 5);
          }
          lVar18 = lVar18 - iVar6;
          uStack_bc = *(undefined4 *)(ppuVar17 + lVar18 * 3 + 1);
          uStack_b8 = *(undefined4 *)((long)ppuVar17 + lVar18 * 0x18 + 0xc);
          puStack_c4 = puVar28 + 0x10;
          uStack_b4 = *(undefined4 *)(ppuVar17 + lVar18 * 3 + 2);
          local_f8 = 3;
          if (iVar9 != 3) {
            lVar18 = (long)*(int *)((long)pppuVar24 + 0x2c) + 3;
            ppuVar17 = pppuVar24[4];
            iVar9 = 0;
            if (*(int *)(pppuVar24 + 5) <= (int)lVar18) {
              iVar9 = *(int *)(pppuVar24 + 5);
            }
            lVar18 = lVar18 - iVar9;
            local_f8 = 4;
            uStack_a4 = *(undefined4 *)(ppuVar17 + lVar18 * 3 + 1);
            uStack_a0 = *(undefined4 *)((long)ppuVar17 + lVar18 * 0x18 + 0xc);
            puStack_ac = puVar28 + 0x10;
            uStack_9c = *(undefined4 *)(ppuVar17 + lVar18 * 3 + 2);
          }
        }
      }
    }
  }
  uStack_90 = *(undefined4 *)(pppuVar24 + 0x13);
  uStack_8c = (undefined3)((uint)*(undefined4 *)((long)pppuVar24 + 0x9b) >> 8);
  iVar9 = *(int *)(*(long *)(param_1 + 0x48) + 0x2d8);
  puStack_120 = puVar1;
  local_108 = &puStack_f4;
  puVar11 = (uint *)FUN_014fbd50(&local_80,local_84,&puStack_120);
  local_12c = *puVar11;
  if (local_12c == 0) {
    if (0 < iVar9) {
      iVar9 = local_110;
      if (local_f8 != 0) {
        if (local_f8 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            iVar6 = local_100._4_4_ + uVar8;
            uVar8 = uVar8 + 2;
            iVar4 = 0;
            if ((int)local_100 <= iVar6) {
              iVar4 = (int)local_100;
            }
            iVar5 = 0;
            if ((int)local_100 <= iVar6 + 1) {
              iVar5 = (int)local_100;
            }
            iVar9 = *(int *)(local_108 + (long)((iVar6 + 1) - iVar5) * 3 + 2) +
                    *(int *)(local_108 + (long)(iVar6 - iVar4) * 3 + 2) + iVar9;
          } while ((local_f8 & 0xfffffffe) != uVar8);
        }
        if ((local_f8 & 1) != 0) {
          iVar6 = 0;
          if ((int)local_100 <= (int)(uVar8 + local_100._4_4_)) {
            iVar6 = (int)local_100;
          }
          iVar9 = *(int *)(local_108 + (long)(int)((uVar8 + local_100._4_4_) - iVar6) * 3 + 2) +
                  iVar9;
        }
      }
      if (iVar9 <= 200 - *(int *)(*(long *)(param_1 + 0x48) + 0x3d0)) {
        FUN_01a50240(&local_158,&local_80,local_84,&puStack_120);
        puVar7 = PTR_DAT_04bb43c0;
        lVar18 = *(long *)PTR_DAT_04bb43c0;
        uVar8 = FUN_0277d6c4(&local_158);
        if (*(long *)puVar7 == 0) goto LAB_014a3f00;
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if (*(uint *)(lVar18 + 0x1d8) <= uVar8) goto LAB_014a3f00;
        if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) == 0) goto LAB_014a3f00;
        lVar18 = FUN_015219e8(&local_158);
        uVar19 = lVar18 + local_170;
        if (259999999 < uVar19) {
          if (iVar29 < 1) {
            return;
          }
          plVar20 = *(long **)(param_1 + 0x1578);
          pppuVar27 = (undefined ***)(plVar20 + -0x14);
          if (pppuVar27 == pppuVar3) {
            return;
          }
          do {
            plVar20 = (long *)*plVar20;
            local_138 = 0;
            if (*(char *)((long)pppuVar27 + 0x9e) == '\0') {
              if ((*(int *)(pppuVar27 + 2) == local_118) &&
                 (*(int *)((long)pppuVar27 + 0x14) == local_114)) {
                return;
              }
              uVar19 = FUN_014a5960(&local_138,pppuVar27);
              if ((uVar19 & 1) != 0) {
                iVar29 = iVar29 + -1;
                local_170 = local_170 - local_138;
                *(undefined1 *)((long)pppuVar27 + 0x9e) = 1;
              }
              if (local_170 + lVar18 < 260000000) goto LAB_014a4808;
            }
            pppuVar27 = (undefined ***)(plVar20 + -0x14);
            if (pppuVar27 == pppuVar3) {
              return;
            }
          } while( true );
        }
        uVar21 = FUN_0277e294(&local_158);
        if ((uVar21 & 1) == 0) goto LAB_014a3f00;
        uVar21 = FUN_0277da10(&local_158);
        if ((uVar21 & 1) == 0) goto LAB_014a3f00;
        local_138 = local_138 & 0xffffffff00000000;
        FUN_01491ddc(*(undefined8 *)(param_1 + 0x48),&local_138,&local_158,&puStack_120,&local_84);
        if ((int)local_138 != 9) goto LAB_014a3f00;
        *(undefined1 *)((long)pppuVar24 + 0x9d) = 1;
        local_170 = uVar19;
        if (local_f8 == 0) goto LAB_014a3f00;
        goto LAB_014a42d4;
      }
    }
  }
  else {
    lVar18 = *(long *)PTR_DAT_04bb27c0;
    if (lVar18 == 0) {
LAB_014a4270:
      FUN_01a50240(&local_158,&local_80,local_84,&puStack_120);
      lVar18 = FUN_015219e8(&local_158);
    }
    else {
      plVar20 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                          ((ulong)(local_12c >> 0x11) & 0x7ff8));
      if (((plVar20 == (long *)0x0) || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar20 + 0x46) != local_12c)) {
        plVar20 = (long *)0x0;
      }
      if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
        plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        (**(code **)(*plVar12 + 0x60))();
      }
      if (plVar20 == (long *)0x0) goto LAB_014a4270;
      uVar8 = *(uint *)(plVar20 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
      if ((uVar8 >> 4 & 1) == 0) goto LAB_014a4270;
      lVar16 = plVar20[0xf];
      if (*(long *)(lVar16 + 0x280) == lVar16 + 0x278) {
        lVar18 = 0;
      }
      else {
        lVar25 = (long)*(int *)(lVar16 + 0x28c);
        lVar18 = 0;
        lVar22 = *(long *)(lVar16 + 0x280) - lVar25;
        do {
          if ((*(byte *)(lVar22 + 0x30) >> 1 & 1) == 0) {
LAB_014a43f0:
            lVar15 = 0;
          }
          else {
            uVar19 = FUN_03f2d924(lVar22 + 0x28);
            if ((uVar19 & 1) == 0) goto LAB_014a43f0;
            iVar9 = FUN_03f2da54(lVar22 + 0x28);
            lVar15 = (long)iVar9;
          }
          lVar18 = lVar15 + lVar18;
          lVar22 = *(long *)(lVar22 + lVar25 + 8) - lVar25;
        } while (lVar22 != (lVar16 + 0x278) - lVar25);
      }
    }
    local_170 = lVar18 + local_170;
    if (259999999 < local_170) {
      return;
    }
    *(undefined1 *)((long)pppuVar24 + 0x9d) = 1;
    iVar29 = iVar29 + -1;
    puVar28 = PTR_DAT_04bb2010;
    if (local_f8 != 0) {
LAB_014a42d4:
      uVar19 = FUN_015039ac(&local_12c);
      if ((uVar19 & 1) == 0) {
LAB_014a45c8:
        uVar8 = local_f8;
        iVar9 = local_84 + 1;
        local_13c = iVar9;
        if (local_f8 != 0) {
          uVar26 = 0;
          do {
            iVar6 = 0;
            if ((int)local_100 <= (int)(uVar26 + local_100._4_4_)) {
              iVar6 = (int)local_100;
            }
            iVar6 = uVar26 + (local_100._4_4_ - iVar6);
            local_150 = *(undefined4 *)(local_108 + (long)iVar6 * 3 + 1);
            local_14c = *(undefined4 *)((long)local_108 + (long)iVar6 * 0x18 + 0xc);
            local_158 = puVar28 + 0x10;
            local_148 = *(undefined4 *)(local_108 + (long)iVar6 * 3 + 2);
            piVar13 = (int *)FUN_014fbd50(&local_80,iVar9,&local_158);
            if (*piVar13 == 0) {
              FUN_01a50240(&local_138,&local_80,iVar9,&local_158);
              puVar7 = PTR_DAT_04bb43c0;
              lVar18 = *(long *)PTR_DAT_04bb43c0;
              uVar10 = FUN_0277d6c4(&local_138);
              if (*(long *)puVar7 != 0) {
                lVar18 = *(long *)(lVar18 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar18 = FUN_015219e8(&local_138);
                  if (259999999 < lVar18 + local_170) break;
                  uVar19 = FUN_0277e294(&local_138);
                  if ((uVar19 & 1) != 0) {
                    uVar19 = FUN_0277da10(&local_138);
                    if ((uVar19 & 1) != 0) {
                      local_15c = 0;
                      FUN_01491ddc(*(undefined8 *)(param_1 + 0x48),&local_15c,&local_138,&local_158,
                                   &local_13c);
                      if (local_15c == 9) {
                        local_170 = lVar18 + local_170;
                      }
                    }
                  }
                }
              }
            }
            uVar26 = uVar26 + 1;
          } while (uVar8 != uVar26);
        }
      }
      else {
        lVar18 = *(long *)PTR_DAT_04bb27c0;
        if (lVar18 != 0) {
          if ((((local_12c == 0) ||
               (plVar20 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                                    ((ulong)(local_12c >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0))
              || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
             (*(uint *)(plVar20 + 0x46) != local_12c)) {
            plVar20 = (long *)0x0;
          }
          if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
            plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar18 = *(long *)PTR_DAT_04bb27c0;
            iVar9 = (**(code **)(*plVar12 + 0x60))();
            if (iVar9 < 0x11) {
              uVar8 = 1;
            }
            else {
              if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_014a4568;
              uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar18 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_014a4568:
            uVar8 = 0;
          }
          if (plVar20 != (long *)0x0) {
            lVar18 = plVar20[0x2a];
            uVar26 = *(uint *)(plVar20 + 0x49);
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar10 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
            if ((((int)lVar18 == 1) && ((uVar10 & uVar8) != 0)) && ((uVar26 >> 4 & 1) != 0))
            goto LAB_014a45c8;
          }
        }
      }
    }
  }
  goto LAB_014a3f00;
LAB_014a4808:
  *(undefined1 *)((long)pppuVar24 + 0x9d) = 1;
  local_170 = local_170 + lVar18;
LAB_014a3f00:
  pppuVar24 = (undefined ***)(lVar14 + -0xa0);
  if (pppuVar24 == pppuVar3) {
    return;
  }
  goto LAB_014a3f0c;
}

