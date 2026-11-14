
void FUN_01c0a2f0(undefined8 param_1,uint *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  ushort uVar13;
  uint uVar14;
  uint *puVar15;
  char cVar16;
  ulong uVar17;
  short sVar18;
  long lVar19;
  long lVar20;
  undefined *local_4d0 [11];
  long *local_478;
  long *local_470;
  long *local_468;
  undefined *local_458;
  char *pcStack_450;
  undefined *local_448;
  int local_440;
  char local_43c;
  undefined *local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined1 *local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined *local_408;
  long local_400;
  undefined8 local_3f8;
  undefined1 *puStack_3f0;
  undefined4 local_3e8;
  undefined1 local_3e4 [47];
  undefined1 local_3b5;
  undefined *local_3b0;
  long lStack_3a8;
  undefined8 local_3a0;
  undefined1 *puStack_398;
  undefined4 local_390;
  undefined1 local_38c [47];
  undefined1 local_35d;
  undefined1 local_358 [8];
  undefined8 uStack_350;
  undefined1 local_348 [8];
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined *local_248;
  undefined8 *local_240;
  undefined4 local_238;
  undefined1 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  undefined1 local_204 [63];
  undefined1 local_1c5;
  undefined *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  puVar9 = PTR_DAT_04bc0b30;
  local_448 = PTR_DAT_04bc0a78;
  puVar8 = PTR_DAT_04bb6b38;
  puVar7 = PTR_DAT_04bb6428;
  puVar6 = PTR_DAT_04bb6420;
  puVar5 = PTR_DAT_04bb2bc0;
  if (*param_2 != 0) {
    cVar16 = *PTR_DAT_04bb6420;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar7 + 0x18);
        if (-1 < (int)uVar4) {
          if ((short *)((ulong)uVar4 + (long)param_2) != (short *)0x0) {
            sVar18 = *(short *)((ulong)uVar4 + (long)param_2);
            local_448 = local_448 + 0x10;
            local_43c = '\0';
            local_440 = *(int *)puVar9;
            *(int *)puVar9 = local_440 + 1;
            if (sVar18 == 6) {
              uVar4 = *param_2;
              if (uVar4 == 0) goto LAB_01c0aa6c;
              uVar14 = *(uint *)(puVar7 + 0x10);
              goto LAB_01c0a74c;
            }
            if (sVar18 != 3) goto LAB_01c0a504;
            uVar4 = *param_2;
            if (uVar4 == 0) goto LAB_01c0a7cc;
            uVar14 = *(uint *)(puVar7 + 0x10);
            goto LAB_01c0a474;
          }
          break;
        }
        if (uVar4 != 0xffffffff) break;
      }
      lVar20 = (long)param_2 - (ulong)*param_2;
      if ((*param_2 == 0) || (lVar20 == 0)) break;
      lVar19 = 0xc;
      if (*(char *)(lVar20 + 10) != '\0') {
        lVar19 = 0x1c;
      }
      if (lVar19 + lVar20 == 0) break;
      uVar17 = (ulong)*(ushort *)(lVar20 + 8);
      *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
      if (uVar17 == 0) break;
      piVar11 = (int *)(lVar19 + lVar20 + 4);
      while (piVar11[-1] != 0x74f1f060) {
        piVar11 = piVar11 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_01c0a4e4;
      }
      iVar10 = 0;
      if (*piVar11 != -1) {
        iVar10 = *piVar11;
      }
      *(int *)(puVar7 + 0x18) = iVar10;
      if (*param_2 == 0) break;
    } while( true );
  }
LAB_01c0a4e4:
  local_440 = *(int *)puVar9;
  sVar18 = 0;
  local_43c = '\0';
  *(int *)puVar9 = local_440 + 1;
  local_448 = local_448 + 0x10;
  goto LAB_01c0a504;
LAB_01c0a74c:
  if ((int)uVar14 < 0) {
    if ((uVar14 != 0xffffffff) || (lVar20 = (long)param_2 - (ulong)uVar4, lVar20 == 0))
    goto LAB_01c0aa6c;
    lVar19 = 0xc;
    if (*(char *)(lVar20 + 10) != '\0') {
      lVar19 = 0x1c;
    }
    if (lVar19 + lVar20 == 0) goto LAB_01c0aa6c;
    uVar17 = (ulong)*(ushort *)(lVar20 + 8);
    *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
    if (uVar17 == 0) goto LAB_01c0aa6c;
    puVar15 = (uint *)(lVar19 + lVar20 + 4);
    while (puVar15[-1] != 0xc33a894e) {
      puVar15 = puVar15 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_01c0aa6c;
    }
    uVar14 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar14 = *puVar15;
    }
    *(uint *)(puVar7 + 0x10) = uVar14;
    uVar4 = *param_2;
    if (uVar4 == 0) goto LAB_01c0aa6c;
    goto LAB_01c0a74c;
  }
  if ((ushort *)((long)param_2 + (ulong)uVar14) != (ushort *)0x0) {
    uVar13 = *(ushort *)((long)param_2 + (ulong)uVar14);
    goto LAB_01c0aa70;
  }
LAB_01c0aa6c:
  uVar13 = 0xfffe;
LAB_01c0aa70:
  local_4d0[0] = (undefined *)(ulong)uVar13;
  FUN_0277d4ac(local_4d0);
  local_430 = (undefined1 *)((ulong)local_430._4_4_ << 0x20);
  local_218 = puVar5 + 0x10;
  local_418._4_4_ = local_418._4_4_ & 0xffffff00;
  local_400 = CONCAT44(local_400._4_4_,0xffffffff);
  local_420 = local_348;
  local_410 = 0xffffffff;
  local_408 = (undefined *)0xffffffff00000000;
  local_438 = PTR_DAT_04bc0ce0 + 0x10;
  puStack_3f0 = local_3e4;
  local_248 = puVar8 + 0x10;
  puStack_398 = local_38c;
  local_418 = CONCAT44(local_418._4_4_,0x80);
  ppuVar2 = &local_248;
  if (&local_248 <= local_348 + 2) {
    ppuVar2 = (undefined **)(local_348 + 2);
  }
  local_3e8 = 0x40;
  lStack_3a8._0_4_ = (uint)(uint3)lStack_3a8;
  local_3e4[0] = 0;
  local_390 = 0x40;
  uStack_350._0_4_ = (uint)(uint3)uStack_350;
  local_38c[0] = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = (undefined1  [8])0x0;
  uStack_340 = 0;
  local_428 = local_248;
  local_3f8 = local_218;
  local_3a0 = local_218;
  memset(local_420,0,(long)ppuVar2 + (-0xe0 - (long)&local_428));
  local_234 = 0;
  local_238 = 0x80;
  local_240 = &local_168;
  local_228 = 0xffffffff00000000;
  local_210 = local_204;
  local_204[0] = 0;
  local_230 = 0xffffffff;
  local_1b8 = local_1ac;
  local_1ac[0] = 0;
  puVar3 = auStack_68;
  if (auStack_68 <= (undefined1 *)((long)&local_168 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_168 + 2U);
  }
  local_220 = 0xffffffff;
  local_208 = 0x40;
  local_1c5 = 0;
  local_1b0 = 0x40;
  local_16d = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_1c0 = local_218;
  memset(local_240,0,(size_t)(puVar3 + (-0xe0 - (long)&local_248)));
  FUN_01c0bafc(&local_438,local_4d0,PTR_DAT_04bb2df0);
  if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar17 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar17 * 4) == 0x7d) goto LAB_01c0acd8;
      uVar17 = uVar17 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar17);
  }
  uVar17 = 0;
LAB_01c0acd8:
  local_458 = (undefined *)CONCAT44(local_458._4_4_,(int)uVar17);
  FUN_01baf140(&local_448,&local_438,0,&local_458,3);
  sVar18 = 6;
  goto LAB_01c0a504;
LAB_01c0a474:
  if ((int)uVar14 < 0) {
    if ((uVar14 != 0xffffffff) || (lVar20 = (long)param_2 - (ulong)uVar4, lVar20 == 0))
    goto LAB_01c0a7cc;
    lVar19 = 0xc;
    if (*(char *)(lVar20 + 10) != '\0') {
      lVar19 = 0x1c;
    }
    if (lVar19 + lVar20 == 0) goto LAB_01c0a7cc;
    uVar17 = (ulong)*(ushort *)(lVar20 + 8);
    *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
    if (uVar17 == 0) goto LAB_01c0a7cc;
    puVar15 = (uint *)(lVar19 + lVar20 + 4);
    while (puVar15[-1] != 0xc33a894e) {
      puVar15 = puVar15 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_01c0a7cc;
    }
    uVar14 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar14 = *puVar15;
    }
    *(uint *)(puVar7 + 0x10) = uVar14;
    uVar4 = *param_2;
    if (uVar4 == 0) goto LAB_01c0a7cc;
    goto LAB_01c0a474;
  }
  if ((ushort *)((long)param_2 + (ulong)uVar14) != (ushort *)0x0) {
    uVar13 = *(ushort *)((long)param_2 + (ulong)uVar14);
    goto LAB_01c0a7d0;
  }
LAB_01c0a7cc:
  uVar13 = 0xfffe;
LAB_01c0a7d0:
  local_4d0[0] = (undefined *)(ulong)uVar13;
  FUN_0277d4ac(local_4d0);
  local_430 = (undefined1 *)((ulong)local_430._4_4_ << 0x20);
  local_218 = puVar5 + 0x10;
  local_418._4_4_ = local_418._4_4_ & 0xffffff00;
  local_400 = CONCAT44(local_400._4_4_,0xffffffff);
  local_420 = local_348;
  local_410 = 0xffffffff;
  local_408 = (undefined *)0xffffffff00000000;
  local_438 = PTR_DAT_04bc0ce0 + 0x10;
  puStack_3f0 = local_3e4;
  local_248 = puVar8 + 0x10;
  puStack_398 = local_38c;
  local_418 = CONCAT44(local_418._4_4_,0x80);
  ppuVar2 = &local_248;
  if (&local_248 <= local_348 + 2) {
    ppuVar2 = (undefined **)(local_348 + 2);
  }
  local_3e8 = 0x40;
  lStack_3a8._0_4_ = (uint)(uint3)lStack_3a8;
  local_3e4[0] = 0;
  local_390 = 0x40;
  uStack_350._0_4_ = (uint)(uint3)uStack_350;
  local_38c[0] = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = (undefined1  [8])0x0;
  uStack_340 = 0;
  local_428 = local_248;
  local_3f8 = local_218;
  local_3a0 = local_218;
  memset(local_420,0,(long)ppuVar2 + (-0xe0 - (long)&local_428));
  local_234 = 0;
  local_238 = 0x80;
  local_240 = &local_168;
  local_228 = 0xffffffff00000000;
  local_210 = local_204;
  local_204[0] = 0;
  local_230 = 0xffffffff;
  local_1b8 = local_1ac;
  local_1ac[0] = 0;
  puVar3 = auStack_68;
  if (auStack_68 <= (undefined1 *)((long)&local_168 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_168 + 2U);
  }
  local_220 = 0xffffffff;
  local_208 = 0x40;
  local_1c5 = 0;
  local_1b0 = 0x40;
  local_16d = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_1c0 = local_218;
  memset(local_240,0,(size_t)(puVar3 + (-0xe0 - (long)&local_248)));
  FUN_01c0bafc(&local_438,local_4d0,PTR_DAT_04bb2df0);
  if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar17 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar17 * 4) == 0x7d) goto LAB_01c0aa38;
      uVar17 = uVar17 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar17);
  }
  uVar17 = 0;
LAB_01c0aa38:
  local_458 = (undefined *)CONCAT44(local_458._4_4_,(int)uVar17);
  FUN_01baf140(&local_448,&local_438,0,&local_458,2);
  sVar18 = 3;
LAB_01c0a504:
  uVar17 = (ulong)local_428 >> 0x20;
  local_428 = (undefined *)CONCAT44((uint)uVar17 & 0xffffff00,0x80);
  local_400 = (long)&local_3f8 + 4;
  local_408 = puVar5 + 0x10;
  lStack_3a8 = (long)&local_3a0 + 4;
  local_430 = local_358;
  local_420 = (undefined1 *)0xffffffff;
  local_418 = 0xffffffff00000000;
  local_410 = CONCAT44(local_410._4_4_,0xffffffff);
  local_3b5 = 0;
  local_3f8 = (undefined *)CONCAT35(local_3f8._5_3_,0x40);
  local_35d = 0;
  local_3a0 = (undefined *)CONCAT35(local_3a0._5_3_,0x40);
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_438 = puVar8 + 0x10;
  puVar1 = &local_258;
  if (&local_258 <= local_358 + 2) {
    puVar1 = (undefined8 *)(local_358 + 2);
  }
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = (undefined1  [8])0x0;
  uStack_340 = 0;
  local_358 = (undefined1  [8])0x0;
  uStack_350 = 0;
  local_3b0 = local_408;
  memset(local_430,0,(size_t)((long)puVar1 + (-0xe0 - (long)&local_438)));
  local_458 = PTR_DAT_04bb2020 + 0x10;
  pcStack_450 = "NookMilagePlus_Title";
  FUN_006d8678(local_4d0,&DAT_0405bf91,sVar18);
  FUN_006f50a0(&local_438,&local_458,local_4d0,0);
  puVar5 = PTR_DAT_04bb3350;
  lVar20 = *(long *)PTR_DAT_04bc08b0;
  if (lVar20 == 0) {
    lVar19 = 1;
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)(lVar12 + 0xa8);
    *(long *)(lVar12 + 0xa8) = lVar20;
  }
  FUN_01bed9e0(local_4d0,&local_448);
  local_470[0x4e] = param_3;
  FUN_006f3d64(local_4d0,param_1,&local_438);
  local_4d0[0] = PTR_DAT_04bc0c00 + 0x10;
  if (local_468 != (long *)0x0) {
    (**(code **)(*local_468 + 8))();
  }
  if (local_470 != (long *)0x0) {
    (**(code **)(*local_470 + 8))();
  }
  if (local_478 != (long *)0x0) {
    (**(code **)(*local_478 + 8))();
  }
  FUN_003532f4(local_4d0);
  if (lVar19 != 1) {
    lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar20 + 0xa8) = lVar19;
  }
  if (local_43c != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,&local_440);
  }
  return;
}

