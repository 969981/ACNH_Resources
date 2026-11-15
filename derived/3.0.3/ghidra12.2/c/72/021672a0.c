
bool FUN_021672a0(float *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined *puVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined2 uVar24;
  ushort uVar25;
  long lVar26;
  uint *puVar27;
  ulong uVar28;
  uint *puVar29;
  undefined8 *puVar30;
  long lVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined *local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined *local_4a0;
  undefined8 local_498;
  undefined *local_490;
  undefined2 local_488;
  undefined1 local_486;
  undefined1 local_485;
  undefined4 local_484;
  uint *local_480;
  undefined2 local_478;
  undefined1 local_476;
  undefined1 local_475;
  undefined4 local_474;
  undefined *local_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined *puStack_450;
  undefined8 local_448;
  undefined *local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  int local_420 [4];
  undefined *local_410;
  undefined8 uStack_408;
  undefined *local_3f8;
  undefined8 uStack_3f0;
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined *local_3c8;
  undefined8 uStack_3c0;
  undefined *local_3b0;
  undefined8 uStack_3a8;
  undefined *local_398;
  undefined8 uStack_390;
  undefined *local_380;
  undefined8 uStack_378;
  undefined *local_368;
  undefined8 uStack_360;
  undefined *local_350;
  undefined8 uStack_348;
  undefined *local_338;
  undefined8 uStack_330;
  undefined *local_320;
  undefined8 uStack_318;
  undefined *local_308;
  undefined8 uStack_300;
  undefined *local_2f0;
  undefined8 uStack_2e8;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined *local_2c0;
  undefined8 local_2b8;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined *local_290;
  undefined8 local_288;
  undefined *local_278;
  undefined8 local_270;
  undefined *local_260;
  undefined8 local_258;
  undefined *local_248;
  undefined8 local_240;
  undefined *local_230;
  undefined8 local_228;
  undefined *local_218;
  undefined8 local_210;
  undefined *local_200;
  undefined8 local_1f8;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_170;
  undefined8 local_168;
  undefined *local_158;
  undefined8 local_150;
  undefined *local_140;
  undefined8 local_138;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_110;
  undefined8 local_108;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte local_98;
  undefined8 local_90;
  
  local_90 = 0xfffe;
  FUN_0277d4ac(&local_90);
  local_a0 = 0;
  lVar26 = *(long *)PTR_DAT_04bb2720;
  if (lVar26 == 0) {
    puVar30 = &DAT_055c04a0;
  }
  else {
    puVar30 = &DAT_055c04a0;
    if (*(long *)(lVar26 + 0x330) != 0) {
      puVar30 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
      iVar20 = FUN_006bd550(*puVar30,0);
      puVar30 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar20 != 0x758f7eaf) {
        puVar30 = &DAT_055c04a0;
      }
    }
  }
  local_9c = *(undefined4 *)(puVar30 + 7);
  local_98 = FUN_017baf44();
  puVar1 = PTR_DAT_04bb2010;
  local_98 = local_98 & 1;
  local_a8 = PTR_DAT_04bb6268 + 0x10;
  local_430 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = 0;
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)param_1[3] >> 0x14) & 0xff0));
  fVar33 = (float)((uint)param_1[3] & 0xffffff) * 5.9604645e-08;
  fVar35 = *pfVar2 + fVar33 * pfVar2[1];
  fVar33 = pfVar2[2] + fVar33 * pfVar2[3];
  fVar34 = *param_1 + fVar35 * 0.0 * 0.0 + fVar33 * 0.0 + param_1[4] * (fVar35 + 0.0);
  fVar33 = param_1[2] + (fVar33 * 0.0 * 0.0 - fVar35 * 0.0) + param_1[4] * fVar33;
  local_428 = (undefined *)
              CONCAT44((int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0),
                       (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0));
  local_b8 = local_430;
  FUN_01a5033c(&local_458,&local_a8,0,&local_430,&local_b8);
  if ((short)local_458 == -2) {
    uVar24 = 0xfffe;
  }
  else {
    FUN_0277d6c4(&local_458);
    uVar24 = (short)local_458;
  }
  puVar18 = PTR_DAT_04bb43c0;
  local_90._0_4_ = CONCAT22(local_458._2_2_,uVar24);
  local_90._4_4_ = local_458._4_4_;
  lVar31 = *(long *)PTR_DAT_04bb43c0;
  uVar21 = FUN_0277d6c4(&local_90);
  lVar26 = *(long *)puVar18;
  if (lVar26 == 0) {
    return false;
  }
  lVar31 = *(long *)(lVar31 + 0x57e58);
  uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
  if (*(uint *)(lVar31 + 0x1d8) <= uVar21) {
    return false;
  }
  if (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar21 * 8) == 0) {
    return false;
  }
  local_c0 = (uint *)0x0;
  local_c8 = (undefined4)local_90;
  uStack_c4 = local_90._4_4_;
  local_d0 = PTR_DAT_04bc0510 + 0x10;
  uVar21 = FUN_0277d6c4(&local_c8);
  if (*(long *)puVar18 == 0) {
LAB_02167580:
    local_430 = (undefined *)CONCAT44(local_430._4_4_,0xb8);
    if (local_c0 != (uint *)0x0) goto LAB_02167590;
    uVar21 = 0xbc;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((*(uint *)(lVar26 + 0x1d8) <= uVar21) ||
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar21 * 8) == 0)) goto LAB_02167580;
    lVar26 = *(long *)PTR_DAT_04bc0428;
    uVar21 = FUN_0277d6c4(&local_90);
    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((*(uint *)(lVar26 + 0x1d8) <= uVar21) ||
       (puVar27 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar21 * 8),
       puVar27 == (uint *)0x0)) goto LAB_02167580;
    local_430 = (undefined *)CONCAT44(local_430._4_4_,0xb8);
    local_c0 = puVar27;
LAB_02167590:
    uVar7 = *local_c0;
    uVar21 = 0;
    if ((uVar7 != 0) && (local_c0 != (uint *)(ulong)uVar7)) {
      puVar27 = (uint *)((long)local_c0 - (long)(ulong)uVar7);
      uVar21 = 0;
      if (*puVar27 != 0) {
        uVar21 = puVar27[1];
        if ((uVar21 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
          lVar26 = 0xc;
          if (*(char *)((long)puVar27 + 10) != '\0') {
            lVar26 = 0x1c;
          }
          lVar26 = (long)puVar27 + lVar26 + (ulong)(ushort)puVar27[2] * 8;
          if (lVar26 != 0) {
            uVar7 = 0;
            if ((ulong)uVar21 != 0) {
              uVar7 = (uint)((ulong)((long)local_c0 - lVar26) / (ulong)uVar21);
            }
            if (*puVar27 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar21 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar7 * 2),
               uVar21 < 0xbd)) goto LAB_02167624;
          }
        }
        uVar21 = 0;
      }
    }
  }
LAB_02167624:
  if (uVar21 == (uint)local_430) {
    if (param_2 == (undefined4 *)0x0) {
      return true;
    }
    param_2[6] = 0;
    *param_2 = (undefined4)local_90;
    param_2[1] = local_90._4_4_;
    param_2[4] = (int)local_b0;
    param_2[5] = local_b0._4_4_;
    return true;
  }
  local_428 = puVar1 + 0x10;
  uVar28 = 0;
  local_420[0] = 0;
  local_420[1] = 0;
  uStack_408 = 0;
  fVar36 = *param_1 + -2.5;
  fVar35 = param_1[2] + -2.5;
  fVar33 = *param_1 + -12.5;
  fVar34 = param_1[2] + -12.5;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_360 = 0;
  uStack_348 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  puVar30 = &local_430;
  local_228 = 0;
  iVar32 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
  local_210 = 0;
  iVar11 = (int)((float)(int)fVar35 / 5.0) - (uint)(fVar35 < 0.0);
  local_2d0 = 0;
  iVar12 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0);
  local_2b8 = 0;
  local_2a0 = 0;
  local_288 = 0;
  local_270 = 0;
  local_258 = 0;
  local_240 = 0;
  local_1f8 = 0;
  local_1e0 = 0;
  local_1c8 = 0;
  local_1b0 = 0;
  local_198 = 0;
  local_180 = 0;
  local_168 = 0;
  local_150 = 0;
  local_138 = 0;
  local_120 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_d8 = 0;
  iVar13 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
  local_410 = local_428;
  local_3f8 = local_428;
  local_3e0 = local_428;
  local_3c8 = local_428;
  local_3b0 = local_428;
  local_398 = local_428;
  local_380 = local_428;
  local_368 = local_428;
  local_350 = local_428;
  local_338 = local_428;
  local_320 = local_428;
  local_308 = local_428;
  local_2f0 = local_428;
  local_2d8 = local_428;
  local_2c0 = local_428;
  local_2a8 = local_428;
  local_290 = local_428;
  local_278 = local_428;
  local_260 = local_428;
  local_248 = local_428;
  local_230 = local_428;
  local_218 = local_428;
  local_200 = local_428;
  local_1e8 = local_428;
  local_1d0 = local_428;
  local_1b8 = local_428;
  local_1a0 = local_428;
  local_188 = local_428;
  local_170 = local_428;
  local_158 = local_428;
  local_140 = local_428;
  local_128 = local_428;
  local_110 = local_428;
  local_f8 = local_428;
  local_e0 = local_428;
  iVar23 = iVar12;
  iVar20 = iVar13;
  do {
    bVar19 = 0x23 < uVar28;
    piVar5 = (int *)(puVar30 + 2);
    if (bVar19) {
      piVar5 = local_420;
    }
    *piVar5 = iVar23;
    piVar5 = (int *)((long)puVar30 + 0x14);
    if (bVar19) {
      piVar5 = local_420 + 1;
    }
    *piVar5 = iVar20;
    puVar6 = puVar30;
    puVar27 = (uint *)((long)puVar30 + 4);
    if (bVar19) {
      puVar6 = &local_430;
      puVar27 = (uint *)((ulong)&local_430 | 4);
    }
    *(bool *)puVar6 =
         ((iVar23 < iVar32 || iVar32 + 1 < iVar23) || iVar20 < iVar11) || iVar11 + 1 < iVar20;
    iVar14 = iVar23 - iVar12;
    iVar3 = -iVar14;
    if (-1 < iVar14) {
      iVar3 = iVar14;
    }
    iVar15 = iVar20 - iVar13;
    iVar14 = -iVar15;
    if (-1 < iVar15) {
      iVar14 = iVar15;
    }
    uVar21 = iVar3 + iVar14;
    *puVar27 = uVar21;
    if (uVar21 < 2) {
LAB_021678d0:
      *(undefined1 *)puVar6 = 0;
    }
    else {
      iVar16 = iVar23 - (iVar12 + 5);
      iVar4 = -iVar16;
      if (-1 < iVar16) {
        iVar4 = iVar16;
      }
      iVar16 = iVar15 + -5;
      if (iVar15 + -5 < 0) {
        iVar16 = 5 - iVar15;
      }
      uVar7 = iVar4 + iVar16;
      if ((int)uVar7 <= (int)uVar21) {
        uVar21 = uVar7;
      }
      *puVar27 = uVar21;
      if (uVar7 < 2) goto LAB_021678d0;
      uVar7 = iVar3 + iVar16;
      if ((int)uVar7 <= (int)uVar21) {
        uVar21 = uVar7;
      }
      *puVar27 = uVar21;
      if (uVar7 < 2) goto LAB_021678d0;
      uVar7 = iVar4 + iVar14;
      if ((int)uVar7 <= (int)uVar21) {
        uVar21 = uVar7;
      }
      *puVar27 = uVar21;
      if (uVar7 < 2) goto LAB_021678d0;
    }
    uVar28 = uVar28 + 1;
    puVar30 = puVar30 + 3;
    if (iVar23 < iVar12 + 5) {
      iVar23 = iVar23 + 1;
    }
    else {
      iVar20 = iVar20 + 1;
      iVar23 = iVar12;
    }
  } while ((iVar12 != iVar23) || (iVar13 + 6 != iVar20));
  puStack_450 = puVar1 + 0x10;
  local_448 = 0;
  local_438 = 0;
  local_458 = PTR_DAT_04bbc1a0 + 0x10;
  local_440 = puStack_450;
  FUN_01afb480(&local_d0,&local_458);
  local_448 = CONCAT44(local_448._4_4_ + local_b0._4_4_,(int)local_448 + (int)local_b0);
  local_438 = CONCAT44(local_438._4_4_ + local_b0._4_4_,(int)local_438 + (int)local_b0);
  local_460 = 0xfffe;
  uStack_45c = 0;
  FUN_0277d4ac(&local_460);
  iVar20 = 0;
  iVar32 = -0x80000000;
  fVar33 = 3.4028235e+38;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    if ((char)local_420[(long)iVar20 * 6 + -4] != '\0') {
      if (iVar32 <= local_420[(long)iVar20 * 6 + -3]) {
        lVar26 = (long)iVar20;
        if ((int)local_448 <= local_420[lVar26 * 6] && local_420[lVar26 * 6] <= (int)local_438) {
          if (local_448._4_4_ <= local_420[lVar26 * 6 + 1]) {
            if (local_420[lVar26 * 6 + 1] <= local_438._4_4_) {
              local_470 = PTR_DAT_04bb2010 + 0x10;
              local_468 = 0;
              puVar22 = (undefined4 *)
                        FUN_01a5190c(&local_a8,1,local_420 + lVar26 * 6 + -2,&local_470);
              uVar24 = *(undefined2 *)puVar22;
              uVar9 = *(undefined1 *)((long)puVar22 + 2);
              uVar10 = *(undefined1 *)((long)puVar22 + 3);
              uVar17 = *puVar22;
              uVar8 = puVar22[1];
              lVar26 = *(long *)puVar18;
              local_478 = uVar24;
              local_476 = uVar9;
              local_475 = uVar10;
              local_474 = uVar8;
              uVar21 = FUN_0277d6c4(&local_478);
              lVar31 = *(long *)puVar18;
              if (lVar31 != 0) {
                lVar26 = *(long *)(lVar26 + 0x57e58);
                uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                if (uVar21 < *(uint *)(lVar26 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar21 * 8) != 0) {
                    local_480 = (uint *)0x0;
                    local_490 = puVar1;
                    local_488 = uVar24;
                    local_486 = uVar9;
                    local_485 = uVar10;
                    local_484 = uVar8;
                    uVar21 = FUN_0277d6c4(&local_488);
                    if (*(long *)puVar18 == 0) {
LAB_02167b60:
                      local_4b8 = (undefined *)CONCAT44(local_4b8._4_4_,0xb8);
                      if (local_480 != (uint *)0x0) goto LAB_02167b70;
                      uVar21 = 0xbc;
                    }
                    else {
                      lVar26 = *(long *)(lVar31 + 0x57e58);
                      uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                      if ((*(uint *)(lVar26 + 0x1d8) <= uVar21) ||
                         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar21 * 8) == 0))
                      goto LAB_02167b60;
                      lVar26 = *(long *)PTR_DAT_04bc0428;
                      uVar21 = FUN_0277d6c4(&local_478);
                      uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                      if ((*(uint *)(lVar26 + 0x1d8) <= uVar21) ||
                         (puVar27 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar21 * 8),
                         puVar27 == (uint *)0x0)) goto LAB_02167b60;
                      local_4b8 = (undefined *)CONCAT44(local_4b8._4_4_,0xb8);
                      local_480 = puVar27;
LAB_02167b70:
                      uVar7 = *local_480;
                      uVar21 = 0;
                      if ((uVar7 != 0) && (local_480 != (uint *)(ulong)uVar7)) {
                        puVar27 = (uint *)((long)local_480 - (long)(ulong)uVar7);
                        uVar21 = 0;
                        if (*puVar27 != 0) {
                          uVar21 = puVar27[1];
                          if ((uVar21 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
                            lVar26 = 0xc;
                            if (*(char *)((long)puVar27 + 10) != '\0') {
                              lVar26 = 0x1c;
                            }
                            lVar26 = (long)puVar27 + lVar26 + (ulong)(ushort)puVar27[2] * 8;
                            if (lVar26 != 0) {
                              uVar7 = 0;
                              if ((ulong)uVar21 != 0) {
                                uVar7 = (uint)((ulong)((long)local_480 - lVar26) / (ulong)uVar21);
                              }
                              if (*puVar27 <= uVar7) {
                                uVar7 = 0xffffffff;
                              }
                              if ((uVar7 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (uVar21 = (uint)*(ushort *)
                                                  (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                  (long)(int)uVar7 * 2), uVar21 < 0xbd))
                              goto LAB_02167c04;
                            }
                          }
                          uVar21 = 0;
                        }
                      }
                    }
LAB_02167c04:
                    if (uVar21 == (uint)local_4b8) {
                      local_4a8 = 0;
                      local_4b8 = PTR_DAT_04bbc1a0 + 0x10;
                      local_4b0 = PTR_DAT_04bb2010 + 0x10;
                      local_498 = 0;
                      local_4a0 = local_4b0;
                      FUN_01afb480(&local_490,&local_4b8);
                      fVar34 = ((float)((int)local_4a8 + (int)local_468) * 5.0 +
                               (float)((int)local_498 + (int)local_468) * 5.0 + 5.0) * 0.5 -
                               *param_1;
                      fVar35 = ((float)(local_4a8._4_4_ + local_468._4_4_) * 5.0 +
                               (float)(local_498._4_4_ + local_468._4_4_) * 5.0 + 5.0) * 0.5 -
                               param_1[2];
                      fVar34 = fVar35 * fVar35 + fVar34 * fVar34;
                      if (iVar32 == *(int *)((ulong)(local_420 + (long)iVar20 * 6 + -4) | 4)) {
                        if (fVar33 <= fVar34) goto LAB_021679c0;
                      }
                      local_b0 = local_468;
                      iVar32 = *(int *)((ulong)(local_420 + (long)iVar20 * 6 + -4) | 4);
                      fVar33 = fVar34;
                      local_460 = uVar17;
                      uStack_45c = uVar8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_021679c0:
    iVar20 = iVar20 + 1;
  } while (iVar20 != 0x24);
  lVar31 = *(long *)puVar18;
  uVar21 = FUN_0277d6c4(&local_460);
  lVar26 = *(long *)puVar18;
  if (lVar26 == 0) {
    return false;
  }
  lVar31 = *(long *)(lVar31 + 0x57e58);
  uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
  if (*(uint *)(lVar31 + 0x1d8) <= uVar21) {
    return false;
  }
  if (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar21 * 8) == 0) {
    return false;
  }
  local_4a8 = 0;
  local_4b8 = PTR_DAT_04bc0510 + 0x10;
  local_4b0 = (undefined *)CONCAT44(uStack_45c,local_460);
  uVar21 = FUN_0277d6c4(&local_4b0);
  if (*(long *)puVar18 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar21 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
      lVar26 = *(long *)PTR_DAT_04bc0428;
      uVar21 = FUN_0277d6c4(&local_460);
      uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar21 < *(uint *)(lVar26 + 0x1d8)) &&
         (puVar27 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar21 * 8),
         puVar27 != (uint *)0x0)) {
        uVar25 = 0;
        uVar21 = *puVar27;
        if ((uVar21 != 0) && (puVar27 != (uint *)(ulong)uVar21)) {
          puVar29 = (uint *)((long)puVar27 - (long)(ulong)uVar21);
          uVar25 = 0;
          if (*puVar29 != 0) {
            uVar21 = puVar29[1];
            if ((uVar21 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
              lVar26 = 0xc;
              if (*(char *)((long)puVar29 + 10) != '\0') {
                lVar26 = 0x1c;
              }
              lVar26 = (long)puVar29 + lVar26 + (ulong)(ushort)puVar29[2] * 8;
              if (lVar26 != 0) {
                uVar7 = 0;
                if ((ulong)uVar21 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar27 - lVar26) / (ulong)uVar21);
                }
                if (*puVar29 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar25 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar7 * 2),
                   uVar25 < 0xbd)) goto LAB_02167e84;
              }
            }
            uVar25 = 0;
          }
        }
        goto LAB_02167e84;
      }
    }
  }
  uVar25 = 0xbc;
LAB_02167e84:
  if (param_2 == (undefined4 *)0x0) {
    return uVar25 == 0xb8;
  }
  *param_2 = local_460;
  param_2[1] = uStack_45c;
  param_2[4] = (int)local_b0;
  param_2[5] = local_b0._4_4_;
  param_2[6] = 1;
  return uVar25 == 0xb8;
}

