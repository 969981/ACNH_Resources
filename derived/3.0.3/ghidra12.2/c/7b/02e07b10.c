
void FUN_02e07b10(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  float fVar18;
  undefined *local_560;
  undefined2 local_558;
  undefined8 local_554;
  undefined4 local_54c;
  undefined *local_548;
  undefined8 uStack_540;
  undefined4 local_538;
  undefined1 local_534;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined4 local_520;
  undefined *local_518;
  undefined1 *puStack_510;
  undefined4 local_508;
  undefined1 local_504 [63];
  undefined1 local_4c5;
  undefined *local_4c0;
  undefined1 *puStack_4b8;
  undefined4 local_4b0;
  undefined1 local_4ac [63];
  undefined1 local_46d;
  undefined8 local_468;
  undefined *local_460;
  undefined8 uStack_458;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined *local_430;
  undefined1 *puStack_428;
  undefined4 local_420;
  undefined1 local_41c [63];
  undefined1 local_3dd;
  undefined *local_3d8;
  undefined1 *puStack_3d0;
  undefined4 local_3c8;
  undefined1 local_3c4 [63];
  undefined1 local_385;
  undefined8 local_380;
  undefined *local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined *local_348;
  undefined1 *local_340;
  undefined4 local_338;
  undefined1 local_334 [63];
  undefined1 local_2f5;
  undefined *local_2f0;
  undefined1 *local_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc [63];
  undefined1 local_29d;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined *local_280;
  undefined1 *local_278;
  undefined4 local_270;
  undefined1 local_26c [63];
  undefined1 local_22d;
  undefined *local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined1 local_214 [63];
  undefined1 local_1d5;
  undefined *local_1d0;
  int local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined2 local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164 [63];
  undefined1 local_125;
  undefined *local_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined6 uStack_b0;
  undefined2 local_aa;
  undefined6 uStack_a8;
  undefined1 auStack_a2 [2];
  uint local_a0;
  undefined5 local_98;
  undefined3 uStack_93;
  undefined4 local_90;
  char local_8c;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined4 local_70;
  
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "DIYTrade";
  if (4 < (int)param_2) {
    return;
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x210) + 0x578);
  plVar3 = plVar14 + param_2;
  if (4 < param_2) {
    plVar3 = plVar14;
  }
  lVar17 = *plVar3;
  if (lVar17 == 0) {
    return;
  }
  uVar15 = 3;
  if (param_2 != 4) {
    uVar15 = param_2;
  }
  if (*(byte *)(param_1 + 0x1f8) < 8) {
    local_560 = (undefined *)CONCAT71(local_560._1_7_,*(byte *)(param_1 + 0x1f8));
    lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_560,1);
    if (lVar9 != 0) {
      FUN_02613254(&local_98,lVar9,uVar15);
      uVar13 = CONCAT35(uStack_93,local_98);
      goto LAB_02e07bdc;
    }
  }
  uVar13 = 0;
  local_90 = 0;
  local_8c = '\0';
  local_98 = 0;
  uStack_93 = 0;
LAB_02e07bdc:
  uVar4 = 0x300000000;
  if (local_8c != '\0') {
    uVar4 = uVar13;
  }
  uVar2 = 0;
  if (local_8c != '\0') {
    uVar2 = local_90;
  }
  uVar10 = FUN_02612f30(param_1 + 0x1f8,uVar4,uVar2);
  puVar7 = PTR_DAT_04bc0b30;
  plVar14 = *(long **)(lVar17 + 0x2e0);
  lVar9 = *plVar14;
  puVar16 = (uint *)PTR_DAT_04bc0a80;
  if (lVar9 != 0) {
    local_198 = 0x13;
    local_188 = 0xffffffff00000000;
    local_170 = local_164;
    local_1a0 = &local_c8;
    local_118 = local_10c;
    local_1a8 = PTR_DAT_04bc0bc0 + 0x10;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    local_194 = 0;
    puVar5 = auStack_a2;
    if (auStack_a2 <= (undefined1 *)((long)&local_c8 + 2U)) {
      puVar5 = (undefined1 *)((long)&local_c8 + 2U);
    }
    local_190 = 0xffffffff;
    local_180 = 0xffffffff;
    local_168 = 0x40;
    local_125 = 0;
    local_164[0] = 0;
    local_110 = 0x40;
    local_cd = 0;
    local_10c[0] = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    local_aa = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_178 = puVar1;
    local_120 = puVar1;
    memset(local_1a0,0,(ulong)(puVar5 + (-0xe1 - (long)&local_1a8)) & 0xfffffffffffffffc | 2);
    local_a0 = 0;
    uVar11 = FUN_02612f30(param_1 + 0x1f8,uVar4,uVar2);
    puVar6 = PTR_DAT_04bb46f0;
    if (*(long *)PTR_DAT_04bb46f0 == 0) {
      iVar8 = 0;
    }
    else {
      uVar12 = FUN_0261d530(*(long *)PTR_DAT_04bb46f0,uVar11 & 0xffffffff);
      if ((uVar12 & 1) == 0) {
        iVar8 = 0;
      }
      else if (*(long *)puVar6 == 0) {
        iVar8 = 0;
      }
      else {
        fVar18 = (float)FUN_02626470(*(long *)puVar6,uVar11 & 0xffffffff,uVar11 >> 0x10);
        uVar15 = 0;
        if (fVar18 != (float)(int)fVar18) {
          uVar15 = (uint)(fVar18 < 0.0);
        }
        iVar8 = (int)fVar18 - uVar15;
      }
    }
    FUN_01be4af0(&local_1a8,**(undefined4 **)PTR_DAT_04bb3448,iVar8,10,0,0);
    local_558 = 0x100;
    puStack_510 = local_504;
    puStack_4b8 = local_4ac;
    local_554 = 0;
    local_54c = 0;
    local_538 = 0;
    local_534 = 0;
    local_520 = 0xffffffff;
    local_508 = 0x40;
    local_4c5 = 0;
    local_504[0] = 0;
    local_4b0 = 0x40;
    local_46d = 0;
    local_4ac[0] = 0;
    local_530 = 0xffffffff;
    uStack_528 = 0xffffffff00000000;
    local_548 = PTR_DAT_04bb2e00 + 0x10;
    local_450 = 0;
    puStack_3d0 = local_3c4;
    local_3c4[0] = 0;
    puStack_428 = local_41c;
    local_41c[0] = 0;
    local_44c = 0;
    local_438 = 0xffffffff;
    local_420 = 0x40;
    local_3dd = 0;
    local_3c8 = 0x40;
    local_385 = 0;
    local_468 = 0;
    local_368 = 0;
    local_364 = 0;
    local_360 = 0xffffffff;
    local_358 = 0xffffffff00000000;
    local_350 = 0xffffffff;
    local_338 = 0x40;
    local_2f5 = 0;
    local_2e0 = 0x40;
    local_29d = 0;
    local_380 = 0;
    local_288 = 0;
    local_290 = 0;
    local_298 = 0;
    local_270 = 0x40;
    local_22d = 0;
    local_218 = 0x40;
    local_1d5 = 0;
    local_1c4 = 0;
    uStack_540 = 0;
    uStack_458 = 0;
    local_2e8 = local_2dc;
    local_2dc[0] = 0;
    uStack_370 = 0;
    local_278 = local_26c;
    local_26c[0] = 0;
    local_220 = local_214;
    local_214[0] = 0;
    local_1c8 = *(int *)puVar7;
    *(int *)puVar7 = local_1c8 + 1;
    local_448 = 0xffffffff;
    uStack_440 = 0xffffffff00000000;
    local_340 = local_334;
    local_334[0] = 0;
    local_1d0 = PTR_DAT_04bc0a78 + 0x10;
    local_1c0 = 0;
    local_560 = PTR_DAT_04bc0bf0 + 0x10;
    local_1b8 = 0;
    local_1b0 = 0;
    plVar14 = *(long **)(lVar9 + 0x48);
    local_518 = puVar1;
    local_4c0 = puVar1;
    local_460 = local_548;
    local_430 = puVar1;
    local_3d8 = puVar1;
    local_378 = local_548;
    local_348 = puVar1;
    local_2f0 = puVar1;
    local_280 = puVar1;
    local_228 = puVar1;
    local_a0 = iVar8;
    if (plVar14[1] != 0) {
      local_78 = PTR_DAT_04bc0878 + 0x10;
      local_70 = 9;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_78);
      (**(code **)(plVar14[3] + 0x5e0))(plVar14[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar9);
    }
    FUN_01bea210(&local_560,lVar9,&local_88,&DAT_056913a8);
    puVar16 = (uint *)PTR_DAT_04bc0a80;
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar8 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*puVar16) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)((long)puVar16 + 8) + uVar11 * 4) == 0x5a) goto LAB_02e07fe0;
        uVar11 = uVar11 + 1;
      } while (*puVar16 != uVar11);
    }
    uVar11 = 0;
LAB_02e07fe0:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)uVar11);
    FUN_01bafc20(&local_1d0,&local_1a8,0,&local_78,0);
    FUN_01bea9c8(&local_560);
    FUN_01be9eb8(&local_560);
    plVar14 = *(long **)(lVar17 + 0x2e0);
  }
  uVar15 = *(uint *)(lVar17 + 0x2d8);
  lVar9 = plVar14[(ulong)(2 < uVar15) * 2];
  if (lVar9 != 0) {
    local_518 = PTR_DAT_04bb2bc0 + 0x10;
    local_554 = 0;
    local_558 = 0x100;
    puStack_510 = local_504;
    local_54c = 0;
    puStack_4b8 = local_4ac;
    local_538 = 0;
    local_534 = 0;
    local_520 = 0xffffffff;
    local_508 = 0x40;
    local_4c5 = 0;
    local_504[0] = 0;
    local_4b0 = 0x40;
    local_46d = 0;
    local_4ac[0] = 0;
    local_530 = 0xffffffff;
    uStack_528 = 0xffffffff00000000;
    local_548 = PTR_DAT_04bb2e00 + 0x10;
    local_358 = 0xffffffff00000000;
    puStack_3d0 = local_3c4;
    local_3c4[0] = 0;
    puStack_428 = local_41c;
    local_41c[0] = 0;
    local_450 = 0;
    local_44c = 0;
    local_438 = 0xffffffff;
    local_420 = 0x40;
    local_3dd = 0;
    local_3c8 = 0x40;
    local_385 = 0;
    local_468 = 0;
    local_368 = 0;
    local_364 = 0;
    local_360 = 0xffffffff;
    local_350 = 0xffffffff;
    local_338 = 0x40;
    local_2f5 = 0;
    local_2e0 = 0x40;
    local_29d = 0;
    local_380 = 0;
    local_288 = 0;
    local_290 = 0;
    local_298 = 0;
    local_270 = 0x40;
    local_22d = 0;
    local_218 = 0x40;
    local_1d5 = 0;
    local_1c4 = 0;
    local_448 = 0xffffffff;
    uStack_440 = 0xffffffff00000000;
    local_340 = local_334;
    local_334[0] = 0;
    local_26c[0] = 0;
    local_214[0] = 0;
    local_2e8 = local_2dc;
    local_2dc[0] = 0;
    uStack_540 = 0;
    uStack_458 = 0;
    uStack_370 = 0;
    local_278 = local_26c;
    local_220 = local_214;
    local_1c8 = *(int *)puVar7;
    *(int *)puVar7 = local_1c8 + 1;
    local_1d0 = PTR_DAT_04bc0a78 + 0x10;
    local_1c0 = 0;
    local_560 = PTR_DAT_04bc0bf0 + 0x10;
    local_1b8 = 0;
    local_1b0 = 0;
    plVar14 = *(long **)(lVar9 + 0x48);
    local_4c0 = local_518;
    local_460 = local_548;
    local_430 = local_518;
    local_3d8 = local_518;
    local_378 = local_548;
    local_348 = local_518;
    local_2f0 = local_518;
    local_280 = local_518;
    local_228 = local_518;
    if (plVar14[1] != 0) {
      local_1a8 = PTR_DAT_04bc0878 + 0x10;
      local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,9);
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_1a8);
      (**(code **)(plVar14[3] + 0x5e0))(plVar14[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar9);
    }
    FUN_01bea210(&local_560,lVar9,&local_88,&DAT_056913c8);
    FUN_01bea9c8(&local_560);
    FUN_01be9eb8(&local_560);
    uVar15 = *(uint *)(lVar17 + 0x2d8);
    plVar14 = *(long **)(lVar17 + 0x2e0);
  }
  lVar9 = plVar14[1 < uVar15];
  if (lVar9 != 0) {
    local_198 = 0x13;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    local_194 = 0;
    local_190 = 0xffffffff;
    uVar11 = uVar10 >> 0x18 & 0xff;
    local_188 = 0xffffffff00000000;
    local_180 = 0xffffffff;
    local_170 = local_164;
    local_168 = 0x40;
    local_1a0 = &local_c8;
    local_125 = 0;
    local_164[0] = 0;
    local_118 = local_10c;
    local_110 = 0x40;
    local_cd = 0;
    local_10c[0] = 0;
    local_1a8 = PTR_DAT_04bc0bc0 + 0x10;
    uStack_a8 = 0;
    uStack_b0 = 0;
    local_aa = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    puVar5 = auStack_a2;
    if (auStack_a2 <= (undefined1 *)((long)&local_c8 + 2U)) {
      puVar5 = (undefined1 *)((long)&local_c8 + 2U);
    }
    local_178 = puVar1;
    local_120 = puVar1;
    memset(local_1a0,0,(ulong)(puVar5 + (-0xe1 - (long)&local_1a8)) & 0xfffffffffffffffc | 2);
    local_a0 = 0;
    FUN_01be4af0(&local_1a8,**(undefined4 **)PTR_DAT_04bb3448,uVar11,10,0,0);
    local_a0 = (uint)uVar11;
    local_558 = 0x100;
    puStack_510 = local_504;
    puStack_4b8 = local_4ac;
    local_554 = 0;
    local_54c = 0;
    local_538 = 0;
    local_534 = 0;
    local_520 = 0xffffffff;
    local_508 = 0x40;
    local_4c5 = 0;
    local_504[0] = 0;
    local_4b0 = 0x40;
    local_46d = 0;
    local_4ac[0] = 0;
    local_530 = 0xffffffff;
    uStack_528 = 0xffffffff00000000;
    local_548 = PTR_DAT_04bb2e00 + 0x10;
    local_450 = 0;
    puStack_3d0 = local_3c4;
    local_3c4[0] = 0;
    puStack_428 = local_41c;
    local_41c[0] = 0;
    local_44c = 0;
    local_438 = 0xffffffff;
    local_420 = 0x40;
    local_3dd = 0;
    local_3c8 = 0x40;
    local_385 = 0;
    local_468 = 0;
    local_368 = 0;
    local_364 = 0;
    local_360 = 0xffffffff;
    local_358 = 0xffffffff00000000;
    local_350 = 0xffffffff;
    local_338 = 0x40;
    local_2f5 = 0;
    local_2e0 = 0x40;
    local_29d = 0;
    local_380 = 0;
    local_288 = 0;
    local_290 = 0;
    local_298 = 0;
    local_270 = 0x40;
    local_22d = 0;
    local_218 = 0x40;
    local_1d5 = 0;
    local_1c4 = 0;
    uStack_540 = 0;
    uStack_458 = 0;
    local_2e8 = local_2dc;
    local_2dc[0] = 0;
    uStack_370 = 0;
    local_278 = local_26c;
    local_26c[0] = 0;
    local_220 = local_214;
    local_214[0] = 0;
    local_1c8 = *(int *)puVar7;
    *(int *)puVar7 = local_1c8 + 1;
    local_448 = 0xffffffff;
    uStack_440 = 0xffffffff00000000;
    local_340 = local_334;
    local_334[0] = 0;
    local_1d0 = PTR_DAT_04bc0a78 + 0x10;
    local_1c0 = 0;
    local_560 = PTR_DAT_04bc0bf0 + 0x10;
    local_1b8 = 0;
    local_1b0 = 0;
    plVar14 = *(long **)(lVar9 + 0x48);
    local_518 = puVar1;
    local_4c0 = puVar1;
    local_460 = local_548;
    local_430 = puVar1;
    local_3d8 = puVar1;
    local_378 = local_548;
    local_348 = puVar1;
    local_2f0 = puVar1;
    local_280 = puVar1;
    local_228 = puVar1;
    if (plVar14[1] != 0) {
      local_78 = PTR_DAT_04bc0878 + 0x10;
      local_70 = 9;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_78);
      (**(code **)(plVar14[3] + 0x5e0))(plVar14[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar9);
    }
    FUN_01bea210(&local_560,lVar9,&local_88,&DAT_056913b8);
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar8 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*puVar16) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(puVar16 + 2) + uVar11 * 4) == 0x5a) goto LAB_02e0855c;
        uVar11 = uVar11 + 1;
      } while (*puVar16 != uVar11);
    }
    uVar11 = 0;
LAB_02e0855c:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)uVar11);
    FUN_01bafc20(&local_1d0,&local_1a8,0,&local_78,0);
    FUN_01bea9c8(&local_560);
    FUN_01be9eb8(&local_560);
    uVar15 = *(uint *)(lVar17 + 0x2d8);
    plVar14 = *(long **)(lVar17 + 0x2e0);
  }
  lVar17 = 0x18;
  if (uVar15 < 4) {
    lVar17 = 0;
  }
  lVar17 = *(long *)((long)plVar14 + lVar17);
  if (lVar17 != 0) {
    local_198 = 0x13;
    local_170 = local_164;
    local_1a0 = &local_c8;
    local_194 = 0;
    local_118 = local_10c;
    local_1a8 = PTR_DAT_04bc0bc0 + 0x10;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    local_190 = 0xffffffff;
    puVar5 = auStack_a2;
    if (auStack_a2 <= (undefined1 *)((long)&local_c8 + 2U)) {
      puVar5 = (undefined1 *)((long)&local_c8 + 2U);
    }
    local_188 = 0xffffffff00000000;
    local_180 = 0xffffffff;
    local_168 = 0x40;
    local_125 = 0;
    local_164[0] = 0;
    local_110 = 0x40;
    local_cd = 0;
    local_10c[0] = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    local_aa = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_178 = puVar1;
    local_120 = puVar1;
    memset(local_1a0,0,(ulong)(puVar5 + (-0xe1 - (long)&local_1a8)) & 0xfffffffffffffffc | 2);
    local_a0 = 0;
    uVar15 = (uint)uVar10 >> 0x10 & 0xff;
    FUN_01be4af0(&local_1a8,**(undefined4 **)PTR_DAT_04bb3448,uVar15,10,0,0);
    local_558 = 0x100;
    puStack_510 = local_504;
    puStack_4b8 = local_4ac;
    local_554 = 0;
    local_54c = 0;
    local_538 = 0;
    local_534 = 0;
    local_520 = 0xffffffff;
    local_508 = 0x40;
    local_4c5 = 0;
    local_504[0] = 0;
    local_4b0 = 0x40;
    local_46d = 0;
    local_4ac[0] = 0;
    local_530 = 0xffffffff;
    uStack_528 = 0xffffffff00000000;
    local_548 = PTR_DAT_04bb2e00 + 0x10;
    local_450 = 0;
    puStack_3d0 = local_3c4;
    local_3c4[0] = 0;
    puStack_428 = local_41c;
    local_41c[0] = 0;
    local_44c = 0;
    local_438 = 0xffffffff;
    local_420 = 0x40;
    local_3dd = 0;
    local_3c8 = 0x40;
    local_385 = 0;
    local_468 = 0;
    local_368 = 0;
    local_364 = 0;
    local_360 = 0xffffffff;
    local_358 = 0xffffffff00000000;
    local_350 = 0xffffffff;
    local_338 = 0x40;
    local_2f5 = 0;
    local_2e0 = 0x40;
    local_29d = 0;
    local_380 = 0;
    local_288 = 0;
    local_290 = 0;
    local_298 = 0;
    local_270 = 0x40;
    local_22d = 0;
    local_218 = 0x40;
    local_1d5 = 0;
    local_1c4 = 0;
    uStack_540 = 0;
    uStack_458 = 0;
    local_2e8 = local_2dc;
    local_2dc[0] = 0;
    uStack_370 = 0;
    local_278 = local_26c;
    local_26c[0] = 0;
    local_220 = local_214;
    local_214[0] = 0;
    local_1c8 = *(int *)puVar7;
    *(int *)puVar7 = local_1c8 + 1;
    local_448 = 0xffffffff;
    uStack_440 = 0xffffffff00000000;
    local_340 = local_334;
    local_334[0] = 0;
    local_1d0 = PTR_DAT_04bc0a78 + 0x10;
    local_1c0 = 0;
    local_560 = PTR_DAT_04bc0bf0 + 0x10;
    local_1b8 = 0;
    local_1b0 = 0;
    plVar14 = *(long **)(lVar17 + 0x48);
    local_518 = puVar1;
    local_4c0 = puVar1;
    local_460 = local_548;
    local_430 = puVar1;
    local_3d8 = puVar1;
    local_378 = local_548;
    local_348 = puVar1;
    local_2f0 = puVar1;
    local_280 = puVar1;
    local_228 = puVar1;
    local_a0 = uVar15;
    if (plVar14[1] != 0) {
      local_78 = PTR_DAT_04bc0878 + 0x10;
      local_70 = 9;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_78);
      (**(code **)(plVar14[3] + 0x5e0))(plVar14[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar17);
    }
    FUN_01bea210(&local_560,lVar17,&local_88,&DAT_056913d8);
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar8 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*puVar16) {
      uVar10 = 0;
      do {
        if (*(int *)(*(long *)(puVar16 + 2) + uVar10 * 4) == 0x5a) goto LAB_02e088b0;
        uVar10 = uVar10 + 1;
      } while (*puVar16 != uVar10);
    }
    uVar10 = 0;
LAB_02e088b0:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)uVar10);
    FUN_01bafc20(&local_1d0,&local_1a8,0,&local_78,0);
    FUN_01bea9c8(&local_560);
    FUN_01be9eb8(&local_560);
  }
  return;
}

