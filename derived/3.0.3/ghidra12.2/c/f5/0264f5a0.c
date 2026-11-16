
void FUN_0264f5a0(byte *param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined *puVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  long *plVar15;
  byte bVar16;
  ushort uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined2 local_14c [2];
  undefined2 local_148 [2];
  short local_144 [2];
  undefined1 auStack_140 [4];
  short local_13c [2];
  undefined1 auStack_138 [4];
  short local_134 [2];
  undefined2 local_130;
  undefined1 auStack_12e [2];
  undefined2 local_12c [2];
  undefined2 local_128 [2];
  short local_124 [2];
  undefined1 auStack_120 [4];
  short local_11c [2];
  undefined1 auStack_118 [4];
  short local_114 [2];
  undefined1 auStack_110 [6];
  undefined1 auStack_10a [2];
  undefined2 local_108 [2];
  short local_104 [2];
  undefined1 auStack_100 [4];
  short local_fc [2];
  undefined1 auStack_f8 [4];
  short local_f4 [2];
  undefined1 auStack_f0 [4];
  short local_ec [2];
  undefined1 auStack_e8 [4];
  short local_e4 [2];
  undefined1 auStack_e0 [4];
  short local_dc [2];
  undefined1 auStack_d8 [4];
  undefined2 local_d4 [2];
  short local_d0 [2];
  undefined1 auStack_cc [4];
  short local_c8 [2];
  undefined1 auStack_c4 [4];
  short local_c0 [2];
  undefined1 auStack_bc [6];
  undefined1 auStack_b6 [2];
  undefined2 local_b4 [2];
  ushort local_b0 [2];
  ushort local_ac [2];
  undefined *local_a8;
  uint local_a0;
  uint local_9c;
  uint *local_98;
  uint local_8c;
  uint local_88;
  uint local_84;
  undefined *local_80;
  long local_78;
  ulong local_70;
  
  bVar16 = *param_1;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar16);
  lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
  puVar1 = PTR_DAT_04bc00c8;
  if (lVar9 != 0) {
    if (*(long **)(lVar9 + 0x220) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar10 = (undefined8 *)**(long **)(lVar9 + 0x220);
      uVar11 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar10)();
      }
    }
    puVar18 = (uint *)(*(long *)(lVar9 + 0x208) + *(long *)(lVar9 + 0x200));
    uVar20 = *puVar18;
    local_8c = *puVar18;
    uVar7 = puVar18[1];
    local_88 = uVar7;
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x220) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x220) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    puVar3 = PTR_DAT_04bb43c0;
    lVar23 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_8c);
    lVar21 = *(long *)puVar3;
    if (lVar21 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_a8 = PTR_DAT_04bc0510 + 0x10;
        local_98 = (uint *)0x0;
        local_a0 = uVar20;
        local_9c = uVar7;
        uVar7 = FUN_0277d6c4(&local_a0);
        if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_0264f80c:
          local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
          local_84 = 0xbc;
        }
        else {
          lVar21 = *(long *)(lVar21 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0264f80c;
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_8c);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
             (puVar18 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar18 == (uint *)0x0)) goto LAB_0264f80c;
          local_84 = 0;
          local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
          uVar7 = *puVar18;
          local_98 = puVar18;
          if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
            puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
            local_84 = 0;
            if (*puVar19 != 0) {
              uVar7 = puVar19[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                lVar21 = 0xc;
                if (*(char *)((long)puVar19 + 10) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
                if (lVar21 != 0) {
                  uVar20 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar20 = (uint)((ulong)((long)puVar18 - lVar21) / (ulong)uVar7);
                  }
                  if (*puVar19 <= uVar20) {
                    uVar20 = 0xffffffff;
                  }
                  if ((uVar20 < *(uint *)puVar1) &&
                     (local_84 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
                     local_84 < 0xbd)) goto LAB_0264f818;
                }
              }
              local_84 = 0;
            }
          }
        }
LAB_0264f818:
        if ((local_84 == (uint)local_80) &&
           (FUN_01b086f4(local_ac,&local_a8), uVar17 = local_ac[0],
           local_ac[0] != *(ushort *)PTR_DAT_04bb3170)) {
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          uVar4 = local_ac[0];
          if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
            uVar7 = 0;
          }
          else {
            uVar11 = 0;
            do {
              if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)(uVar17 >> 0xb))
              goto LAB_0264f89c;
              uVar11 = uVar11 + 1;
            } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
            uVar11 = 0;
LAB_0264f89c:
            uVar7 = (uint)uVar11;
          }
          local_b0[0] = 0;
          bVar16 = *param_1;
          uVar17 = bVar16 & 0x7f;
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          if (*(uint *)PTR_DAT_04bb3120 <= uVar7) {
            uVar7 = 0;
          }
          if (7 < bVar16) {
            uVar17 = 0x7f;
          }
          local_b0[0] = uVar4 & 0x780 |
                        (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar7 * 4) <<
                                0xb) | uVar17;
          FUN_007ef010(local_b4,local_b0);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
          if (local_98 == (uint *)0x0) {
            local_84 = 0xbc;
          }
          else {
            uVar7 = *local_98;
            local_84 = 0;
            if ((uVar7 != 0) && (local_98 != (uint *)(ulong)uVar7)) {
              puVar18 = (uint *)((long)local_98 - (long)(ulong)uVar7);
              local_84 = 0;
              if (*puVar18 != 0) {
                uVar7 = puVar18[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar18 + 10) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar18 + lVar21 + (ulong)(ushort)puVar18[2] * 8;
                  if (lVar21 != 0) {
                    uVar20 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar20 = (uint)((ulong)((long)local_98 - lVar21) / (ulong)uVar7);
                    }
                    if (*puVar18 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((uVar20 < *(uint *)puVar1) &&
                       (local_84 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
                       local_84 < 0xbd)) goto LAB_0264f9ac;
                  }
                }
                local_84 = 0;
              }
            }
          }
LAB_0264f9ac:
          if (local_84 == 0xac) {
            local_9c = CONCAT22(local_9c._2_2_,local_b4[0]);
          }
          lVar21 = *(long *)(lVar9 + 0x1e8);
          if (lVar21 == 0) {
            uVar11 = 0;
          }
          else {
            if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
              lVar21 = *(long *)(lVar9 + 0x1e8);
              uVar11 = uVar11 & 0xffffffff;
              if (lVar21 == 0) goto LAB_0264fa2c;
            }
            plVar15 = *(long **)(lVar21 + 0x20);
            if (plVar15 != (long *)0x0) {
              local_80 = *(undefined **)(lVar9 + 0x1c8);
              local_78 = *(long *)(lVar9 + 0x1d0);
              local_70 = 0x8b0;
              (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
            }
          }
LAB_0264fa2c:
          puVar18 = (uint *)(*(long *)(lVar9 + 0x1d0) + *(long *)(lVar9 + 0x1c8));
          *puVar18 = local_a0;
          puVar18[1] = local_9c;
          if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x1e8) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1e8) + 0x18),
             puVar10 != (undefined8 *)0x0)) {
            (**(code **)*puVar10)();
          }
          if ((*(long **)(lVar9 + 600) == (long *)0x0) ||
             (puVar10 = (undefined8 *)**(long **)(lVar9 + 600), puVar10 == (undefined8 *)0x0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (**(code **)*puVar10)();
            uVar11 = uVar11 & 0xffffffff;
          }
          sVar2 = *(short *)(*(long *)(lVar9 + 0x240) + *(long *)(lVar9 + 0x238) + 0x72);
          if (sVar2 == 0) {
            FUN_007ef010(&local_84,PTR_DAT_04bb3170);
          }
          else {
            local_84 = CONCAT22(local_84._2_2_,sVar2 + -1);
          }
          if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 600) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 600) + 8), puVar10 != (undefined8 *)0x0))
          {
            (**(code **)*puVar10)();
          }
          uVar7 = local_84;
          uVar17 = (ushort)local_84;
          if ((local_84 & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170) {
            lVar21 = lVar9 + 0x230;
            plVar15 = *(long **)PTR_DAT_04bb27d0;
            if (*(byte *)(*plVar15 + 0x476) < 2) {
              if ((plVar15[5] == 0) || ((int)plVar15[0x10] != 1)) {
                FUN_007ef580(&local_80,&local_84);
                iVar8 = FUN_00802664(&local_80);
                if (iVar8 == 5) {
                  FUN_007f3c20(auStack_cc,1);
                  FUN_007eef5c(auStack_b6,auStack_cc,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                  local_70 = local_70 & 0xffffffffffffff00;
                  if (*(long *)(lVar9 + 600) == 0) {
                    uVar5 = 0;
                    local_78 = lVar21;
                  }
                  else {
                    puVar10 = *(undefined8 **)(*(long *)(lVar9 + 600) + 0x10);
                    uVar5 = 0;
                    local_78 = lVar21;
                    if (puVar10 != (undefined8 *)0x0) {
                      uVar5 = (**(code **)*puVar10)();
                    }
                  }
                  local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                             0xffffffffffff01ff;
                  local_80 = PTR_DAT_04bb4c50 + 0x10;
                  lVar21 = FUN_02652eb8(&local_80);
                  FUN_007ef010(local_d0,auStack_b6);
                  local_c0[0] = local_d0[0];
                  goto LAB_0264fd10;
                }
              }
              else {
                FUN_007ef580(&local_80,&local_84);
                iVar8 = FUN_00802664(&local_80);
                if (iVar8 == 1) {
                  FUN_007f3c20(auStack_c4,5);
                  FUN_007eef5c(auStack_b6,auStack_c4,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                  local_70 = local_70 & 0xffffffffffffff00;
                  if (*(long *)(lVar9 + 600) == 0) {
                    uVar5 = 0;
                    local_78 = lVar21;
                  }
                  else {
                    puVar10 = *(undefined8 **)(*(long *)(lVar9 + 600) + 0x10);
                    uVar5 = 0;
                    local_78 = lVar21;
                    if (puVar10 != (undefined8 *)0x0) {
                      uVar5 = (**(code **)*puVar10)();
                    }
                  }
                  local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                             0xffffffffffff01ff;
                  local_80 = PTR_DAT_04bb4c50 + 0x10;
                  lVar21 = FUN_02652eb8(&local_80);
                  FUN_007ef010(local_c8,auStack_b6);
                  local_c0[0] = local_c8[0];
LAB_0264fd10:
                  *(short *)(lVar21 + 0x72) = local_c0[0] + 1;
                  FUN_02640184(&local_80);
                }
              }
            }
            else {
              FUN_007ef580(&local_80,&local_84);
              iVar8 = FUN_00802664(&local_80);
              if (iVar8 == 1) {
                FUN_007f3c20(auStack_bc,5);
                FUN_007eef5c(auStack_b6,auStack_bc,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                local_70 = local_70 & 0xffffffffffffff00;
                if (*(long *)(lVar9 + 600) == 0) {
                  uVar5 = 0;
                  local_78 = lVar21;
                }
                else {
                  puVar10 = *(undefined8 **)(*(long *)(lVar9 + 600) + 0x10);
                  uVar5 = 0;
                  local_78 = lVar21;
                  if (puVar10 != (undefined8 *)0x0) {
                    uVar5 = (**(code **)*puVar10)();
                  }
                }
                local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                           0xffffffffffff01ff;
                local_80 = PTR_DAT_04bb4c50 + 0x10;
                lVar21 = FUN_02652eb8(&local_80);
                FUN_007ef010(local_c0,auStack_b6);
                goto LAB_0264fd10;
              }
            }
          }
        }
      }
    }
    if (*(long **)(lVar9 + 0xe28) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar10 = (undefined8 *)**(long **)(lVar9 + 0xe28);
      uVar11 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar10)();
      }
    }
    puVar18 = (uint *)(*(long *)(lVar9 + 0xe10) + *(long *)(lVar9 + 0xe08));
    uVar20 = *puVar18;
    local_8c = *puVar18;
    uVar7 = puVar18[1];
    local_88 = uVar7;
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0xe28) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xe28) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    puVar3 = PTR_DAT_04bb43c0;
    lVar23 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_8c);
    lVar21 = *(long *)puVar3;
    if (lVar21 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_a8 = PTR_DAT_04bc0510 + 0x10;
        local_98 = (uint *)0x0;
        local_a0 = uVar20;
        local_9c = uVar7;
        uVar7 = FUN_0277d6c4(&local_a0);
        if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_0264ff20:
          local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
          local_84 = 0xbc;
        }
        else {
          lVar21 = *(long *)(lVar21 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0264ff20;
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_8c);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
             (puVar18 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar18 == (uint *)0x0)) goto LAB_0264ff20;
          local_84 = 0;
          local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
          uVar7 = *puVar18;
          local_98 = puVar18;
          if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
            puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
            local_84 = 0;
            if (*puVar19 != 0) {
              uVar7 = puVar19[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                lVar21 = 0xc;
                if (*(char *)((long)puVar19 + 10) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
                if (lVar21 != 0) {
                  uVar20 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar20 = (uint)((ulong)((long)puVar18 - lVar21) / (ulong)uVar7);
                  }
                  if (*puVar19 <= uVar20) {
                    uVar20 = 0xffffffff;
                  }
                  if ((uVar20 < *(uint *)puVar1) &&
                     (local_84 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
                     local_84 < 0xbd)) goto LAB_0264ff2c;
                }
              }
              local_84 = 0;
            }
          }
        }
LAB_0264ff2c:
        if ((local_84 == (uint)local_80) &&
           (FUN_01b086f4(local_ac,&local_a8), uVar17 = local_ac[0],
           local_ac[0] != *(ushort *)PTR_DAT_04bb3170)) {
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          uVar4 = local_ac[0];
          if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
            uVar7 = 0;
          }
          else {
            uVar11 = 0;
            do {
              if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)(uVar17 >> 0xb))
              goto LAB_0264ffb0;
              uVar11 = uVar11 + 1;
            } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
            uVar11 = 0;
LAB_0264ffb0:
            uVar7 = (uint)uVar11;
          }
          local_b0[0] = 0;
          bVar16 = *param_1;
          uVar17 = bVar16 & 0x7f;
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          if (*(uint *)PTR_DAT_04bb3120 <= uVar7) {
            uVar7 = 0;
          }
          if (7 < bVar16) {
            uVar17 = 0x7f;
          }
          local_b0[0] = uVar4 & 0x780 |
                        (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar7 * 4) <<
                                0xb) | uVar17;
          FUN_007ef010(local_d4,local_b0);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
          if (local_98 == (uint *)0x0) {
            local_84 = 0xbc;
          }
          else {
            uVar7 = *local_98;
            local_84 = 0;
            if ((uVar7 != 0) && (local_98 != (uint *)(ulong)uVar7)) {
              puVar18 = (uint *)((long)local_98 - (long)(ulong)uVar7);
              local_84 = 0;
              if (*puVar18 != 0) {
                uVar7 = puVar18[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar18 + 10) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar18 + lVar21 + (ulong)(ushort)puVar18[2] * 8;
                  if (lVar21 != 0) {
                    uVar20 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar20 = (uint)((ulong)((long)local_98 - lVar21) / (ulong)uVar7);
                    }
                    if (*puVar18 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((uVar20 < *(uint *)puVar1) &&
                       (local_84 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
                       local_84 < 0xbd)) goto LAB_026500c0;
                  }
                }
                local_84 = 0;
              }
            }
          }
LAB_026500c0:
          if (local_84 == 0xac) {
            local_9c = CONCAT22(local_9c._2_2_,local_d4[0]);
          }
          lVar21 = *(long *)(lVar9 + 0xdf0);
          if (lVar21 == 0) {
            uVar11 = 0;
          }
          else {
            if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
              lVar21 = *(long *)(lVar9 + 0xdf0);
              uVar11 = uVar11 & 0xffffffff;
              if (lVar21 == 0) goto LAB_02650144;
            }
            plVar15 = *(long **)(lVar21 + 0x20);
            if (plVar15 != (long *)0x0) {
              local_80 = *(undefined **)(lVar9 + 0xdd0);
              local_78 = *(long *)(lVar9 + 0xdd8);
              local_70 = 0x8b0;
              (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
            }
          }
LAB_02650144:
          puVar18 = (uint *)(*(long *)(lVar9 + 0xdd8) + *(long *)(lVar9 + 0xdd0));
          *puVar18 = local_a0;
          puVar18[1] = local_9c;
          if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0xdf0) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xdf0) + 0x18),
             puVar10 != (undefined8 *)0x0)) {
            (**(code **)*puVar10)();
          }
          if ((*(long **)(lVar9 + 0xe60) == (long *)0x0) ||
             (puVar10 = (undefined8 *)**(long **)(lVar9 + 0xe60), puVar10 == (undefined8 *)0x0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = (**(code **)*puVar10)();
            uVar11 = uVar11 & 0xffffffff;
          }
          sVar2 = *(short *)(*(long *)(lVar9 + 0xe48) + *(long *)(lVar9 + 0xe40) + 0x72);
          if (sVar2 == 0) {
            FUN_007ef010(&local_84,PTR_DAT_04bb3170);
          }
          else {
            local_84 = CONCAT22(local_84._2_2_,sVar2 + -1);
          }
          if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0xe60) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xe60) + 8), puVar10 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar10)();
          }
          uVar7 = local_84;
          uVar17 = (ushort)local_84;
          if ((local_84 & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170) {
            lVar21 = lVar9 + 0xe38;
            plVar15 = *(long **)PTR_DAT_04bb27d0;
            if (*(byte *)(*plVar15 + 0x476) < 2) {
              if ((plVar15[5] == 0) || ((int)plVar15[0x10] != 1)) {
                FUN_007ef580(&local_80,&local_84);
                iVar8 = FUN_00802664(&local_80);
                if (iVar8 == 5) {
                  FUN_007f3c20(auStack_f8,1);
                  FUN_007eef5c(auStack_b6,auStack_f8,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                  local_70 = local_70 & 0xffffffffffffff00;
                  if (*(long *)(lVar9 + 0xe60) == 0) {
                    uVar5 = 0;
                    local_78 = lVar21;
                  }
                  else {
                    puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xe60) + 0x10);
                    uVar5 = 0;
                    local_78 = lVar21;
                    if (puVar10 != (undefined8 *)0x0) {
                      uVar5 = (**(code **)*puVar10)();
                    }
                  }
                  local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                             0xffffffffffff01ff;
                  local_80 = PTR_DAT_04bb4c50 + 0x10;
                  lVar23 = FUN_02652eb8(&local_80);
                  FUN_007ef010(local_fc,auStack_b6);
                  *(short *)(lVar23 + 0x72) = local_fc[0] + 1;
                  FUN_02640184(&local_80);
                }
                FUN_007ef580(&local_80,&local_84);
                iVar8 = FUN_00802664(&local_80);
                if (iVar8 == 4) {
                  FUN_007f3c20(auStack_100,0);
                  FUN_007eef5c(auStack_b6,auStack_100,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                  local_70 = local_70 & 0xffffffffffffff00;
                  if (*(long *)(lVar9 + 0xe60) == 0) {
                    uVar5 = 0;
                    local_78 = lVar21;
                  }
                  else {
                    puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xe60) + 0x10);
                    uVar5 = 0;
                    local_78 = lVar21;
                    if (puVar10 != (undefined8 *)0x0) {
                      uVar5 = (**(code **)*puVar10)();
                    }
                  }
                  local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                             0xffffffffffff01ff;
                  local_80 = PTR_DAT_04bb4c50 + 0x10;
                  lVar9 = FUN_02652eb8(&local_80);
                  FUN_007ef010(local_104,auStack_b6);
                  local_e4[0] = local_104[0];
                  goto LAB_02650644;
                }
              }
              else {
                FUN_007ef580(&local_80,&local_84);
                iVar8 = FUN_00802664(&local_80);
                if (iVar8 == 1) {
                  FUN_007f3c20(auStack_e8,5);
                  FUN_007eef5c(auStack_b6,auStack_e8,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                  local_70 = local_70 & 0xffffffffffffff00;
                  if (*(long *)(lVar9 + 0xe60) == 0) {
                    uVar5 = 0;
                    local_78 = lVar21;
                  }
                  else {
                    puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xe60) + 0x10);
                    uVar5 = 0;
                    local_78 = lVar21;
                    if (puVar10 != (undefined8 *)0x0) {
                      uVar5 = (**(code **)*puVar10)();
                    }
                  }
                  local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                             0xffffffffffff01ff;
                  local_80 = PTR_DAT_04bb4c50 + 0x10;
                  lVar23 = FUN_02652eb8(&local_80);
                  FUN_007ef010(local_ec,auStack_b6);
                  *(short *)(lVar23 + 0x72) = local_ec[0] + 1;
                  FUN_02640184(&local_80);
                }
                FUN_007ef580(&local_80,&local_84);
                iVar8 = FUN_00802664(&local_80);
                if (iVar8 == 0) {
                  FUN_007f3c20(auStack_f0,4);
                  FUN_007eef5c(auStack_b6,auStack_f0,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                  local_70 = local_70 & 0xffffffffffffff00;
                  if (*(long *)(lVar9 + 0xe60) == 0) {
                    uVar5 = 0;
                    local_78 = lVar21;
                  }
                  else {
                    puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xe60) + 0x10);
                    uVar5 = 0;
                    local_78 = lVar21;
                    if (puVar10 != (undefined8 *)0x0) {
                      uVar5 = (**(code **)*puVar10)();
                    }
                  }
                  local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                             0xffffffffffff01ff;
                  local_80 = PTR_DAT_04bb4c50 + 0x10;
                  lVar9 = FUN_02652eb8(&local_80);
                  FUN_007ef010(local_f4,auStack_b6);
                  local_e4[0] = local_f4[0];
LAB_02650644:
                  *(short *)(lVar9 + 0x72) = local_e4[0] + 1;
                  FUN_02640184(&local_80);
                }
              }
            }
            else {
              FUN_007ef580(&local_80,&local_84);
              iVar8 = FUN_00802664(&local_80);
              if (iVar8 == 1) {
                FUN_007f3c20(auStack_d8,5);
                FUN_007eef5c(auStack_b6,auStack_d8,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                local_70 = local_70 & 0xffffffffffffff00;
                if (*(long *)(lVar9 + 0xe60) == 0) {
                  uVar5 = 0;
                  local_78 = lVar21;
                }
                else {
                  puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xe60) + 0x10);
                  uVar5 = 0;
                  local_78 = lVar21;
                  if (puVar10 != (undefined8 *)0x0) {
                    uVar5 = (**(code **)*puVar10)();
                  }
                }
                local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                           0xffffffffffff01ff;
                local_80 = PTR_DAT_04bb4c50 + 0x10;
                lVar23 = FUN_02652eb8(&local_80);
                FUN_007ef010(local_dc,auStack_b6);
                *(short *)(lVar23 + 0x72) = local_dc[0] + 1;
                FUN_02640184(&local_80);
              }
              FUN_007ef580(&local_80,&local_84);
              iVar8 = FUN_00802664(&local_80);
              if (iVar8 == 0) {
                FUN_007f3c20(auStack_e0,4);
                FUN_007eef5c(auStack_b6,auStack_e0,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                local_70 = local_70 & 0xffffffffffffff00;
                if (*(long *)(lVar9 + 0xe60) == 0) {
                  uVar5 = 0;
                  local_78 = lVar21;
                }
                else {
                  puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xe60) + 0x10);
                  uVar5 = 0;
                  local_78 = lVar21;
                  if (puVar10 != (undefined8 *)0x0) {
                    uVar5 = (**(code **)*puVar10)();
                  }
                }
                local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                           0xffffffffffff01ff;
                local_80 = PTR_DAT_04bb4c50 + 0x10;
                lVar9 = FUN_02652eb8(&local_80);
                FUN_007ef010(local_e4,auStack_b6);
                goto LAB_02650644;
              }
            }
          }
        }
      }
    }
    bVar16 = *param_1;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar16);
    lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
    if (lVar9 != 0) {
      if (*(long **)(lVar9 + 0x1b10) == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1b10);
        uVar11 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar11 = (**(code **)*puVar10)();
        }
      }
      puVar18 = (uint *)(*(long *)(lVar9 + 0x1af8) + *(long *)(lVar9 + 0x1af0));
      uVar20 = *puVar18;
      local_8c = *puVar18;
      uVar7 = puVar18[1];
      local_88 = uVar7;
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x1b10) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1b10) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
      puVar3 = PTR_DAT_04bb43c0;
      lVar23 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_8c);
      lVar21 = *(long *)puVar3;
      if (lVar21 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_a8 = PTR_DAT_04bc0510 + 0x10;
          local_98 = (uint *)0x0;
          local_a0 = uVar20;
          local_9c = uVar7;
          uVar7 = FUN_0277d6c4(&local_a0);
          if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_026508ac:
            FUN_007ef010(local_ac,PTR_DAT_04bb3170);
            local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
            local_84 = 0xbc;
          }
          else {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_026508ac;
            lVar21 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_8c);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
               (puVar18 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar18 == (uint *)0x0)) goto LAB_026508ac;
            local_98 = puVar18;
            FUN_007ef010(local_ac,PTR_DAT_04bb3170);
            local_84 = 0;
            local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
            uVar7 = *puVar18;
            if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
              puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
              local_84 = 0;
              if (*puVar19 != 0) {
                uVar7 = puVar19[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
                  if (lVar21 != 0) {
                    uVar20 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar20 = (uint)((ulong)((long)puVar18 - lVar21) / (ulong)uVar7);
                    }
                    if (*puVar19 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((uVar20 < *(uint *)puVar1) &&
                       (local_84 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
                       local_84 < 0xbd)) goto LAB_026508c8;
                  }
                }
                local_84 = 0;
              }
            }
          }
LAB_026508c8:
          if (local_84 == (uint)local_80) {
            FUN_01b086f4(local_ac,&local_a8);
          }
          uVar11 = FUN_01ae89e0(&local_a8);
          if ((uVar11 & 1) != 0) {
            FUN_01b08c14(&local_80,&local_a8);
            local_ac[0] = (ushort)local_80;
          }
          uVar17 = local_ac[0];
          if (local_ac[0] != *(ushort *)PTR_DAT_04bb3170) {
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            uVar4 = local_ac[0];
            if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
              uVar7 = 0;
            }
            else {
              uVar11 = 0;
              do {
                if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)(uVar17 >> 0xb)
                   ) goto LAB_02650970;
                uVar11 = uVar11 + 1;
              } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
              uVar11 = 0;
LAB_02650970:
              uVar7 = (uint)uVar11;
            }
            local_b0[0] = 0;
            bVar16 = *param_1;
            uVar17 = bVar16 & 0x7f;
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            puVar18 = local_98;
            if (*(uint *)PTR_DAT_04bb3120 <= uVar7) {
              uVar7 = 0;
            }
            if (7 < bVar16) {
              uVar17 = 0x7f;
            }
            local_b0[0] = uVar4 & 0x780 |
                          (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar7 * 4)
                                  << 0xb) | uVar17;
            local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
            if (local_98 == (uint *)0x0) {
              local_84 = 0xbc;
            }
            else {
              uVar7 = *local_98;
              local_84 = 0;
              if ((uVar7 != 0) && (local_98 != (uint *)(ulong)uVar7)) {
                puVar19 = (uint *)((long)local_98 - (long)(ulong)uVar7);
                local_84 = 0;
                if (*puVar19 != 0) {
                  uVar7 = puVar19[1];
                  if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                    lVar21 = 0xc;
                    if (*(char *)((long)puVar19 + 10) != '\0') {
                      lVar21 = 0x1c;
                    }
                    lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
                    if (lVar21 != 0) {
                      uVar20 = 0;
                      if ((ulong)uVar7 != 0) {
                        uVar20 = (uint)((ulong)((long)local_98 - lVar21) / (ulong)uVar7);
                      }
                      if (*puVar19 <= uVar20) {
                        uVar20 = 0xffffffff;
                      }
                      if ((uVar20 < *(uint *)puVar1) &&
                         (local_84 = (uint)*(ushort *)
                                            (*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
                         local_84 < 0xbd)) goto LAB_02650a74;
                    }
                  }
                  local_84 = 0;
                }
              }
            }
LAB_02650a74:
            if (local_84 == 0xac) {
              FUN_007ef010(local_108,local_b0);
              local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
              if (puVar18 == (uint *)0x0) {
                local_84 = 0xbc;
              }
              else {
                uVar7 = *puVar18;
                local_84 = 0;
                if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
                  puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
                  local_84 = 0;
                  if (*puVar19 != 0) {
                    uVar7 = puVar19[1];
                    if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                      lVar21 = 0xc;
                      if (*(char *)((long)puVar19 + 10) != '\0') {
                        lVar21 = 0x1c;
                      }
                      lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
                      if (lVar21 != 0) {
                        uVar20 = 0;
                        if ((ulong)uVar7 != 0) {
                          uVar20 = (uint)((ulong)((long)puVar18 - lVar21) / (ulong)uVar7);
                        }
                        if (*puVar19 <= uVar20) {
                          uVar20 = 0xffffffff;
                        }
                        if ((uVar20 < *(uint *)puVar1) &&
                           (local_84 = (uint)*(ushort *)
                                              (*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
                           local_84 < 0xbd)) goto LAB_02650b2c;
                      }
                    }
                    local_84 = 0;
                  }
                }
              }
LAB_02650b2c:
              if (local_84 == 0xac) {
                local_9c = CONCAT22(local_9c._2_2_,local_108[0]);
              }
            }
            uVar11 = FUN_01ae89e0(&local_a8);
            if ((uVar11 & 1) != 0) {
              FUN_007ef010(auStack_10a,local_b0);
              FUN_01b08ab4(&local_a8,auStack_10a);
            }
            lVar21 = *(long *)(lVar9 + 0x1ad8);
            if (lVar21 == 0) {
              uVar11 = 0;
            }
            else {
              if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                lVar21 = *(long *)(lVar9 + 0x1ad8);
                uVar11 = uVar11 & 0xffffffff;
                if (lVar21 == 0) goto LAB_02650bd4;
              }
              plVar15 = *(long **)(lVar21 + 0x20);
              if (plVar15 != (long *)0x0) {
                local_80 = *(undefined **)(lVar9 + 0x1ab8);
                local_78 = *(long *)(lVar9 + 0x1ac0);
                local_70 = 0x8b0;
                (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
              }
            }
LAB_02650bd4:
            puVar18 = (uint *)(*(long *)(lVar9 + 0x1ac0) + *(long *)(lVar9 + 0x1ab8));
            *puVar18 = local_a0;
            puVar18[1] = local_9c;
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x1ad8) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1ad8) + 0x18),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            if ((*(long **)(lVar9 + 0x1b48) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1b48), puVar10 == (undefined8 *)0x0))
            {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)*puVar10)();
              uVar11 = uVar11 & 0xffffffff;
            }
            sVar2 = *(short *)(*(long *)(lVar9 + 0x1b30) + *(long *)(lVar9 + 0x1b28) + 0x72);
            if (sVar2 == 0) {
              FUN_007ef010(&local_84,PTR_DAT_04bb3170);
            }
            else {
              local_84 = CONCAT22(local_84._2_2_,sVar2 + -1);
            }
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x1b48) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1b48) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            uVar7 = local_84;
            uVar17 = (ushort)local_84;
            if ((local_84 & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170) {
              lVar21 = lVar9 + 0x1b20;
              plVar15 = *(long **)PTR_DAT_04bb27d0;
              if (*(byte *)(*plVar15 + 0x476) < 2) {
                if ((plVar15[5] == 0) || ((int)plVar15[0x10] != 1)) {
                  FUN_007ef580(&local_80,&local_84);
                  iVar8 = FUN_00802664(&local_80);
                  if (iVar8 == 5) {
                    FUN_007f3c20(auStack_120,1);
                    FUN_007eef5c(auStack_b6,auStack_120,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                    local_70 = local_70 & 0xffffffffffffff00;
                    if (*(long *)(lVar9 + 0x1b48) == 0) {
                      uVar5 = 0;
                      local_78 = lVar21;
                    }
                    else {
                      puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1b48) + 0x10);
                      uVar5 = 0;
                      local_78 = lVar21;
                      if (puVar10 != (undefined8 *)0x0) {
                        uVar5 = (**(code **)*puVar10)();
                      }
                    }
                    local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                               0xffffffffffff01ff;
                    local_80 = PTR_DAT_04bb4c50 + 0x10;
                    lVar9 = FUN_02652eb8(&local_80);
                    FUN_007ef010(local_124,auStack_b6);
                    local_114[0] = local_124[0];
                    goto LAB_02650f38;
                  }
                }
                else {
                  FUN_007ef580(&local_80,&local_84);
                  iVar8 = FUN_00802664(&local_80);
                  if (iVar8 == 1) {
                    FUN_007f3c20(auStack_118,5);
                    FUN_007eef5c(auStack_b6,auStack_118,uVar17 >> 7 & 0xf,uVar7 & 0x7f);
                    local_70 = local_70 & 0xffffffffffffff00;
                    if (*(long *)(lVar9 + 0x1b48) == 0) {
                      uVar5 = 0;
                      local_78 = lVar21;
                    }
                    else {
                      puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1b48) + 0x10);
                      uVar5 = 0;
                      local_78 = lVar21;
                      if (puVar10 != (undefined8 *)0x0) {
                        uVar5 = (**(code **)*puVar10)();
                      }
                    }
                    local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                               0xffffffffffff01ff;
                    local_80 = PTR_DAT_04bb4c50 + 0x10;
                    lVar9 = FUN_02652eb8(&local_80);
                    FUN_007ef010(local_11c,auStack_b6);
                    local_114[0] = local_11c[0];
LAB_02650f38:
                    *(short *)(lVar9 + 0x72) = local_114[0] + 1;
                    FUN_02640184(&local_80);
                  }
                }
              }
              else {
                if (((*PTR_DAT_04bb3128 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
                  FUN_00706e58(PTR_DAT_04bb3120);
                  __cxa_guard_release(PTR_DAT_04bb3128);
                }
                if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
                  uVar14 = 0;
                }
                else {
                  uVar11 = 0;
                  do {
                    if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) ==
                        (uint)(uVar17 >> 0xb)) goto LAB_02650d04;
                    uVar11 = uVar11 + 1;
                  } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
                  uVar11 = 0;
LAB_02650d04:
                  uVar14 = (undefined4)uVar11;
                }
                local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar14);
                if (((*PTR_DAT_04bb3128 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
                  FUN_00706e58(PTR_DAT_04bb3120);
                  __cxa_guard_release(PTR_DAT_04bb3128);
                }
                uVar7 = (uint)local_80;
                if (*(uint *)PTR_DAT_04bb3120 <= (uint)local_80) {
                  uVar7 = 0;
                }
                if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar7 * 4) == 1) {
                  FUN_007f3c20(auStack_110,5);
                  FUN_007eef5c(auStack_b6,auStack_110,(ushort)local_84 >> 7 & 0xf,local_84 & 0x7f);
                  local_70 = local_70 & 0xffffffffffffff00;
                  if (*(long *)(lVar9 + 0x1b48) == 0) {
                    uVar5 = 0;
                    local_78 = lVar21;
                  }
                  else {
                    puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1b48) + 0x10);
                    uVar5 = 0;
                    local_78 = lVar21;
                    if (puVar10 != (undefined8 *)0x0) {
                      uVar5 = (**(code **)*puVar10)();
                    }
                  }
                  local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                             0xffffffffffff01ff;
                  local_80 = PTR_DAT_04bb4c50 + 0x10;
                  lVar9 = FUN_02652eb8(&local_80);
                  FUN_007ef010(local_114,auStack_b6);
                  goto LAB_02650f38;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar9 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    bVar16 = *param_1;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar16);
    lVar21 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
    lVar23 = lVar21 + lVar9 * 0x2450;
    if (lVar21 != 0) {
      if (*(long **)(lVar23 + 0x3fd0) == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        puVar10 = (undefined8 *)**(long **)(lVar23 + 0x3fd0);
        uVar11 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar11 = (**(code **)*puVar10)();
        }
      }
      puVar18 = (uint *)(*(long *)(lVar23 + 0x3fb8) + *(long *)(lVar23 + 0x3fb0));
      uVar20 = *puVar18;
      local_8c = *puVar18;
      uVar7 = puVar18[1];
      local_88 = uVar7;
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar23 + 0x3fd0) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar23 + 0x3fd0) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
      puVar3 = PTR_DAT_04bb43c0;
      lVar22 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_8c);
      lVar21 = *(long *)puVar3;
      if (lVar21 != 0) {
        lVar22 = *(long *)(lVar22 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar22 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_a8 = PTR_DAT_04bc0510 + 0x10;
          local_98 = (uint *)0x0;
          local_a0 = uVar20;
          local_9c = uVar7;
          uVar7 = FUN_0277d6c4(&local_a0);
          if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_026511c4:
            local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
            local_84 = 0xbc;
          }
          else {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_026511c4;
            lVar21 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_8c);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
               (puVar18 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar18 == (uint *)0x0)) goto LAB_026511c4;
            local_84 = 0;
            local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
            uVar7 = *puVar18;
            local_98 = puVar18;
            if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
              puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
              local_84 = 0;
              if (*puVar19 != 0) {
                uVar7 = puVar19[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
                  if (lVar21 != 0) {
                    uVar20 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar20 = (uint)((ulong)((long)puVar18 - lVar21) / (ulong)uVar7);
                    }
                    if (*puVar19 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_84 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2),
                       local_84 < 0xbd)) goto LAB_026511d0;
                  }
                }
                local_84 = 0;
              }
            }
          }
LAB_026511d0:
          if ((local_84 == (uint)local_80) &&
             (FUN_01b086f4(local_ac,&local_a8), uVar17 = local_ac[0],
             local_ac[0] != *(ushort *)PTR_DAT_04bb3170)) {
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            uVar4 = local_ac[0];
            if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
              uVar7 = 0;
            }
            else {
              uVar11 = 0;
              do {
                if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)(uVar17 >> 0xb)
                   ) goto LAB_0265125c;
                uVar11 = uVar11 + 1;
              } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
              uVar11 = 0;
LAB_0265125c:
              uVar7 = (uint)uVar11;
            }
            local_b0[0] = 0;
            bVar16 = *param_1;
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            local_b0[0] = bVar16 & 0x7f;
            if (*(uint *)PTR_DAT_04bb3120 <= uVar7) {
              uVar7 = 0;
            }
            if (7 < bVar16) {
              local_b0[0] = 0x7f;
            }
            local_b0[0] = uVar4 & 0x780 |
                          (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar7 * 4)
                                  << 0xb) | local_b0[0];
            FUN_007ef010(local_128,local_b0);
            local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
            if (local_98 == (uint *)0x0) {
              local_84 = 0xbc;
            }
            else {
              uVar7 = *local_98;
              local_84 = 0;
              if ((uVar7 != 0) && (local_98 != (uint *)(ulong)uVar7)) {
                puVar18 = (uint *)((long)local_98 - (long)(ulong)uVar7);
                local_84 = 0;
                if (*puVar18 != 0) {
                  uVar7 = puVar18[1];
                  if ((uVar7 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                    lVar21 = 0xc;
                    if (*(char *)((long)puVar18 + 10) != '\0') {
                      lVar21 = 0x1c;
                    }
                    lVar21 = (long)puVar18 + lVar21 + (ulong)(ushort)puVar18[2] * 8;
                    if (lVar21 != 0) {
                      uVar20 = 0;
                      if ((ulong)uVar7 != 0) {
                        uVar20 = (uint)((ulong)((long)local_98 - lVar21) / (ulong)uVar7);
                      }
                      if (*puVar18 <= uVar20) {
                        uVar20 = 0xffffffff;
                      }
                      if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_84 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2
                                            ), local_84 < 0xbd)) goto LAB_02651374;
                    }
                  }
                  local_84 = 0;
                }
              }
            }
LAB_02651374:
            if (local_84 == 0xac) {
              local_9c = CONCAT22(local_9c._2_2_,local_128[0]);
            }
            lVar21 = *(long *)(lVar23 + 0x3f98);
            if (lVar21 == 0) {
              uVar11 = 0;
            }
            else {
              if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
                uVar11 = 0;
                plVar15 = *(long **)(lVar21 + 0x20);
              }
              else {
                uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                uVar11 = uVar11 & 0xffffffff;
                if (*(long *)(lVar23 + 0x3f98) == 0) goto LAB_026513fc;
                plVar15 = *(long **)(*(long *)(lVar23 + 0x3f98) + 0x20);
              }
              if (plVar15 != (long *)0x0) {
                local_80 = *(undefined **)(lVar23 + 0x3f78);
                local_78 = *(long *)(lVar23 + 0x3f80);
                local_70 = 0x8b0;
                (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
              }
            }
LAB_026513fc:
            puVar18 = (uint *)(*(long *)(lVar23 + 0x3f80) + *(long *)(lVar23 + 0x3f78));
            *puVar18 = local_a0;
            puVar18[1] = local_9c;
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar23 + 0x3f98) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar23 + 0x3f98) + 0x18),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
          }
        }
      }
      if (*(long **)(lVar23 + 0x4bd8) == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        puVar10 = (undefined8 *)**(long **)(lVar23 + 0x4bd8);
        uVar11 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar11 = (**(code **)*puVar10)();
        }
      }
      puVar18 = (uint *)(*(long *)(lVar23 + 0x4bc0) + *(long *)(lVar23 + 0x4bb8));
      uVar20 = *puVar18;
      local_8c = *puVar18;
      uVar7 = puVar18[1];
      local_88 = uVar7;
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar23 + 0x4bd8) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar23 + 0x4bd8) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
      puVar3 = PTR_DAT_04bb43c0;
      lVar22 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_8c);
      lVar21 = *(long *)puVar3;
      if (lVar21 != 0) {
        lVar22 = *(long *)(lVar22 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar22 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_98 = (uint *)0x0;
          local_a8 = puVar1;
          local_a0 = uVar20;
          local_9c = uVar7;
          uVar7 = FUN_0277d6c4(&local_a0);
          if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_02651628:
            local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
            local_84 = 0xbc;
          }
          else {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_02651628;
            lVar21 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_8c);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
               (puVar18 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar18 == (uint *)0x0)) goto LAB_02651628;
            local_84 = 0;
            local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
            uVar7 = *puVar18;
            local_98 = puVar18;
            if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
              puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
              local_84 = 0;
              if (*puVar19 != 0) {
                uVar7 = puVar19[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar19 + 10) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
                  if (lVar21 != 0) {
                    uVar20 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar20 = (uint)((ulong)((long)puVar18 - lVar21) / (ulong)uVar7);
                    }
                    if (*puVar19 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_84 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2),
                       local_84 < 0xbd)) goto LAB_02651634;
                  }
                }
                local_84 = 0;
              }
            }
          }
LAB_02651634:
          if ((local_84 == (uint)local_80) &&
             (FUN_01b086f4(local_ac,&local_a8), uVar17 = local_ac[0],
             local_ac[0] != *(ushort *)PTR_DAT_04bb3170)) {
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            uVar4 = local_ac[0];
            if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
              uVar7 = 0;
            }
            else {
              uVar11 = 0;
              do {
                if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)(uVar17 >> 0xb)
                   ) goto LAB_026516bc;
                uVar11 = uVar11 + 1;
              } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
              uVar11 = 0;
LAB_026516bc:
              uVar7 = (uint)uVar11;
            }
            local_b0[0] = 0;
            bVar16 = *param_1;
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            local_b0[0] = bVar16 & 0x7f;
            if (*(uint *)PTR_DAT_04bb3120 <= uVar7) {
              uVar7 = 0;
            }
            if (7 < bVar16) {
              local_b0[0] = 0x7f;
            }
            local_b0[0] = uVar4 & 0x780 |
                          (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar7 * 4)
                                  << 0xb) | local_b0[0];
            FUN_007ef010(local_12c,local_b0);
            local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
            if (local_98 == (uint *)0x0) {
              local_84 = 0xbc;
            }
            else {
              uVar7 = *local_98;
              local_84 = 0;
              if ((uVar7 != 0) && (local_98 != (uint *)(ulong)uVar7)) {
                puVar18 = (uint *)((long)local_98 - (long)(ulong)uVar7);
                local_84 = 0;
                if (*puVar18 != 0) {
                  uVar7 = puVar18[1];
                  if ((uVar7 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                    lVar21 = 0xc;
                    if (*(char *)((long)puVar18 + 10) != '\0') {
                      lVar21 = 0x1c;
                    }
                    lVar21 = (long)puVar18 + lVar21 + (ulong)(ushort)puVar18[2] * 8;
                    if (lVar21 != 0) {
                      uVar20 = 0;
                      if ((ulong)uVar7 != 0) {
                        uVar20 = (uint)((ulong)((long)local_98 - lVar21) / (ulong)uVar7);
                      }
                      if (*puVar18 <= uVar20) {
                        uVar20 = 0xffffffff;
                      }
                      if ((uVar20 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_84 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar20 * 2
                                            ), local_84 < 0xbd)) goto LAB_026517d4;
                    }
                  }
                  local_84 = 0;
                }
              }
            }
LAB_026517d4:
            if (local_84 == 0xac) {
              local_9c = CONCAT22(local_9c._2_2_,local_12c[0]);
            }
            lVar21 = *(long *)(lVar23 + 0x4ba0);
            if (lVar21 == 0) {
              uVar11 = 0;
            }
            else {
              if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
                uVar11 = 0;
                plVar15 = *(long **)(lVar21 + 0x20);
              }
              else {
                uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                uVar11 = uVar11 & 0xffffffff;
                if (*(long *)(lVar23 + 0x4ba0) == 0) goto LAB_02651860;
                plVar15 = *(long **)(*(long *)(lVar23 + 0x4ba0) + 0x20);
              }
              if (plVar15 != (long *)0x0) {
                local_80 = *(undefined **)(lVar23 + 0x4b80);
                local_78 = *(long *)(lVar23 + 0x4b88);
                local_70 = 0x8b0;
                (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
              }
            }
LAB_02651860:
            puVar18 = (uint *)(*(long *)(lVar23 + 0x4b88) + *(long *)(lVar23 + 0x4b80));
            *puVar18 = local_a0;
            puVar18[1] = local_9c;
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar23 + 0x4ba0) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar23 + 0x4ba0) + 0x18),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
          }
        }
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 8);
  bVar16 = *param_1;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar16);
  lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
  if (lVar9 != 0) {
    if ((*(long **)(lVar9 + 0x3278) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x3278), puVar10 == (undefined8 *)0x0)) {
      uVar7 = (uint)*(ushort *)(*(long *)(lVar9 + 0x3260) + *(long *)(lVar9 + 0x3258) + 10);
    }
    else {
      uVar11 = (**(code **)*puVar10)();
      uVar7 = (uint)*(ushort *)(*(long *)(lVar9 + 0x3260) + *(long *)(lVar9 + 0x3258) + 10);
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x3278) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x3278) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
    }
    plVar13 = (long *)(lVar9 + 0x3260);
    plVar15 = (long *)(lVar9 + 0x3258);
    if (uVar7 != *(ushort *)PTR_DAT_04bb3170) {
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
        uVar7 = 0;
      }
      else {
        uVar11 = 0;
        do {
          if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == uVar7 >> 0xb)
          goto LAB_02651a7c;
          uVar11 = uVar11 + 1;
        } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
        uVar11 = 0;
LAB_02651a7c:
        uVar7 = (uint)uVar11;
      }
      local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffff0000);
      bVar16 = *param_1;
      uVar17 = bVar16 & 0x7f;
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      if (*(uint *)PTR_DAT_04bb3120 <= uVar7) {
        uVar7 = 0;
      }
      if (7 < bVar16) {
        uVar17 = 0x7f;
      }
      local_a8 = (undefined *)
                 CONCAT62(local_a8._2_6_,
                          uVar17 | (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) +
                                                    (long)(int)uVar7 * 4) << 0xb));
      FUN_007ef010(auStack_12e,&local_a8);
      lVar21 = *(long *)(lVar9 + 0x3278);
      if (lVar21 == 0) {
        lVar21 = *plVar15;
        lVar23 = *plVar13;
        FUN_007ef010(&local_130,&local_a8);
        *(undefined2 *)(lVar23 + lVar21 + 10) = local_130;
LAB_02651b9c:
        if ((*(long **)(lVar9 + 0x3278) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x3278), puVar10 == (undefined8 *)0x0))
        goto LAB_02651bc0;
        uVar11 = (**(code **)*puVar10)();
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
          uVar11 = 0;
          plVar12 = *(long **)(lVar21 + 0x20);
joined_r0x02651d24:
          if (plVar12 != (long *)0x0) {
            local_80 = (undefined *)*plVar15;
            local_78 = *plVar13;
            local_70 = 0x2b8;
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_80);
          }
        }
        else {
          uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
          uVar11 = uVar11 & 0xffffffff;
          if (*(long *)(lVar9 + 0x3278) != 0) {
            plVar12 = *(long **)(*(long *)(lVar9 + 0x3278) + 0x20);
            goto joined_r0x02651d24;
          }
        }
        lVar21 = *plVar15;
        lVar23 = *plVar13;
        FUN_007ef010(&local_130,&local_a8);
        *(undefined2 *)(lVar23 + lVar21 + 10) = local_130;
        if ((uVar11 & 1) == 0) goto LAB_02651b9c;
        if (*(long *)(lVar9 + 0x3278) != 0) {
          puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x3278) + 0x18);
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)();
          }
          goto LAB_02651b9c;
        }
LAB_02651bc0:
        uVar11 = 0;
      }
      sVar2 = *(short *)(*plVar13 + *plVar15 + 0x82);
      if (sVar2 == 0) {
        FUN_007ef010(&local_8c,PTR_DAT_04bb3170);
      }
      else {
        local_8c = CONCAT22(local_8c._2_2_,sVar2 + -1);
      }
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x3278) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x3278) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
      uVar17 = (ushort)local_8c;
      if ((ushort)local_8c != *(ushort *)PTR_DAT_04bb3170) {
        plVar12 = *(long **)PTR_DAT_04bb27d0;
        if (*(byte *)(*plVar12 + 0x476) < 2) {
          uVar17 = (ushort)local_8c >> 0xb;
          lVar21 = lVar9 + 0x3250;
          if ((plVar12[5] == 0) || ((int)plVar12[0x10] != 1)) {
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
              uVar14 = 0;
            }
            else {
              uVar11 = 0;
              do {
                if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)uVar17)
                goto LAB_02651d6c;
                uVar11 = uVar11 + 1;
              } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
              uVar11 = 0;
LAB_02651d6c:
              uVar14 = (undefined4)uVar11;
            }
            local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar14);
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            uVar7 = (uint)local_80;
            if (*(uint *)PTR_DAT_04bb3120 <= (uint)local_80) {
              uVar7 = 0;
            }
            if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar7 * 4) == 4) {
              FUN_007f3c20(auStack_140,0);
              FUN_007eef5c(&local_84,auStack_140,(ushort)local_8c >> 7 & 0xf,local_8c & 0x7f);
              local_70 = local_70 & 0xffffffffffffff00;
              if (*(long *)(lVar9 + 0x3278) == 0) {
                uVar5 = 0;
                local_78 = lVar21;
              }
              else {
                puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x3278) + 0x10);
                uVar5 = 0;
                local_78 = lVar21;
                if (puVar10 != (undefined8 *)0x0) {
                  uVar5 = (**(code **)*puVar10)();
                }
              }
              local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                         0xffffffffffff01ff;
              local_80 = PTR_DAT_04bb3738 + 0x10;
              lVar9 = FUN_02652f14(&local_80);
              FUN_007ef010(local_144,&local_84);
              local_13c[0] = local_144[0];
              goto LAB_02652098;
            }
          }
          else {
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
              uVar14 = 0;
            }
            else {
              uVar11 = 0;
              do {
                if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)uVar17)
                goto LAB_02651d10;
                uVar11 = uVar11 + 1;
              } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
              uVar11 = 0;
LAB_02651d10:
              uVar14 = (undefined4)uVar11;
            }
            local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar14);
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            uVar7 = (uint)local_80;
            if (*(uint *)PTR_DAT_04bb3120 <= (uint)local_80) {
              uVar7 = 0;
            }
            if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar7 * 4) == 0) {
              FUN_007f3c20(auStack_138,4);
              FUN_007eef5c(&local_84,auStack_138,(ushort)local_8c >> 7 & 0xf,local_8c & 0x7f);
              local_70 = local_70 & 0xffffffffffffff00;
              if (*(long *)(lVar9 + 0x3278) == 0) {
                uVar5 = 0;
                local_78 = lVar21;
              }
              else {
                puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x3278) + 0x10);
                uVar5 = 0;
                local_78 = lVar21;
                if (puVar10 != (undefined8 *)0x0) {
                  uVar5 = (**(code **)*puVar10)();
                }
              }
              local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar5,(undefined1)local_70)) &
                         0xffffffffffff01ff;
              local_80 = PTR_DAT_04bb3738 + 0x10;
              lVar9 = FUN_02652f14(&local_80);
              FUN_007ef010(local_13c,&local_84);
LAB_02652098:
              *(short *)(lVar9 + 0x82) = local_13c[0] + 1;
              FUN_02640184(&local_80);
            }
          }
        }
        else {
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
            uVar14 = 0;
          }
          else {
            uVar11 = 0;
            do {
              if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)(uVar17 >> 0xb))
              goto LAB_02651c9c;
              uVar11 = uVar11 + 1;
            } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
            uVar11 = 0;
LAB_02651c9c:
            uVar14 = (undefined4)uVar11;
          }
          local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar14);
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          uVar7 = (uint)local_80;
          if (*(uint *)PTR_DAT_04bb3120 <= (uint)local_80) {
            uVar7 = 0;
          }
          if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar7 * 4) == 0) {
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
              uVar7 = 0;
            }
            else {
              uVar11 = 0;
              do {
                if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == 4) goto LAB_02651dfc;
                uVar11 = uVar11 + 1;
              } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
              uVar11 = 0;
LAB_02651dfc:
              uVar7 = (uint)uVar11;
            }
            local_84 = local_84 & 0xffff0000;
            uVar17 = (ushort)local_8c;
            if (((*PTR_DAT_04bb3128 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
              FUN_00706e58(PTR_DAT_04bb3120);
              __cxa_guard_release(PTR_DAT_04bb3128);
            }
            if (*(uint *)PTR_DAT_04bb3120 <= uVar7) {
              uVar7 = 0;
            }
            lVar21 = *(long *)(lVar9 + 0x3278);
            local_84 = CONCAT22(local_84._2_2_,
                                uVar17 & 0x7ff |
                                (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) +
                                                 (long)(int)uVar7 * 4) << 0xb));
            if (lVar21 == 0) {
              lVar9 = *plVar15;
              lVar21 = *plVar13;
              FUN_007ef010(local_134,&local_84);
              *(short *)(lVar21 + lVar9 + 0x82) = local_134[0] + 1;
            }
            else {
              if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
                uVar11 = 0;
LAB_02651fe4:
                plVar12 = *(long **)(lVar21 + 0x20);
                if (plVar12 != (long *)0x0) {
                  local_80 = (undefined *)*plVar15;
                  local_78 = *plVar13;
                  local_70 = 0x2b8;
                  (**(code **)(*plVar12 + 0x20))(plVar12,&local_80);
                }
              }
              else {
                uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                lVar21 = *(long *)(lVar9 + 0x3278);
                uVar11 = uVar11 & 0xffffffff;
                if (lVar21 != 0) goto LAB_02651fe4;
              }
              lVar21 = *plVar15;
              lVar23 = *plVar13;
              FUN_007ef010(local_134,&local_84);
              *(short *)(lVar23 + lVar21 + 0x82) = local_134[0] + 1;
              if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x3278) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x3278) + 0x18),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
          }
        }
      }
    }
  }
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return;
    }
  }
  bVar16 = *param_1;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar16);
  lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
  puVar1 = PTR_DAT_04bc00c8;
  if (lVar9 == 0) {
    return;
  }
  plVar15 = (long *)(lVar9 + 0x162d8);
  if (*(long **)(lVar9 + 0x162f8) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar10 = (undefined8 *)**(long **)(lVar9 + 0x162f8);
    if (puVar10 == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)*puVar10)();
      uVar11 = uVar11 & 0xffffffff;
    }
  }
  puVar18 = (uint *)FUN_026e85f0(*(long *)(lVar9 + 0x162e0) + *plVar15);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x162f8) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x162f8) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(puVar18);
  lVar21 = *(long *)puVar3;
  if (lVar21 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar23 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_a8 = PTR_DAT_04bc0510 + 0x10;
      local_a0 = *puVar18;
      local_9c = puVar18[1];
      local_98 = (uint *)0x0;
      uVar7 = FUN_0277d6c4(&local_a0);
      if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_02652334:
        local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
        local_8c = 0xbc;
      }
      else {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02652334;
        lVar21 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(puVar18);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
           (puVar18 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8),
           puVar18 == (uint *)0x0)) goto LAB_02652334;
        local_8c = 0;
        local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
        uVar7 = *puVar18;
        local_98 = puVar18;
        if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
          puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
          local_8c = 0;
          if (*puVar19 != 0) {
            uVar7 = puVar19[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
              lVar21 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar21 = 0x1c;
              }
              lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar21 != 0) {
                uVar20 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar20 = (uint)((ulong)((long)puVar18 - lVar21) / (ulong)uVar7);
                }
                if (*puVar19 <= uVar20) {
                  uVar20 = 0xffffffff;
                }
                if ((uVar20 < *(uint *)puVar1) &&
                   (local_8c = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
                   local_8c < 0xbd)) goto LAB_02652340;
              }
            }
            local_8c = 0;
          }
        }
      }
LAB_02652340:
      if (local_8c == (uint)local_80) {
        FUN_01b086f4(&local_84,&local_a8);
        uVar17 = (ushort)local_84;
        if ((ushort)local_84 != *(ushort *)PTR_DAT_04bb3170) {
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          uVar7 = local_84;
          if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
            uVar20 = 0;
          }
          else {
            uVar11 = 0;
            do {
              if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)(uVar17 >> 0xb))
              goto LAB_026523cc;
              uVar11 = uVar11 + 1;
            } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
            uVar11 = 0;
LAB_026523cc:
            uVar20 = (uint)uVar11;
          }
          local_ac[0] = 0;
          bVar16 = *param_1;
          uVar17 = bVar16 & 0x7f;
          if (((*PTR_DAT_04bb3128 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
          if (*(uint *)PTR_DAT_04bb3120 <= uVar20) {
            uVar20 = 0;
          }
          if (7 < bVar16) {
            uVar17 = 0x7f;
          }
          local_ac[0] = (ushort)uVar7 & 0x780 |
                        (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar20 * 4)
                                << 0xb) | uVar17;
          FUN_007ef010(local_148,local_ac);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
          if (local_98 == (uint *)0x0) {
            local_8c = 0xbc;
          }
          else {
            uVar7 = *local_98;
            local_8c = 0;
            if ((uVar7 != 0) && (local_98 != (uint *)(ulong)uVar7)) {
              puVar18 = (uint *)((long)local_98 - (long)(ulong)uVar7);
              local_8c = 0;
              if (*puVar18 != 0) {
                uVar7 = puVar18[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                  lVar21 = 0xc;
                  if (*(char *)((long)puVar18 + 10) != '\0') {
                    lVar21 = 0x1c;
                  }
                  lVar21 = (long)puVar18 + lVar21 + (ulong)(ushort)puVar18[2] * 8;
                  if (lVar21 != 0) {
                    uVar20 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar20 = (uint)((ulong)((long)local_98 - lVar21) / (ulong)uVar7);
                    }
                    if (*puVar18 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((uVar20 < *(uint *)puVar1) &&
                       (local_8c = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
                       local_8c < 0xbd)) goto LAB_026524d8;
                  }
                }
                local_8c = 0;
              }
            }
          }
LAB_026524d8:
          if (local_8c == 0xac) {
            local_9c = CONCAT22(local_9c._2_2_,local_148[0]);
          }
          lVar21 = *(long *)(lVar9 + 0x162f8);
          if (lVar21 == 0) {
            uVar11 = 0;
          }
          else {
            if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
              lVar21 = *(long *)(lVar9 + 0x162f8);
              uVar11 = uVar11 & 0xffffffff;
              if (lVar21 == 0) goto LAB_0265255c;
            }
            plVar13 = *(long **)(lVar21 + 0x20);
            if (plVar13 != (long *)0x0) {
              local_80 = (undefined *)*plVar15;
              local_78 = *(long *)(lVar9 + 0x162e0);
              local_70 = 0x1190;
              (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
            }
          }
LAB_0265255c:
          puVar18 = (uint *)(*(long *)(lVar9 + 0x162e0) + *plVar15);
          *puVar18 = local_a0;
          puVar18[1] = local_9c;
          if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x162f8) != 0)) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x162f8) + 0x18),
             puVar10 != (undefined8 *)0x0)) {
            (**(code **)*puVar10)();
          }
        }
      }
    }
  }
  if ((*(long **)(lVar9 + 0x162f8) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x162f8), puVar10 == (undefined8 *)0x0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)*puVar10)();
    uVar11 = uVar11 & 0xffffffff;
  }
  puVar18 = (uint *)FUN_026e8d10(*(long *)(lVar9 + 0x162e0) + *plVar15);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x162f8) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x162f8) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(puVar18);
  lVar21 = *(long *)puVar1;
  if (lVar21 == 0) {
    return;
  }
  lVar23 = *(long *)(lVar23 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
  if (*(uint *)(lVar23 + 0x1d8) <= uVar7) {
    return;
  }
  if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return;
  }
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = *puVar18;
  local_9c = puVar18[1];
  local_98 = (uint *)0x0;
  uVar7 = FUN_0277d6c4(&local_a0);
  puVar1 = PTR_DAT_04bc00c8;
  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_0265277c:
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
    local_8c = 0xbc;
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0265277c;
    lVar21 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(puVar18);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
       (puVar18 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar18 == (uint *)0x0)) goto LAB_0265277c;
    local_8c = 0;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
    uVar7 = *puVar18;
    local_98 = puVar18;
    if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
      puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
      local_8c = 0;
      if (*puVar19 != 0) {
        uVar7 = puVar19[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
          lVar21 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar19 + lVar21 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar21 != 0) {
            uVar20 = 0;
            if ((ulong)uVar7 != 0) {
              uVar20 = (uint)((ulong)((long)puVar18 - lVar21) / (ulong)uVar7);
            }
            if (*puVar19 <= uVar20) {
              uVar20 = 0xffffffff;
            }
            if ((uVar20 < *(uint *)puVar1) &&
               (local_8c = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
               local_8c < 0xbd)) goto LAB_02652788;
          }
        }
        local_8c = 0;
      }
    }
  }
LAB_02652788:
  if (local_8c != (uint)local_80) {
    return;
  }
  FUN_01b086f4(&local_84,&local_a8);
  uVar17 = (ushort)local_84;
  if ((ushort)local_84 == *(ushort *)PTR_DAT_04bb3170) {
    return;
  }
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar7 = local_84;
  if ((int)*(uint *)PTR_DAT_04bb3120 < 1) {
    uVar20 = 0;
  }
  else {
    uVar11 = 0;
    do {
      if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar11 * 4) == (uint)(uVar17 >> 0xb))
      goto LAB_0265280c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar11);
    uVar11 = 0;
LAB_0265280c:
    uVar20 = (uint)uVar11;
  }
  local_ac[0] = 0;
  bVar16 = *param_1;
  uVar17 = bVar16 & 0x7f;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (*(uint *)PTR_DAT_04bb3120 <= uVar20) {
    uVar20 = 0;
  }
  if (7 < bVar16) {
    uVar17 = 0x7f;
  }
  local_ac[0] = (ushort)uVar7 & 0x780 |
                (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar20 * 4) << 0xb) |
                uVar17;
  FUN_007ef010(local_14c,local_ac);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac);
  if (local_98 == (uint *)0x0) {
    local_8c = 0xbc;
  }
  else {
    uVar7 = *local_98;
    local_8c = 0;
    if ((uVar7 != 0) && (local_98 != (uint *)(ulong)uVar7)) {
      puVar18 = (uint *)((long)local_98 - (long)(ulong)uVar7);
      local_8c = 0;
      if (*puVar18 != 0) {
        uVar7 = puVar18[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
          lVar21 = 0xc;
          if (*(char *)((long)puVar18 + 10) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar18 + lVar21 + (ulong)(ushort)puVar18[2] * 8;
          if (lVar21 != 0) {
            uVar20 = 0;
            if ((ulong)uVar7 != 0) {
              uVar20 = (uint)((ulong)((long)local_98 - lVar21) / (ulong)uVar7);
            }
            if (*puVar18 <= uVar20) {
              uVar20 = 0xffffffff;
            }
            if ((uVar20 < *(uint *)puVar1) &&
               (local_8c = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar20 * 2),
               local_8c < 0xbd)) goto LAB_02652918;
          }
        }
        local_8c = 0;
      }
    }
  }
LAB_02652918:
  if (local_8c == 0xac) {
    local_9c = CONCAT22(local_9c._2_2_,local_14c[0]);
  }
  lVar21 = *(long *)(lVar9 + 0x162f8);
  if (lVar21 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
      lVar21 = *(long *)(lVar9 + 0x162f8);
      uVar11 = uVar11 & 0xffffffff;
      if (lVar21 == 0) goto LAB_0265299c;
    }
    plVar13 = *(long **)(lVar21 + 0x20);
    if (plVar13 != (long *)0x0) {
      local_80 = (undefined *)*plVar15;
      local_78 = *(long *)(lVar9 + 0x162e0);
      local_70 = 0x1190;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
    }
  }
LAB_0265299c:
  lVar21 = *(long *)(lVar9 + 0x162e0) + *plVar15;
  *(uint *)(lVar21 + 0x8c0) = local_a0;
  *(uint *)(lVar21 + 0x8c4) = local_9c;
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x162f8) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x162f8) + 0x18), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)();
  }
  return;
}

