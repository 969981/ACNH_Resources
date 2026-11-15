
undefined8 FUN_01e91980(long param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 ******ppppppuVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined4 *puVar24;
  float fVar25;
  undefined *local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined *local_4c0;
  undefined *puStack_4b8;
  undefined8 local_4b0;
  undefined *puStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined4 local_490;
  undefined1 local_48c;
  undefined8 local_488;
  undefined8 local_480;
  undefined1 local_478;
  undefined4 local_474;
  undefined *local_470;
  undefined4 local_468;
  undefined4 local_464;
  long local_460;
  long local_450;
  float local_448;
  float local_440;
  undefined4 local_42c;
  undefined1 local_428;
  undefined1 local_418;
  undefined4 local_414;
  undefined8 local_410;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined1 local_398;
  undefined8 local_2c8;
  undefined8 *local_2c0;
  undefined8 ******local_2b8;
  undefined8 ******local_2b0;
  undefined8 ******local_2a8;
  undefined8 ******local_2a0;
  undefined8 ******local_298;
  undefined8 ******local_290;
  undefined8 ******local_288;
  undefined8 ******local_280;
  undefined8 ******local_278;
  undefined8 ******local_270;
  undefined8 ******local_268;
  undefined8 ******local_260;
  undefined8 ******local_258;
  undefined8 ******local_250;
  undefined8 ******local_248;
  undefined8 ******local_240;
  undefined8 ******local_238;
  undefined8 ******local_230;
  undefined8 ******local_228;
  undefined8 ******local_220;
  undefined8 ******local_218;
  undefined8 ******local_210;
  undefined8 ******local_208;
  undefined8 ******local_200;
  undefined8 ******local_1f8;
  undefined8 ******local_1f0;
  undefined8 ******local_1e8;
  undefined8 ******local_1e0;
  undefined8 ******local_1d8;
  undefined8 ******local_1d0;
  undefined8 ******local_1c8;
  undefined8 ******local_1c0;
  undefined8 *****local_1b8;
  undefined8 ****local_1b0;
  undefined8 ***local_1a8;
  undefined8 **local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 local_188 [37];
  
  puVar14 = (uint *)(param_1 + 0x12f50);
  if (*puVar14 == 0) {
LAB_01e91a04:
    puVar7 = PTR_DAT_04bc0048;
    puVar6 = PTR_DAT_04bb43c0;
    if (*(char *)(param_1 + 0x132d1) != '\0') {
      local_2a8 = &local_2a0;
      local_2a0 = &local_298;
      local_298 = &local_290;
      local_290 = &local_288;
      local_2b8 = &local_2a8;
      local_288 = &local_280;
      local_280 = &local_278;
      local_278 = &local_270;
      local_270 = &local_268;
      local_268 = &local_260;
      local_260 = &local_258;
      local_258 = &local_250;
      local_250 = &local_248;
      local_248 = &local_240;
      local_240 = &local_238;
      local_238 = &local_230;
      local_230 = &local_228;
      local_228 = &local_220;
      local_220 = &local_218;
      local_218 = &local_210;
      local_210 = &local_208;
      local_208 = &local_200;
      local_200 = &local_1f8;
      local_1f8 = &local_1f0;
      local_1f0 = &local_1e8;
      local_1e8 = &local_1e0;
      local_1e0 = &local_1d8;
      local_1d8 = &local_1d0;
      local_1d0 = &local_1c8;
      local_1c8 = &local_1c0;
      local_1c0 = &local_1b8;
      local_1b8 = &local_1b0;
      local_1b0 = &local_1a8;
      local_1a8 = &local_1a0;
      local_1a0 = &local_198;
      local_198 = &local_190;
      local_2c0 = (undefined8 *)0x0;
      local_2c8 = 0;
      local_190 = 0;
      if (local_188 != (undefined8 *)0x0) {
        local_2c8 = 0x2400000000;
        local_2c0 = local_188;
      }
      local_2b0 = local_2b8;
      if (0 < *(int *)(param_1 + 0x12870)) {
        lVar13 = 0;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        do {
          lVar23 = *(long *)puVar6;
          puVar24 = *(undefined4 **)(*(long *)(param_1 + 0x12878) + lVar13 * 8);
          local_468 = *puVar24;
          local_464 = puVar24[1];
          local_460 = 0;
          local_470 = puVar2;
          uVar9 = FUN_0277d6c4(&local_468);
          uVar10 = 0;
          if (*(long *)puVar6 != 0) {
            lVar23 = *(long *)(lVar23 + 0x57e58);
            uVar10 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar23 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              lVar23 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(puVar24);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar23 + 0x1d8)) &&
                 ((puVar14 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar10 * 8),
                  puVar14 != (uint *)0x0 &&
                  (uVar10 = *puVar14, uVar10 != 0 && puVar14 != (uint *)(ulong)uVar10)))) {
                puVar18 = (uint *)((long)puVar14 - (long)(ulong)uVar10);
                if ((*puVar18 != 0) &&
                   ((uVar10 = puVar18[1], uVar10 != 0 && ((ulong)(ushort)puVar18[2] != 0)))) {
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar18 + 10) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar18 + lVar23 + (ulong)(ushort)puVar18[2] * 8;
                  if (lVar23 != 0) {
                    uVar9 = 0;
                    if ((ulong)uVar10 != 0) {
                      uVar9 = (uint)((ulong)((long)puVar14 - lVar23) / (ulong)uVar10);
                    }
                    if (*puVar18 <= uVar9) {
                      uVar9 = 0xffffffff;
                    }
                    if ((uVar9 < *(uint *)puVar7) &&
                       (uVar5 = *(ushort *)(*(long *)(puVar7 + 8) + (long)(int)uVar9 * 2),
                       uVar10 = (uint)uVar5, uVar5 < 0x52)) goto LAB_01e91cc8;
                  }
                }
              }
            }
            uVar10 = 0;
          }
LAB_01e91cc8:
          ppppppuVar8 = local_2b8;
          local_4e0 = (undefined *)CONCAT44(local_4e0._4_4_,uVar10);
          if (uVar10 - 1 < 9) {
            if ((int)local_2c8 < local_2c8._4_4_) {
              if (local_2b8 != (undefined8 ******)0x0) {
                local_2b8 = (undefined8 ******)*local_2b8;
              }
              *(uint *)ppppppuVar8 = (uint)lVar13;
              if ((int)local_2c8 < local_2c8._4_4_) {
                local_2c0[(int)local_2c8] = ppppppuVar8;
                local_2c8 = CONCAT44(local_2c8._4_4_,(int)local_2c8 + 1);
              }
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(param_1 + 0x12870));
      }
      uVar10 = nn::os::GetSystemTick();
      if (1 < (int)local_2c8) {
        uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
        uVar9 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
        uVar12 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
        uVar19 = (ulong)((uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4);
        uVar11 = local_2c8 & 0xffffffff;
        do {
          uVar10 = uVar10 ^ uVar10 << 0xb;
          uVar17 = (uint)uVar19;
          uVar19 = (ulong)(uVar17 >> 0x13 ^ uVar10 >> 8 ^ uVar17 ^ uVar10);
          uVar21 = uVar11 - 1 & 0xffffffff;
          uVar22 = local_2c0[uVar21];
          uVar20 = uVar11 * uVar19 >> 0x1d & 0x7fffffff8;
          local_2c0[uVar21] = *(undefined8 *)((long)local_2c0 + uVar20);
          *(undefined8 *)((long)local_2c0 + uVar20) = uVar22;
          bVar1 = 2 < uVar11;
          uVar11 = uVar11 - 1;
          uVar10 = uVar9;
          uVar9 = uVar12;
          uVar12 = uVar17;
        } while (bVar1);
      }
      local_4d0 = 0;
      uStack_4c8 = 0;
      local_48c = 0;
      local_4e0 = PTR_DAT_04bc1558 + 0x10;
      uStack_4d8 = 0;
      local_4c0 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_4b8 = PTR_DAT_04bb2010 + 0x10;
      local_4b0 = 0;
      local_4a0 = 0;
      uStack_498 = 0xffffffff00000000;
      local_490 = 0xffffffff;
      local_488 = 0xfffe;
      puStack_4a8 = puStack_4b8;
      FUN_0277d4ac(&local_488);
      local_478 = 0;
      local_474 = 0;
      local_480 = 0x3bf800000;
      uVar11 = FUN_01e92320(param_1,&local_4e0,&local_2c8);
      if ((uVar11 & 1) != 0) {
        FUN_01e63f1c(&local_470);
        local_3c0 = (undefined4)local_488;
        local_3bc = local_488._4_4_;
        local_3cc = (undefined4)uStack_4c8;
        local_3d0 = local_4d0._4_4_;
        local_3e8 = (undefined4)local_4b0;
        local_3e4 = local_4b0._4_4_;
        local_3c8 = uStack_4c8._4_4_;
        local_3d8 = (undefined4)local_4a0;
        local_3d4 = local_4a0._4_4_;
        local_410 = CONCAT44(1,(undefined4)local_410);
        local_398 = local_48c;
        local_470 = (undefined *)CONCAT44(local_470._4_4_,0x14);
        if ((param_2 & 1) != 0) {
          *(long *)(param_1 + 0x12618) = param_1;
          *(undefined1 **)(param_1 + 0x12620) = &LAB_01e93888;
          local_460 = param_1 + 0x12610;
          local_450 = param_1 + 0x12650;
          *(undefined8 *)(param_1 + 0x12628) = 0;
          *(long *)(param_1 + 0x12658) = param_1;
          *(undefined1 **)(param_1 + 0x12660) = &LAB_01e933a0;
          *(undefined8 *)(param_1 + 0x12668) = 0;
        }
LAB_01e922d0:
        if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
          FUN_021920b0((int *)(param_1 + 0xef10),&local_470);
        }
        return 1;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x132d1) != '\0') {
      lVar13 = *(long *)(param_1 + 8);
      uVar10 = *(uint *)(lVar13 + 0x288);
      *(undefined4 *)(lVar13 + 0x288) = *(undefined4 *)(lVar13 + 0x28c);
      uVar10 = uVar10 ^ uVar10 << 0xb;
      *(undefined4 *)(lVar13 + 0x28c) = *(undefined4 *)(lVar13 + 0x290);
      uVar9 = *(uint *)(lVar13 + 0x294);
      *(uint *)(lVar13 + 0x290) = uVar9;
      uVar10 = uVar10 >> 8 ^ uVar9 >> 0x13 ^ uVar10 ^ uVar9;
      *(uint *)(lVar13 + 0x294) = uVar10;
      if ((uVar10 >> 1 & 1) == 0) goto LAB_01e91a04;
    }
    FUN_01e63f1c(&local_470);
    local_2c0 = (undefined8 *)0x0;
    local_2a8 = &local_2a0;
    local_2a0 = &local_298;
    local_2b0 = &local_2a8;
    local_2c8 = 0;
    local_298 = &local_290;
    local_290 = &local_288;
    local_288 = &local_280;
    local_280 = &local_278;
    local_278 = &local_270;
    local_270 = &local_268;
    local_268 = &local_260;
    local_260 = &local_258;
    local_258 = &local_250;
    local_250 = &local_248;
    local_248 = &local_240;
    local_240 = &local_238;
    local_238 = &local_230;
    local_230 = &local_228;
    local_228 = &local_220;
    local_220 = &local_218;
    local_218 = &local_210;
    local_210 = &local_208;
    local_208 = &local_200;
    local_200 = &local_1f8;
    local_1f8 = &local_1f0;
    local_1f0 = &local_1e8;
    local_1e8 = &local_1e0;
    local_1e0 = &local_1d8;
    local_1d8 = &local_1d0;
    local_1d0 = &local_1c8;
    local_1c8 = &local_1c0;
    local_1c0 = &local_1b8;
    local_1b8 = &local_1b0;
    local_1b0 = &local_1a8;
    local_1a8 = &local_1a0;
    local_1a0 = &local_198;
    local_198 = &local_190;
    local_190 = 0;
    local_2b8 = local_2b0;
    if (local_188 != (undefined8 *)0x0) {
      uVar10 = *puVar14;
      local_2c8 = 0x2400000000;
      local_2c0 = local_188;
      if (0 < (int)uVar10) {
        iVar16 = 0;
        uVar9 = 0;
        do {
          ppppppuVar8 = local_2b8;
          if (iVar16 < local_2c8._4_4_) {
            if (local_2b8 != (undefined8 ******)0x0) {
              local_2b8 = (undefined8 ******)*local_2b8;
            }
            *(uint *)ppppppuVar8 = uVar9;
            iVar16 = (int)local_2c8;
            if ((int)local_2c8 < local_2c8._4_4_) {
              local_188[(int)local_2c8] = ppppppuVar8;
              iVar16 = (int)local_2c8 + 1;
              local_2c8 = CONCAT44(local_2c8._4_4_,iVar16);
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
    }
    uVar10 = nn::os::GetSystemTick();
    if (1 < (int)local_2c8) {
      uVar10 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
      uVar9 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
      uVar12 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
      uVar11 = local_2c8 & 0xffffffff;
      uVar17 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4;
      do {
        uVar10 = uVar10 ^ uVar10 << 0xb;
        uVar3 = uVar17 >> 0x13 ^ uVar10 >> 8 ^ uVar17 ^ uVar10;
        uVar19 = uVar11 - 1 & 0xffffffff;
        uVar22 = local_2c0[uVar19];
        uVar20 = uVar11 * uVar3 >> 0x1d & 0x7fffffff8;
        local_2c0[uVar19] = *(undefined8 *)((long)local_2c0 + uVar20);
        *(undefined8 *)((long)local_2c0 + uVar20) = uVar22;
        bVar1 = 2 < uVar11;
        uVar11 = uVar11 - 1;
        uVar10 = uVar9;
        uVar9 = uVar12;
        uVar12 = uVar17;
        uVar17 = uVar3;
      } while (bVar1);
    }
    if ((int)local_2c8 != 0) {
      uVar5 = *(ushort *)(param_1 + 0x188);
      uVar4 = *(ushort *)(param_1 + 0x18a);
      lVar13 = (long)(int)local_2c8 << 3;
      puVar15 = local_2c0;
      do {
        if (*(uint *)*puVar15 < *puVar14) {
          lVar23 = *(long *)(*(long *)(param_1 + 0x12f58) + (long)(int)*(uint *)*puVar15 * 8);
        }
        else {
          lVar23 = 0;
        }
        fVar25 = (float)*(int *)(lVar23 + 8) * 10.0 + 10.0 + -2.5;
        uVar9 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
        uVar10 = uVar9 & 0xffff;
        if ((((uVar5 < uVar10 || uVar5 == uVar10) &&
             ((uVar9 & 0xffff) <= (((uint)uVar5 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff))
             ) && (fVar25 = (float)*(int *)(lVar23 + 0xc) * 10.0 + 10.0 + -2.5,
                  uVar9 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0),
                  uVar10 = uVar9 & 0xffff, uVar4 < uVar10 || uVar4 == uVar10)) &&
           ((uVar9 & 0xffff) <= (((uint)uVar4 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff)))
        {
          local_448 = (float)*(int *)(lVar23 + 8) * 10.0 + 5.0;
          local_470 = (undefined *)CONCAT44(local_470._4_4_,0x16);
          local_418 = 1;
          local_428 = 1;
          local_42c = 0;
          local_414 = 0x1c2;
          local_410 = 0x100000002;
          local_440 = (float)*(int *)(lVar23 + 0xc) * 10.0 + 5.0;
          if ((param_2 & 1) != 0) {
            local_450 = param_1 + 0x12650;
            *(long *)(param_1 + 0x12658) = param_1;
            *(undefined1 **)(param_1 + 0x12660) = &LAB_01e933a0;
            *(undefined8 *)(param_1 + 0x12668) = 0;
          }
          goto LAB_01e922d0;
        }
        puVar15 = puVar15 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
    }
  }
  return 0;
}

