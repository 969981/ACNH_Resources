
uint FUN_0150e210(uint *param_1,byte *param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  float *pfVar17;
  uint *puVar18;
  long lVar19;
  byte bVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined *local_418;
  undefined8 local_410;
  undefined *local_408;
  int local_400;
  int iStack_3fc;
  undefined8 local_3f8;
  undefined *local_3f0;
  undefined8 local_3e8;
  undefined *local_3e0;
  undefined8 local_3d8;
  undefined *local_3d0;
  undefined8 local_3c8;
  long local_3c0;
  undefined *local_3b8;
  int local_3b0;
  int iStack_3ac;
  undefined8 local_3a8;
  undefined *local_3a0;
  undefined *puStack_398;
  undefined8 local_390;
  undefined *puStack_388;
  undefined8 local_380;
  undefined **ppuStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined *local_360;
  undefined8 uStack_358;
  undefined *local_350;
  undefined8 uStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined8 local_330;
  undefined *puStack_328;
  undefined8 local_320;
  undefined1 local_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined8 local_300;
  undefined *puStack_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined *local_2e0;
  undefined *puStack_2d8;
  undefined8 local_2d0;
  undefined *puStack_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined8 local_2a0;
  undefined *puStack_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined *local_280;
  undefined *puStack_278;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined *local_250;
  undefined *local_248;
  undefined8 local_240;
  undefined *local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined *local_220;
  undefined *local_218;
  undefined8 local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined4 local_88;
  uint local_84;
  
  local_a8 = 0;
  local_b0 = PTR_DAT_04bbfe68 + 0x10;
  lVar19 = *(long *)PTR_DAT_04bb2720;
  if (lVar19 == 0) {
    puVar21 = &DAT_055c04a0;
  }
  else {
    puVar21 = &DAT_055c04a0;
    if (*(long *)(lVar19 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
      iVar11 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
  }
  local_a4 = *(undefined4 *)(puVar21 + 7);
  local_a0 = FUN_017baf44();
  local_a0 = local_a0 & 1;
  local_b0 = PTR_DAT_04bb3140 + 0x10;
  uVar14 = FUN_014ff8d4(&local_b0);
  if ((uVar14 & 1) != 0) {
    plVar15 = (long *)FUN_0251b3b0(param_2,0);
    plVar16 = (long *)FUN_0251e380(0x40f00000,param_2,0);
    lVar19 = FUN_0251bdc4(param_2,0);
    uVar12 = 0;
    if (((plVar16 == (long *)0x0) || (plVar15 == (long *)0x0)) || (lVar19 == 0)) goto LAB_0150ec7c;
    local_c0 = (undefined *)*plVar15;
    local_b8 = *(float *)(plVar15 + 1);
    puVar2 = (undefined *)*plVar16;
    puVar1 = (undefined *)*plVar16;
    lVar9 = plVar16[1];
    iVar23 = *(int *)(lVar19 + 4);
    lVar19 = FUN_0251e98c(1);
    pfVar17 = (float *)(**(code **)(*(long *)(lVar19 + 0x2a0) + 0xf0))(lVar19 + 0x2a0);
    puVar4 = PTR_DAT_04bb2010;
    local_320 = 0;
    local_318 = 0;
    local_2f0 = 0;
    local_2e8 = 0;
    local_2c0 = 0;
    fVar25 = *pfVar17 * 0.5 * 0.97;
    local_2b8 = 0;
    local_290 = 0;
    local_288 = 0;
    local_260 = 0;
    fVar26 = fVar25 + local_b8;
    local_258 = 0;
    local_230 = 0;
    local_228 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_3a0 = PTR_DAT_04bbc1a0 + 0x10;
    local_1d0 = 0;
    local_360 = PTR_DAT_04bb2e18 + 0x10;
    uStack_358 = 0;
    local_270 = 0;
    local_380 = 0;
    ppuStack_378 = &PTR_LAB_049a7248;
    puStack_398 = PTR_DAT_04bb2010 + 0x10;
    local_c8 = 0;
    local_390 = 0;
    uStack_348 = 0;
    local_240 = 0;
    local_330 = 0;
    local_210 = 0;
    local_300 = 0;
    local_2d0 = 0;
    iVar7 = (int)((float)(int)((float)local_c0 - fVar25) / 5.0) -
            (uint)((float)local_c0 - fVar25 < 0.0);
    local_2a0 = 0;
    local_1e0 = 0;
    local_1c8 = 0;
    fVar27 = (float)(int)fVar26 / 5.0;
    local_1a0 = 0;
    local_1b0 = 0;
    local_198 = 0;
    local_180 = 0;
    iVar11 = (int)((float)(int)(local_b8 - fVar25) / 5.0) - (uint)(local_b8 - fVar25 < 0.0);
    local_170 = 0;
    local_168 = 0;
    local_150 = 0;
    local_140 = 0;
    local_138 = 0;
    iVar8 = (int)((float)(int)((float)local_c0 + fVar25) / 5.0) -
            (uint)((float)local_c0 + fVar25 < 0.0);
    local_120 = 0;
    iVar5 = iVar7;
    if (iVar8 <= iVar7) {
      iVar5 = iVar8;
    }
    if (iVar7 <= iVar8) {
      iVar7 = iVar8;
    }
    local_110 = 0;
    local_108 = 0;
    iVar13 = (int)fVar27 - (uint)(fVar26 < 0.0);
    local_f0 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_370 = 0;
    uStack_368 = 0;
    iVar8 = iVar11;
    if (iVar11 <= iVar13) {
      iVar8 = iVar13;
    }
    if (iVar13 <= iVar11) {
      iVar11 = iVar13;
    }
    uVar12 = iVar23 + 0x10000000U >> 0x1d;
    local_430 = (undefined *)CONCAT44(local_430._4_4_,uVar12);
    puStack_388 = puStack_398;
    local_350 = puStack_398;
    local_340 = local_3a0;
    puStack_338 = puStack_398;
    puStack_328 = puStack_398;
    local_310 = local_3a0;
    puStack_308 = puStack_398;
    puStack_2f8 = puStack_398;
    local_2e0 = local_3a0;
    puStack_2d8 = puStack_398;
    puStack_2c8 = puStack_398;
    local_2b0 = local_3a0;
    puStack_2a8 = puStack_398;
    puStack_298 = puStack_398;
    local_280 = local_3a0;
    puStack_278 = puStack_398;
    local_268 = puStack_398;
    local_250 = local_3a0;
    local_248 = puStack_398;
    local_238 = puStack_398;
    local_220 = local_3a0;
    local_218 = puStack_398;
    local_208 = puStack_398;
    local_1f0 = local_3a0;
    local_1e8 = puStack_398;
    local_1d8 = puStack_398;
    local_1c0 = local_3a0;
    local_1b8 = puStack_398;
    local_1a8 = puStack_398;
    local_190 = local_3a0;
    local_188 = puStack_398;
    local_178 = puStack_398;
    local_160 = local_3a0;
    local_158 = puStack_398;
    local_148 = puStack_398;
    local_130 = local_3a0;
    local_128 = puStack_398;
    local_118 = puStack_398;
    local_100 = local_3a0;
    local_f8 = puStack_398;
    local_e8 = puStack_398;
    local_d0 = puStack_398;
    if ((uVar12 & 1) == 0) {
      uVar12 = iVar23 + 0x20000000U >> 0x1e;
      FUN_01535970(&local_3a0,&local_c0,uVar12);
      FUN_01535d20(&local_3a0,&local_c0,uVar12);
    }
    else {
      FUN_01536770(&local_3a0,&local_c0,uVar12);
      FUN_01536af0(&local_3a0,&local_c0,uVar12);
    }
    puVar10 = PTR_DAT_04bb37e0;
    local_410 = CONCAT44(local_410._4_4_,(int)lVar9);
    local_420._0_5_ = CONCAT14(param_3 & 1,1);
    uVar6 = *(ushort *)PTR_DAT_04bb37e0;
    local_430 = local_c0;
    local_88 = *(uint *)PTR_DAT_04bb37e0;
    local_428 = (undefined *)CONCAT44(iVar23,local_b8);
    local_84 = *(uint *)(PTR_DAT_04bb37e0 + 4);
    local_3f8 = (undefined *)0xfffe;
    local_418 = puVar1;
    FUN_0277d4ac(&local_3f8);
    local_3f0 = puVar4 + 0x10;
    local_3e8 = 0;
    if ((uint)local_420 == 1) {
      FUN_01534da0(&local_3a0,&local_3f8,&local_430);
    }
    else if ((uint)local_420 == 0) {
      FUN_01534440(&local_3a0,&local_3f8,&local_430);
    }
    puVar1 = PTR_DAT_04bb43c0;
    lVar19 = *(long *)PTR_DAT_04bb43c0;
    uVar12 = FUN_0277d6c4(&local_3f8);
    if (*(long *)puVar1 == 0) {
LAB_0150e6fc:
      local_410 = CONCAT44(local_410._4_4_,(int)lVar9);
      local_420 = (undefined *)
                  (((ulong)CONCAT31((int3)((ulong)local_420 >> 0x28),param_3) & 0xffffff01) << 0x20)
      ;
      local_430 = local_c0;
      local_428 = (undefined *)CONCAT44(iVar23,local_b8);
      local_3f8 = (undefined *)0xfffe;
      local_418 = puVar2;
      FUN_0277d4ac(&local_3f8);
      plVar15 = (long *)PTR_DAT_04bb43c0;
      local_3f0 = puVar4 + 0x10;
      local_3e8 = 0;
      if ((uint)local_420 == 1) {
        FUN_01534da0(&local_3a0,&local_3f8,&local_430);
        plVar15 = (long *)PTR_DAT_04bb43c0;
      }
      else if ((uint)local_420 == 0) {
        FUN_01534440(&local_3a0,&local_3f8,&local_430);
      }
      lVar19 = *plVar15;
      uVar12 = FUN_0277d6c4(&local_3f8);
      if (*plVar15 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          uVar22 = 0;
          goto LAB_0150e7c4;
        }
      }
      uVar22 = 0;
    }
    else {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((*(uint *)(lVar19 + 0x1d8) <= uVar12) ||
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0150e6fc;
      uVar22 = 1;
      plVar15 = (long *)PTR_DAT_04bb43c0;
LAB_0150e7c4:
      local_84 = local_3f8._4_4_;
      local_88 = (uint)local_3f8;
      local_c8 = local_3e8;
      *(undefined1 *)(param_1 + 10) = local_3e0._0_1_;
      uVar6 = (ushort)local_3f8;
    }
    uVar12 = (uint)uVar6;
    if ((uVar6 == 0xfffe) && ((param_3 & 1) == 0)) {
      local_3a8 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_3a8);
      local_3c8 = 0;
      if (iVar8 + 1 != iVar11) {
        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        puVar3 = PTR_DAT_04bb3290 + 0x10;
        iVar23 = iVar5;
        local_3d0 = puVar4 + 0x10;
LAB_0150e880:
        local_3a8 = *(undefined **)puVar10;
        local_3b8 = puVar4 + 0x10;
        local_3b0 = iVar23;
        iStack_3ac = iVar11;
        FUN_01a5033c(&local_430,&local_b0,0,&local_3b8,&local_3d0);
        local_3a8 = local_430;
        uVar14 = FUN_0277e294(&local_3a8);
        if ((uVar14 & 1) != 0) {
          local_428 = puVar4 + 0x10;
          local_410 = 0;
          lVar19 = *plVar15;
          local_420 = (undefined *)0x0;
          local_3e8 = 0;
          local_3f0 = local_3a8;
          local_430 = puVar1;
          local_418 = local_428;
          local_3f8 = puVar2;
          uVar12 = FUN_0277d6c4(&local_3f0);
          if (*plVar15 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
              lVar19 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_3a8);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if (uVar12 < *(uint *)(lVar19 + 0x1d8)) {
                lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8);
                if (lVar19 != 0) {
                  local_3e8 = lVar19;
                }
              }
            }
          }
          FUN_01afb480(&local_3f8,&local_430);
          local_420 = (undefined *)
                      CONCAT44(local_420._4_4_ + local_3c8._4_4_,(uint)local_420 + (int)local_3c8);
          local_410 = CONCAT44(local_410._4_4_ + local_3c8._4_4_,(int)local_410 + (int)local_3c8);
          uVar14 = FUN_01a4ff00(&local_b0,1,&local_430);
          if ((uVar14 & 1) != 0) {
            puVar18 = (uint *)FUN_014fbd50(&local_b0,0,&local_3d0);
            uVar12 = *puVar18;
            local_3f8 = (undefined *)CONCAT44(local_3f8._4_4_,uVar12);
            uVar14 = FUN_015039ac(&local_3f8);
            if ((uVar14 & 1) != 0) {
              lVar19 = *(long *)PTR_DAT_04bb27c0;
              if (lVar19 != 0) {
                if ((((uVar12 == 0) ||
                     (plVar15 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                                          ((ulong)(uVar12 >> 0x11) & 0x7ff8)),
                     plVar15 == (long *)0x0)) || ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) ||
                   (*(uint *)(plVar15 + 0x46) != uVar12)) {
                  plVar15 = (long *)0x0;
                }
                if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
                  plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                         (*(long *)PTR_DAT_04bb3350 + 0x68));
                  lVar19 = *(long *)PTR_DAT_04bb27c0;
                  iVar13 = (**(code **)(*plVar16 + 0x60))();
                  if (iVar13 < 0x11) {
                    uVar12 = 1;
                  }
                  else {
                    if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_0150ea74;
                    uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
                  }
                }
                else {
LAB_0150ea74:
                  uVar12 = 0;
                }
                if (plVar15 != (long *)0x0) {
                  lVar19 = plVar15[0x2a];
                  if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar13 != 0)) {
                    *(undefined **)PTR_DAT_04bb5920 = puVar3;
                    __cxa_guard_release(PTR_DAT_04bb5928);
                  }
                  uVar14 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb5920);
                  uVar24 = 0;
                  if ((int)lVar19 == 1) {
                    uVar24 = uVar12;
                  }
                  if (((((uVar14 & 1) != 0) && (uVar24 != 0)) && (plVar15[0xe] != 0)) &&
                     (*(int *)(plVar15[0xe] + 0x280) == 0)) {
                    fVar27 = (float)(int)local_410 * 5.0 + 5.0;
                    local_3f0 = (undefined *)
                                CONCAT44(local_3f0._4_4_,
                                         ((float)(int)local_420._4_4_ * 5.0 +
                                         (float)local_410._4_4_ * 5.0 + 5.0) * 0.5);
                    local_3f8 = (undefined *)
                                (ulong)(uint)(((float)(int)(uint)local_420 * 5.0 + fVar27) * 0.5);
                    lVar19 = *(long *)PTR_DAT_04bb27c8;
                    if (((lVar19 == 0) || (*(long *)(lVar19 + 0xa8) == 0)) ||
                       (*(char *)(lVar19 + 0x11c8) != '\0')) {
                      fVar25 = -500.0;
                    }
                    else {
                      fVar25 = (float)FUN_0093a950(lVar19 + 0x28,&local_3f8,0);
                    }
                    plVar15 = (long *)PTR_DAT_04bb43c0;
                    fVar26 = local_c0._4_4_;
                    if ((-7.0 <= fVar25 - local_c0._4_4_) && (fVar25 - local_c0._4_4_ <= 7.0)) {
                      if (local_410._4_4_ + 1U != local_420._4_4_) {
                        uVar24 = (uint)local_420;
                        uVar12 = local_420._4_4_;
                        while (((0xff < uVar12 || (0x11f < uVar24)) ||
                               ((*(uint *)(PTR_DAT_04bbcc10 +
                                          (ulong)(uVar24 + uVar12 * 0x120 >> 5) * 4 + 8) >>
                                 (ulong)(uVar24 & 0x1f) & 1) == 0))) {
                          if ((int)uVar24 < (int)local_410) {
                            uVar24 = uVar24 + 1;
                          }
                          else {
                            uVar12 = uVar12 + 1;
                            uVar24 = (uint)local_420;
                          }
                          if (((uint)local_420 == uVar24) && (local_410._4_4_ + 1U == uVar12))
                          goto LAB_0150ee30;
                        }
                        goto LAB_0150eaf0;
                      }
LAB_0150ee30:
                      uVar14 = FUN_0277e294(&local_88);
                      if ((uVar14 & 1) != 0) {
                        uVar22 = 0;
                        local_88 = (uint)local_3a8;
                        local_84 = local_3a8._4_4_;
                        local_c8 = local_3c8;
                      }
                      goto LAB_0150ec68;
                    }
                    goto LAB_0150eaf0;
                  }
                }
              }
              plVar15 = (long *)PTR_DAT_04bb43c0;
            }
          }
        }
LAB_0150eaf0:
        if (iVar23 < iVar7) {
          iVar23 = iVar23 + 1;
        }
        else {
          iVar11 = iVar11 + 1;
          iVar23 = iVar5;
        }
        if ((iVar5 != iVar23) || (iVar8 + 1 != iVar11)) goto LAB_0150e880;
      }
LAB_0150ec68:
      uVar12 = local_88 & 0xffff;
    }
    if (uVar12 != 0xfffe) {
      local_3c0 = 0;
      local_3d0 = PTR_DAT_04bc0510 + 0x10;
      lVar19 = *plVar15;
      local_3c8._0_4_ = CONCAT22(local_88._2_2_,(short)uVar12);
      local_3c8 = CONCAT44(local_84,(int)local_3c8);
      uVar12 = FUN_0277d6c4(&local_3c8);
      if (*plVar15 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(&local_88);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (uVar12 < *(uint *)(lVar19 + 0x1d8)) {
            lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8);
            if (lVar19 != 0) {
              local_3c0 = lVar19;
            }
          }
        }
      }
      puVar4 = puVar4 + 0x10;
      local_3e8 = 0;
      local_3d8 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      local_3f8 = puVar1;
      local_3f0 = puVar4;
      local_3e0 = puVar4;
      FUN_01afb480(&local_3d0,&local_3f8);
      local_3e8._4_4_ = local_3e8._4_4_ + local_c8._4_4_;
      iStack_3fc = local_3d8._4_4_ + local_c8._4_4_;
      bVar20 = *param_2;
      local_3e8._0_4_ = (int)local_3e8 + (uint)local_c8;
      local_400 = (int)local_3d8 + (uint)local_c8;
      local_3d8 = CONCAT44(iStack_3fc,local_400);
      local_410 = CONCAT44(local_3e8._4_4_,(int)local_3e8);
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      local_430 = (undefined *)CONCAT71(local_430._1_7_,bVar20);
      local_430 = (undefined *)
                  CONCAT17(local_88._3_1_,
                           CONCAT16(local_88._2_1_,
                                    CONCAT24((undefined2)local_88,(undefined4)local_430)));
      local_428 = (undefined *)CONCAT44(local_428._4_4_,local_84);
      local_420 = puVar1;
      local_418 = puVar4;
      local_408 = puVar4;
      uVar12 = FUN_0150ee60(&local_430);
      if ((uVar12 & 1) != 0) {
        uVar24 = FUN_01a50ed0(&local_b0,&local_88,&local_d0,uVar22);
        param_1[7] = uVar24;
        param_1[8] = (uint)fVar26;
        param_1[9] = (uint)fVar27;
        *param_1 = local_88;
        param_1[1] = local_84;
        param_1[4] = (uint)local_c8;
        param_1[5] = local_c8._4_4_;
        param_1[6] = uVar22;
      }
      goto LAB_0150ec7c;
    }
  }
  uVar12 = 0;
LAB_0150ec7c:
  return uVar12 & 1;
}

