
void FUN_022119a0(byte *param_1,ulong param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  byte *pbVar23;
  long *plVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  uint local_2b0 [2];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  uint local_218 [36];
  undefined *local_188;
  long local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined *local_f8;
  long *local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  local_218[0x22] = 0;
  local_218[0] = 0;
  local_218[1] = 0;
  local_220 = 0;
  local_218[0x1e] = 0;
  local_218[0x1f] = 0;
  local_218[0x20] = 0;
  local_218[0x21] = 0;
  local_2a8 = 0;
  local_218[0x1a] = 0;
  local_218[0x1b] = 0;
  local_218[0x1c] = 0;
  local_218[0x1d] = 0;
  local_218[0x16] = 0;
  local_218[0x17] = 0;
  local_218[0x18] = 0;
  local_218[0x19] = 0;
  local_218[0x12] = 0;
  local_218[0x13] = 0;
  local_218[0x14] = 0;
  local_218[0x15] = 0;
  local_218[0xe] = 0;
  local_218[0xf] = 0;
  local_218[0x10] = 0;
  local_218[0x11] = 0;
  local_218[10] = 0;
  local_218[0xb] = 0;
  local_218[0xc] = 0;
  local_218[0xd] = 0;
  local_218[6] = 0;
  local_218[7] = 0;
  local_218[8] = 0;
  local_218[9] = 0;
  local_218[2] = 0;
  local_218[3] = 0;
  local_218[4] = 0;
  local_218[5] = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  FUN_0376c3f0(local_218,&local_2a8,1,0);
  bVar9 = param_1[0x1e4];
  if (((param_2 & 1) == 0) || ((bVar9 >> 1 & 1) == 0)) {
    uVar22 = 0;
    param_1[4] = 0;
    param_1[0] = 0x23;
    param_1[1] = 0;
    param_1[2] = 8;
    param_1[3] = 0x23;
    bVar10 = 8;
    param_1[0x1e4] = bVar9 & 0xfd;
  }
  else {
    param_1[0x1e4] = bVar9 | 2;
    local_f8 = (undefined *)CONCAT62(CONCAT51(local_f8._3_5_,param_1[2]),*(undefined2 *)param_1);
    *(undefined2 *)param_1 = *(undefined2 *)param_1;
    local_188 = (undefined *)CONCAT53(local_188._3_5_,*(undefined3 *)(param_1 + 3));
    bVar9 = FUN_020fd7d8(&local_f8);
    param_1[2] = bVar9;
    *(undefined2 *)(param_1 + 3) = local_188._0_2_;
    bVar10 = FUN_020fd7d8(&local_188);
    uVar22 = 2;
  }
  iVar13 = (int)uVar22;
  param_1[5] = bVar10;
  uVar15 = FUN_0221119c();
  if (((uVar15 & 1) != 0) && (iVar11 = *(int *)(param_1 + 0x30), iVar11 != 0)) {
    puVar21 = *(undefined8 **)(param_1 + 0x38);
    if ((param_2 & 1) == 0) {
      lVar26 = (long)iVar11 << 3;
      do {
        plVar20 = (long *)*puVar21;
        FUN_0376baa0(plVar20);
        uVar15 = FUN_0376f950();
        if ((uVar15 & 1) != 0) {
          local_188 = (undefined *)((ulong)local_188 & 0xffffffffffffff00);
          local_f8 = &DAT_04b46bb0;
          local_f0 = plVar20;
          local_e8 = (undefined1  [8])&local_188;
          FUN_0376ec70(&local_f8);
          if ((char)local_188 == '\0') {
            pbVar23 = param_1 + uVar22 * 3;
            if (8 < (uint)uVar22) {
              pbVar23 = param_1;
            }
            FUN_020fd3a0(pbVar23,plVar20);
            uVar22 = (ulong)((uint)uVar22 + 1);
          }
        }
        iVar13 = (int)uVar22;
        puVar21 = puVar21 + 1;
        lVar26 = lVar26 + -8;
      } while (lVar26 != 0);
    }
    else {
      puVar3 = puVar21 + iVar11;
      puVar1 = PTR_DAT_04bb3768 + 0x10;
      do {
        plVar20 = (long *)*puVar21;
        if ((param_1[0x1e4] >> 1 & 1) == 0) {
LAB_02211b18:
          FUN_0376baa0(plVar20);
          uVar15 = FUN_0376f950();
          if ((uVar15 & 1) != 0) {
            local_188 = (undefined *)((ulong)local_188 & 0xffffffffffffff00);
            local_f8 = &DAT_04b46bb0;
            local_f0 = plVar20;
            local_e8 = (undefined1  [8])&local_188;
            FUN_0376ec70(&local_f8);
            if ((char)local_188 == '\0') {
              pbVar23 = param_1 + uVar22 * 3;
              if (8 < (uint)uVar22) {
                pbVar23 = param_1;
              }
              FUN_020fd3a0(pbVar23,plVar20);
              uVar22 = (ulong)((uint)uVar22 + 1);
            }
          }
        }
        else {
          local_e0._0_4_ = (uint)(uint3)local_e0;
          local_e8._0_5_ = 8;
          local_170._0_4_ = (uint)(uint3)local_170;
          local_178 = CONCAT35(local_178._5_3_,8);
          local_188 = puVar1;
          local_180 = (long)&local_178 + 4;
          local_f8 = puVar1;
          local_f0 = (long *)(local_e8 + 4);
          FUN_038d1270(&local_f8,"-----");
          if ((ulong)*param_1 < 0x23) {
            FUN_038d1270(&local_f8,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),param_1[1]);
          }
          FUN_038d1270(&local_188,"-----");
          if ((ulong)param_1[3] < 0x23) {
            FUN_038d1270(&local_188,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)param_1[3] * 8 + 0xb0),param_1[4]
                        );
          }
          (**(code **)(*plVar20 + 0x18))(plVar20);
          (**(code **)(*plVar20 + 0x18))(plVar20);
          plVar24 = (long *)plVar20[1];
          (**(code **)(local_f8 + 0x18))(&local_f8);
          if (plVar24 != local_f0) {
            uVar15 = 0;
            bVar8 = true;
            do {
              lVar26 = plVar20[1] + 1 + uVar15;
              cVar6 = *(char *)(lVar26 + -1);
              if (cVar6 != *(char *)((long)local_f0 + uVar15)) break;
              if (cVar6 == '\0') {
                if (bVar8) goto LAB_02211b00;
                break;
              }
              cVar6 = *(char *)(plVar20[1] + 1 + uVar15);
              if (cVar6 != *(char *)((long)local_f0 + uVar15 + 1)) break;
              if (cVar6 == '\0') goto LAB_02211b00;
              cVar6 = *(char *)(lVar26 + 1);
              if (cVar6 != *(char *)((long)local_f0 + uVar15 + 2)) break;
              if (cVar6 == '\0') goto LAB_02211b00;
              bVar8 = uVar15 < 0x7fffe;
              uVar15 = uVar15 + 3;
            } while (uVar15 != 0x80001);
            (**(code **)(*plVar20 + 0x18))(plVar20);
            (**(code **)(*plVar20 + 0x18))(plVar20);
            lVar26 = plVar20[1];
            (**(code **)(local_188 + 0x18))(&local_188);
            if (lVar26 != local_180) {
              uVar15 = 0;
              bVar8 = true;
              do {
                lVar26 = plVar20[1] + 1 + uVar15;
                lVar27 = local_180 + 1 + uVar15;
                cVar6 = *(char *)(lVar26 + -1);
                if (cVar6 != *(char *)(lVar27 + -1)) break;
                if (cVar6 == '\0') {
                  if (bVar8) goto LAB_02211b00;
                  break;
                }
                cVar6 = *(char *)(plVar20[1] + 1 + uVar15);
                if (cVar6 != *(char *)(local_180 + 1 + uVar15)) break;
                if (cVar6 == '\0') goto LAB_02211b00;
                cVar6 = *(char *)(lVar26 + 1);
                if (cVar6 != *(char *)(lVar27 + 1)) break;
                if (cVar6 == '\0') goto LAB_02211b00;
                bVar8 = uVar15 < 0x7fffe;
                uVar15 = uVar15 + 3;
              } while (uVar15 != 0x80001);
              goto LAB_02211b18;
            }
          }
        }
LAB_02211b00:
        iVar13 = (int)uVar22;
        puVar21 = puVar21 + 1;
      } while (puVar21 != puVar3);
    }
  }
  uVar12 = 0;
  uVar22 = 0;
  local_188 = (undefined *)0x0;
  do {
    uVar14 = *(uint *)((long)local_218 + (-(uVar22 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2));
    uVar14 = uVar14 - (uVar14 >> 1 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    if ((uVar14 + (uVar14 >> 0x10) & 0x3f) != 0) {
      local_218[(ulong)(uVar12 >> 5) + 0x24] =
           local_218[(ulong)(uVar12 >> 5) + 0x24] | 1 << (ulong)(uVar12 & 0x1f);
    }
    uVar12 = uVar12 + 1;
    uVar22 = (ulong)((int)uVar22 + 1);
  } while (uVar12 != 0x23);
  FUN_02215aa8(param_1,&local_188);
  puVar25 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_f0 = (long *)0x408d21c;
  local_f8 = puVar1;
  iVar11 = FUN_02758850(&local_f8);
  if (iVar11 == 0) {
    uVar16 = 0;
  }
  else {
    uVar12 = FUN_03773140(param_1[0x1e4] & 1);
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar12);
    if (uVar12 < 9) {
      uVar16 = *(undefined4 *)(&DAT_04179e88 + (long)(int)uVar12 * 4);
    }
    else {
      uVar16 = 9;
    }
  }
  iVar11 = FUN_02215ff0(param_1,&local_188,local_218,1,uVar16);
  uVar12 = iVar11 + iVar13;
  local_f0 = (long *)0x408d21c;
  local_f8 = puVar1;
  iVar13 = FUN_02758850(&local_f8);
  if (iVar13 == 0) {
    uVar14 = 0;
    if ((int)uVar12 < 0) goto LAB_02211f70;
  }
  else {
    uVar14 = FUN_03773140(param_1[0x1e4] & 1);
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar14);
    if (uVar14 < 9) {
      uVar14 = *(uint *)(&DAT_04179e88 + (long)(int)uVar14 * 4);
      if ((int)uVar12 < (int)uVar14) goto LAB_02211f70;
    }
    else {
      uVar14 = 9;
      if ((int)uVar12 < 9) {
LAB_02211f70:
        FUN_02211318(param_1,local_218);
        uVar18 = 0;
        uVar22 = 0;
        local_2b0[0] = 0;
        local_2b0[1] = 0;
        do {
          uVar5 = *(uint *)((long)local_218 + (-(uVar22 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2)
                           );
          uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          if ((uVar5 + (uVar5 >> 0x10) & 0x3f) != 0) {
            local_2b0[uVar18 >> 5] = local_2b0[uVar18 >> 5] | 1 << (ulong)(uVar18 & 0x1f);
          }
          uVar18 = uVar18 + 1;
          uVar22 = (ulong)((int)uVar22 + 1);
        } while (uVar18 != 0x23);
        local_70 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_f8 = (undefined *)0x0;
        local_100 = 0;
        local_188 = (undefined *)0x0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = (long *)0x0;
        local_e8 = (undefined1  [8])0x0;
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_160 = 0;
        uStack_158 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = 0;
        uVar22 = FUN_02216a10(&local_f8,&local_188,local_218);
        puVar1 = PTR_DAT_04bc27f0;
        if ((uVar22 & 1) == 0) {
          do {
            pbVar23 = param_1 + (ulong)uVar12 + (ulong)uVar12 * 2;
            if (8 < uVar12) {
              pbVar23 = param_1;
            }
            uVar22 = FUN_02216480(pbVar23,local_2b0,local_218);
            if ((uVar22 & 1) == 0) break;
            local_218[0x23] = (uint)*pbVar23;
            uVar22 = (ulong)local_218[0x23];
            if (0x22 < local_218[0x23]) {
              uVar22 = 0;
            }
            uVar18 = local_218[uVar22];
            if (pbVar23[1] < 0x20) {
              uVar18 = uVar18 & (1 << (ulong)(pbVar23[1] & 0x1f) ^ 0xffffffffU);
              local_218[uVar22] = uVar18;
            }
            uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
            uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
            uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
            uVar18 = uVar18 + (uVar18 >> 8);
            if (((uVar18 + (uVar18 >> 0x10) & 0x3f) == 0) && (local_218[0x23] < 0x23)) {
              uVar22 = (ulong)(local_218[0x23] >> 3) & 0x1ffffffc;
              *(uint *)((long)local_2b0 + uVar22) =
                   *(uint *)((long)local_2b0 + uVar22) &
                   (1 << (ulong)(local_218[0x23] & 0x1f) ^ 0xffffffffU);
            }
            uVar12 = uVar12 + 1;
          } while (uVar14 != uVar12);
        }
        else {
          do {
            pbVar23 = param_1 + (ulong)uVar12 + (ulong)uVar12 * 2;
            if (8 < uVar12) {
              pbVar23 = param_1;
            }
            uVar22 = FUN_022167a0(pbVar23,local_2b0,&local_f8,&local_188);
            if ((uVar22 & 1) == 0) break;
            uVar22 = (ulong)*pbVar23;
            uVar18 = (uint)pbVar23[1];
            local_218[0x23] = (uint)*pbVar23;
            if (((uVar22 < 0x23) && (pbVar23[1] <= (byte)puVar1[uVar22])) &&
               (uVar5 = 1 << (ulong)(uVar18 & 0x1f),
               (*(uint *)(PTR_DAT_04bc2a20 + uVar22 * 4) & uVar5) != 0)) {
              if (uVar18 < 0x20) {
                *(uint *)(local_e8 + uVar22 * 4 + -0x10) =
                     *(uint *)(local_e8 + uVar22 * 4 + -0x10) & (uVar5 ^ 0xffffffff);
                local_218[uVar22 + 0x24] = local_218[uVar22 + 0x24] & (uVar5 ^ 0xffffffff);
                uVar22 = (ulong)local_218[0x23];
                puVar19 = local_218 + uVar22;
                if (0x22 < local_218[0x23]) {
                  uVar22 = 0;
                }
                uVar17 = local_218[uVar22];
                if (0x22 < local_218[0x23]) {
                  puVar19 = local_218;
                }
                goto LAB_0221216c;
              }
              uVar22 = (ulong)local_218[0x23];
              if (0x22 < local_218[0x23]) {
                uVar22 = 0;
              }
              uVar17 = local_218[uVar22];
            }
            else {
              uVar22 = (ulong)local_218[0x23];
              puVar19 = local_218 + uVar22;
              if (0x22 < local_218[0x23]) {
                uVar22 = 0;
                puVar19 = local_218;
              }
              uVar17 = local_218[uVar22];
              if (uVar18 < 0x20) {
                uVar5 = 1 << (ulong)(uVar18 & 0x1f);
LAB_0221216c:
                uVar17 = uVar17 & ~uVar5;
                *puVar19 = uVar17;
              }
            }
            uVar17 = uVar17 - (uVar17 >> 1 & 0x55555555);
            uVar18 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
            uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
            uVar18 = uVar18 + (uVar18 >> 8);
            if (((uVar18 + (uVar18 >> 0x10) & 0x3f) == 0) && (local_218[0x23] < 0x23)) {
              uVar22 = (ulong)(local_218[0x23] >> 3) & 0x1ffffffc;
              *(uint *)((long)local_2b0 + uVar22) =
                   *(uint *)((long)local_2b0 + uVar22) &
                   (1 << (ulong)(local_218[0x23] & 0x1f) ^ 0xffffffffU);
            }
            uVar12 = uVar12 + 1;
          } while (uVar14 != uVar12);
        }
        puVar25 = PTR_DAT_04bb2020;
      }
    }
  }
  local_f8 = puVar25 + 0x10;
  local_f0 = (long *)0x4087c90;
  iVar13 = FUN_02758850(&local_f8);
  if (iVar13 == 0) goto LAB_02212800;
  FUN_02211318(param_1,local_218);
  puVar7 = PTR_DAT_04bc2a20;
  puVar25 = PTR_DAT_04bc27f0;
  puVar1 = PTR_DAT_04bb3768;
  uVar12 = 0;
  uVar22 = 0;
  local_188 = (undefined *)0x0;
  do {
    uVar14 = *(uint *)((long)local_218 + (-(uVar22 >> 0x1f) & 0xfffffffc00000000 | uVar22 << 2));
    uVar14 = uVar14 - (uVar14 >> 1 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    if ((uVar14 + (uVar14 >> 0x10) & 0x3f) != 0) {
      local_218[(ulong)(uVar12 >> 5) + 0x24] =
           local_218[(ulong)(uVar12 >> 5) + 0x24] | 1 << (ulong)(uVar12 & 0x1f);
    }
    uVar12 = uVar12 + 1;
    uVar22 = (ulong)((int)uVar22 + 1);
  } while (uVar12 != 0x23);
  pbVar23 = param_1 + 0x1b;
  uVar22 = (ulong)*pbVar23;
  if (((uVar22 < 0x23) && (param_1[0x1c] <= (byte)PTR_DAT_04bc27f0[uVar22])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar22 * 4) >> (ulong)(param_1[0x1c] & 0x1f) & 1) != 0)) {
    local_e0._0_4_ = (uint)(uint3)local_e0;
    pcVar2 = local_e8 + 4;
    local_e8._4_4_ = local_e8._4_4_ & 0xffffff00;
    local_e8._0_4_ = 8;
    local_f8 = PTR_DAT_04bb3768 + 0x10;
    local_f0 = (long *)pcVar2;
    FUN_038d1270(&local_f8,"-----");
    if ((ulong)*pbVar23 < 0x23) {
      FUN_038d1270(&local_f8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar23 * 8 + 0xb0)
                   ,param_1[0x1c]);
    }
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar26 = 0;
      do {
        iVar13 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar26 * 8),&local_f8);
        if (iVar13 == 0) {
          if (-1 < (int)lVar26) {
            uVar22 = (ulong)param_1[0x1e];
            if (((0x22 < uVar22) || ((byte)puVar25[uVar22] < param_1[0x1f])) ||
               ((*(uint *)(puVar7 + uVar22 * 4) >> (ulong)(param_1[0x1f] & 0x1f) & 1) == 0))
            goto LAB_02212620;
            local_e0._0_4_ = (uint)(uint3)local_e0;
            local_f8 = puVar1 + 0x10;
            local_e8._0_5_ = 8;
            local_f0 = (long *)pcVar2;
            FUN_020fcc2c(param_1 + 0x1e,&local_f8);
            if (*(int *)(param_1 + 0x30) < 1) goto LAB_02212620;
            lVar26 = 0;
            lVar27 = 1;
            goto LAB_022124a0;
          }
          break;
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < *(int *)(param_1 + 0x30));
    }
  }
  lVar27 = 0;
  goto LAB_022124cc;
  while (lVar26 = lVar26 + 1, lVar26 < *(int *)(param_1 + 0x30)) {
LAB_022124a0:
    iVar13 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar26 * 8),&local_f8);
    if (iVar13 == 0) {
      if ((int)lVar26 < 0) goto LAB_02212620;
      uVar22 = (ulong)param_1[0x21];
      if (((0x22 < uVar22) || ((byte)puVar25[uVar22] < param_1[0x22])) ||
         ((*(uint *)(puVar7 + uVar22 * 4) >> (ulong)(param_1[0x22] & 0x1f) & 1) == 0))
      goto LAB_022126bc;
      local_e0._0_4_ = (uint)(uint3)local_e0;
      local_e8._0_5_ = 8;
      local_f8 = PTR_DAT_04bb3768 + 0x10;
      local_f0 = (long *)pcVar2;
      FUN_020fcc2c(param_1 + 0x21,&local_f8);
      if (*(int *)(param_1 + 0x30) < 1) goto LAB_022126bc;
      lVar26 = 0;
      lVar27 = 2;
      goto LAB_022125f8;
    }
  }
  goto LAB_022124cc;
LAB_02212620:
  lVar27 = 1;
  goto LAB_022124cc;
  while (lVar26 = lVar26 + 1, lVar26 < *(int *)(param_1 + 0x30)) {
LAB_022125f8:
    iVar13 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar26 * 8),&local_f8);
    if (iVar13 == 0) {
      if ((int)lVar26 < 0) goto LAB_022126bc;
      uVar22 = (ulong)param_1[0x24];
      if (((0x22 < uVar22) || ((byte)puVar25[uVar22] < param_1[0x25])) ||
         ((*(uint *)(puVar7 + uVar22 * 4) >> (ulong)(param_1[0x25] & 0x1f) & 1) == 0))
      goto LAB_02212758;
      local_e0._0_4_ = (uint)(uint3)local_e0;
      local_e8._0_5_ = 8;
      local_f8 = PTR_DAT_04bb3768 + 0x10;
      local_f0 = (long *)pcVar2;
      FUN_020fcc2c(param_1 + 0x24,&local_f8);
      if (*(int *)(param_1 + 0x30) < 1) goto LAB_02212758;
      lVar26 = 0;
      lVar27 = 3;
      goto LAB_02212694;
    }
  }
  goto LAB_022124cc;
LAB_022126bc:
  lVar27 = 2;
  goto LAB_022124cc;
  while (lVar26 = lVar26 + 1, lVar26 < *(int *)(param_1 + 0x30)) {
LAB_02212694:
    iVar13 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar26 * 8),&local_f8);
    if (iVar13 == 0) {
      if ((int)lVar26 < 0) goto LAB_02212758;
      uVar22 = (ulong)param_1[0x27];
      if (((0x22 < uVar22) || ((byte)puVar25[uVar22] < param_1[0x28])) ||
         ((*(uint *)(puVar7 + uVar22 * 4) >> (ulong)(param_1[0x28] & 0x1f) & 1) == 0))
      goto LAB_022127f4;
      local_e0._0_4_ = (uint)(uint3)local_e0;
      local_e8._0_5_ = 8;
      local_f8 = PTR_DAT_04bb3768 + 0x10;
      local_f0 = (long *)pcVar2;
      FUN_020fcc2c(param_1 + 0x27,&local_f8);
      if (*(int *)(param_1 + 0x30) < 1) goto LAB_022127f4;
      lVar26 = 0;
      lVar27 = 4;
      goto LAB_02212730;
    }
  }
  goto LAB_022124cc;
LAB_02212758:
  lVar27 = 3;
  goto LAB_022124cc;
  while (lVar26 = lVar26 + 1, lVar26 < *(int *)(param_1 + 0x30)) {
LAB_02212730:
    iVar13 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar26 * 8),&local_f8);
    if (iVar13 == 0) {
      if ((int)lVar26 < 0) goto LAB_022127f4;
      uVar22 = (ulong)param_1[0x2a];
      if (((0x22 < uVar22) || ((byte)puVar25[uVar22] < param_1[0x2b])) ||
         ((*(uint *)(puVar7 + uVar22 * 4) >> (ulong)(param_1[0x2b] & 0x1f) & 1) == 0))
      goto LAB_02212828;
      local_e0._0_4_ = (uint)(uint3)local_e0;
      local_e8._0_5_ = 8;
      local_f8 = PTR_DAT_04bb3768 + 0x10;
      local_f0 = (long *)pcVar2;
      FUN_020fcc2c(param_1 + 0x2a,&local_f8);
      if (*(int *)(param_1 + 0x30) < 1) goto LAB_02212828;
      lVar26 = 0;
      lVar27 = 5;
      goto LAB_022127cc;
    }
  }
  goto LAB_022124cc;
LAB_022127f4:
  lVar27 = 4;
  goto LAB_022124cc;
LAB_022127cc:
  iVar13 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar26 * 8),&local_f8);
  if (iVar13 != 0) {
    lVar26 = lVar26 + 1;
    if (*(int *)(param_1 + 0x30) <= lVar26) goto LAB_022124cc;
    goto LAB_022127cc;
  }
  if (-1 < (int)lVar26) goto LAB_02212800;
LAB_02212828:
  lVar27 = 5;
LAB_022124cc:
  lVar27 = lVar27 * 3;
  do {
    pbVar4 = pbVar23 + lVar27;
    uVar22 = FUN_02216480(pbVar4,&local_188,local_218);
    if ((uVar22 & 1) == 0) break;
    uVar12 = (uint)*pbVar4;
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar12);
    uVar22 = (ulong)uVar12;
    if (0x22 < uVar12) {
      uVar22 = 0;
    }
    uVar12 = local_218[uVar22];
    if (pbVar4[1] < 0x20) {
      uVar12 = uVar12 & (1 << (ulong)(pbVar4[1] & 0x1f) ^ 0xffffffffU);
      local_218[uVar22] = uVar12;
    }
    uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    if (((uVar12 + (uVar12 >> 0x10) & 0x3f) == 0) && ((uint)local_f8 < 0x23)) {
      uVar22 = (ulong)((uint)local_f8 >> 3) & 0x1ffffffc;
      *(uint *)((long)local_218 + uVar22 + 0x90) =
           *(uint *)((long)local_218 + uVar22 + 0x90) &
           (1 << (ulong)((uint)local_f8 & 0x1f) ^ 0xffffffffU);
    }
    lVar27 = lVar27 + 3;
  } while (lVar27 != 0x12);
LAB_02212800:
  FUN_02211824(param_1);
  return;
}

