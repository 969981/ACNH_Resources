
void FUN_03111440(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 **ppuVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined *local_4b0;
  undefined1 *puStack_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 local_490;
  undefined1 *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined1 *local_470;
  undefined8 *local_468;
  undefined1 local_460 [8];
  undefined8 local_458;
  undefined4 local_450;
  undefined1 local_44c [47];
  undefined1 local_41d;
  undefined1 *local_418;
  undefined8 *local_410;
  undefined1 local_408 [8];
  undefined8 local_400;
  undefined4 local_3f8;
  undefined1 local_3f4 [47];
  undefined1 local_3c5;
  undefined8 local_3c0;
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
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
  undefined8 *local_2b0;
  undefined1 *local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
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
  undefined1 local_1d0 [8];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
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
  undefined *local_d0;
  char *pcStack_c8;
  undefined8 *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 local_6d;
  
  lVar17 = *(long *)(param_1 + 0x210);
  plVar16 = *(long **)(lVar17 + 0x260);
  if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
    local_4a0 = (undefined8 *)(PTR_DAT_04bc4f00 + 0x10);
    local_498 = (undefined8 *)CONCAT44(local_498._4_4_,0x14);
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_4a0);
    (**(code **)(plVar16[3] + 0x158))(0,plVar16[1]);
    lVar17 = *(long *)(param_1 + 0x210);
  }
  *(undefined8 *)(param_1 + 0x220) = *param_2;
  *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x5e8) = param_2[0xe];
  if (*(long **)(lVar17 + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(lVar17 + 0x1b0) + 0x50))();
    (**(code **)(**(long **)(lVar17 + 0x1b0) + 0x20))(*(long **)(lVar17 + 0x1b0),0);
    lVar17 = *(long *)(param_1 + 0x210);
  }
  lVar17 = *(long *)(lVar17 + 0x270);
  if (param_2[0xd] != 0) {
    lVar17 = param_2[0xd];
  }
  if (lVar17 == 0) {
    bVar7 = false;
    goto LAB_03111bf4;
  }
  plVar16 = *(long **)(lVar17 + 0x48);
  if (plVar16[1] != 0) {
    local_4a0 = (undefined8 *)(PTR_DAT_04bc0878 + 0x10);
    local_498 = (undefined8 *)CONCAT44(local_498._4_4_,9);
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_4a0);
    (**(code **)(plVar16[3] + 0x5e0))(plVar16[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar17);
  }
  puVar3 = PTR_DAT_04bb43c0;
  puVar5 = param_2 + 1;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(puVar5);
  if (*(long *)puVar3 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_498 = (undefined8 *)((ulong)local_498 & 0xffffffff00000000);
      uVar11 = (ulong)local_480 >> 0x20;
      local_480 = CONCAT44((uint)uVar11 & 0xffffff00,0x80);
      local_478 = 0xffffffff;
      local_470 = &DAT_ffffffff00000000;
      local_458 = local_44c;
      local_4a0 = (undefined8 *)(PTR_DAT_04bc0ce0 + 0x10);
      local_468 = (undefined8 *)CONCAT44(local_468._4_4_,0xffffffff);
      local_488 = local_3b0;
      local_450 = 0x40;
      local_410._0_4_ = (uint)(uint3)local_410;
      local_44c[0] = 0;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      local_400 = local_3f4;
      local_3f8 = 0x40;
      local_3b8[3] = 0;
      local_3f4[0] = 0;
      puVar2 = (undefined8 *)(PTR_DAT_04bb6b38 + 0x10);
      local_2c0 = 0;
      uStack_2b8 = 0;
      ppuVar12 = &local_2b0;
      if (&local_2b0 <= local_3b0 + 2) {
        ppuVar12 = (undefined8 **)(local_3b0 + 2);
      }
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
      local_348 = 0;
      local_360 = 0;
      local_358 = 0;
      local_370 = 0;
      local_368 = 0;
      local_380 = 0;
      local_378 = 0;
      local_390 = 0;
      local_388 = 0;
      local_3a0 = 0;
      local_398 = 0;
      local_3b0 = (undefined1  [8])0x0;
      local_3a8 = 0;
      local_490 = puVar2;
      local_460 = (undefined1  [8])puVar1;
      local_408 = (undefined1  [8])puVar1;
      memset(local_488,0,(long)ppuVar12 + (-0xe0 - (long)&local_490));
      local_29c = 0;
      local_2a0 = 0x80;
      local_2a8 = local_1d0;
      local_290 = 0xffffffff00000000;
      local_278 = local_26c;
      local_26c[0] = 0;
      local_270 = 0x40;
      local_220 = local_214;
      local_214[0] = 0;
      local_218 = 0x40;
      ppuVar4 = &local_d0;
      if (&local_d0 <= local_1d0 + 2) {
        ppuVar4 = (undefined **)(local_1d0 + 2);
      }
      local_298 = 0xffffffff;
      local_288 = 0xffffffff;
      local_22d = 0;
      local_1d5 = 0;
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
      local_1b0 = 0;
      local_1b8 = 0;
      local_1c0 = 0;
      local_1c8 = 0;
      local_1d0 = (undefined1  [8])0x0;
      local_2b0 = puVar2;
      local_280 = puVar1;
      local_228 = puVar1;
      memset(local_2a8,0,(long)ppuVar4 + (-0xe0 - (long)&local_2b0));
      FUN_01c0bafc(&local_4a0,puVar5,PTR_DAT_04bb2df0);
      local_b8 = param_2[1];
      lVar18 = *(long *)puVar3;
      local_b0 = (uint *)0x0;
      local_c0 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
      uVar8 = FUN_0277d6c4(&local_b8);
      puVar1 = PTR_DAT_04bb2020;
      if (*(long *)puVar3 == 0) {
LAB_0311190c:
        local_4b0 = puVar1 + 0x10;
        pcStack_c8 = "PARTS_NameWindow";
        puStack_4a8 = &DAT_040c47ff;
        local_d0 = local_4b0;
        FUN_01bea210(param_1 + 0x228,lVar17,&local_d0,&local_4b0);
        if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
          FUN_01bb25c8(PTR_DAT_04bc0a80);
          __cxa_guard_release(PTR_DAT_04bc0a88);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
          uVar11 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar11 * 4) == 0x7d) goto LAB_0311198c;
            uVar11 = uVar11 + 1;
          } while (*(uint *)PTR_DAT_04bc0a80 != uVar11);
        }
        uVar11 = 0;
LAB_0311198c:
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,(int)uVar11);
        uVar13 = 0;
      }
      else {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((*(uint *)(lVar18 + 0x1d8) <= uVar8) ||
           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0311190c;
        lVar18 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(puVar5);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((*(uint *)(lVar18 + 0x1d8) <= uVar8) ||
           (puVar14 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8),
           puVar14 == (uint *)0x0)) goto LAB_0311190c;
        uVar8 = *puVar14;
        local_b0 = puVar14;
        if ((uVar8 == 0) || (puVar14 == (uint *)(ulong)uVar8)) goto LAB_0311190c;
        puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
        if ((*puVar15 == 0) ||
           ((uVar8 = puVar15[1], uVar8 == 0 || ((ulong)(ushort)puVar15[2] == 0))))
        goto LAB_0311190c;
        lVar18 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar15 + lVar18 + (ulong)(ushort)puVar15[2] * 8;
        if (lVar18 == 0) goto LAB_0311190c;
        uVar6 = 0;
        if ((ulong)uVar8 != 0) {
          uVar6 = (uint)((ulong)((long)puVar14 - lVar18) / (ulong)uVar8);
        }
        if (*puVar15 <= uVar6) {
          uVar6 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc00c8 <= uVar6) ||
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2) != 0x57))
        goto LAB_0311190c;
        puVar3 = puVar1 + 0x10;
        pcStack_c8 = "ConfirmedFruit";
        local_d0 = puVar3;
        uVar11 = FUN_0273f0a0(&local_d0);
        if ((uVar11 & 1) != 0) goto LAB_0311190c;
        pcStack_c8 = "MainScreen";
        puStack_4a8 = &DAT_040867f5;
        local_4b0 = puVar3;
        local_d0 = puVar3;
        FUN_01bea210(param_1 + 0x228,lVar17,&local_d0,&local_4b0);
        if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar10 != 0)) {
          FUN_01bb25c8(PTR_DAT_04bc0a80);
          __cxa_guard_release(PTR_DAT_04bc0a88);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
          uVar11 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar11 * 4) == 0x7d) goto LAB_03111e34;
            uVar11 = uVar11 + 1;
          } while (*(uint *)PTR_DAT_04bc0a80 != uVar11);
        }
        uVar11 = 0;
LAB_03111e34:
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,(int)uVar11);
        uVar13 = 1;
      }
      FUN_01baf140(param_1 + 0x5b8,&local_4a0,0,&local_d0,uVar13);
      bVar7 = true;
      *(undefined1 *)(param_1 + 0x5d1) = 1;
      goto LAB_03111bf4;
    }
  }
  if (param_2[3] == 0) {
    if (*(short *)(param_2 + 2) != *(short *)PTR_DAT_04bb3170) {
      uVar11 = (ulong)local_490 >> 0x20;
      local_490 = (undefined8 *)CONCAT44((uint)uVar11 & 0xffffff00,0x15);
      local_488 = &DAT_ffffffff;
      local_480 = 0xffffffff00000000;
      local_468 = (undefined8 *)(local_460 + 4);
      local_498 = &local_3c0;
      local_478 = CONCAT44(local_478._4_4_,0xffffffff);
      local_41d = 0;
      local_460._0_5_ = 0x40;
      local_470 = PTR_DAT_04bb2bc0 + 0x10;
      local_3c5 = 0;
      local_408._0_5_ = 0x40;
      local_410 = (undefined8 *)(local_408 + 4);
      local_398 = local_398 & 0xffffffffffff0000;
      local_3c0 = 0;
      local_4a0 = (undefined8 *)(PTR_DAT_04bc0ce8 + 0x10);
      local_3a8 = 0;
      local_3a0 = 0;
      local_3b8 = (undefined1  [8])0x0;
      local_3b0 = (undefined1  [8])0x0;
      uVar11 = (long)&local_398 + 2U;
      if ((long)&local_398 + 2U <= (long)&local_3c0 + 2U) {
        uVar11 = (long)&local_3c0 + 2U;
      }
      local_418 = local_470;
      memset(local_498,0,(uVar11 - (long)&local_4a0) - 0xe1 & 0xfffffffffffffff8 | 2);
      FUN_01c0cff4(&local_4a0,param_2 + 2);
      goto LAB_03111be0;
    }
    if (0xdb < *(uint *)((long)param_2 + 0x14)) {
      if (param_2[4] == 0) {
        if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
          bVar7 = false;
          if (*(short *)param_2[0x10] == 0) goto LAB_03111bf4;
          FUN_03112e44(&local_4a0);
          FUN_006f5580(&local_4a0,param_2 + 0xf);
          goto LAB_03111be0;
        }
        local_4a0 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
        local_b8 = param_2[7];
        local_498 = (undefined8 *)param_2[6];
        local_c0 = local_4a0;
        FUN_01bea210(param_1 + 0x228,lVar17,&local_4a0,&local_c0);
        plVar16 = param_2 + 8;
        uVar11 = (**(code **)(*plVar16 + 8))(plVar16);
        if ((uVar11 & 1) != 0) {
          (**(code **)*plVar16)(plVar16,param_1 + 0x5b8);
        }
      }
      else {
        FUN_01bea4e8(param_1 + 0x228,lVar17);
      }
      bVar7 = true;
      if (*(char *)(param_2 + 5) != '\0') {
        *(undefined1 *)(param_1 + 0x5d1) = 1;
      }
      goto LAB_03111bf4;
    }
    uVar9 = FUN_01afe978();
    local_4b0 = (undefined *)CONCAT44(local_4b0._4_4_,uVar9);
    local_488 = (undefined1 *)CONCAT35(local_488._5_3_,0x40);
    local_490 = (undefined8 *)local_3b8;
    local_480 = 0xffffffff;
    local_478 = 0xffffffff00000000;
    ppuVar12 = &local_498;
    local_470 = (undefined1 *)CONCAT44(local_470._4_4_,0xffffffff);
    local_460 = (undefined1  [8])((long)&local_458 + 4);
    local_418._0_4_ = (uint)(uint3)local_418;
    local_c0 = (undefined8 *)(PTR_DAT_04bb2bc0 + 0x10);
    local_458 = (undefined1 *)CONCAT35(local_458._5_3_,0x40);
    local_3c0._0_4_ = (uint)(uint3)local_3c0;
    local_400 = (undefined1 *)CONCAT35(local_400._5_3_,0x40);
    local_408 = (undefined1  [8])((long)&local_400 + 4);
    local_498 = (undefined8 *)(PTR_DAT_04bb6b18 + 0x10);
    local_348 = 0;
    local_340 = 0;
    local_358 = 0;
    local_350 = 0;
    local_368 = 0;
    local_360 = 0;
    puVar5 = &uStack_338;
    if (&uStack_338 <= local_3b8 + 2) {
      puVar5 = (undefined8 *)(local_3b8 + 2);
    }
    local_378 = 0;
    local_370 = 0;
    local_388 = 0;
    local_380 = 0;
    local_398 = 0;
    local_390 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_3b8 = (undefined1  [8])0x0;
    local_3b0 = (undefined1  [8])0x0;
    local_468 = local_c0;
    local_410 = local_c0;
    memset(local_490,0,(long)puVar5 + (-0xe0 - (long)ppuVar12));
    local_b8 = (long)&local_b0 + 4;
    local_6d = 0;
    local_b0 = (uint *)CONCAT35(local_b0._5_3_,0x40);
    local_4a0 = (undefined8 *)(PTR_DAT_04bc0d28 + 0x10);
    FUN_038d1270(&local_c0,"Cmn_%04d",uVar9);
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_c8 = "STR_Remake_CmnFabricCategory";
    FUN_006f50a0(ppuVar12,&local_d0,&local_c0,0);
  }
  else {
    FUN_01c0ccc0(&local_4a0);
LAB_03111be0:
    ppuVar12 = &local_4a0;
  }
  FUN_01bea4e8(param_1 + 0x228,lVar17,ppuVar12);
  bVar7 = true;
LAB_03111bf4:
  plVar16 = *(long **)(*(long *)(param_1 + 0x210) + 0x250);
  if ((plVar16 == (long *)0x0) || (plVar16[1] == 0)) {
    if (!bVar7) {
      *(undefined8 *)(param_1 + 0x220) = 0;
    }
  }
  else if (bVar7) {
    local_4a0 = (undefined8 *)(PTR_DAT_04bc4e68 + 0x10);
    local_498 = (undefined8 *)CONCAT44(local_498._4_4_,6);
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_4a0);
    (**(code **)(plVar16[3] + 0x1b8))(plVar16[1]);
  }
  else {
    local_4a0 = (undefined8 *)(PTR_DAT_04bc4f00 + 0x10);
    local_498._0_4_ = 6;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_4a0);
    (**(code **)(plVar16[3] + 0x78))(plVar16[1],1);
    local_498 = (undefined8 *)CONCAT44(local_498._4_4_,1);
    local_4a0 = (undefined8 *)(PTR_DAT_04bc4e68 + 0x10);
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_4a0);
    (**(code **)(plVar16[3] + 400))(0x3f800000,plVar16[1]);
  }
  *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x200) * 4 + 0x1f0) = 3;
  return;
}

