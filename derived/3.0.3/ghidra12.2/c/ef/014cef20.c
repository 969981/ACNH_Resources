
void FUN_014cef20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined *local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined *local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined5 uStack_3a8;
  undefined3 local_3a3;
  undefined5 uStack_3a0;
  undefined1 local_398;
  undefined4 local_394;
  undefined8 local_390;
  undefined1 local_388;
  undefined4 local_384;
  undefined *local_380;
  undefined4 local_378;
  undefined8 local_328;
  undefined1 *local_320;
  undefined8 ****local_318;
  undefined8 ****local_310;
  undefined8 ***local_308 [3];
  undefined8 **local_2f0 [3];
  undefined8 *local_2d8 [3];
  undefined8 local_2c0 [3];
  undefined1 auStack_2a8 [32];
  undefined **local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  int local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined8 local_258;
  int local_250;
  undefined *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined5 uStack_220;
  undefined3 local_21b;
  undefined4 uStack_218;
  char cStack_214;
  undefined1 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined1 local_200;
  undefined4 local_1fc;
  undefined *local_1f8;
  undefined4 local_1f0;
  ulong local_1a0;
  undefined1 *local_198;
  undefined8 ****local_190;
  undefined8 ****local_188;
  undefined8 ***local_180 [3];
  undefined8 **local_168 [3];
  undefined8 *local_150 [3];
  undefined8 local_138 [3];
  undefined1 local_120 [32];
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_98;
  undefined8 local_90;
  float local_88;
  undefined4 uStack_84;
  int local_80;
  undefined4 local_68;
  int local_64;
  
  puVar4 = PTR_DAT_04bbcf08;
  puVar2 = PTR_DAT_04bb37e0;
  local_278 = 0;
  fVar19 = *(float *)(param_1 + 0xa44);
  local_270 = 0;
  local_258 = 0;
  local_250 = 0;
  local_168[0] = local_150;
  local_238 = 0;
  local_210 = 0;
  local_20c = 0;
  local_150[0] = local_138;
  local_208 = 0;
  local_200 = 0;
  uStack_218 = 0;
  cStack_214 = '\0';
  uStack_220 = 0;
  local_21b = 0;
  local_180[0] = local_168;
  local_100 = PTR_DAT_04bb2010 + 0x10;
  local_1f8 = PTR_DAT_04bbcf08 + 0x10;
  local_1f0 = 0;
  local_198 = (undefined1 *)0x0;
  local_1a0 = 0;
  local_288 = &PTR_LAB_049a6ce8;
  uStack_280 = 0;
  local_138[0] = 0;
  local_228 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_224 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_230 = 0;
  local_1fc = *(undefined4 *)PTR_DAT_04bb3238;
  local_f8 = (int)((float)(int)*(float *)(param_1 + 0xa3c) / 5.0) -
             (uint)(*(float *)(param_1 + 0xa3c) < 0.0);
  fVar20 = (float)(int)fVar19 / 5.0;
  iStack_f4 = (int)fVar20 - (uint)(fVar19 < 0.0);
  local_268 = PTR_DAT_04bbbc20 + 0x10;
  local_190 = local_180;
  local_260 = 0;
  uStack_240 = 0;
  if (local_120 != (undefined1 *)0x0) {
    local_1a0 = 0x400000000;
    local_198 = local_120;
  }
  local_248 = local_268;
  local_188 = local_190;
  if (((DAT_051ee048 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_051ee048), iVar6 != 0)) {
    DAT_051ee038 = 0;
    DAT_051ee040 = (undefined8 *)0x0;
    lVar11 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar11 + 0x20));
    if (DAT_051ee040 == (undefined8 *)0x0) {
      if (((DAT_051ee060 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_051ee060), iVar6 != 0)) {
        DAT_051ee050 = 0xffffffff;
        DAT_051ee058 = 1;
        __cxa_guard_release(&DAT_051ee060);
      }
      DAT_051ee040 = &DAT_051ee050;
      DAT_051ee038 = 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    __cxa_guard_release(&DAT_051ee048);
  }
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bb2010;
  iVar6 = *(int *)(param_1 + 0xb2c);
  uVar17 = (ulong)iVar6;
  if ((DAT_051ee038 & uVar17 < 3) == 0) {
    uVar17 = 0;
  }
  if ((*(int *)((long)DAT_051ee040 + uVar17 * 4) != -1) && (*(uint *)(param_1 + 0xb28) < 2)) {
    fVar19 = *(float *)(param_1 + 0xb30);
    if ((!NAN(fVar19)) &&
       ((!NAN(*(float *)(param_1 + 0xb34)) && (fVar20 = *(float *)(param_1 + 0xb38), !NAN(fVar20))))
       ) {
      *(undefined8 *)(param_1 + 0xb30) = 0x7fc000007fc00000;
      *(undefined4 *)(param_1 + 0xb38) = 0x7fc00000;
      *(float *)(param_1 + 0xa3c) = fVar19 + *(float *)(param_1 + 0xa3c);
      *(float *)(param_1 + 0xa40) = *(float *)(param_1 + 0xb34) + *(float *)(param_1 + 0xa40);
      *(float *)(param_1 + 0xa44) = fVar20 + *(float *)(param_1 + 0xa44);
    }
    local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
    iVar5 = FUN_014d3f18(0);
    uVar7 = 0;
    if (iVar6 != iVar5) {
      iVar6 = *(int *)(param_1 + 0xb2c);
      iVar5 = FUN_014d3f18(1);
      uVar7 = (uint)(iVar6 == iVar5);
      puVar8 = (undefined4 *)PTR_DAT_04bb3238;
    }
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,uVar7);
    local_410 = (undefined **)(puVar1 + 0x10);
    fVar19 = *(float *)(param_1 + 0xa44);
    fVar20 = (float)(int)fVar19 / 5.0;
    local_408 = (undefined *)
                CONCAT44((int)fVar20 - (uint)(fVar19 < 0.0),
                         (int)((float)(int)*(float *)(param_1 + 0xa3c) / 5.0) -
                         (uint)(*(float *)(param_1 + 0xa3c) < 0.0));
    FUN_014cb6a0(param_1,&local_288,&local_410,&local_f0,1,0);
    uVar10 = 0;
    if (*(long *)PTR_DAT_04bbbc38 != 0) {
      uVar10 = *(undefined8 *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
    }
    if ((((int)uVar10 == 3) && (0xfffffffd < (int)((ulong)uVar10 >> 0x20) - 7U)) && (local_270 != 3)
       ) {
      local_270 = 0;
      local_260 = 0;
      local_258 = 0;
      local_250 = 0;
      local_410 = (undefined **)0xfffe;
      FUN_0277d4ac(&local_410);
      local_1fc = *puVar8;
      local_200 = 0;
      uStack_220 = 0;
      local_21b = 0;
      uStack_218 = 0;
      cStack_214 = '\0';
      local_408 = (undefined *)((ulong)local_408 & 0xffffffff00000000);
      local_228 = (undefined4)local_410;
      local_224 = local_410._4_4_;
      local_410 = (undefined **)(puVar4 + 0x10);
      FUN_014ba7d4(&local_1f8,&local_410);
      if (0 < (int)local_1a0) {
        lVar11 = 0;
        ppppuVar12 = local_190;
        do {
          local_190 = *(undefined8 *****)(local_198 + lVar11 * 8);
          lVar11 = lVar11 + 1;
          *local_190 = ppppuVar12;
          ppppuVar12 = local_190;
        } while (lVar11 < (int)local_1a0);
      }
      local_1a0 = local_1a0 & 0xffffffff00000000;
    }
    if (local_270 != 0) {
      FUN_014ef5a8(&local_288,&local_100,&local_268);
    }
  }
  puVar3 = PTR_DAT_04bbc1a0;
  if (local_270 == 0) {
    local_98 = puVar1 + 0x10;
    fVar19 = *(float *)(param_1 + 0xa44);
    fVar20 = (float)(int)fVar19 / 5.0;
    local_90 = CONCAT44((int)fVar20 - (uint)(fVar19 < 0.0),
                        (int)((float)(int)*(float *)(param_1 + 0xa3c) / 5.0) -
                        (uint)(*(float *)(param_1 + 0xa3c) < 0.0));
    uVar7 = *(uint *)(param_1 + 0xb28);
    if (uVar7 < 2) {
      local_68 = 1;
      local_400 = 0;
      local_410 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
      local_e8 = (undefined *)0x0;
      local_3f0 = (undefined *)0x0;
      local_408 = local_98;
      local_3f8 = local_98;
      local_f0 = local_98;
      local_64 = FUN_014d00a0(&local_98,&local_68,1,&local_410,&local_f0,1);
      if ((local_64 == 0) ||
         (uVar17 = FUN_014f1918(param_1 + 0x700,&local_288,&local_64,&local_410), (uVar17 & 1) == 0)
         ) {
        local_410 = (undefined **)CONCAT44(local_410._4_4_,1);
        uVar17 = FUN_014cb958(param_1,&local_288,&local_98,&local_410,1,0);
        if ((uVar17 & 1) == 0) {
          local_408 = puVar1 + 0x10;
          local_410 = (undefined **)(puVar3 + 0x10);
          local_68 = 0;
          local_400 = 0;
          local_e8 = (undefined *)0x0;
          local_3f0 = (undefined *)0x0;
          local_3f8 = local_408;
          local_f0 = local_408;
          local_64 = FUN_014d00a0(&local_98,&local_68,1,&local_410,&local_f0,1);
          if ((local_64 == 0) ||
             (uVar17 = FUN_014f1918(param_1 + 0x700,&local_288,&local_64,&local_410),
             (uVar17 & 1) == 0)) {
            local_410 = (undefined **)((ulong)local_410 & 0xffffffff00000000);
            uVar17 = FUN_014cb958(param_1,&local_288,&local_98,&local_410,1,0);
            if ((uVar17 & 1) == 0) {
              if (*(long *)PTR_DAT_04bb59d8 != 0) {
                lVar11 = *(long *)PTR_DAT_04bb2720;
                if (lVar11 == 0) {
                  puVar16 = &DAT_055c04a0;
                }
                else {
                  puVar16 = &DAT_055c04a0;
                  if (*(long *)(lVar11 + 0x330) != 0) {
                    puVar16 = (undefined8 *)
                              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338))
                    ;
                    iVar6 = FUN_006bd550(*puVar16,0);
                    puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
                    if (iVar6 != 0x758f7eaf) {
                      puVar16 = &DAT_055c04a0;
                    }
                  }
                }
                puVar8 = (undefined4 *)PTR_DAT_04bb3238;
                if (*(int *)(puVar16 + 7) == -0x17df00c3) {
                  local_408 = puVar1 + 0x10;
                  local_410 = (undefined **)(puVar3 + 0x10);
                  local_400 = 0;
                  local_e8 = (undefined *)0x0;
                  local_3f0 = (undefined *)0x0;
                  local_3f8 = local_408;
                  local_f0 = local_408;
                  local_64 = FUN_014d0308(&local_98,1,&local_410,&local_f0);
                  if ((local_64 != 0) &&
                     (uVar17 = FUN_014f1bc4(param_1 + 0x700,&local_288,&local_64,&local_410),
                     (uVar17 & 1) != 0)) goto LAB_014cf4e4;
                }
                if (*(long *)PTR_DAT_04bb59d8 != 0) {
                  lVar11 = *(long *)PTR_DAT_04bb2720;
                  if (lVar11 == 0) {
                    puVar16 = &DAT_055c04a0;
                  }
                  else {
                    puVar16 = &DAT_055c04a0;
                    if (*(long *)(lVar11 + 0x330) != 0) {
                      puVar16 = (undefined8 *)
                                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                          (*(long **)PTR_DAT_04bb2640,
                                           *(undefined4 *)(lVar11 + 0x338));
                      iVar6 = FUN_006bd550(*puVar16,0);
                      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
                      if (iVar6 != 0x758f7eaf) {
                        puVar16 = &DAT_055c04a0;
                      }
                    }
                  }
                  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
                  if (*(int *)(puVar16 + 7) == -0x17df00c3) {
                    local_408 = puVar1 + 0x10;
                    local_410 = (undefined **)(puVar3 + 0x10);
                    local_400 = 0;
                    local_e8 = (undefined *)0x0;
                    local_3f0 = (undefined *)0x0;
                    local_3f8 = local_408;
                    local_f0 = local_408;
                    local_64 = FUN_014d050c(&local_98,1,&local_410,&local_f0);
                    if ((local_64 != 0) &&
                       (uVar17 = FUN_014f1dfc(param_1 + 0x700,&local_288,&local_64,&local_410),
                       (uVar17 & 1) != 0)) goto LAB_014cf4e4;
                  }
                }
              }
              local_410 = (undefined **)CONCAT44(local_410._4_4_,6);
              puVar16 = &local_410;
              goto LAB_014cf4d4;
            }
          }
        }
      }
    }
    else {
      local_410 = (undefined **)CONCAT44(local_410._4_4_,uVar7);
      if ((uVar7 - 2 < 4) || (uVar7 == 7)) {
        puVar16 = (undefined8 *)(param_1 + 0xb28);
LAB_014cf4d4:
        FUN_014cb958(param_1,&local_288,&local_98,puVar16,1,0);
      }
    }
LAB_014cf4e4:
    lVar11 = *(long *)PTR_DAT_04bbbc38;
    if ((((lVar11 != 0) && (*(int *)(lVar11 + 0xc) == 3)) &&
        (0xfffffffd < *(int *)(lVar11 + 0x10) - 7U)) && (local_270 != 3)) {
      iVar6 = FUN_014eb660(&local_288);
      if (iVar6 == 1) {
        local_400 = 0;
        local_410 = &PTR_LAB_049a6ce8;
        local_408 = (undefined *)0x0;
        local_3f8 = (undefined *)((ulong)local_3f8 & 0xffffffff00000000);
        local_3f0 = PTR_DAT_04bbbc20 + 0x10;
        local_3e0 = 0;
        local_3d8 = 0;
        local_3c0 = 0;
        local_3b8 = 0;
        local_398 = 0;
        local_394 = 0;
        local_390 = 0;
        local_388 = 0;
        uStack_3a0 = 0;
        uStack_3a8 = 0;
        local_3a3 = 0;
        local_378 = 0;
        local_2c0[0] = 0;
        uStack_3e8 = 0;
        uStack_3c8 = 0;
        local_3b0 = *(undefined4 *)puVar2;
        uStack_3ac = *(undefined4 *)(puVar2 + 4);
        local_384 = *puVar8;
        local_380 = puVar4 + 0x10;
        local_318 = local_308;
        local_308[0] = local_2f0;
        local_2f0[0] = local_2d8;
        local_2d8[0] = local_2c0;
        local_328 = 0;
        local_320 = (undefined1 *)0x0;
        if (auStack_2a8 != (undefined1 *)0x0) {
          local_328 = 0x400000000;
          local_320 = auStack_2a8;
        }
        local_f0 = puVar1 + 0x10;
        fVar19 = *(float *)(param_1 + 0xa44);
        local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
        fVar20 = (float)(int)fVar19 / 5.0;
        local_e8 = (undefined *)
                   CONCAT44((int)fVar20 - (uint)(fVar19 < 0.0),
                            (int)((float)(int)*(float *)(param_1 + 0xa3c) / 5.0) -
                            (uint)(*(float *)(param_1 + 0xa3c) < 0.0));
        local_3d0 = local_3f0;
        local_310 = local_318;
        uVar17 = FUN_014cb6a0(param_1,&local_410,&local_f0,&local_98,1,0);
        if (((uVar17 & 1) != 0) && ((int)local_3f8 == 3)) {
          local_270 = 0;
          local_260 = 0;
          local_258 = 0;
          local_250 = 0;
          local_f0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_f0);
          local_1fc = *puVar8;
          local_200 = 0;
          uStack_220 = 0;
          local_21b = 0;
          uStack_218 = 0;
          cStack_214 = '\0';
          local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
          local_228 = (undefined4)local_f0;
          local_224 = local_f0._4_4_;
          local_f0 = puVar4 + 0x10;
          FUN_014ba7d4(&local_1f8,&local_f0);
          if (0 < (int)local_1a0) {
            lVar11 = 0;
            ppppuVar12 = local_190;
            do {
              local_190 = *(undefined8 *****)(local_198 + lVar11 * 8);
              lVar11 = lVar11 + 1;
              *local_190 = ppppuVar12;
              ppppuVar12 = local_190;
            } while (lVar11 < (int)local_1a0);
          }
          local_1a0 = local_1a0 & 0xffffffff00000000;
          FUN_014e70e0(&local_288,&local_410);
        }
      }
      if (local_270 != 3) {
        local_270 = 0;
        local_260 = 0;
        local_258 = 0;
        local_250 = 0;
        local_410 = (undefined **)0xfffe;
        FUN_0277d4ac(&local_410);
        local_1fc = *puVar8;
        local_200 = 0;
        uStack_220 = 0;
        local_21b = 0;
        uStack_218 = 0;
        cStack_214 = '\0';
        local_408 = (undefined *)((ulong)local_408 & 0xffffffff00000000);
        local_228 = (undefined4)local_410;
        local_224 = local_410._4_4_;
        local_410 = (undefined **)(puVar4 + 0x10);
        FUN_014ba7d4(&local_1f8,&local_410);
        if (0 < (int)local_1a0) {
          lVar11 = 0;
          ppppuVar12 = local_190;
          do {
            local_190 = *(undefined8 *****)(local_198 + lVar11 * 8);
            lVar11 = lVar11 + 1;
            *local_190 = ppppuVar12;
            ppppuVar12 = local_190;
          } while (lVar11 < (int)local_1a0);
        }
        local_1a0 = local_1a0 & 0xffffffff00000000;
      }
    }
    if (local_270 != 0) {
      FUN_014ef5a8(&local_288,&local_100,&local_268);
    }
  }
  FUN_014e70e0(param_1 + 0xcc8,&local_288);
  local_410 = (undefined **)CONCAT44(local_410._4_4_,0x10);
  iVar6 = *(int *)(param_1 + 0x3c0);
  if (iVar6 == 0x10) {
LAB_014cf824:
    local_270 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0;
    local_410 = (undefined **)0xfffe;
    FUN_0277d4ac(&local_410);
    local_1fc = *puVar8;
    local_200 = 0;
    uStack_220 = 0;
    local_21b = 0;
    uStack_218 = 0;
    cStack_214 = '\0';
    local_408 = (undefined *)((ulong)local_408 & 0xffffffff00000000);
    local_228 = (undefined4)local_410;
    local_224 = local_410._4_4_;
    local_410 = (undefined **)(puVar4 + 0x10);
    FUN_014ba7d4(&local_1f8,&local_410);
    if (0 < (int)local_1a0) {
      lVar11 = 0;
      ppppuVar12 = local_190;
      do {
        local_190 = *(undefined8 *****)(local_198 + lVar11 * 8);
        lVar11 = lVar11 + 1;
        *local_190 = ppppuVar12;
        ppppuVar12 = local_190;
      } while (lVar11 < (int)local_1a0);
    }
    local_1a0 = local_1a0 & 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0xe51) = 0;
  }
  else {
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x11);
    if (iVar6 == 0x11) goto LAB_014cf824;
    local_98 = (undefined *)CONCAT44(local_98._4_4_,0x13);
    if (((iVar6 == 0x13) || (local_64 = 0x14, iVar6 == 0x14)) || (local_68 = 0x15, iVar6 == 0x15))
    goto LAB_014cf824;
  }
  if (local_270 - 1U < 2) {
    iVar6 = FUN_014eb660(&local_288);
    puVar2 = PTR_DAT_04bb43c0;
    if (iVar6 == 6) {
      local_f8 = (int)((float)(int)*(float *)(param_1 + 0xa3c) / 5.0) -
                 (uint)(*(float *)(param_1 + 0xa3c) < 0.0);
      iStack_f4 = (int)((float)(int)*(float *)(param_1 + 0xa44) / 5.0) -
                  (uint)(*(float *)(param_1 + 0xa44) < 0.0);
      lVar11 = FUN_014c9440(param_1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x500) + 0xf0))(lVar11 + 0x500);
      uVar18 = puVar8[1];
      *(undefined4 *)(param_1 + 0xb20) = *puVar8;
      *(undefined4 *)(param_1 + 0xb24) = uVar18;
    }
    else {
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(&local_228);
      if (*(long *)puVar2 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          local_400 = 0;
          local_408 = PTR_DAT_04bb2010 + 0x10;
          local_410 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
          local_3f0 = (undefined *)0x0;
          local_3f8 = local_408;
          FUN_0277f02c(&local_228,&local_410);
          iVar6 = (int)local_3f0;
          iVar5 = local_3f0._4_4_;
          iVar13 = (int)local_400;
          iVar15 = local_400._4_4_;
          goto LAB_014cf970;
        }
      }
      *(undefined8 *)(param_1 + 0xb20) = 0x100000001;
    }
  }
  else {
    if (local_270 == 0) {
      if (*(int *)(param_1 + 0x368) - 1U < 2) {
        fVar19 = (float)(int)((int)((float)(int)*(float *)(param_1 + 0xa3c) / 10.0) -
                             (uint)(*(float *)(param_1 + 0xa3c) < 0.0));
        local_f8 = (int)(fVar19 + fVar19);
        fVar19 = (float)(int)((int)((float)(int)*(float *)(param_1 + 0xa44) / 10.0) -
                             (uint)(*(float *)(param_1 + 0xa44) < 0.0));
        iStack_f4 = (int)(fVar19 + fVar19);
      }
      lVar11 = FUN_014c9440(param_1);
      puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x500) + 0xf0))(lVar11 + 0x500);
      uVar18 = puVar9[1];
      *(undefined4 *)(param_1 + 0xb20) = *puVar9;
      *(undefined4 *)(param_1 + 0xb24) = uVar18;
      if ((*(int *)(param_1 + 0xb58) == 5) && (lVar11 = FUN_014bac20(param_1 + 0xbd0), lVar11 != 0))
      {
        FUN_02b8233c(lVar11,0);
      }
      *(undefined4 *)(param_1 + 0xb58) = 0;
      *(undefined8 *)(param_1 + 0xb68) = 0;
      *(undefined8 *)(param_1 + 0xb70) = 0;
      *(undefined4 *)(param_1 + 0xb78) = 0;
      local_410 = (undefined **)0xfffe;
      FUN_0277d4ac(&local_410);
      *(undefined8 *)(param_1 + 0xba8) = 0;
      *(undefined8 *)(param_1 + 0xbad) = 0;
      uVar18 = *puVar8;
      *(undefined1 *)(param_1 + 0xbc8) = 0;
      local_408 = (undefined *)((ulong)local_408 & 0xffffffff00000000);
      *(undefined4 *)(param_1 + 0xba0) = (undefined4)local_410;
      *(undefined4 *)(param_1 + 0xba4) = local_410._4_4_;
      *(undefined4 *)(param_1 + 0xbcc) = uVar18;
      local_410 = (undefined **)(puVar4 + 0x10);
      FUN_014ba7d4(param_1 + 0xbd0,&local_410);
      if (0 < *(int *)(param_1 + 0xc28)) {
        lVar11 = 0;
        puVar16 = *(undefined8 **)(param_1 + 0xc38);
        do {
          puVar14 = *(undefined8 **)(*(long *)(param_1 + 0xc30) + lVar11 * 8);
          lVar11 = lVar11 + 1;
          *puVar14 = puVar16;
          *(undefined8 **)(param_1 + 0xc38) = puVar14;
          puVar16 = puVar14;
        } while (lVar11 < *(int *)(param_1 + 0xc28));
      }
      *(undefined4 *)(param_1 + 0xc28) = 0;
      *(undefined1 *)(param_1 + 0xe50) = 0;
      iVar5 = FUN_014d3f18(0xffffffff);
      iVar6 = 0;
      if (iVar5 != -1) {
        iVar6 = iVar5;
      }
      *(int *)(param_1 + 0xb2c) = iVar6;
      goto LAB_014cfd30;
    }
    if (local_270 == 3) {
      local_98 = PTR_DAT_04bbbc20 + 0x10;
      local_90 = local_260;
      local_88 = (float)local_258;
      uStack_84 = local_258._4_4_;
      local_e8 = puVar1 + 0x10;
      local_80 = local_250;
      local_e0 = 0;
      local_f0 = PTR_DAT_04bbc1a0 + 0x10;
      local_d0 = 0;
      local_d8 = local_e8;
      if (cStack_214 != '\0') {
        local_400 = 0;
        local_3f0 = (undefined *)0x0;
        local_410 = (undefined **)local_f0;
        local_408 = local_e8;
        local_3f8 = local_e8;
        FUN_014edb38(&local_288,&local_410,&local_268);
        uVar18 = FUN_014eda28(&local_410,&local_260,&local_260);
        local_90 = CONCAT44(fVar19,uVar18);
        local_88 = fVar20;
      }
      FUN_014edb38(&local_288,&local_f0,&local_98);
      iVar6 = (int)local_d0;
      iVar5 = local_d0._4_4_;
      iVar13 = (int)local_e0;
      iVar15 = local_e0._4_4_;
LAB_014cf970:
      *(int *)(param_1 + 0xb20) = (iVar6 - iVar13) + 1;
      *(int *)(param_1 + 0xb24) = (iVar5 - iVar15) + 1;
    }
  }
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,local_250);
  local_410 = (undefined **)CONCAT44(local_410._4_4_,*(int *)(param_1 + 0xb78));
  local_98 = (undefined *)CONCAT44(local_98._4_4_,*(int *)(param_1 + 0xb58));
  local_64 = local_270;
  if ((((*(int *)(param_1 + 0xb58) != local_270) || (*(int *)(param_1 + 0xb74) != local_258._4_4_))
      || (*(int *)(param_1 + 0xb78) != local_250)) ||
     (((fVar19 = *(float *)(param_1 + 0xb68) - (float)local_260, fVar19 < -1.1920929e-07 ||
       (1.1920929e-07 < fVar19)) ||
      ((fVar19 = *(float *)(param_1 + 0xb6c) - local_260._4_4_, fVar19 < -1.1920929e-07 ||
       (1.1920929e-07 < fVar19)))))) {
    *(undefined1 *)(param_1 + 0xe51) = 0;
LAB_014cfcdc:
    if ((*(int *)(param_1 + 0xb58) == 5) && (lVar11 = FUN_014bac20(param_1 + 0xbd0), lVar11 != 0)) {
      FUN_02b8233c(lVar11,0);
    }
  }
  else {
    fVar19 = *(float *)(param_1 + 0xb70) - (float)local_258;
    *(bool *)(param_1 + 0xe51) = fVar19 <= 1.1920929e-07 && -1.1920929e-07 <= fVar19;
    if (1.1920929e-07 < fVar19 || -1.1920929e-07 > fVar19) goto LAB_014cfcdc;
  }
  if ((local_270 == 5) && (lVar11 = FUN_014bac20(&local_1f8), lVar11 != 0)) {
    FUN_02b8233c(lVar11,1);
  }
  FUN_014e70e0(param_1 + 0xb40,&local_288);
  *(undefined1 *)(param_1 + 0xe50) = 1;
LAB_014cfd30:
  *(int *)(param_1 + 0xb10) = local_f8;
  *(int *)(param_1 + 0xb14) = iStack_f4;
  return;
}

