
void FUN_02e7d9d0(long param_1,uint param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined2 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined *puVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined *local_568;
  undefined1 *puStack_560;
  undefined4 local_558;
  undefined1 local_554;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined4 local_540;
  undefined *local_538;
  undefined1 *puStack_530;
  undefined4 local_528;
  undefined1 local_524 [63];
  undefined1 local_4e5;
  undefined *local_4e0;
  undefined1 *puStack_4d8;
  undefined4 local_4d0;
  undefined1 local_4cc [63];
  undefined1 local_48d;
  undefined1 local_488 [8];
  undefined6 uStack_480;
  undefined2 uStack_47a;
  undefined6 local_478;
  undefined2 uStack_472;
  undefined6 uStack_470;
  undefined2 local_46a;
  undefined6 uStack_468;
  undefined2 uStack_462;
  ulong local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined *local_448;
  undefined4 local_440;
  undefined8 local_43c;
  undefined4 local_434;
  undefined *local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined1 local_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined *local_400;
  undefined1 *puStack_3f8;
  undefined4 local_3f0;
  undefined1 local_3ec [63];
  undefined1 local_3ad;
  undefined *local_3a8;
  undefined1 *puStack_3a0;
  undefined4 local_398;
  undefined1 local_394 [63];
  undefined1 local_355;
  undefined8 local_350;
  undefined *local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined1 local_334;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined *local_318;
  undefined1 *local_310;
  undefined4 local_308;
  undefined1 local_304 [63];
  undefined1 local_2c5;
  undefined *local_2c0;
  undefined1 *local_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac [63];
  undefined1 local_26d;
  undefined8 local_268;
  undefined *local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined1 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined *local_230;
  undefined1 *local_228;
  undefined4 local_220;
  undefined1 local_21c [63];
  undefined1 local_1dd;
  undefined *local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4 [63];
  undefined1 local_185;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [63];
  undefined1 local_115;
  undefined *local_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined1 local_fc [63];
  undefined1 local_bd;
  undefined *local_b8;
  int local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined *local_90;
  char *pcStack_88;
  int local_80;
  undefined4 local_7c [3];
  
  uVar6 = *(uint *)(param_1 + 0x248);
  if (((int)uVar6 < 0) || (*(int *)(param_1 + 0x230) <= (int)uVar6)) {
LAB_02e7da8c:
    if (param_2 < *(uint *)(param_1 + 0x430)) {
      plVar16 = (long *)(param_1 + 0x438);
      goto LAB_02e7da9c;
    }
LAB_02e7daa8:
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x220;
    uVar1 = uVar6 + 1 & 3;
    if (2 < uVar6) {
      uVar6 = uVar6 + 1 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar9 = *(long *)(lVar9 + 8);
    }
    if (((lVar9 == 0) || (lVar9 = lVar9 - *(int *)(param_1 + 0x234), lVar9 == 0)) ||
       (*(int *)(lVar9 + 0x270) != 0x93)) goto LAB_02e7da8c;
    if (*(uint *)(param_1 + 0x790) <= param_2) goto LAB_02e7daa8;
    plVar16 = (long *)(param_1 + 0x798);
LAB_02e7da9c:
    lVar9 = *(long *)(*plVar16 + (long)(int)param_2 * 8);
  }
  puVar15 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    uVar8 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bc4e58);
    if ((uVar8 & 1) == 0) {
      puVar15 = (undefined8 *)0x0;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x248);
  lVar18 = *(long *)(*(long *)(param_1 + 0x210) + 0x5f8);
  if ((int)uVar6 < 0) {
    iVar7 = -1;
  }
  else {
    iVar7 = -1;
    if ((int)uVar6 < *(int *)(param_1 + 0x230)) {
      lVar10 = param_1 + 0x220;
      uVar1 = uVar6 + 1 & 3;
      if (2 < uVar6) {
        uVar6 = uVar6 + 1 & 0xfffffffc;
        do {
          uVar6 = uVar6 - 4;
          lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 8) + 8) + 8) + 8);
        } while (uVar6 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar10 = *(long *)(lVar10 + 8);
      }
      iVar7 = -1;
      if ((lVar10 != 0) && (lVar10 = lVar10 - *(int *)(param_1 + 0x234), lVar10 != 0)) {
        iVar7 = *(int *)(lVar10 + 0x270);
      }
    }
  }
  uVar6 = param_2;
  if (iVar7 != 0x92) {
    uVar6 = param_2 + 8;
  }
  if (uVar6 == *(uint *)(param_1 + 1000)) {
    return;
  }
  *(uint *)(param_1 + 1000) = uVar6;
  if (iVar7 == 0x92) {
    uVar19 = NEON_ucvtf((uint)*(byte *)(lVar9 + 8));
  }
  else {
    uVar19 = 0x3f800000;
  }
  plVar16 = *(long **)(puVar15[0x45] + (ulong)(8 < *(uint *)(puVar15 + 0x44)) * 0x40);
  if (plVar16 != (long *)0x0) {
    local_448 = PTR_DAT_04bc4f00 + 0x10;
    local_440 = 0x14;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
    (**(code **)(plVar16[3] + 0x158))(uVar19,plVar16[1]);
  }
  lVar10 = 0x38;
  if (*(uint *)(lVar18 + 0x228) < 8) {
    lVar10 = 0;
  }
  plVar16 = *(long **)(*(long *)(lVar18 + 0x230) + lVar10);
  if (plVar16 != (long *)0x0) {
    local_448 = PTR_DAT_04bc4f00 + 0x10;
    local_440 = 0x14;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
    (**(code **)(plVar16[3] + 0x158))(uVar19,plVar16[1]);
  }
  puVar17 = PTR_DAT_04bc4f00;
  lVar10 = 0x48;
  if (*(uint *)(puVar15 + 0x44) < 10) {
    lVar10 = 0;
  }
  plVar16 = *(long **)(puVar15[0x45] + lVar10);
  if (plVar16 != (long *)0x0) {
    local_448 = PTR_DAT_04bc4f00 + 0x10;
    local_440 = 0x14;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
    (**(code **)(plVar16[3] + 0x158))((float)(int)uVar6,plVar16[1]);
  }
  puVar15 = *(undefined8 **)(lVar18 + 0x230);
  plVar16 = (long *)*puVar15;
  if (plVar16 != (long *)0x0) {
    local_448 = puVar17 + 0x10;
    local_440 = 0x14;
    uVar19 = NEON_ucvtf((uint)*(byte *)(lVar9 + 9));
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
    (**(code **)(plVar16[3] + 0x158))(uVar19,plVar16[1]);
    puVar15 = *(undefined8 **)(lVar18 + 0x230);
  }
  plVar16 = (long *)puVar15[1 < *(uint *)(lVar18 + 0x228)];
  if (plVar16 != (long *)0x0) {
    fVar20 = 0.0;
    if (iVar7 == 0x92) {
      fVar20 = (float)(*(byte *)(lVar9 + 9) ^ 1);
    }
    local_448 = puVar17 + 0x10;
    local_440 = 0x14;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
    (**(code **)(plVar16[3] + 0x158))(fVar20,plVar16[1]);
  }
  if (*(char *)(lVar9 + 9) != '\0') {
    uVar6 = FUN_016d3964(lVar9);
    lVar9 = 0x18;
    if (*(uint *)(lVar18 + 0x228) < 4) {
      lVar9 = 0;
    }
    plVar16 = *(long **)(*(long *)(lVar18 + 0x230) + lVar9);
    if (plVar16 != (long *)0x0) {
      local_440 = 0x14;
      local_448 = puVar17 + 0x10;
      (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
      (**(code **)(plVar16[3] + 0x158))((float)(uVar6 & 1),plVar16[1]);
    }
  }
  bVar5 = false;
  uVar6 = *(uint *)(param_1 + 0x248);
  lVar9 = *(long *)(*(long *)(param_1 + 0x210) + 0x5f8);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x230))) {
    lVar18 = param_1 + 0x220;
    uVar1 = uVar6 + 1 & 3;
    if (2 < uVar6) {
      uVar6 = uVar6 + 1 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar18 = *(long *)(lVar18 + 8);
    }
    bVar5 = false;
    if ((lVar18 != 0) && (lVar18 = lVar18 - *(int *)(param_1 + 0x234), lVar18 != 0)) {
      bVar5 = *(int *)(lVar18 + 0x270) == 0x93;
    }
  }
  lVar18 = *(long *)(*(long *)(lVar9 + 0x220) + (ulong)(1 < *(uint *)(lVar9 + 0x218)) * 8);
  if (lVar18 != 0) {
    local_434 = 0;
    local_440 = CONCAT22(local_440._2_2_,0x100);
    local_43c = 0;
    local_420 = 0;
    puStack_3f8 = local_3ec;
    local_41c = 0;
    local_408 = 0xffffffff;
    local_3f0 = 0x40;
    local_3ad = 0;
    local_3ec[0] = 0;
    local_418 = 0xffffffff;
    uStack_410 = 0xffffffff00000000;
    local_400 = PTR_DAT_04bb2bc0 + 0x10;
    local_398 = 0x40;
    local_355 = 0;
    local_394[0] = 0;
    puStack_3a0 = local_394;
    local_430 = PTR_DAT_04bb2e00 + 0x10;
    local_2b8 = local_2ac;
    local_2ac[0] = 0;
    local_310 = local_304;
    local_304[0] = 0;
    local_340 = 0;
    local_338 = 0;
    local_334 = 0;
    local_1d0 = local_1c4;
    local_1c4[0] = 0;
    local_228 = local_21c;
    local_21c[0] = 0;
    local_330 = 0xffffffff;
    local_328 = 0xffffffff00000000;
    local_320 = 0xffffffff;
    local_308 = 0x40;
    local_2c5 = 0;
    local_2b0 = 0x40;
    local_26d = 0;
    local_350 = 0;
    local_258 = 0;
    local_250 = 0;
    local_24c = 0;
    local_248 = 0xffffffff;
    local_240 = 0xffffffff00000000;
    local_238 = 0xffffffff;
    local_220 = 0x40;
    local_1dd = 0;
    local_1c8 = 0x40;
    local_185 = 0;
    local_268 = 0;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_158 = 0x40;
    local_115 = 0;
    local_100 = 0x40;
    local_bd = 0;
    uStack_428 = 0;
    local_160 = local_154;
    local_154[0] = 0;
    local_108 = local_fc;
    local_fc[0] = 0;
    local_b0 = *(int *)PTR_DAT_04bc0b30;
    local_ac = 0;
    *(int *)PTR_DAT_04bc0b30 = local_b0 + 1;
    local_b8 = PTR_DAT_04bc0a78 + 0x10;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_448 = PTR_DAT_04bc0bf0 + 0x10;
    local_3a8 = local_400;
    local_348 = local_430;
    local_318 = local_400;
    local_2c0 = local_400;
    local_260 = local_430;
    local_230 = local_400;
    local_1d8 = local_400;
    local_168 = local_400;
    local_110 = local_400;
    if (!bVar5) {
      local_550 = 0xffffffff;
      uStack_548 = 0xffffffff00000000;
      puStack_530 = local_524;
      puStack_560 = local_488;
      puStack_4d8 = local_4cc;
      local_554 = 0;
      local_558 = 0x13;
      local_540 = 0xffffffff;
      local_528 = 0x40;
      local_4e5 = 0;
      local_524[0] = 0;
      local_4d0 = 0x40;
      local_48d = 0;
      local_4cc[0] = 0;
      local_568 = PTR_DAT_04bc0bc0 + 0x10;
      uStack_468 = 0;
      puVar3 = &uStack_462;
      if (&uStack_462 <= local_488 + 2) {
        puVar3 = (undefined2 *)(local_488 + 2);
      }
      local_478 = 0;
      uStack_472 = 0;
      uStack_470 = 0;
      local_46a = 0;
      local_488 = (undefined1  [8])0x0;
      uStack_480 = 0;
      uStack_47a = 0;
      local_538 = local_400;
      local_4e0 = local_400;
      memset(puStack_560,0,
             (ulong)((long)puVar3 + (-0xe1 - (long)&local_568)) & 0xfffffffffffffffc | 2);
      local_460 = local_460 & 0xffffffff00000000;
      FUN_01be4af0(&local_568,**(undefined4 **)PTR_DAT_04bb3448,param_2 + 1,1,0,0);
      local_460 = CONCAT44(local_460._4_4_,param_2 + 1);
      FUN_01bea4e8(&local_448,lVar18,&local_568);
      FUN_01bea9c8(&local_448);
    }
    FUN_01be9eb8(&local_448);
  }
  plVar16 = *(long **)(*(long *)(lVar9 + 0x230) + (ulong)(4 < *(uint *)(lVar9 + 0x228)) * 0x20);
  if (plVar16 != (long *)0x0) {
    local_440 = 0x14;
    uVar6 = param_2 + 8;
    if (!bVar5) {
      uVar6 = param_2;
    }
    local_448 = puVar17 + 0x10;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
    (**(code **)(plVar16[3] + 0x158))((float)(int)(uVar6 + 1),plVar16[1]);
  }
  uVar6 = *(uint *)(param_1 + 0x248);
  if (((int)uVar6 < 0) || (*(int *)(param_1 + 0x230) <= (int)uVar6)) {
LAB_02e7e1ec:
    if (param_2 < *(uint *)(param_1 + 0x430)) {
      plVar16 = (long *)(param_1 + 0x438);
      goto LAB_02e7e1fc;
    }
LAB_02e7e208:
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x220;
    uVar1 = uVar6 + 1 & 3;
    if (2 < uVar6) {
      uVar6 = uVar6 + 1 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar9 = *(long *)(lVar9 + 8);
    }
    if (((lVar9 == 0) || (lVar9 = lVar9 - *(int *)(param_1 + 0x234), lVar9 == 0)) ||
       (*(int *)(lVar9 + 0x270) != 0x93)) goto LAB_02e7e1ec;
    if (*(uint *)(param_1 + 0x790) <= param_2) goto LAB_02e7e208;
    plVar16 = (long *)(param_1 + 0x798);
LAB_02e7e1fc:
    lVar9 = *(long *)(*plVar16 + (long)(int)param_2 * 8);
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x210) + 0x5f8);
  plVar16 = *(long **)(*(long *)(lVar18 + 0x230) + (ulong)(2 < *(uint *)(lVar18 + 0x228)) * 0x10);
  if (plVar16 != (long *)0x0) {
    local_440 = 0x14;
    local_448 = puVar17 + 0x10;
    uVar21 = 0x3f800000;
    if (**(char **)(lVar9 + 0x20) == '\0') {
      uVar21 = 0;
    }
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
    (**(code **)(plVar16[3] + 0x158))(uVar21,plVar16[1]);
  }
  if (**(char **)(lVar9 + 0x20) != '\0') {
    local_90 = PTR_DAT_04bb2020 + 0x10;
    pcStack_88 = "HotelRoomSelectEditVisitList";
    lVar18 = *(long *)(*(long *)(lVar18 + 0x220) + (ulong)(4 < *(uint *)(lVar18 + 0x218)) * 0x20);
    if (lVar18 != 0) {
      local_434 = 0;
      local_43c = 0;
      local_440 = CONCAT22(local_440._2_2_,0x100);
      local_420 = 0;
      puStack_3f8 = local_3ec;
      local_41c = 0;
      local_408 = 0xffffffff;
      local_3f0 = 0x40;
      local_3ad = 0;
      local_3ec[0] = 0;
      local_418 = 0xffffffff;
      uStack_410 = 0xffffffff00000000;
      puVar17 = PTR_DAT_04bb2bc0 + 0x10;
      local_398 = 0x40;
      local_355 = 0;
      local_394[0] = 0;
      puStack_3a0 = local_394;
      local_430 = PTR_DAT_04bb2e00 + 0x10;
      local_340 = 0;
      local_2b8 = local_2ac;
      local_2ac[0] = 0;
      local_310 = local_304;
      local_304[0] = 0;
      local_1d0 = local_1c4;
      local_1c4[0] = 0;
      local_338 = 0;
      local_334 = 0;
      local_228 = local_21c;
      local_21c[0] = 0;
      local_330 = 0xffffffff;
      local_328 = 0xffffffff00000000;
      local_320 = 0xffffffff;
      local_308 = 0x40;
      local_2c5 = 0;
      local_2b0 = 0x40;
      local_26d = 0;
      local_350 = 0;
      local_258 = 0;
      local_250 = 0;
      local_24c = 0;
      local_248 = 0xffffffff;
      local_240 = 0xffffffff00000000;
      local_238 = 0xffffffff;
      local_220 = 0x40;
      local_1dd = 0;
      local_1c8 = 0x40;
      local_185 = 0;
      local_268 = 0;
      local_170 = 0;
      local_178 = 0;
      local_180 = 0;
      local_158 = 0x40;
      local_115 = 0;
      local_100 = 0x40;
      local_bd = 0;
      uStack_428 = 0;
      local_160 = local_154;
      local_154[0] = 0;
      local_108 = local_fc;
      local_fc[0] = 0;
      local_b0 = *(int *)PTR_DAT_04bc0b30;
      local_ac = 0;
      local_b8 = PTR_DAT_04bc0a78 + 0x10;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      pcVar12 = *(char **)(lVar9 + 0x40);
      local_448 = PTR_DAT_04bc0bf0 + 0x10;
      *(int *)PTR_DAT_04bc0b30 = local_b0 + 1;
      local_400 = puVar17;
      local_3a8 = puVar17;
      local_348 = local_430;
      local_318 = puVar17;
      local_2c0 = puVar17;
      local_260 = local_430;
      local_230 = puVar17;
      local_1d8 = puVar17;
      local_168 = puVar17;
      local_110 = puVar17;
      if (*pcVar12 == '\0') {
        FUN_01bea210(&local_448,lVar18,&local_90,&DAT_056a0f28);
        (**(code **)(*(long *)(lVar9 + 0x18) + 0x18))(lVar9 + 0x18);
        uVar21 = *(undefined8 *)(lVar9 + 0x20);
        local_558 = 0x20;
        puStack_530 = local_524;
        local_554 = 0;
        puStack_4d8 = local_4cc;
        puStack_560 = local_488;
        local_550 = 0xffffffff;
        uStack_548 = 0xffffffff00000000;
        local_540 = 0xffffffff;
        local_528 = 0x40;
        local_4e5 = 0;
        local_524[0] = 0;
        local_4d0 = 0x40;
        local_48d = 0;
        local_4cc[0] = 0;
        local_568 = PTR_DAT_04bb4e10 + 0x10;
        ppuVar2 = &local_448;
        if (&local_448 <= local_488 + 2) {
          ppuVar2 = (undefined **)(local_488 + 2);
        }
        local_458 = 0;
        uStack_450 = 0;
        uStack_468 = 0;
        uStack_462 = 0;
        local_460 = 0;
        local_478 = 0;
        uStack_472 = 0;
        uStack_470 = 0;
        local_46a = 0;
        local_488 = (undefined1  [8])0x0;
        uStack_480 = 0;
        uStack_47a = 0;
        local_538 = puVar17;
        local_4e0 = puVar17;
        memset(puStack_560,0,(size_t)((long)ppuVar2 + (-0xe0 - (long)&local_568)));
        FUN_01c0e6b4(&local_568,uVar21,PTR_DAT_04bb2df0);
        FUN_01bae5d0(&local_b8,&local_568,0);
      }
      else {
        FUN_01bea210(&local_448,lVar18,&local_90,&DAT_056a0f98);
      }
      FUN_01bea9c8(&local_448);
      FUN_01be9eb8(&local_448);
      puVar17 = PTR_DAT_04bc4f00;
    }
    uVar6 = *(uint *)(param_1 + 0x248);
    if (((int)uVar6 < 0) || (*(int *)(param_1 + 0x230) <= (int)uVar6)) {
LAB_02e7e614:
      piVar11 = (int *)(param_1 + 0x430);
    }
    else {
      lVar9 = param_1 + 0x220;
      uVar1 = uVar6 + 1 & 3;
      if (2 < uVar6) {
        uVar6 = uVar6 + 1 & 0xfffffffc;
        do {
          uVar6 = uVar6 - 4;
          lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
        } while (uVar6 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar9 = *(long *)(lVar9 + 8);
      }
      if ((lVar9 == 0) || (lVar9 = lVar9 - *(int *)(param_1 + 0x234), lVar9 == 0))
      goto LAB_02e7e614;
      piVar11 = (int *)(param_1 + 0x790);
      if (*(int *)(lVar9 + 0x270) != 0x93) {
        piVar11 = (int *)(param_1 + 0x430);
      }
    }
    if ((int)param_2 < *piVar11) {
      if (**(char **)(*(long *)(*(long *)(piVar11 + 2) + (long)(int)param_2 * 8) + 0x40) == '\0') {
        lVar9 = *(long *)(param_1 + 0x1d110);
        plVar16 = (long *)(param_1 + 0x1ca50);
        *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(param_1 + 0x1cf10);
        *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(param_1 + 0x1cf18);
        *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(param_1 + 0x1cf20);
        uVar6 = *(uint *)(param_1 + 0x248);
        if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x230))) {
          lVar9 = param_1 + 0x220;
          uVar1 = uVar6 + 1 & 3;
          if (2 < uVar6) {
            uVar6 = uVar6 + 1 & 0xfffffffc;
            do {
              uVar6 = uVar6 - 4;
              lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
            } while (uVar6 != 0);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            lVar9 = *(long *)(lVar9 + 8);
          }
          if (((lVar9 != 0) && (lVar9 = lVar9 - *(int *)(param_1 + 0x234), lVar9 != 0)) &&
             (*(int *)(lVar9 + 0x270) == 0x93)) {
            plVar16 = (long *)(param_1 + 0x1cc30);
          }
        }
        uVar21 = 0;
        puVar15 = *(undefined8 **)(*plVar16 + (long)(int)param_2 * 8);
        uVar14 = *puVar15;
        uVar13 = *(undefined8 *)((long)puVar15 + 5);
        *(undefined8 *)(param_1 + 0x1d0e0) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x1d0c8) = uVar14;
        *(undefined8 *)(param_1 + 0x1d0cd) = uVar13;
        *(undefined8 *)(param_1 + 0x1d0e0) = puVar15[3];
        *(undefined4 *)(param_1 + 0x1d0e8) = *(undefined4 *)(puVar15 + 4);
        uVar19 = *(undefined4 *)(puVar15 + 5);
        *(undefined1 *)(param_1 + 0x1d0d4) = 0;
        *(undefined4 *)(param_1 + 0x1d0f0) = uVar19;
      }
      else {
        uVar21 = 0x3f800000;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1d0c8) = 0;
      uVar21 = 0;
      *(undefined4 *)(param_1 + 0x1d0d0) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1d0d4) = 0;
      *(undefined8 *)(param_1 + 0x1d0e0) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x1d0e8) = 0;
      *(undefined4 *)(param_1 + 0x1d0f0) = 0;
    }
    lVar18 = *(long *)(*(long *)(param_1 + 0x210) + 0x5f8);
    lVar9 = 0x28;
    if (*(uint *)(lVar18 + 0x228) < 6) {
      lVar9 = 0;
    }
    plVar16 = *(long **)(*(long *)(lVar18 + 0x230) + lVar9);
    if (plVar16 != (long *)0x0) {
      local_448 = puVar17 + 0x10;
      local_440 = 0x14;
      (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
      (**(code **)(plVar16[3] + 0x158))(uVar21,plVar16[1]);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x248);
  if (((int)uVar6 < 0) || (*(int *)(param_1 + 0x230) <= (int)uVar6)) {
LAB_02e7e830:
    if (param_2 < *(uint *)(param_1 + 0x430)) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x438) + (long)(int)param_2 * 8);
      cVar4 = *(char *)(lVar9 + 9);
    }
    else {
      lVar9 = 0;
      cVar4 = DAT_00000009;
    }
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    lVar9 = param_1 + 0x220;
    uVar1 = uVar6 + 1 & 3;
    if (2 < uVar6) {
      uVar6 = uVar6 + 1 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar9 = *(long *)(lVar9 + 8);
    }
    if (((lVar9 == 0) || (lVar9 = lVar9 - *(int *)(param_1 + 0x234), lVar9 == 0)) ||
       (*(int *)(lVar9 + 0x270) != 0x93)) goto LAB_02e7e830;
    if (param_2 < *(uint *)(param_1 + 0x790)) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x798) + (long)(int)param_2 * 8);
    }
    else {
      lVar9 = 0;
    }
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x210) + 0x5f8);
  local_80 = *(int *)(lVar9 + 0xc);
  if (local_80 == -1) {
    if (*(char *)(lVar9 + 9) != '\0') {
      bVar5 = false;
      iVar7 = -1;
      goto LAB_02e7e88c;
    }
    local_80 = **(int **)(*(long *)(param_1 + 0x1d1c8) + (long)(int)param_2 * 8);
  }
  bVar5 = true;
  iVar7 = local_80;
LAB_02e7e88c:
  if ((int)*(uint *)(param_1 + 0x1d120) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    uVar6 = 0xffffffff;
    do {
      if (iVar7 == **(int **)(*(long *)(param_1 + 0x1d128) + uVar8 * 8)) {
        uVar6 = (uint)uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (*(uint *)(param_1 + 0x1d120) != uVar8);
  }
  uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  lVar9 = 0x30;
  if (*(uint *)(lVar18 + 0x228) < 7) {
    lVar9 = 0;
  }
  plVar16 = *(long **)(*(long *)(lVar18 + 0x230) + lVar9);
  if (plVar16 != (long *)0x0) {
    local_440 = 0x14;
    local_448 = PTR_DAT_04bc4f00 + 0x10;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
    (**(code **)(plVar16[3] + 0x158))((float)(int)uVar6,plVar16[1]);
  }
  if (((uVar6 < 8) &&
      (lVar9 = *(long *)(*(long *)(param_1 + 0x210) + (ulong)uVar6 * 8 + 0x600), lVar9 != 0)) &&
     (plVar16 = (long *)**(undefined8 **)(lVar9 + 0x230), plVar16 != (long *)0x0)) {
    local_440 = 0x14;
    uVar21 = 0;
    if (!bVar5) {
      uVar21 = 0x3f800000;
    }
    local_448 = PTR_DAT_04bc4f00 + 0x10;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_448);
    (**(code **)(plVar16[3] + 0x158))(uVar21,plVar16[1]);
  }
  local_440 = CONCAT22(local_440._2_2_,0x100);
  local_434 = 0;
  local_420 = 0;
  local_41c = 0;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_408 = 0xffffffff;
  local_418 = 0xffffffff;
  uStack_410 = 0xffffffff00000000;
  local_3f0 = 0x40;
  local_3ad = 0;
  local_3ec[0] = 0;
  pcStack_88 = "HotelRoomSelectEditVisitList";
  local_43c = 0;
  puStack_3f8 = local_3ec;
  local_400 = PTR_DAT_04bb2bc0 + 0x10;
  local_398 = 0x40;
  local_355 = 0;
  local_394[0] = 0;
  puStack_3a0 = local_394;
  local_430 = PTR_DAT_04bb2e00 + 0x10;
  local_2b8 = local_2ac;
  local_2ac[0] = 0;
  local_310 = local_304;
  local_304[0] = 0;
  local_328 = 0xffffffff00000000;
  local_240 = 0xffffffff00000000;
  local_154[0] = 0;
  local_340 = 0;
  local_228 = local_21c;
  local_21c[0] = 0;
  local_1d0 = local_1c4;
  local_1c4[0] = 0;
  local_338 = 0;
  local_334 = 0;
  local_330 = 0xffffffff;
  local_320 = 0xffffffff;
  local_308 = 0x40;
  local_2c5 = 0;
  local_2b0 = 0x40;
  local_26d = 0;
  local_350 = 0;
  local_258 = 0;
  local_250 = 0;
  local_24c = 0;
  local_248 = 0xffffffff;
  local_238 = 0xffffffff;
  local_220 = 0x40;
  local_1dd = 0;
  local_1c8 = 0x40;
  local_185 = 0;
  local_268 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_158 = 0x40;
  local_115 = 0;
  local_100 = 0x40;
  local_bd = 0;
  uStack_428 = 0;
  local_160 = local_154;
  local_108 = local_fc;
  local_fc[0] = 0;
  local_b0 = *(int *)PTR_DAT_04bc0b30;
  local_ac = 0;
  local_b8 = PTR_DAT_04bc0a78 + 0x10;
  local_a8 = 0;
  local_448 = PTR_DAT_04bc0bf0 + 0x10;
  local_a0 = 0;
  local_98 = 0;
  lVar10 = *(long *)(lVar18 + 0x220);
  lVar9 = 0x30;
  if (*(uint *)(lVar18 + 0x218) < 7) {
    lVar9 = 0;
  }
  *(int *)PTR_DAT_04bc0b30 = local_b0 + 1;
  lVar9 = *(long *)(lVar10 + lVar9);
  local_3a8 = local_400;
  local_348 = local_430;
  local_318 = local_400;
  local_2c0 = local_400;
  local_260 = local_430;
  local_230 = local_400;
  local_1d8 = local_400;
  local_168 = local_400;
  local_110 = local_400;
  if (lVar9 != 0) {
    if (bVar5) {
      local_554 = 0;
      local_558 = 0xb;
      local_550 = 0xffffffff;
      uStack_548 = 0xffffffff00000000;
      puStack_530 = local_524;
      puStack_560 = local_488;
      local_540 = 0xffffffff;
      local_528 = 0x40;
      local_4e5 = 0;
      local_524[0] = 0;
      local_538 = PTR_DAT_04bb2bc0 + 0x10;
      local_4d0 = 0x40;
      local_48d = 0;
      local_4cc[0] = 0;
      puStack_4d8 = local_4cc;
      local_568 = PTR_DAT_04bb5128 + 0x10;
      local_478 = 0;
      local_488 = (undefined1  [8])0x0;
      uStack_480 = 0;
      uStack_47a = 0;
      puVar3 = &uStack_472;
      if (&uStack_472 <= local_488 + 2) {
        puVar3 = (undefined2 *)(local_488 + 2);
      }
      local_4e0 = local_538;
      memset(puStack_560,0,(long)puVar3 + (-0xe1 - (long)&local_568) & 0xfffffffffffffffcU | 2);
      FUN_01c11a38(&local_568,&local_80);
      FUN_01bea210(&local_448,lVar9,&local_90,&DAT_056a0f48);
      if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
        FUN_01bb25c8(PTR_DAT_04bc0a80);
        __cxa_guard_release(PTR_DAT_04bc0a88);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
        uVar8 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar8 * 4) == 0x73) goto LAB_02e7ec8c;
          uVar8 = uVar8 + 1;
        } while (*(uint *)PTR_DAT_04bc0a80 != uVar8);
      }
      uVar8 = 0;
LAB_02e7ec8c:
      local_7c[0] = (undefined4)uVar8;
      FUN_01bae480(&local_b8,&local_568,0,local_7c,0);
    }
    else {
      FUN_01bea210(&local_448,lVar9,&local_90,&DAT_056a0f58);
    }
    FUN_01bea9c8(&local_448);
  }
  FUN_01be9eb8(&local_448);
  return;
}

