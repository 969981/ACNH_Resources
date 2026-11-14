
void FUN_015243f0(undefined8 param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined **ppuVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined4 local_118;
  undefined4 uStack_114;
  uint *local_110;
  undefined ***local_108;
  undefined8 *local_100;
  undefined **local_f8;
  int local_f0;
  int local_ec;
  undefined8 local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  int local_bc;
  undefined8 *local_b8;
  undefined *puStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined *local_98;
  undefined *puStack_90;
  int local_88;
  uint local_84;
  undefined *local_80;
  int local_78;
  int local_74;
  uint local_70;
  undefined4 local_6c;
  
  puVar4 = PTR_DAT_04bb2010;
  local_a8 = 0;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_88 = (int)((float)(int)(*param_2 + -2.5) / 5.0) - (uint)(*param_2 + -2.5 < 0.0);
  local_84 = (int)((float)(int)(param_2[2] + -2.5) / 5.0) - (uint)(param_2[2] + -2.5 < 0.0);
  local_78 = local_88 + 1;
  local_74 = local_84 + 1;
  lVar17 = *(long *)PTR_DAT_04bb2720;
  puStack_90 = puVar1;
  local_80 = puVar1;
  if (lVar17 == 0) {
    puVar22 = &DAT_055c04a0;
  }
  else {
    puVar22 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar22 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar7 = FUN_006bd550(*puVar22,0);
      puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar22 = &DAT_055c04a0;
      }
    }
  }
  local_a4 = *(undefined4 *)(puVar22 + 7);
  local_a0 = FUN_017baf44();
  local_a0 = local_a0 & 1;
  puStack_b0 = PTR_DAT_04bb3140 + 0x10;
  local_b8 = (undefined8 *)0xfffe;
  FUN_0277d4ac(&local_b8);
  iVar7 = local_88;
  uVar11 = local_74 + 1;
  local_c8 = (undefined **)CONCAT44(local_84,local_88);
  if (uVar11 != local_84) {
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    puVar3 = PTR_DAT_04bb3290 + 0x10;
    puVar15 = (uint *)PTR_DAT_04bc0048;
    local_e0 = &puStack_90;
    local_d8 = &local_80;
    local_d0 = puVar1;
    do {
      local_b8 = (undefined8 *)FUN_01a5190c(&puStack_b0,0,&local_d0,0);
      local_b8 = (undefined8 *)*local_b8;
      uVar14 = FUN_0277e294(&local_b8);
      puVar1 = PTR_DAT_04bb43c0;
      if ((uVar14 & 1) != 0) {
        local_f8 = (undefined **)0x0;
        local_100 = local_b8;
        lVar17 = *(long *)PTR_DAT_04bb43c0;
        local_108 = (undefined ***)puVar2;
        uVar8 = FUN_0277d6c4(&local_100);
        if (*(long *)puVar1 == 0) {
LAB_01524814:
          uVar8 = 0;
        }
        else {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((*(uint *)(lVar17 + 0x1d8) <= uVar8) ||
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_01524814;
          lVar17 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_b8);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((*(uint *)(lVar17 + 0x1d8) <= uVar8) ||
             (ppuVar19 = *(undefined ***)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8),
             ppuVar19 == (undefined **)0x0)) goto LAB_01524814;
          uVar8 = 0;
          uVar13 = *(uint *)ppuVar19;
          local_f8 = ppuVar19;
          if ((uVar13 != 0) && (ppuVar19 != (undefined **)(ulong)uVar13)) {
            puVar20 = (uint *)((long)ppuVar19 - (long)(ulong)uVar13);
            uVar8 = 0;
            if (*puVar20 != 0) {
              uVar8 = puVar20[1];
              if ((uVar8 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar17 != 0) {
                  uVar13 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar13 = (uint)((ulong)((long)ppuVar19 - lVar17) / (ulong)uVar8);
                  }
                  if (*puVar20 <= uVar13) {
                    uVar13 = 0xffffffff;
                  }
                  if ((uVar13 < *puVar15) &&
                     (uVar5 = *(ushort *)(*(long *)(puVar15 + 2) + (long)(int)uVar13 * 2),
                     uVar8 = (uint)uVar5, uVar5 < 0x52)) goto LAB_0152481c;
                }
              }
              uVar8 = 0;
            }
          }
        }
LAB_0152481c:
        local_e8 = CONCAT44(local_e8._4_4_,uVar8);
        if (uVar8 == 9) {
          puVar15 = (uint *)FUN_014fbd50(&puStack_b0,0,&local_d0);
          uVar8 = *puVar15;
          if ((uVar8 != 0) && (lVar17 = *(long *)PTR_DAT_04bb27c0, lVar17 != 0)) {
            plVar23 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                                ((ulong)(uVar8 >> 0x11) & 0x7ff8));
            if ((plVar23 == (long *)0x0) ||
               (((*(uint *)(plVar23 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar23 + 0x46) != uVar8)))
               ) {
              plVar23 = (long *)0x0;
            }
            if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
              plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar17 = *(long *)PTR_DAT_04bb27c0;
              iVar9 = (**(code **)(*plVar16 + 0x60))();
              if (iVar9 < 0x11) {
                uVar8 = 1;
              }
              else {
                if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_015248f0;
                uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_015248f0:
              uVar8 = 0;
            }
            if (plVar23 != (long *)0x0) {
              lVar17 = plVar23[0x2a];
              uVar13 = *(uint *)(plVar23 + 0x49);
              if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar9 != 0)) {
                *(undefined **)PTR_DAT_04bb5920 = puVar3;
                __cxa_guard_release(PTR_DAT_04bb5928);
              }
              uVar10 = (**(code **)(*plVar23 + 0x20))(plVar23,PTR_DAT_04bb5920);
              if ((((((int)lVar17 == 1) && ((uVar10 & uVar8) != 0)) && ((uVar13 >> 4 & 1) != 0)) &&
                  ((plVar23 = (long *)plVar23[0x151], plVar23 != (long *)0x0 &&
                   (uVar8 = (**(code **)(*plVar23 + 0x198))(plVar23), 2 < uVar8)))) &&
                 ((uVar14 = (**(code **)(*plVar23 + 0x1b0))(plVar23), (uVar14 & 1) == 0 ||
                  ((int)plVar23[0x50] != 2)))) {
                FUN_03ebb160(plVar23 + 0x4f,2);
                (**(code **)(*plVar23 + 0x218))(plVar23,2,0);
              }
            }
          }
        }
        puVar15 = (uint *)PTR_DAT_04bc0048;
      }
      if ((int)local_c8 < *(int *)(local_d8 + 1)) {
        iVar9 = (int)local_c8 + 1;
        uVar8 = local_c8._4_4_;
      }
      else {
        uVar8 = local_c8._4_4_ + 1;
        iVar9 = *(int *)(local_e0 + 1);
        local_c8 = (undefined **)((ulong)uVar8 << 0x20);
      }
      local_c8 = (undefined **)CONCAT44(local_c8._4_4_,iVar9);
    } while ((iVar7 != iVar9) || (uVar11 != uVar8));
  }
  ppuVar19 = (undefined **)(puVar4 + 0x10);
  local_c0 = 0;
  local_bc = 0;
  local_d0 = (undefined *)0x0;
  local_e0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
  lVar17 = *(long *)PTR_DAT_04bb59d8;
  local_d8 = ppuVar19;
  local_c8 = ppuVar19;
  if (lVar17 != 0) {
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 != -1) {
      local_108 = (undefined ***)CONCAT44(local_108._4_4_,1);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar15 >> 1 & 1) != 0) &&
         (local_108 = (undefined ***)CONCAT44(local_108._4_4_,0x1a), (*puVar15 >> 0x1a & 1) != 0)) {
        lVar18 = *(long *)PTR_DAT_04bb2720;
        if (lVar18 == 0) {
          puVar22 = &DAT_055c04a0;
        }
        else {
          puVar22 = &DAT_055c04a0;
          if (*(long *)(lVar18 + 0x330) != 0) {
            puVar22 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
            iVar7 = FUN_006bd550(*puVar22,0);
            puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar7 != 0x758f7eaf) {
              puVar22 = &DAT_055c04a0;
            }
          }
        }
        if (*(int *)(puVar22 + 7) == -0x17df00c3) {
          local_d0 = *(undefined **)(lVar17 + 0x28);
          local_c0 = *(int *)(lVar17 + 0x38);
          local_bc = *(int *)(lVar17 + 0x3c);
          goto LAB_01524ad4;
        }
      }
    }
    lVar17 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar17 == 0) {
      local_c0 = 0;
      local_bc = 0;
      iVar9 = 0x10;
      iVar7 = 0x10;
    }
    else {
      local_c0 = *(int *)(lVar17 + 0xd88);
      local_bc = *(int *)(lVar17 + 0xd8c);
      iVar7 = *(int *)(lVar17 + 0xd98);
      iVar9 = *(int *)(lVar17 + 0xd9c);
    }
    iVar12 = local_c0;
    if (iVar7 <= local_c0) {
      iVar12 = iVar7;
    }
    if (local_c0 <= iVar7) {
      local_c0 = iVar7;
    }
    iVar7 = local_bc;
    if (iVar9 <= local_bc) {
      iVar7 = iVar9;
    }
    if (local_bc <= iVar9) {
      local_bc = iVar9;
    }
    local_d0 = (undefined *)CONCAT44(iVar7,iVar12);
  }
LAB_01524ad4:
  local_e8 = 0xfffe;
  FUN_0277d4ac(&local_e8);
  puVar1 = PTR_DAT_04bb43c0;
  iVar9 = (int)local_d0;
  iVar7 = local_bc + 1;
  local_f0 = (int)local_d0;
  local_ec = local_d0._4_4_;
  if (iVar7 != local_d0._4_4_) {
    puVar4 = PTR_DAT_04bb3290 + 0x10;
    puVar15 = (uint *)PTR_DAT_04bc0048;
    local_108 = &local_d8;
    local_100 = &local_c8;
    local_f8 = ppuVar19;
    do {
      if (((local_f0 < local_88 || local_78 < local_f0) || (local_ec < (int)local_84)) ||
         (local_74 < local_ec)) {
        puVar22 = (undefined8 *)FUN_01a5190c(&puStack_b0,0,&local_f8,0);
        local_e8 = *puVar22;
        uVar14 = FUN_0277e294(&local_e8);
        if ((uVar14 & 1) != 0) {
          lVar17 = *(long *)puVar1;
          local_110 = (uint *)0x0;
          local_118 = (undefined4)local_e8;
          uStack_114 = local_e8._4_4_;
          uVar11 = FUN_0277d6c4(&local_118);
          if (*(long *)puVar1 == 0) {
LAB_01524d04:
            local_70 = 0;
          }
          else {
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
            goto LAB_01524d04;
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(&local_e8);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
               (puVar20 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8),
               puVar20 == (uint *)0x0)) goto LAB_01524d04;
            local_70 = 0;
            uVar11 = *puVar20;
            local_110 = puVar20;
            if ((uVar11 != 0) && (puVar20 != (uint *)(ulong)uVar11)) {
              puVar21 = (uint *)((long)puVar20 - (long)(ulong)uVar11);
              local_70 = 0;
              if (*puVar21 != 0) {
                uVar11 = puVar21[1];
                if ((uVar11 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar21 + lVar17 + (ulong)(ushort)puVar21[2] * 8;
                  if (lVar17 != 0) {
                    uVar8 = 0;
                    if ((ulong)uVar11 != 0) {
                      uVar8 = (uint)((ulong)((long)puVar20 - lVar17) / (ulong)uVar11);
                    }
                    if (*puVar21 <= uVar8) {
                      uVar8 = 0xffffffff;
                    }
                    if ((uVar8 < *puVar15) &&
                       (uVar5 = *(ushort *)(*(long *)(puVar15 + 2) + (long)(int)uVar8 * 2),
                       local_70 = (uint)uVar5, uVar5 < 0x52)) goto LAB_01524d0c;
                  }
                }
                local_70 = 0;
              }
            }
          }
LAB_01524d0c:
          local_6c = 9;
          if (local_70 == 9) {
            puVar15 = (uint *)FUN_014fbd50(&puStack_b0,0,&local_f8);
            uVar11 = *puVar15;
            if ((uVar11 != 0) && (lVar17 = *(long *)PTR_DAT_04bb27c0, lVar17 != 0)) {
              plVar23 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                                  ((ulong)(uVar11 >> 0x11) & 0x7ff8));
              if ((plVar23 == (long *)0x0) ||
                 (((*(uint *)(plVar23 + 0x49) >> 1 & 1) != 0 ||
                  (*(uint *)(plVar23 + 0x46) != uVar11)))) {
                plVar23 = (long *)0x0;
              }
              if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
                plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar17 = *(long *)PTR_DAT_04bb27c0;
                iVar12 = (**(code **)(*plVar16 + 0x60))();
                if (iVar12 < 0x11) {
                  uVar11 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_01524de0;
                  uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_01524de0:
                uVar11 = 0;
              }
              if (plVar23 != (long *)0x0) {
                lVar17 = plVar23[0x2a];
                uVar8 = *(uint *)(plVar23 + 0x49);
                if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar12 != 0)) {
                  *(undefined **)PTR_DAT_04bb5920 = puVar4;
                  __cxa_guard_release(PTR_DAT_04bb5928);
                }
                uVar13 = (**(code **)(*plVar23 + 0x20))(plVar23,PTR_DAT_04bb5920);
                if (((((int)lVar17 == 1) && ((uVar13 & uVar11) != 0)) && ((uVar8 >> 4 & 1) != 0)) &&
                   (((plVar23 = (long *)plVar23[0x151], plVar23 != (long *)0x0 &&
                     (uVar11 = (**(code **)(*plVar23 + 0x198))(plVar23), 3 < uVar11)) &&
                    ((uVar14 = (**(code **)(*plVar23 + 0x1b0))(plVar23), (uVar14 & 1) == 0 ||
                     ((int)plVar23[0x50] != 3)))))) {
                  FUN_03ebb160(plVar23 + 0x4f,3);
                  (**(code **)(*plVar23 + 0x218))(plVar23,3,0);
                }
              }
            }
          }
          puVar15 = (uint *)PTR_DAT_04bc0048;
        }
      }
      if (local_f0 < *(int *)(local_100 + 1)) {
        local_f0 = local_f0 + 1;
      }
      else {
        local_f0 = *(int *)(local_108 + 1);
        local_ec = local_ec + 1;
      }
    } while ((iVar9 != local_f0) || (iVar7 != local_ec));
  }
  return;
}

