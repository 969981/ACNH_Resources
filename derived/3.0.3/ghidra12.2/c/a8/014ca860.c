
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_014ca860(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 ****ppppuVar21;
  int iVar22;
  undefined8 *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined **local_488;
  undefined *puStack_480;
  undefined8 local_478;
  undefined *puStack_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined *local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined *local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined *local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  char cStack_3ec;
  undefined1 local_3e8;
  undefined4 local_3e4;
  undefined8 local_3e0;
  undefined1 local_3d8;
  int local_3d4;
  undefined *local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_374;
  undefined1 *local_370;
  undefined8 ****local_368;
  undefined8 ****local_360;
  undefined8 ***local_358 [3];
  undefined8 **local_340 [3];
  undefined8 *local_328 [3];
  undefined8 local_310 [3];
  undefined1 auStack_2f8 [32];
  undefined *local_2d8;
  int local_2d0;
  int local_2cc;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined **local_2a0;
  ulong local_298;
  undefined8 uStack_290;
  int local_288;
  undefined *local_280;
  undefined *local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  char cStack_22c;
  undefined1 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined1 local_218;
  int local_214;
  undefined *local_210;
  undefined4 local_208;
  int local_1b8;
  undefined4 uStack_1b4;
  undefined1 *local_1b0;
  undefined8 ****local_1a8;
  undefined8 ****local_1a0;
  undefined8 ***local_198 [3];
  undefined8 **local_180 [3];
  undefined8 *local_168 [3];
  undefined8 local_150 [3];
  undefined1 local_138 [32];
  undefined *local_118;
  int local_110;
  int iStack_10c;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  byte local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_98;
  undefined4 local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  
  local_100 = 0;
  lVar18 = *(long *)PTR_DAT_04bb2720;
  if (lVar18 == 0) {
    puVar23 = &DAT_055c04a0;
  }
  else {
    puVar23 = &DAT_055c04a0;
    if (*(long *)(lVar18 + 0x330) != 0) {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar14 = FUN_006bd550(*puVar23,0);
      puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar23 = &DAT_055c04a0;
      }
    }
  }
  local_fc = *(undefined4 *)(puVar23 + 7);
  local_f8 = FUN_017baf44();
  local_f8 = local_f8 & 1;
  fVar28 = *(float *)(param_1 + 0xa3c);
  iVar9 = (int)((float)(int)*(float *)(param_1 + 0xaf8) / 5.0) -
          (uint)(*(float *)(param_1 + 0xaf8) < 0.0);
  iVar10 = (int)((float)(int)*(float *)(param_1 + 0xb00) / 5.0) -
           (uint)(*(float *)(param_1 + 0xb00) < 0.0);
  iVar11 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
  iVar14 = iVar9;
  if (iVar11 <= iVar9) {
    iVar14 = iVar11;
  }
  if (iVar9 <= iVar11) {
    iVar9 = iVar11;
  }
  local_108 = PTR_DAT_04bb3140 + 0x10;
  fVar29 = (float)(int)*(float *)(param_1 + 0xa44) / 5.0;
  iVar25 = (int)fVar29 - (uint)(*(float *)(param_1 + 0xa44) < 0.0);
  iVar11 = iVar10;
  if (iVar25 <= iVar10) {
    iVar11 = iVar25;
  }
  if (iVar10 <= iVar25) {
    iVar10 = iVar25;
  }
  lVar18 = FUN_01a4fa00(&local_108);
  puVar12 = PTR_DAT_04bb37e0;
  iVar8 = *(int *)(lVar18 + 0x10);
  iVar25 = *(int *)(lVar18 + 0x14);
  iVar6 = iVar8;
  if (iVar9 <= iVar8) {
    iVar6 = iVar9;
  }
  if (iVar8 <= iVar9) {
    iVar8 = iVar9;
  }
  iVar7 = iVar25;
  if (iVar25 <= iVar10) {
    iVar7 = iVar10;
  }
  if (iVar10 <= iVar25) {
    iVar25 = iVar10;
  }
  piVar1 = (int *)(param_1 + 0xb28);
  lVar18 = param_1 + 0x700;
  if (iVar7 + 1 != iVar25) {
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bbbc20 + 0x10;
    puVar4 = PTR_DAT_04bbcf08 + 0x10;
    puVar5 = PTR_DAT_04bbc1a0 + 0x10;
    iVar24 = iVar6;
    do {
      local_288 = 0;
      local_268 = 0;
      local_248 = 0;
      local_228 = 0;
      local_224 = 0;
      local_220 = 0;
      local_218 = 0;
      local_2a0 = &PTR_LAB_049a6ce8;
      local_298 = 0;
      uStack_290 = 0;
      local_240 = *(undefined4 *)puVar12;
      local_23c = *(undefined4 *)(puVar12 + 4);
      local_278 = (undefined *)0x0;
      local_270 = 0;
      local_258 = 0;
      uStack_250 = 0;
      cStack_22c = '\0';
      local_208 = 0;
      local_150[0] = 0;
      local_214 = *(int *)PTR_DAT_04bb3238;
      local_1b8 = 0;
      uStack_1b4 = 0;
      local_1b0 = (undefined1 *)0x0;
      if (local_138 != (undefined1 *)0x0) {
        uStack_1b4 = 4;
        local_1b0 = local_138;
      }
      local_280 = puVar3;
      local_260 = puVar3;
      local_210 = puVar4;
      local_1a8 = local_198;
      local_1a0 = local_198;
      local_198[0] = local_180;
      local_180[0] = local_168;
      local_168[0] = local_150;
      local_118 = puVar2;
      local_110 = iVar24;
      iStack_10c = iVar25;
      uVar16 = FUN_014cb6a0(param_1,&local_2a0,&local_118,piVar1,0,0);
      if ((uVar16 & 1) != 0) {
        if (local_288 == 4) {
          if (iVar10 + 1 != iVar11) {
            iVar22 = iVar11;
            iVar26 = iVar14;
            do {
              fVar28 = (float)iVar22 * 5.0;
              local_460 = (undefined **)CONCAT44(local_460._4_4_,(float)iVar26 * 5.0);
              local_458 = (undefined *)CONCAT44(local_458._4_4_,fVar28);
              iVar15 = FUN_02b90ee0(&local_460);
              if (iVar15 != 0) goto LAB_014cad84;
              if (iVar26 < iVar9) {
                iVar26 = iVar26 + 1;
              }
              else {
                iVar22 = iVar22 + 1;
                iVar26 = iVar14;
              }
            } while ((iVar14 != iVar26) || (iVar10 + 1 != iVar22));
          }
        }
        else {
          local_d0 = 0;
          local_f0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
          local_2c8 = PTR_DAT_04bbbc20 + 0x10;
          local_e8 = PTR_DAT_04bb2010 + 0x10;
          local_e0 = 0;
          local_2b0 = (undefined *)CONCAT44(local_2b0._4_4_,local_268);
          local_2c0 = local_278;
          local_2b8 = local_270;
          local_d8 = local_e8;
          if (cStack_22c != '\0') {
            local_450 = 0;
            local_440 = (undefined *)0x0;
            local_460 = local_f0;
            local_458 = local_e8;
            local_448 = local_e8;
            FUN_014edb38(&local_2a0,&local_460,&local_280);
            uVar27 = FUN_014eda28(&local_460,&local_278,&local_278);
            local_2c0 = (undefined *)CONCAT44(fVar28,uVar27);
            local_2b8 = CONCAT44(local_2b8._4_4_,fVar29);
          }
          FUN_014edb38(&local_2a0,&local_f0,&local_2c8);
          if ((((iVar14 <= (int)local_d0) && ((int)local_e0 <= iVar9)) && (iVar11 <= local_d0._4_4_)
              ) && (local_e0._4_4_ <= iVar10)) {
LAB_014cad84:
            lVar19 = *(long *)PTR_DAT_04bbbc38;
            if ((lVar19 != 0) && (*(int *)(lVar19 + 0xc) == 3 && *(int *)(lVar19 + 0x10) - 5U < 2))
            {
              if (local_288 == 1) {
                if (*piVar1 == 0) {
LAB_014cade0:
                  local_2a8 = 0;
                  local_2b8 = 0;
                  local_2c0 = PTR_DAT_04bb2010 + 0x10;
                  local_f0 = (undefined **)(PTR_DAT_04bbbc20 + 0x10);
                  local_e8 = local_278;
                  local_e0 = local_270;
                  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,local_268);
                  local_2c8 = puVar5;
                  local_2b0 = local_2c0;
                  if (cStack_22c != '\0') {
                    local_450 = 0;
                    local_440 = (undefined *)0x0;
                    local_460 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
                    local_458 = local_2c0;
                    local_448 = local_2c0;
                    FUN_014edb38(&local_2a0,&local_460,&local_280);
                    uVar27 = FUN_014eda28(&local_460,&local_278,&local_278);
                    local_e8 = (undefined *)CONCAT44(fVar28,uVar27);
                    local_e0 = CONCAT44(local_e0._4_4_,fVar29);
                  }
                  FUN_014edb38(&local_2a0,&local_2c8,&local_f0);
                  iVar22 = local_2a8._4_4_ + 1;
                  if (iVar22 != local_2b8._4_4_) {
                    iVar13 = (int)local_2b8;
                    iVar26 = local_2b8._4_4_;
                    iVar15 = (int)local_2b8;
                    do {
                      local_2d8 = PTR_DAT_04bb2010 + 0x10;
                      local_2d0 = iVar15;
                      local_2cc = iVar26;
                      if (local_288 == 3) {
                        local_458 = (undefined *)0x0;
                        local_450 = 0;
                        local_448 = (undefined *)((ulong)local_448._4_4_ << 0x20);
                        local_460 = &PTR_LAB_049a6ce8;
                        local_3e8 = 0;
                        local_3e4 = 0;
                        local_440 = PTR_DAT_04bbbc20 + 0x10;
                        local_438 = 0;
                        local_430 = 0;
                        local_428 = 0;
                        local_3e0 = 0;
                        local_3d8 = 0;
                        local_408 = 0;
                        local_418 = 0;
                        uStack_410 = 0;
                        local_400 = *(undefined4 *)puVar12;
                        local_3fc = *(undefined4 *)(puVar12 + 4);
                        cStack_3ec = '\0';
                        local_3d4 = *(int *)PTR_DAT_04bb3238;
                        local_3c8 = 0;
                        local_310[0] = 0;
                        local_3d0 = PTR_DAT_04bbcf08 + 0x10;
                        uStack_374 = 0;
                        local_370 = (undefined1 *)0x0;
                        if (auStack_2f8 != (undefined1 *)0x0) {
                          uStack_374 = 4;
                          local_370 = auStack_2f8;
                        }
                        local_f0 = (undefined **)CONCAT44(local_f0._4_4_,1);
                        local_420 = local_440;
                        local_368 = local_358;
                        local_360 = local_358;
                        local_358[0] = local_340;
                        local_340[0] = local_328;
                        local_328[0] = local_310;
                        uVar16 = FUN_014cb6a0(param_1,&local_460,&local_2d8,&local_f0,0,0);
                        if (((uVar16 & 1) != 0) && (local_3d4 != local_214)) {
                          local_468 = 0;
                          local_488 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
                          local_98 = PTR_DAT_04bbbc20 + 0x10;
                          puStack_480 = PTR_DAT_04bb2010 + 0x10;
                          local_88 = (float)local_430;
                          local_478 = 0;
                          local_90 = (undefined4)local_438;
                          fStack_8c = (float)((ulong)local_438 >> 0x20);
                          local_84 = local_430._4_4_;
                          uStack_80 = local_428;
                          puStack_470 = puStack_480;
                          if (cStack_3ec != '\0') {
                            local_e0 = 0;
                            local_d0 = 0;
                            local_f0 = local_488;
                            local_e8 = puStack_480;
                            local_d8 = puStack_480;
                            FUN_014edb38(&local_460,&local_f0,&local_440);
                            local_90 = FUN_014eda28(&local_f0,&local_438,&local_438);
                            fStack_8c = fVar28;
                            local_88 = fVar29;
                          }
                          FUN_014edb38(&local_460,&local_488,&local_98);
                          if ((((iVar14 <= (int)local_468) && ((int)local_478 <= iVar9)) &&
                              (iVar11 <= local_468._4_4_)) && (local_478._4_4_ <= iVar10)) {
                            FUN_014f21bc(lVar18,&local_460);
                          }
                        }
                      }
                      else {
                        local_458 = (undefined *)0x0;
                        local_450 = 0;
                        local_448 = (undefined *)((ulong)local_448._4_4_ << 0x20);
                        local_460 = &PTR_LAB_049a6ce8;
                        local_3e8 = 0;
                        local_3e4 = 0;
                        local_440 = PTR_DAT_04bbbc20 + 0x10;
                        local_438 = 0;
                        local_430 = 0;
                        local_428 = 0;
                        local_3e0 = 0;
                        local_3d8 = 0;
                        local_408 = 0;
                        local_418 = 0;
                        uStack_410 = 0;
                        local_400 = *(undefined4 *)puVar12;
                        local_3fc = *(undefined4 *)(puVar12 + 4);
                        cStack_3ec = '\0';
                        local_3d4 = *(int *)PTR_DAT_04bb3238;
                        local_3c8 = 0;
                        local_310[0] = 0;
                        local_3d0 = PTR_DAT_04bbcf08 + 0x10;
                        uStack_374 = 0;
                        local_370 = (undefined1 *)0x0;
                        if (auStack_2f8 != (undefined1 *)0x0) {
                          uStack_374 = 4;
                          local_370 = auStack_2f8;
                        }
                        local_f0 = (undefined **)CONCAT44(local_f0._4_4_,1);
                        local_420 = local_440;
                        local_368 = local_358;
                        local_360 = local_358;
                        local_358[0] = local_340;
                        local_340[0] = local_328;
                        local_328[0] = local_310;
                        uVar16 = FUN_014cb6a0(param_1,&local_460,&local_2d8,&local_f0,0,0);
                        if ((uVar16 & 1) != 0) {
                          local_468 = 0;
                          local_488 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
                          local_98 = PTR_DAT_04bbbc20 + 0x10;
                          puStack_480 = PTR_DAT_04bb2010 + 0x10;
                          local_88 = (float)local_430;
                          local_478 = 0;
                          local_90 = (undefined4)local_438;
                          fStack_8c = (float)((ulong)local_438 >> 0x20);
                          local_84 = local_430._4_4_;
                          uStack_80 = local_428;
                          puStack_470 = puStack_480;
                          if (cStack_3ec != '\0') {
                            local_e0 = 0;
                            local_d0 = 0;
                            local_f0 = local_488;
                            local_e8 = puStack_480;
                            local_d8 = puStack_480;
                            FUN_014edb38(&local_460,&local_f0,&local_440);
                            local_90 = FUN_014eda28(&local_f0,&local_438,&local_438);
                            fStack_8c = fVar28;
                            local_88 = fVar29;
                          }
                          FUN_014edb38(&local_460,&local_488,&local_98);
                          if (((iVar14 <= (int)local_468) && ((int)local_478 <= iVar9)) &&
                             ((iVar11 <= local_468._4_4_ && (local_478._4_4_ <= iVar10)))) {
                            local_288 = 0;
                            local_278 = (undefined *)0x0;
                            local_270 = 0;
                            local_268 = 0;
                            local_f0 = (undefined **)0xfffe;
                            FUN_0277d4ac(&local_f0);
                            local_218 = 0;
                            local_240 = (undefined4)local_f0;
                            local_23c = local_f0._4_4_;
                            local_214 = *(int *)PTR_DAT_04bb3238;
                            local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
                            local_f0 = (undefined **)(PTR_DAT_04bbcf08 + 0x10);
                            FUN_014ba7d4(&local_210,&local_f0);
                            if (0 < local_1b8) {
                              lVar19 = 0;
                              do {
                                ppppuVar21 = *(undefined8 *****)(local_1b0 + lVar19 * 8);
                                lVar19 = lVar19 + 1;
                                *ppppuVar21 = local_1a8;
                                local_1a8 = ppppuVar21;
                              } while (lVar19 < local_1b8);
                            }
                            local_1b8 = 0;
                            FUN_014e70e0(&local_2a0,&local_460);
                          }
                        }
                      }
                      if (iVar15 < (int)local_2a8) {
                        iVar15 = iVar15 + 1;
                      }
                      else {
                        iVar26 = iVar26 + 1;
                        iVar15 = (int)local_2b8;
                      }
                    } while ((iVar13 != iVar15) || (iVar22 != iVar26));
                  }
                  goto LAB_014cb3a8;
                }
LAB_014cb3b0:
                local_288 = 0;
                local_278 = (undefined *)0x0;
                local_270 = 0;
                local_268 = 0;
                local_460 = (undefined **)0xfffe;
                FUN_0277d4ac(&local_460);
                local_218 = 0;
                local_240 = (undefined4)local_460;
                local_23c = local_460._4_4_;
                local_214 = *(int *)PTR_DAT_04bb3238;
                local_458 = (undefined *)((ulong)local_458 & 0xffffffff00000000);
                local_460 = (undefined **)(PTR_DAT_04bbcf08 + 0x10);
                FUN_014ba7d4(&local_210,&local_460);
                if (0 < local_1b8) {
                  lVar19 = 0;
                  do {
                    ppppuVar21 = *(undefined8 *****)(local_1b0 + lVar19 * 8);
                    lVar19 = lVar19 + 1;
                    *ppppuVar21 = local_1a8;
                    local_1a8 = ppppuVar21;
                  } while (lVar19 < local_1b8);
                }
                local_1b8 = 0;
              }
              else if (local_288 != 3) {
                if ((local_288 == 6) && (*piVar1 == 0)) goto LAB_014cade0;
LAB_014cb3a8:
                if (local_288 != 3) goto LAB_014cb3b0;
              }
            }
            uVar16 = FUN_014e9718(&local_2a0);
            if ((uVar16 & 1) != 0) {
              lVar19 = FUN_014f21bc(lVar18,&local_2a0);
              uVar20 = 0;
              if (*(long *)PTR_DAT_04bbbc38 != 0) {
                uVar20 = *(undefined8 *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
              }
              if (((int)((ulong)uVar20 >> 0x20) - 7U < 0xfffffffe || (int)uVar20 != 3) &&
                 (local_288 == 3)) {
                local_458 = (undefined *)0x0;
                local_450 = 0;
                local_448 = (undefined *)((ulong)local_448 & 0xffffffff00000000);
                local_460 = &PTR_LAB_049a6ce8;
                local_3e8 = 0;
                local_3e4 = 0;
                local_440 = PTR_DAT_04bbbc20 + 0x10;
                local_438 = 0;
                local_430 = 0;
                local_3e0 = 0;
                local_3d8 = 0;
                local_408 = 0;
                local_418 = 0;
                uStack_410 = 0;
                local_400 = *(undefined4 *)puVar12;
                local_3fc = *(undefined4 *)(puVar12 + 4);
                local_3d4 = *(int *)PTR_DAT_04bb3238;
                local_3c8 = 0;
                local_310[0] = 0;
                local_3d0 = PTR_DAT_04bbcf08 + 0x10;
                uStack_374 = 0;
                local_370 = (undefined1 *)0x0;
                if (auStack_2f8 != (undefined1 *)0x0) {
                  uStack_374 = 4;
                  local_370 = auStack_2f8;
                }
                local_420 = local_440;
                local_368 = local_358;
                local_360 = local_358;
                local_358[0] = local_340;
                local_340[0] = local_328;
                local_328[0] = local_310;
                uVar16 = FUN_014cb958(param_1,&local_460,&local_118,piVar1,0,0);
                if ((uVar16 & 1) != 0) {
                  lVar17 = FUN_014f21bc(lVar18,&local_460);
                  if (lVar19 != 0) {
                    *(long *)(lVar19 + 0x80) = lVar17;
                    *(undefined1 *)(lVar19 + 0x88) = 1;
                  }
                  if (lVar17 != 0) {
                    *(long *)(lVar17 + 0x80) = lVar19;
                    *(undefined1 *)(lVar17 + 0x88) = 1;
                  }
                }
              }
            }
          }
        }
      }
      if (iVar24 < iVar8) {
        iVar24 = iVar24 + 1;
      }
      else {
        iVar25 = iVar25 + 1;
        iVar24 = iVar6;
      }
    } while ((iVar6 != iVar24) || (iVar7 + 1 != iVar25));
  }
  iVar14 = *(int *)(param_1 + 0x978);
  if (iVar14 == 0) {
    local_2a0 = (undefined **)((ulong)local_2a0 & 0xffffffff00000000);
  }
  else {
    local_298 = local_298 & 0xffffffff00000000;
    local_2a0 = (undefined **)0x0;
    FUN_014f5970(lVar18,&local_2a0,piVar1,0);
    *(undefined4 *)(param_1 + 0xa40) = 0;
    *(int *)(param_1 + 0xa3c) = (int)local_2a0;
    *(undefined4 *)(param_1 + 0xa44) = (undefined4)local_298;
    FUN_014f22b0(lVar18,param_1 + 0xa3c);
    local_2a0 = (undefined **)CONCAT44(local_2a0._4_4_,5);
  }
  if (*(int *)(param_1 + 0x3c0) != (int)local_2a0) {
    FUN_03ebb160(param_1 + 0x3b8);
  }
  return iVar14 != 0;
}

