
undefined8 FUN_01fd7f50(undefined **param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  long lVar17;
  uint *puVar18;
  undefined *puVar19;
  long lVar20;
  int iVar21;
  uint *puVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  long lVar32;
  undefined8 *puVar33;
  int iVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 local_3684;
  undefined4 local_3680;
  undefined4 local_367c;
  undefined4 local_3678;
  undefined1 local_3674 [4];
  undefined **local_3670;
  float local_3668;
  undefined1 local_3664 [4];
  undefined **local_3660;
  undefined8 local_3658;
  undefined8 local_3650;
  undefined *local_3648;
  undefined8 local_3640;
  undefined **local_3638;
  long local_3630;
  long local_3628;
  undefined1 auStack_3620 [8];
  undefined **local_3618;
  float local_3610;
  int iStack_360c;
  float local_3608 [196];
  undefined **local_32f8;
  undefined8 local_32f0;
  long *local_32e8;
  long *local_32e0;
  long local_32d8 [2];
  long local_32c8;
  long local_32c0;
  undefined1 auStack_32b8 [1560];
  undefined8 local_2ca0;
  undefined8 local_2c98 [200];
  undefined **local_2658;
  undefined8 local_2650;
  long **local_2648;
  long **local_2640;
  long *local_2638 [5];
  long alStack_2610 [990];
  undefined8 local_720;
  undefined1 auStack_6f8 [1600];
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  uint local_8c [3];
  
  puVar19 = PTR_DAT_04bb27c0;
  lVar17 = *(long *)PTR_DAT_04bb27c0;
  if (lVar17 == 0) {
    return 0;
  }
  uVar12 = *param_2;
  if ((((uVar12 == 0) ||
       (plVar31 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar31 == (long *)0x0)) ||
      ((*(uint *)(plVar31 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar31 + 0x46) != uVar12)) {
    plVar31 = (long *)0x0;
  }
  if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
    plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)puVar19;
    iVar9 = (**(code **)(*plVar13 + 0x60))();
    if (iVar9 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_01fd8024;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fd8024:
    uVar12 = 0;
  }
  if (plVar31 == (long *)0x0) {
    return 0;
  }
  lVar17 = plVar31[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar14 = (**(code **)(*plVar31 + 0x20))(plVar31,PTR_DAT_04bb37d0);
  uVar25 = 0;
  if ((int)lVar17 == 1) {
    uVar25 = uVar12;
  }
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  if (uVar25 == 0) {
    return 0;
  }
  lVar32 = plVar31[0xd];
  lVar17 = *(long *)PTR_DAT_04bb4e28;
  fVar38 = *(float *)(lVar32 + 0x278) + -2.5;
  fVar36 = *(float *)(lVar32 + 0x280) + -2.5;
  if (lVar17 == 0) {
    return 0;
  }
  uVar12 = *(uint *)(lVar17 + 0xe0);
  local_8c[0] = 0;
  if (uVar12 != 0) {
    lVar20 = 0;
    lVar28 = (long)(int)uVar12 << 3;
    do {
      if (*(int *)(param_1[1] + 0x230) ==
          *(int *)(*(long *)(*(long *)(lVar17 + 0xe8) + lVar20 * 8) + 8)) {
        if ((uint)lVar20 < uVar12) {
          lVar17 = *(long *)(*(long *)(lVar17 + 0xe8) + lVar20 * 8);
        }
        else {
          lVar17 = 0;
        }
        local_8c[0] = DAT_05abbc50;
        if (DAT_05abbc50 == *(uint *)(lVar17 + 0xe4)) goto LAB_01fd815c;
        local_2658 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_2650 = "GetCookingRecipeToday";
        iVar9 = FUN_02758850(&local_2658);
        if (iVar9 == 0) {
          if (*(int *)(lVar17 + 0xd8) == 0xd) {
            local_8c[0] = 0x20;
            goto LAB_01fd815c;
          }
          if (*(int *)(lVar17 + 0xd8) == 0xe) {
            local_8c[0] = 0x21;
            goto LAB_01fd815c;
          }
        }
        local_8c[0] = *(uint *)(lVar17 + 0xe4);
        goto LAB_01fd815c;
      }
      lVar20 = lVar20 + 1;
      lVar28 = lVar28 + -8;
    } while (lVar28 != 0);
    local_8c[0] = 0;
  }
LAB_01fd815c:
  puVar8 = PTR_DAT_04bbc1a0;
  puVar19 = PTR_DAT_04bb2010;
  lVar17 = *(long *)PTR_DAT_04bb4960;
  if (lVar17 == 0) {
    return 0;
  }
  if ((int)*(uint *)(lVar17 + 0x5c0) < 1) {
    if (*(long *)(lVar17 + 0x4b0) == 0) {
      return 0;
    }
    puVar18 = *(uint **)(*(long *)(lVar17 + 0x4b0) + 8);
    if (puVar18 == (uint *)0x0) {
      return 0;
    }
    if ((local_8c[0] < *(uint *)(lVar17 + 0x4c8)) &&
       (*(char *)(*(long *)(lVar17 + 0x4d0) + (long)(int)local_8c[0]) == '\0')) {
      return 0;
    }
    if (*puVar18 <= local_8c[0]) {
      return 0;
    }
    if (puVar18[1] == 0) {
      return 0;
    }
    if ((ushort)puVar18[2] == 0) {
      return 0;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar18 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar18 = (uint *)((ulong)(puVar18[1] * local_8c[0] + (uint)(ushort)puVar18[2] * 8 + iVar9) +
                      (long)puVar18);
  }
  else {
    if (*(uint *)(lVar17 + 0x5c0) <= local_8c[0]) {
      return 0;
    }
    uVar12 = local_8c[0];
    if (*(uint *)(lVar17 + 0x5b0) <= local_8c[0]) {
      uVar12 = 0;
    }
    puVar18 = *(uint **)(*(long *)(lVar17 + 0x5b8) + (ulong)uVar12 * 8);
  }
  if (puVar18 == (uint *)0x0) {
    return 0;
  }
  lVar17 = lVar32 + 0x278;
  uVar12 = *puVar18;
  if (uVar12 != 0 && puVar18 != (uint *)(ulong)uVar12) {
    puVar22 = (uint *)((long)puVar18 - (long)(ulong)uVar12);
    if (((*puVar22 != 0) && (uVar12 = puVar22[1], uVar12 != 0)) && ((ulong)(ushort)puVar22[2] != 0))
    {
      lVar20 = 0xc;
      if (*(char *)((long)puVar22 + 10) != '\0') {
        lVar20 = 0x1c;
      }
      lVar20 = (long)puVar22 + lVar20 + (ulong)(ushort)puVar22[2] * 8;
      if (lVar20 != 0) {
        uVar25 = 0;
        if ((ulong)uVar12 != 0) {
          uVar25 = (uint)((ulong)((long)puVar18 - lVar20) / (ulong)uVar12);
        }
        if (*puVar22 <= uVar25) {
          uVar25 = 0xffffffff;
        }
        if ((uVar25 < *(uint *)PTR_DAT_04bc23d0) &&
           (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc23d0 + 8) + (long)(int)uVar25 * 2),
           uVar6 < 0xd)) {
          if (uVar6 == 10) {
            local_a8 = 0;
            local_98 = 0;
            local_2650 = (undefined1 *)0x0;
            local_b8 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
            local_2658 = (undefined **)0x0;
            local_b0 = PTR_DAT_04bb2010 + 0x10;
            local_2648 = local_2638;
            local_2638[0] = alStack_2610;
            lVar20 = 0xc6;
            plVar31 = local_2638[0];
            do {
              lVar20 = lVar20 + -2;
              *plVar31 = (long)(plVar31 + 5);
              plVar31[5] = (long)(plVar31 + 10);
              plVar31 = plVar31 + 10;
            } while (lVar20 != 0);
            local_720 = 0;
            if (auStack_6f8 != (undefined1 *)0x0) {
              local_2658 = (undefined **)0xc800000000;
              local_2650 = auStack_6f8;
            }
            local_2640 = local_2648;
            local_a0 = local_b0;
            FUN_01521078(&local_2658);
            local_32e8 = local_32d8;
            local_32f8 = (undefined **)0x0;
            local_32f0 = (undefined8 *)0x0;
            lVar20 = 0;
            while( true ) {
              plVar31 = (long *)((long)local_32d8 + lVar20 + 8);
              *plVar31 = (long)local_32d8 + lVar20 + 0x10;
              *(long **)((long)local_32d8 + lVar20) = plVar31;
              *(undefined1 **)((long)local_32d8 + lVar20 + 0x10) = auStack_32b8 + lVar20 + -8;
              if (lVar20 == 0x620) break;
              *(undefined1 **)(auStack_32b8 + lVar20 + -8) = auStack_32b8 + lVar20;
              lVar20 = lVar20 + 0x20;
            }
            local_2ca0 = 0;
            if (local_2c98 != (undefined8 *)0x0) {
              local_32f8 = (undefined **)0xc800000000;
              local_32f0 = local_2c98;
            }
            lVar20 = 0;
            local_32e0 = local_32e8;
            do {
              lVar28 = lVar20 + 0x14;
              *(undefined4 *)((long)local_3608 + lVar20) = 0x7f7fffff;
              *(undefined8 *)(auStack_3620 + lVar20 + 8) = 0x7f7fffff7f7fffff;
              *(undefined8 *)((long)local_3608 + lVar20 + -8) = 0x7f7fffff7f7fffff;
              lVar20 = lVar28;
            } while (lVar28 != 800);
            local_3660 = &PTR_LAB_04a6aae8;
            FUN_01fe1430(&local_32f8,&local_3618,lVar17,&local_2658,&local_3660);
            if (1 < (int)local_32f8) {
              uVar25 = 0;
              uVar12 = (int)local_32f8 - 1;
              do {
                if ((int)uVar12 <= (int)uVar25) break;
                puVar18 = (uint *)local_32f0[uVar25];
                uVar23 = (ulong)uVar25;
                uVar26 = (ulong)uVar12;
                uVar14 = uVar23;
                uVar12 = uVar25;
                do {
                  uVar29 = (ulong)*puVar18;
                  puVar22 = (uint *)local_32f0[uVar14 + 1];
                  if (199 < *puVar18) {
                    uVar29 = 0;
                  }
                  uVar30 = (ulong)*puVar22;
                  if (199 < *puVar22) {
                    uVar30 = 0;
                  }
                  if (0.0 < local_3608[uVar29 - 4] - local_3608[uVar30 - 4]) {
                    uVar12 = (uint)uVar14;
                    local_32f0[uVar14 + 1] = puVar18;
                    local_32f0[uVar14] = puVar22;
                  }
                  else {
                    puVar18 = puVar22;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar26 != uVar14);
                if ((int)uVar12 <= (int)uVar25) break;
                puVar18 = (uint *)local_32f0[uVar12];
                uVar14 = (ulong)uVar12;
                uVar25 = uVar12;
                do {
                  uVar26 = (ulong)*puVar18;
                  puVar22 = (uint *)local_32f0[uVar14 - 1];
                  if (199 < *puVar18) {
                    uVar26 = 0;
                  }
                  uVar29 = (ulong)*puVar22;
                  if (199 < *puVar22) {
                    uVar29 = 0;
                  }
                  if (local_3608[uVar26 - 4] - local_3608[uVar29 - 4] < 0.0) {
                    uVar25 = (uint)uVar14;
                    local_32f0[uVar14 - 1] = puVar18;
                    local_32f0[uVar14] = puVar22;
                  }
                  else {
                    puVar18 = puVar22;
                  }
                  uVar14 = uVar14 - 1;
                } while ((long)uVar23 < (long)uVar14);
              } while (uVar25 != uVar12);
            }
            puVar8 = PTR_DAT_04bc0428;
            puVar19 = PTR_DAT_04bb43c0;
            if ((int)local_32f8 != 0) {
              lVar17 = (long)(int)local_32f8 << 3;
              ppuVar3 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
              puVar33 = local_32f0;
              do {
                if (*(uint *)*puVar33 < (uint)local_2658._0_4_) {
                  plVar31 = *(long **)(local_2650 + (long)(int)*(uint *)*puVar33 * 8);
                }
                else {
                  plVar31 = (long *)0x0;
                }
                lVar20 = *(long *)puVar19;
                local_3658 = (undefined *)*plVar31;
                local_3650 = 0;
                local_3660 = ppuVar3;
                uVar12 = FUN_0277d6c4(&local_3658);
                if (*(long *)puVar19 != 0) {
                  lVar20 = *(long *)(lVar20 + 0x57e58);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                  if ((uVar12 < *(uint *)(lVar20 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                    lVar20 = *(long *)puVar8;
                    uVar12 = FUN_0277d6c4(plVar31);
                    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                    if ((uVar12 < *(uint *)(lVar20 + 0x1d8)) &&
                       (lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar12 * 8),
                       lVar20 != 0)) {
                      local_3650 = lVar20;
                    }
                  }
                }
                FUN_01afb480(&local_3660,&local_b8);
                local_a8 = CONCAT44(local_a8._4_4_ + *(int *)((long)plVar31 + 0x14),
                                    (int)local_a8 + (int)plVar31[2]);
                local_98 = CONCAT44(local_98._4_4_ + *(int *)((long)plVar31 + 0x14),
                                    (int)local_98 + (int)plVar31[2]);
                uVar14 = FUN_01fabae0(param_1,plVar31 + 1);
                if ((uVar14 & 1) == 0) {
                  fVar38 = ((float)local_a8._4_4_ * 5.0 + (float)local_98._4_4_ * 5.0 + 5.0) * 0.5;
                  fVar36 = ((float)(int)local_a8 * 5.0 + (float)(int)local_98 * 5.0 + 5.0) * 0.5;
                  local_3630 = CONCAT44(local_3630._4_4_,fVar38);
                  local_3638 = (undefined **)(ulong)(uint)fVar36;
                  local_3684 = FUN_006f0400(*(float *)(lVar32 + 0x278) - fVar36,
                                            *(float *)(lVar32 + 0x280) - fVar38);
                  puVar19 = param_1[1];
                  pppuVar15 = &local_3638;
                  pppuVar16 = (undefined ***)&local_3684;
                  goto LAB_01fd88e8;
                }
                puVar33 = puVar33 + 1;
                lVar17 = lVar17 + -8;
              } while (lVar17 != 0);
            }
            goto LAB_01fd9180;
          }
          if (uVar6 == 9) {
            local_a8 = 0;
            local_2648 = local_2638;
            local_2638[0] = alStack_2610;
            local_98 = 0;
            local_2650 = (undefined1 *)0x0;
            local_b8 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
            local_2658 = (undefined **)0x0;
            local_b0 = PTR_DAT_04bb2010 + 0x10;
            lVar20 = 0xc6;
            plVar13 = local_2638[0];
            do {
              lVar20 = lVar20 + -2;
              *plVar13 = (long)(plVar13 + 5);
              plVar13[5] = (long)(plVar13 + 10);
              plVar13 = plVar13 + 10;
            } while (lVar20 != 0);
            local_720 = 0;
            if (auStack_6f8 != (undefined1 *)0x0) {
              local_2658 = (undefined **)0xc800000000;
              local_2650 = auStack_6f8;
            }
            local_2640 = local_2648;
            local_a0 = local_b0;
            FUN_01521078(&local_2658);
            local_32e8 = local_32d8;
            local_32f8 = (undefined **)0x0;
            local_32f0 = (undefined8 *)0x0;
            lVar20 = 0;
            while( true ) {
              plVar13 = (long *)((long)local_32d8 + lVar20 + 8);
              *plVar13 = (long)local_32d8 + lVar20 + 0x10;
              *(long **)((long)local_32d8 + lVar20) = plVar13;
              *(undefined1 **)((long)local_32d8 + lVar20 + 0x10) = auStack_32b8 + lVar20 + -8;
              if (lVar20 == 0x620) break;
              *(undefined1 **)(auStack_32b8 + lVar20 + -8) = auStack_32b8 + lVar20;
              lVar20 = lVar20 + 0x20;
            }
            local_2ca0 = 0;
            if (local_2c98 != (undefined8 *)0x0) {
              local_32f8 = (undefined **)0xc800000000;
              local_32f0 = local_2c98;
            }
            lVar20 = 0;
            local_32e0 = local_32e8;
            do {
              lVar28 = lVar20 + 0x14;
              *(undefined4 *)((long)local_3608 + lVar20) = 0x7f7fffff;
              *(undefined8 *)(auStack_3620 + lVar20 + 8) = 0x7f7fffff7f7fffff;
              *(undefined8 *)((long)local_3608 + lVar20 + -8) = 0x7f7fffff7f7fffff;
              lVar20 = lVar28;
            } while (lVar28 != 800);
            FUN_01fd6d50(auStack_3620,local_8c);
            local_3660 = &PTR_LAB_04a6aac0;
            local_3658 = auStack_3620;
            FUN_01fe1430(&local_32f8,&local_3618,lVar17,&local_2658,&local_3660);
            if (1 < (int)local_32f8) {
              uVar25 = 0;
              uVar12 = (int)local_32f8 - 1;
              do {
                if ((int)uVar12 <= (int)uVar25) break;
                puVar18 = (uint *)local_32f0[uVar25];
                uVar23 = (ulong)uVar25;
                uVar26 = (ulong)uVar12;
                uVar14 = uVar23;
                uVar12 = uVar25;
                do {
                  uVar29 = (ulong)*puVar18;
                  puVar22 = (uint *)local_32f0[uVar14 + 1];
                  if (199 < *puVar18) {
                    uVar29 = 0;
                  }
                  uVar30 = (ulong)*puVar22;
                  if (199 < *puVar22) {
                    uVar30 = 0;
                  }
                  if (0.0 < local_3608[uVar29 - 4] - local_3608[uVar30 - 4]) {
                    uVar12 = (uint)uVar14;
                    local_32f0[uVar14 + 1] = puVar18;
                    local_32f0[uVar14] = puVar22;
                  }
                  else {
                    puVar18 = puVar22;
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar26 != uVar14);
                if ((int)uVar12 <= (int)uVar25) break;
                puVar18 = (uint *)local_32f0[uVar12];
                uVar14 = (ulong)uVar12;
                uVar25 = uVar12;
                do {
                  uVar26 = (ulong)*puVar18;
                  puVar22 = (uint *)local_32f0[uVar14 - 1];
                  if (199 < *puVar18) {
                    uVar26 = 0;
                  }
                  uVar29 = (ulong)*puVar22;
                  if (199 < *puVar22) {
                    uVar29 = 0;
                  }
                  if (local_3608[uVar26 - 4] - local_3608[uVar29 - 4] < 0.0) {
                    uVar25 = (uint)uVar14;
                    local_32f0[uVar14 - 1] = puVar18;
                    local_32f0[uVar14] = puVar22;
                  }
                  else {
                    puVar18 = puVar22;
                  }
                  uVar14 = uVar14 - 1;
                } while ((long)uVar23 < (long)uVar14);
              } while (uVar25 != uVar12);
            }
            puVar7 = PTR_DAT_04bb43c0;
            if ((int)local_32f8 != 0) {
              lVar20 = (long)(int)local_32f8 << 3;
              ppuVar3 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
              puVar33 = local_32f0;
              do {
                if (*(uint *)*puVar33 < (uint)local_2658._0_4_) {
                  plVar13 = *(long **)(local_2650 + (long)(int)*(uint *)*puVar33 * 8);
                }
                else {
                  plVar13 = (long *)0x0;
                }
                lVar28 = *(long *)puVar7;
                local_3630 = *plVar13;
                local_3628 = 0;
                local_3638 = ppuVar3;
                uVar12 = FUN_0277d6c4(&local_3630);
                if (*(long *)puVar7 != 0) {
                  lVar28 = *(long *)(lVar28 + 0x57e58);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                  if ((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                    lVar28 = *(long *)PTR_DAT_04bc0428;
                    uVar12 = FUN_0277d6c4(plVar13);
                    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                    if ((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
                       (lVar28 = *(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8),
                       lVar28 != 0)) {
                      local_3628 = lVar28;
                    }
                  }
                }
                FUN_01afb480(&local_3638,&local_b8);
                local_3664[0] = 0;
                local_a8 = CONCAT44(local_a8._4_4_ + *(int *)((long)plVar13 + 0x14),
                                    (int)local_a8 + (int)plVar13[2]);
                local_3640 = 0;
                local_3650 = 0;
                local_98 = CONCAT44(local_98._4_4_ + *(int *)((long)plVar13 + 0x14),
                                    (int)local_98 + (int)plVar13[2]);
                local_3660 = (undefined **)(puVar8 + 0x10);
                local_3658 = puVar19 + 0x10;
                local_3648 = puVar19 + 0x10;
                uVar14 = FUN_01517328(&local_3660,local_3664,&local_b0,plVar13);
                if ((uVar14 & 1) != 0) {
                  iVar9 = ((int)local_3640 - (int)local_3650) + 1;
                  if (iVar9 + iVar9 * (local_3640._4_4_ - local_3650._4_4_) == 8) {
                    local_3670 = (undefined **)0x0;
                    local_3668 = 0.0;
                    local_3674[0] = 0;
                    uVar14 = FUN_01fab12c(param_1,PTR_DAT_04bb2150,plVar13,local_3664,&local_3660,
                                          &local_3670,local_3674);
                    if ((uVar14 & 1) != 0) {
                      local_3678 = FUN_006f0400(*(float *)(lVar32 + 0x278) - local_3670._0_4_,
                                                *(float *)(lVar32 + 0x280) - local_3668);
                      puVar19 = param_1[1];
                      pppuVar15 = &local_3670;
                      pppuVar16 = (undefined ***)&local_3678;
                      goto LAB_01fd88e8;
                    }
                  }
                  else {
                    uVar14 = FUN_01fab6d0(param_1,plVar13,&local_3660);
                    if ((uVar14 & 1) == 0) {
                      local_3670 = (undefined **)
                                   (ulong)(uint)(((float)(int)local_3650 * 5.0 +
                                                 (float)(int)local_3640 * 5.0 + 5.0) * 0.5);
                      local_3668 = ((float)local_3650._4_4_ * 5.0 +
                                   (float)local_3640._4_4_ * 5.0 + 5.0) * 0.5;
                      uVar14 = FUN_021fc000(lVar17,&local_3670);
                      if (((uVar14 & 1) == 0) &&
                         (uVar14 = FUN_01fab8b0(param_1,&local_3660), (uVar14 & 1) == 0)) {
                        local_367c = FUN_006f0400(*(float *)(lVar32 + 0x278) - local_3670._0_4_,
                                                  *(float *)(lVar32 + 0x280) - local_3668);
                        FUN_01e39778(param_1[1],&local_3670,&local_367c,0);
                        *(ushort *)((long)param_1 + 0x1242c) =
                             *(ushort *)((long)param_1 + 0x1242c) | 4;
                        local_3680 = FUN_006f0400(local_3670._0_4_ - *(float *)(lVar32 + 0x278),
                                                  local_3668 - *(float *)(lVar32 + 0x280));
                        FUN_01e39778(plVar31,lVar17,&local_3680,0);
                        return 1;
                      }
                    }
                  }
                }
                puVar33 = puVar33 + 1;
                lVar20 = lVar20 + -8;
              } while (lVar20 != 0);
            }
            goto LAB_01fd9180;
          }
        }
      }
    }
  }
  iVar9 = (int)((float)(int)fVar38 / 5.0) - (uint)(fVar38 < 0.0);
  uVar12 = iVar9 * 2 | 1;
  iVar35 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
  uVar25 = iVar35 * 2 | 1;
  iVar34 = (int)(float)(iVar35 + 3);
  fVar36 = (float)(int)(float)(iVar9 + 3);
  uVar4 = iVar9 * 2 + 2;
  if (-1 < (int)uVar12) {
    uVar4 = uVar12;
  }
  uVar12 = iVar35 * 2 + 2;
  if (-1 < (int)uVar25) {
    uVar12 = uVar25;
  }
  iVar1 = ((int)uVar4 >> 1) + 1;
  local_3660 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
  iVar2 = ((int)uVar12 >> 1) + 1;
  local_32f0 = (undefined8 *)CONCAT44(iVar34,iVar1);
  iVar35 = (int)(float)(iVar35 + -1);
  fVar38 = (float)(int)(float)(iVar9 + -1);
  local_b0 = (undefined *)CONCAT44(iVar35,iVar1);
  local_3658 = (undefined *)CONCAT44(iVar2,fVar38);
  lVar20 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar20 == 0) {
    iVar9 = 0;
    iVar21 = 0;
    iVar24 = 0x10;
    iVar27 = 0x10;
  }
  else {
    iVar9 = *(int *)(lVar20 + 0xd88);
    iVar21 = *(int *)(lVar20 + 0xd8c);
    iVar27 = *(int *)(lVar20 + 0xd98);
    iVar24 = *(int *)(lVar20 + 0xd9c);
  }
  iVar5 = iVar9;
  if (iVar27 <= iVar9) {
    iVar5 = iVar27;
  }
  if (iVar9 <= iVar27) {
    iVar9 = iVar27;
  }
  iVar27 = iVar21;
  if (iVar24 <= iVar21) {
    iVar27 = iVar24;
  }
  if (iVar21 <= iVar24) {
    iVar21 = iVar24;
  }
  local_3638 = param_1;
  local_3630 = lVar17;
  local_3618 = local_3660;
  local_3610 = fVar36;
  iStack_360c = iVar2;
  local_32f8 = local_3660;
  local_2658 = local_3660;
  local_b8 = local_3660;
  local_2650._0_4_ = (float)iVar1;
  local_2650._4_4_ = iVar34;
  uVar14 = FUN_01fabae0(param_1,&local_2658);
  if ((uVar14 & 1) == 0) {
    fVar37 = (float)iVar1 * 5.0;
    local_2658 = (undefined **)(ulong)(uint)fVar37;
    fVar39 = (float)iVar34 * 5.0;
    local_2650._0_4_ = fVar39;
    uVar14 = FUN_021fc000(lVar17,&local_2658);
    if ((((((uVar14 & 1) == 0) && ((float)iVar5 * 5.0 <= local_2658._0_4_)) &&
         (local_2658._0_4_ < (float)iVar9 * 5.0 + 5.0)) &&
        (((float)iVar27 * 5.0 <= (float)local_2650 &&
         ((float)local_2650 < (float)iVar21 * 5.0 + 5.0)))) &&
       (uVar14 = FUN_01fadef8(param_1,&local_32f8), (uVar14 & 1) != 0)) {
      fVar38 = *(float *)(lVar32 + 0x280) - fVar39;
      local_2650 = (char *)CONCAT44(local_2650._4_4_,fVar39);
      fVar36 = *(float *)(lVar32 + 0x278) - fVar37;
      goto LAB_01fd88d0;
    }
  }
  ppuVar3 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
  local_2650._0_4_ = (float)((int)fVar38 + -1);
  local_2658 = ppuVar3;
  local_2650._4_4_ = (int)uVar12 >> 1;
  uVar14 = FUN_01fabae0(param_1,&local_2658);
  if ((uVar14 & 1) == 0) {
    local_2658 = (undefined **)(ulong)(uint)((float)(int)fVar38 * 5.0);
    local_2650 = (char *)CONCAT44(local_2650._4_4_,(float)iVar2 * 5.0);
    uVar14 = FUN_021fc000(lVar17,&local_2658);
    uVar12 = 0;
    if ((uVar14 & 1) == 0) {
      uVar12 = 0;
      if (((float)iVar5 * 5.0 <= local_2658._0_4_) && (local_2658._0_4_ < (float)iVar9 * 5.0 + 5.0))
      {
        uVar12 = 0;
        if (((float)iVar27 * 5.0 <= (float)local_2650) &&
           ((float)local_2650 < (float)iVar21 * 5.0 + 5.0)) {
          uVar12 = FUN_01fadef8(param_1,&local_3660);
        }
      }
    }
  }
  else {
    uVar12 = 0;
  }
  local_2658 = ppuVar3;
  local_2650._0_4_ = fVar36;
  local_2650._4_4_ = iVar2;
  uVar14 = FUN_01fabae0(param_1,&local_2658);
  if ((uVar14 & 1) == 0) {
    local_2650._0_4_ = (float)iVar2 * 5.0;
    local_2658 = (undefined **)(ulong)(uint)((float)(int)fVar36 * 5.0);
    uVar14 = FUN_021fc000(lVar17,&local_2658);
    if (((((uVar14 & 1) != 0) || (local_2658._0_4_ < (float)iVar5 * 5.0)) ||
        ((float)iVar9 * 5.0 + 5.0 <= local_2658._0_4_)) ||
       (((float)local_2650 < (float)iVar27 * 5.0 || ((float)iVar21 * 5.0 + 5.0 <= (float)local_2650)
        ))) goto LAB_01fd8784;
    uVar10 = FUN_01fadef8(param_1,&local_3618);
    uVar25 = uVar10 ^ 1;
    if (((uVar12 | uVar25) & 1) != 0) goto LAB_01fd878c;
    goto LAB_01fd88a4;
  }
LAB_01fd8784:
  uVar10 = 0;
  uVar25 = 1;
LAB_01fd878c:
  if (((uVar10 & 1) == 0) && (((uVar12 ^ 1) & 1) == 0)) goto LAB_01fd88ac;
  if (((uVar25 | uVar12 ^ 1) & 1) != 0) {
    local_2658 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
    local_2650 = (char *)CONCAT44(iVar35 + -1,(int)uVar4 >> 1);
    uVar14 = FUN_01fabae0(param_1,&local_2658);
    if ((uVar14 & 1) == 0) {
      local_2658 = (undefined **)(ulong)(uint)((float)iVar1 * 5.0);
      local_2650 = (char *)CONCAT44(local_2650._4_4_,(float)iVar35 * 5.0);
      uVar14 = FUN_021fc000(lVar17,&local_2658);
      if (((((uVar14 & 1) == 0) && ((float)iVar5 * 5.0 <= local_2658._0_4_)) &&
          (local_2658._0_4_ < (float)iVar9 * 5.0 + 5.0)) &&
         ((((float)iVar27 * 5.0 <= (float)local_2650 &&
           ((float)local_2650 < (float)iVar21 * 5.0 + 5.0)) &&
          (uVar14 = FUN_01fadef8(param_1,&local_b8), (uVar14 & 1) != 0)))) {
        FUN_01fe1694(&local_3638,&local_b8);
        return 1;
      }
    }
LAB_01fd9180:
    FUN_01fd92a0(param_1);
    return 0;
  }
  if ((int)*(uint *)(*(long *)(param_1[1] + 0x68) + 0x2b4) < 1) {
    if (*(uint *)(*(long *)(param_1[1] + 0x68) + 0x2b4) < 0x80000001) {
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar12 = *puVar18 ^ *puVar18 << 0xb;
      uVar25 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar12 = uVar12 >> 8 ^ uVar25 >> 0x13 ^ uVar12 ^ uVar25;
      puVar18[2] = uVar25;
      puVar18[3] = uVar12;
      if ((uVar12 >> 1 & 1) != 0) goto LAB_01fd88a4;
    }
  }
  else {
LAB_01fd88a4:
    fVar38 = fVar36;
  }
LAB_01fd88ac:
  fVar37 = (float)(int)fVar38 * 5.0;
  local_2650 = (char *)CONCAT44(local_2650._4_4_,(float)iVar2 * 5.0);
  fVar38 = *(float *)(lVar32 + 0x280) - (float)iVar2 * 5.0;
  fVar36 = *(float *)(lVar32 + 0x278) - fVar37;
LAB_01fd88d0:
  local_2658 = (undefined **)(ulong)(uint)fVar37;
  uVar11 = FUN_006f0400(fVar36,fVar38);
  puVar19 = param_1[1];
  pppuVar16 = &local_3670;
  pppuVar15 = &local_2658;
  local_3670 = (undefined **)CONCAT44(local_3670._4_4_,uVar11);
LAB_01fd88e8:
  FUN_01e39778(puVar19,pppuVar15,pppuVar16,0);
  *(ushort *)((long)param_1 + 0x1242c) = *(ushort *)((long)param_1 + 0x1242c) | 4;
  return 1;
}

