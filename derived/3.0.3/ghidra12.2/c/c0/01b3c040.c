
void FUN_01b3c040(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined **ppuVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined *local_480;
  undefined1 *local_478;
  undefined8 local_470;
  undefined1 *local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined *local_450;
  long local_448;
  undefined8 local_440;
  undefined1 *puStack_438;
  undefined4 local_430;
  undefined1 local_42c [47];
  undefined1 local_3fd;
  undefined *local_3f8;
  long lStack_3f0;
  undefined8 local_3e8;
  undefined1 *puStack_3e0;
  undefined4 local_3d8;
  undefined1 local_3d4 [47];
  undefined1 local_3a5;
  undefined1 local_3a0 [8];
  undefined8 uStack_398;
  undefined1 local_390 [8];
  undefined6 uStack_388;
  undefined2 uStack_382;
  undefined6 local_380;
  undefined2 uStack_37a;
  ulong local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined *local_290;
  undefined1 *local_288;
  undefined4 local_280;
  undefined1 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined *local_260;
  undefined1 *local_258;
  undefined4 local_250;
  undefined1 local_24c [63];
  undefined1 local_20d;
  undefined *local_208;
  undefined1 *local_200;
  undefined4 local_1f8;
  undefined1 local_1f4 [63];
  undefined1 local_1b5;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
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
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_78;
  char *pcStack_70;
  
  puVar2 = PTR_DAT_04bb6b18;
  puVar1 = PTR_DAT_04bb2bc0;
  local_470._4_4_ = (uint)((ulong)local_470 >> 0x20) & 0xffffff00;
  local_470 = (undefined *)CONCAT44(local_470._4_4_,0x40);
  local_468 = (undefined1 *)0xffffffff;
  local_460 = 0xffffffff00000000;
  local_448 = (long)&local_440 + 4;
  local_458 = CONCAT44(local_458._4_4_,0xffffffff);
  local_478 = local_3a0;
  local_3fd = 0;
  lVar16 = *(long *)PTR_DAT_04bb28f8;
  local_440 = (undefined *)CONCAT35(local_440._5_3_,0x40);
  local_450 = PTR_DAT_04bb2bc0 + 0x10;
  local_3a5 = 0;
  local_3e8 = (undefined *)CONCAT35(local_3e8._5_3_,0x40);
  lStack_3f0 = (long)&local_3e8 + 4;
  local_480 = PTR_DAT_04bb6b18 + 0x10;
  local_330 = 0;
  uStack_328 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_380 = 0;
  uStack_37a = 0;
  local_378 = 0;
  puVar3 = &local_320;
  if (&local_320 <= local_3a0 + 2) {
    puVar3 = (undefined8 *)(local_3a0 + 2);
  }
  local_390 = (undefined1  [8])0x0;
  uStack_388 = 0;
  uStack_382 = 0;
  local_3a0 = (undefined1  [8])0x0;
  uStack_398 = 0;
  local_3f8 = local_450;
  memset(local_478,0,(size_t)((long)puVar3 + (-0xe0 - (long)&local_480)));
  puVar7 = PTR_DAT_04bb2020;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "STR_HHA_Rank";
  FUN_006d8678(&local_b0,&DAT_0405bf91,*param_1 + 1);
  if ((*(long *)(lVar16 + 10000) == 0) || (*(long *)(lVar16 + 0x2718) == 0)) {
    FUN_006f50a0(&local_480,&local_78,&local_b0,0);
  }
  else {
    iVar10 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,&local_78);
    if (iVar10 == 9) {
      uVar13 = *(undefined8 *)(lVar16 + 10000);
    }
    else {
      if (iVar10 != 5) goto LAB_01b3c1bc;
      uVar13 = *(undefined8 *)(lVar16 + 0x2718);
    }
    FUN_01ba7cc0(uVar13,&local_480,&local_78,&local_b0);
  }
LAB_01b3c1bc:
  puVar9 = PTR_DAT_04bc0a88;
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,4);
  if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  puVar8 = PTR_DAT_04bc0a80;
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar14 * 4) == 0x8c) goto LAB_01b3c20c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar14);
  }
  uVar14 = 0;
LAB_01b3c20c:
  local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)uVar14);
  FUN_01bae480(param_2,&local_480,0,&local_78,(ulong)local_b0 & 0xffffffff);
  if (param_1[1] != 0) {
    local_470._4_4_ = (uint)((ulong)local_470 >> 0x20) & 0xffffff00;
    local_468 = (undefined1 *)0xffffffff;
    local_460 = 0xffffffff00000000;
    local_448 = (long)&local_440 + 4;
    local_450 = puVar1 + 0x10;
    local_478 = local_3a0;
    local_470 = (undefined *)CONCAT44(local_470._4_4_,0x40);
    local_480 = puVar2 + 0x10;
    local_458 = CONCAT44(local_458._4_4_,0xffffffff);
    local_3fd = 0;
    local_440 = (undefined *)CONCAT35(local_440._5_3_,0x40);
    local_3a5 = 0;
    local_3e8 = (undefined *)CONCAT35(local_3e8._5_3_,0x40);
    lStack_3f0 = (long)&local_3e8 + 4;
    puVar3 = &local_320;
    if (&local_320 <= local_3a0 + 2) {
      puVar3 = (undefined8 *)(local_3a0 + 2);
    }
    local_330 = 0;
    uStack_328 = 0;
    local_340 = 0;
    uStack_338 = 0;
    local_350 = 0;
    uStack_348 = 0;
    local_360 = 0;
    uStack_358 = 0;
    local_370 = 0;
    uStack_368 = 0;
    local_380 = 0;
    uStack_37a = 0;
    local_378 = 0;
    local_390 = (undefined1  [8])0x0;
    uStack_388 = 0;
    uStack_382 = 0;
    local_3a0 = (undefined1  [8])0x0;
    uStack_398 = 0;
    local_3f8 = local_450;
    memset(local_478,0,(size_t)((long)puVar3 + (-0xe0 - (long)&local_480)));
    local_b0 = puVar7 + 0x10;
    pcStack_a8 = "STR_HHA_Theme";
    iVar10 = param_1[1];
    if ((*(long *)(lVar16 + 10000) == 0) || (*(long *)(lVar16 + 0x2718) == 0)) {
      FUN_006f5290(&local_480,&local_b0,iVar10 + -1);
    }
    else {
      iVar11 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,&local_b0);
      if (iVar11 == 9) {
        uVar13 = *(undefined8 *)(lVar16 + 10000);
      }
      else {
        if (iVar11 != 5) goto LAB_01b3c348;
        uVar13 = *(undefined8 *)(lVar16 + 0x2718);
      }
      FUN_01ba7e20(uVar13,&local_480,&local_b0,iVar10 + -1);
    }
LAB_01b3c348:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,5);
    if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)puVar8) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == 0x8c) goto LAB_01b3c38c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar8 != uVar14);
    }
    uVar14 = 0;
LAB_01b3c38c:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)uVar14);
    FUN_01bae480(param_2,&local_480,0,&local_78,(ulong)local_b0 & 0xffffffff);
  }
  if (param_1[2] != 0) {
    local_470._4_4_ = (uint)((ulong)local_470 >> 0x20) & 0xffffff00;
    local_468 = (undefined1 *)0xffffffff;
    local_460 = 0xffffffff00000000;
    local_448 = (long)&local_440 + 4;
    local_450 = puVar1 + 0x10;
    local_478 = local_3a0;
    local_470 = (undefined *)CONCAT44(local_470._4_4_,0x40);
    local_480 = puVar2 + 0x10;
    local_458 = CONCAT44(local_458._4_4_,0xffffffff);
    local_3fd = 0;
    local_440 = (undefined *)CONCAT35(local_440._5_3_,0x40);
    local_3a5 = 0;
    local_3e8 = (undefined *)CONCAT35(local_3e8._5_3_,0x40);
    lStack_3f0 = (long)&local_3e8 + 4;
    puVar3 = &local_320;
    if (&local_320 <= local_3a0 + 2) {
      puVar3 = (undefined8 *)(local_3a0 + 2);
    }
    local_330 = 0;
    uStack_328 = 0;
    local_340 = 0;
    uStack_338 = 0;
    local_350 = 0;
    uStack_348 = 0;
    local_360 = 0;
    uStack_358 = 0;
    local_370 = 0;
    uStack_368 = 0;
    local_380 = 0;
    uStack_37a = 0;
    local_378 = 0;
    local_390 = (undefined1  [8])0x0;
    uStack_388 = 0;
    uStack_382 = 0;
    local_3a0 = (undefined1  [8])0x0;
    uStack_398 = 0;
    local_3f8 = local_450;
    memset(local_478,0,(size_t)((long)puVar3 + (-0xe0 - (long)&local_480)));
    local_b0 = puVar7 + 0x10;
    pcStack_a8 = "STR_HHA_Set";
    iVar10 = param_1[2];
    if ((*(long *)(lVar16 + 10000) == 0) || (*(long *)(lVar16 + 0x2718) == 0)) {
      FUN_006f5290(&local_480,&local_b0,iVar10 + -1);
    }
    else {
      iVar11 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,&local_b0);
      if (iVar11 == 9) {
        uVar13 = *(undefined8 *)(lVar16 + 10000);
      }
      else {
        if (iVar11 != 5) goto LAB_01b3c4c8;
        uVar13 = *(undefined8 *)(lVar16 + 0x2718);
      }
      FUN_01ba7e20(uVar13,&local_480,&local_b0,iVar10 + -1);
    }
LAB_01b3c4c8:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,6);
    if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)puVar8) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == 0x8c) goto LAB_01b3c50c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar8 != uVar14);
    }
    uVar14 = 0;
LAB_01b3c50c:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)uVar14);
    FUN_01bae480(param_2,&local_480,0,&local_78,(ulong)local_b0 & 0xffffffff);
  }
  if (param_1[3] != 0) {
    local_470._4_4_ = (uint)((ulong)local_470 >> 0x20) & 0xffffff00;
    local_468 = (undefined1 *)0xffffffff;
    local_460 = 0xffffffff00000000;
    local_448 = (long)&local_440 + 4;
    local_450 = puVar1 + 0x10;
    local_478 = local_3a0;
    local_470 = (undefined *)CONCAT44(local_470._4_4_,0x40);
    local_480 = puVar2 + 0x10;
    local_458 = CONCAT44(local_458._4_4_,0xffffffff);
    local_3fd = 0;
    local_440 = (undefined *)CONCAT35(local_440._5_3_,0x40);
    local_3a5 = 0;
    local_3e8 = (undefined *)CONCAT35(local_3e8._5_3_,0x40);
    lStack_3f0 = (long)&local_3e8 + 4;
    puVar3 = &local_320;
    if (&local_320 <= local_3a0 + 2) {
      puVar3 = (undefined8 *)(local_3a0 + 2);
    }
    local_330 = 0;
    uStack_328 = 0;
    local_340 = 0;
    uStack_338 = 0;
    local_350 = 0;
    uStack_348 = 0;
    local_360 = 0;
    uStack_358 = 0;
    local_370 = 0;
    uStack_368 = 0;
    local_380 = 0;
    uStack_37a = 0;
    local_378 = 0;
    local_390 = (undefined1  [8])0x0;
    uStack_388 = 0;
    uStack_382 = 0;
    local_3a0 = (undefined1  [8])0x0;
    uStack_398 = 0;
    local_3f8 = local_450;
    memset(local_478,0,(size_t)((long)puVar3 + (-0xe0 - (long)&local_480)));
    local_b0 = puVar7 + 0x10;
    pcStack_a8 = "STR_HHA_Situation";
    iVar10 = param_1[3];
    if ((*(long *)(lVar16 + 10000) == 0) || (*(long *)(lVar16 + 0x2718) == 0)) {
      FUN_006f5290(&local_480,&local_b0,iVar10 + -1);
    }
    else {
      iVar11 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,&local_b0);
      if (iVar11 == 9) {
        uVar13 = *(undefined8 *)(lVar16 + 10000);
      }
      else {
        if (iVar11 != 5) goto LAB_01b3c648;
        uVar13 = *(undefined8 *)(lVar16 + 0x2718);
      }
      FUN_01ba7e20(uVar13,&local_480,&local_b0,iVar10 + -1);
    }
LAB_01b3c648:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,7);
    if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)puVar8) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == 0x8c) goto LAB_01b3c68c;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar8 != uVar14);
    }
    uVar14 = 0;
LAB_01b3c68c:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)uVar14);
    FUN_01bae480(param_2,&local_480,0,&local_78,(ulong)local_b0 & 0xffffffff);
  }
  puVar2 = PTR_DAT_04bb6b38;
  if (param_1[4] != 0xe) {
    local_470._4_4_ = (uint)((ulong)local_470 >> 0x20) & 0xffffff00;
    local_470 = (undefined *)CONCAT44(local_470._4_4_,0x80);
    local_448 = (long)&local_440 + 4;
    local_450 = puVar1 + 0x10;
    lStack_3f0 = (long)&local_3e8 + 4;
    local_478 = local_3a0;
    local_468 = (undefined1 *)0xffffffff;
    local_460 = 0xffffffff00000000;
    local_458 = CONCAT44(local_458._4_4_,0xffffffff);
    local_3fd = 0;
    local_440 = (undefined *)CONCAT35(local_440._5_3_,0x40);
    local_3a5 = 0;
    local_3e8 = (undefined *)CONCAT35(local_3e8._5_3_,0x40);
    local_480 = PTR_DAT_04bb6b38 + 0x10;
    puVar3 = &local_2a0;
    if (&local_2a0 <= local_3a0 + 2) {
      puVar3 = (undefined8 *)(local_3a0 + 2);
    }
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_310 = 0;
    uStack_308 = 0;
    local_320 = 0;
    uStack_318 = 0;
    local_330 = 0;
    uStack_328 = 0;
    local_340 = 0;
    uStack_338 = 0;
    local_350 = 0;
    uStack_348 = 0;
    local_360 = 0;
    uStack_358 = 0;
    local_370 = 0;
    uStack_368 = 0;
    local_380 = 0;
    uStack_37a = 0;
    local_378 = 0;
    local_390 = (undefined1  [8])0x0;
    uStack_388 = 0;
    uStack_382 = 0;
    local_3a0 = (undefined1  [8])0x0;
    uStack_398 = 0;
    local_3f8 = local_450;
    memset(local_478,0,(size_t)((long)puVar3 + (-0xe0 - (long)&local_480)));
    local_b0 = puVar7 + 0x10;
    pcStack_a8 = "STR_ItemColor";
    if ((uint)param_1[4] < 0xf) {
      pcStack_70 = *(char **)(PTR_s_Orange_04bb6b30 + (ulong)(uint)param_1[4] * 8 + 0x60);
    }
    else {
      pcStack_70 = "";
    }
    local_78 = local_b0;
    if ((*(long *)(lVar16 + 10000) == 0) || (*(long *)(lVar16 + 0x2718) == 0)) {
      FUN_006f50a0(&local_480,&local_b0,&local_78,0);
LAB_01b3c808:
      bVar6 = *puVar9;
    }
    else {
      iVar10 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,&local_b0);
      if (iVar10 == 9) {
        uVar13 = *(undefined8 *)(lVar16 + 10000);
      }
      else {
        if (iVar10 != 5) goto LAB_01b3c808;
        uVar13 = *(undefined8 *)(lVar16 + 0x2718);
      }
      FUN_01ba7cc0(uVar13,&local_480,&local_b0,&local_78);
      bVar6 = *puVar9;
    }
    if (((bVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)puVar8) {
      uVar14 = 0;
      do {
        if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == 0x7d) goto LAB_01b3c860;
        uVar14 = uVar14 + 1;
      } while (*(uint *)puVar8 != uVar14);
    }
    uVar14 = 0;
LAB_01b3c860:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,(int)uVar14);
    FUN_01bae480(param_2,&local_480,0,&local_b0,7);
  }
  local_470._4_4_ = (uint)((ulong)local_470 >> 0x20) & 0xffffff00;
  local_470 = (undefined *)CONCAT44(local_470._4_4_,0x80);
  local_448 = (long)&local_440 + 4;
  local_450 = puVar1 + 0x10;
  lStack_3f0 = (long)&local_3e8 + 4;
  local_478 = local_3a0;
  local_468 = (undefined1 *)0xffffffff;
  local_460 = 0xffffffff00000000;
  local_458 = CONCAT44(local_458._4_4_,0xffffffff);
  local_3fd = 0;
  local_440 = (undefined *)CONCAT35(local_440._5_3_,0x40);
  local_3a5 = 0;
  local_3e8 = (undefined *)CONCAT35(local_3e8._5_3_,0x40);
  local_480 = puVar2 + 0x10;
  puVar3 = &local_2a0;
  if (&local_2a0 <= local_3a0 + 2) {
    puVar3 = (undefined8 *)(local_3a0 + 2);
  }
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_330 = 0;
  uStack_328 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_380 = 0;
  uStack_37a = 0;
  local_378 = 0;
  local_390 = (undefined1  [8])0x0;
  uStack_388 = 0;
  uStack_382 = 0;
  local_3a0 = (undefined1  [8])0x0;
  uStack_398 = 0;
  local_3f8 = local_450;
  memset(local_478,0,(size_t)((long)puVar3 + (-0xe0 - (long)&local_480)));
  local_78 = puVar7 + 0x10;
  pcStack_70 = "STR_HHA_RoomLocation";
  FUN_006d8678(&local_b0,&DAT_0405bf91,param_1[5]);
  if ((*(long *)(lVar16 + 10000) == 0) || (*(long *)(lVar16 + 0x2718) == 0)) {
    FUN_006f50a0(&local_480,&local_78,&local_b0,0);
  }
  else {
    iVar10 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,&local_78);
    if (iVar10 == 9) {
      uVar13 = *(undefined8 *)(lVar16 + 10000);
    }
    else {
      if (iVar10 != 5) goto LAB_01b3c9c8;
      uVar13 = *(undefined8 *)(lVar16 + 0x2718);
    }
    FUN_01ba7cc0(uVar13,&local_480,&local_78,&local_b0);
  }
LAB_01b3c9c8:
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,8);
  if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)puVar8) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == 0x8c) goto LAB_01b3ca0c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar8 != uVar14);
  }
  uVar14 = 0;
LAB_01b3ca0c:
  local_78 = (undefined *)CONCAT44(local_78._4_4_,(int)uVar14);
  FUN_01bae480(param_2,&local_480,0,&local_78,(ulong)local_b0 & 0xffffffff);
  local_470._4_4_ = (uint)((ulong)local_470 >> 0x20) & 0xffffff00;
  local_470 = (undefined *)CONCAT44(local_470._4_4_,0x13);
  local_448 = (long)&local_440 + 4;
  local_450 = puVar1 + 0x10;
  local_468 = (undefined1 *)0xffffffff;
  local_460 = 0xffffffff00000000;
  local_478 = local_3a0;
  local_458 = CONCAT44(local_458._4_4_,0xffffffff);
  local_3fd = 0;
  local_440 = (undefined *)CONCAT35(local_440._5_3_,0x40);
  local_3a5 = 0;
  local_3e8 = (undefined *)CONCAT35(local_3e8._5_3_,0x40);
  lStack_3f0 = (long)&local_3e8 + 4;
  local_480 = PTR_DAT_04bc0bc0 + 0x10;
  local_380 = 0;
  puVar4 = &uStack_37a;
  if (&uStack_37a <= local_3a0 + 2) {
    puVar4 = (undefined2 *)(local_3a0 + 2);
  }
  local_390 = (undefined1  [8])0x0;
  uStack_388 = 0;
  uStack_382 = 0;
  local_3a0 = (undefined1  [8])0x0;
  uStack_398 = 0;
  local_3f8 = local_450;
  memset(local_478,0,(ulong)((long)puVar4 + (-0xe1 - (long)&local_480)) & 0xfffffffffffffffc | 2);
  iVar10 = param_1[6];
  local_378 = local_378 & 0xffffffff00000000;
  FUN_01be4af0(&local_480,*(undefined4 *)(lVar16 + 0x2720),iVar10,10,0,0);
  local_378 = CONCAT44(local_378._4_4_,iVar10);
  if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)puVar8) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)(puVar8 + 8) + uVar14 * 4) == 0x5a) goto LAB_01b3cb3c;
      uVar14 = uVar14 + 1;
    } while (*(uint *)puVar8 != uVar14);
  }
  uVar14 = 0;
LAB_01b3cb3c:
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,(int)uVar14);
  FUN_01bafc20(param_2,&local_480,0,&local_b0,0);
  puVar2 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(param_1 + 7);
  if (*(long *)puVar2 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      local_478 = (undefined1 *)((ulong)local_478 & 0xffffffff00000000);
      puStack_438 = local_42c;
      local_460 = CONCAT35(local_460._5_3_,0x80);
      puVar1 = puVar1 + 0x10;
      local_448 = CONCAT44(local_448._4_4_,0xffffffff);
      local_480 = PTR_DAT_04bc0ce0 + 0x10;
      local_458 = 0xffffffff;
      local_450 = (undefined *)0xffffffff00000000;
      local_468 = local_390;
      puStack_3e0 = local_3d4;
      local_430 = 0x40;
      lStack_3f0._0_4_ = (uint)(uint3)lStack_3f0;
      local_42c[0] = 0;
      local_3d8 = 0x40;
      uStack_398._0_4_ = (uint)(uint3)uStack_398;
      local_3d4[0] = 0;
      puVar2 = PTR_DAT_04bb6b38 + 0x10;
      ppuVar5 = &local_290;
      if (&local_290 <= local_390 + 2) {
        ppuVar5 = (undefined **)(local_390 + 2);
      }
      local_2a0 = 0;
      uStack_298 = 0;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2d0 = 0;
      uStack_2c8 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_320 = 0;
      uStack_318 = 0;
      local_330 = 0;
      uStack_328 = 0;
      local_340 = 0;
      uStack_338 = 0;
      local_350 = 0;
      uStack_348 = 0;
      local_360 = 0;
      uStack_358 = 0;
      local_370 = 0;
      uStack_368 = 0;
      local_380 = 0;
      uStack_37a = 0;
      local_378 = 0;
      local_390 = (undefined1  [8])0x0;
      uStack_388 = 0;
      uStack_382 = 0;
      local_470 = puVar2;
      local_440 = puVar1;
      local_3e8 = puVar1;
      memset(local_468,0,(long)ppuVar5 + (-0xe0 - (long)&local_470));
      local_27c = 0;
      local_280 = 0x80;
      local_288 = local_1b0;
      local_270 = 0xffffffff00000000;
      local_258 = local_24c;
      local_24c[0] = 0;
      local_278 = 0xffffffff;
      local_200 = local_1f4;
      local_1f4[0] = 0;
      ppuVar5 = &local_b0;
      if (&local_b0 <= local_1b0 + 2) {
        ppuVar5 = (undefined **)(local_1b0 + 2);
      }
      local_268 = 0xffffffff;
      local_250 = 0x40;
      local_20d = 0;
      local_1f8 = 0x40;
      local_1b5 = 0;
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
      local_170 = 0;
      local_178 = 0;
      local_180 = 0;
      local_188 = 0;
      local_190 = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_1b0 = (undefined1  [8])0x0;
      local_290 = puVar2;
      local_260 = puVar1;
      local_208 = puVar1;
      memset(local_288,0,(size_t)((long)ppuVar5 + (-0xe0 - (long)&local_290)));
      FUN_01c0bafc(&local_480,param_1 + 7,lVar16 + 0x26d0);
      if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
        FUN_01bb25c8(PTR_DAT_04bc0a80);
        __cxa_guard_release(PTR_DAT_04bc0a88);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
        uVar14 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar14 * 4) == 0x7d) goto LAB_01b3cdec;
          uVar14 = uVar14 + 1;
        } while (*(uint *)PTR_DAT_04bc0a80 != uVar14);
      }
      uVar14 = 0;
LAB_01b3cdec:
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,(int)uVar14);
      FUN_01baf140(param_2,&local_480,0,&local_b0,0);
    }
  }
  return;
}

