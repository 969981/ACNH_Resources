
/* WARNING: Removing unreachable block (ram,0x029021e4) */
/* WARNING: Removing unreachable block (ram,0x029021f0) */

void FUN_02901f90(undefined2 *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  uint *puVar19;
  undefined8 ****ppppuVar20;
  ulong uVar21;
  uint *puVar22;
  undefined2 *puVar23;
  undefined8 uVar24;
  undefined2 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  long lVar28;
  undefined4 *puVar29;
  long *plVar30;
  int *piVar31;
  long lVar32;
  long lVar33;
  undefined2 *puVar34;
  int iVar35;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined *local_5f8;
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  uint *local_5e8;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined1 auStack_5d8 [8];
  undefined *local_5d0;
  undefined8 uStack_5c8;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined *local_5b8;
  int local_5b0;
  int iStack_5ac;
  undefined *local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  uint *local_598;
  int local_590 [2];
  undefined8 *local_588;
  undefined8 ****local_580;
  undefined8 ****ppppuStack_578;
  undefined8 ****local_570;
  undefined8 ****local_568;
  undefined8 ***local_560;
  undefined8 **local_558;
  undefined8 *local_550;
  undefined8 local_548;
  undefined8 local_540 [6];
  int local_510 [2];
  long *local_508;
  undefined8 ****local_500;
  undefined8 ****ppppuStack_4f8;
  undefined8 ****local_4f0;
  undefined8 ****local_4e8;
  undefined8 ***local_4e0;
  undefined8 **local_4d8;
  undefined8 *local_4d0;
  undefined8 local_4c8;
  long local_4c0 [6];
  undefined8 local_490;
  undefined8 ****local_488;
  undefined8 ****local_480;
  undefined8 ****ppppuStack_478;
  undefined8 ****local_470;
  undefined8 ****local_468;
  undefined8 ****local_460;
  undefined8 ****local_458;
  undefined8 ****local_450;
  undefined8 ****local_448;
  undefined8 ****local_440;
  undefined8 ****local_438;
  undefined8 ****local_430;
  undefined8 ****local_428;
  undefined8 ****local_420;
  undefined8 ****local_418;
  undefined8 ****local_410;
  undefined8 ****local_408;
  undefined8 ****local_400;
  undefined8 ****local_3f8;
  undefined8 ****local_3f0;
  undefined8 ****local_3e8;
  undefined8 ****local_3e0;
  undefined8 ****local_3d8;
  undefined8 ****local_3d0;
  undefined8 ****local_3c8;
  undefined8 ****local_3c0;
  undefined8 ****local_3b8;
  undefined8 ****local_3b0;
  undefined8 ****local_3a8;
  undefined8 ****local_3a0;
  undefined8 ****local_398;
  undefined8 ****local_390;
  undefined8 ****local_388;
  undefined8 ****local_380;
  undefined8 ****local_378;
  undefined8 ****local_370;
  undefined8 ****local_368;
  undefined8 ****local_360;
  undefined8 ****local_358;
  undefined8 ****local_350;
  undefined8 ****local_348;
  undefined8 ****local_340;
  undefined8 ****local_338;
  undefined8 ****local_330;
  undefined8 ****local_328;
  undefined8 ****local_320;
  undefined8 ****local_318;
  undefined8 ****local_310;
  undefined8 ****local_308;
  undefined8 ****local_300;
  undefined8 ****local_2f8;
  undefined8 ****local_2f0;
  undefined8 ****local_2e8;
  undefined8 ****local_2e0;
  undefined8 ****local_2d8;
  undefined8 ****local_2d0;
  undefined8 ****local_2c8;
  undefined8 ****local_2c0;
  undefined8 ****local_2b8;
  undefined8 ****local_2b0;
  undefined8 ****local_2a8;
  undefined8 ****local_2a0;
  undefined8 ****local_298;
  undefined8 ***local_290;
  undefined8 **local_288;
  undefined8 *local_280;
  undefined8 local_278;
  undefined1 local_270 [516];
  uint local_6c [3];
  
  if ((param_2 & 1) == 0) {
    local_490 = 0;
    local_488 = (undefined8 ****)0x0;
    local_470 = &local_468;
    local_468 = &local_460;
    ppppuStack_478 = &local_470;
    local_460 = &local_458;
    local_458 = &local_450;
    local_278 = 0;
    local_450 = &local_448;
    local_448 = &local_440;
    local_440 = &local_438;
    local_438 = &local_430;
    local_430 = &local_428;
    local_428 = &local_420;
    local_420 = &local_418;
    local_418 = &local_410;
    local_410 = &local_408;
    local_400 = &local_3f8;
    local_3f0 = &local_3e8;
    local_408 = &local_400;
    local_3e0 = &local_3d8;
    local_3f8 = &local_3f0;
    local_3d0 = &local_3c8;
    local_3e8 = &local_3e0;
    local_3c0 = &local_3b8;
    local_3d8 = &local_3d0;
    local_3b0 = &local_3a8;
    local_3c8 = &local_3c0;
    local_3a0 = &local_398;
    local_3b8 = &local_3b0;
    local_390 = &local_388;
    local_3a8 = &local_3a0;
    local_380 = &local_378;
    local_398 = &local_390;
    local_370 = &local_368;
    local_388 = &local_380;
    local_360 = &local_358;
    local_378 = &local_370;
    local_350 = &local_348;
    local_368 = &local_360;
    local_340 = &local_338;
    local_358 = &local_350;
    local_330 = &local_328;
    local_348 = &local_340;
    local_320 = &local_318;
    local_338 = &local_330;
    local_310 = &local_308;
    local_328 = &local_320;
    local_300 = &local_2f8;
    local_318 = &local_310;
    local_2f0 = &local_2e8;
    local_308 = &local_300;
    local_2e0 = &local_2d8;
    local_2f8 = &local_2f0;
    local_2d0 = &local_2c8;
    local_2e8 = &local_2e0;
    local_2c0 = &local_2b8;
    local_2d8 = &local_2d0;
    local_2b0 = &local_2a8;
    local_2c8 = &local_2c0;
    local_2a0 = &local_298;
    local_2b8 = &local_2b0;
    local_290 = &local_288;
    local_2a8 = &local_2a0;
    local_288 = &local_280;
    local_298 = &local_290;
    local_280 = &local_278;
    if (local_270 != (undefined1 *)0x0) {
      local_490 = 0x4000000000;
      local_488 = (undefined8 ****)local_270;
    }
    iVar15 = 0;
    uVar18 = 0;
    local_480 = ppppuStack_478;
    do {
      ppppuVar20 = local_480;
      if (local_490._4_4_ <= iVar15) break;
      if (local_480 != (undefined8 ****)0x0) {
        local_480 = (undefined8 ****)*local_480;
      }
      *(undefined2 *)ppppuVar20 =
           *(undefined2 *)((long)param_1 + ((long)((ulong)uVar18 << 0x20) >> 0x1d));
      *(undefined1 *)((long)ppppuVar20 + 2) = *(undefined1 *)(param_1 + (long)(int)uVar18 * 4 + 1);
      *(undefined1 *)((long)ppppuVar20 + 3) =
           *(undefined1 *)((long)param_1 + (long)(int)uVar18 * 8 + 3);
      *(undefined4 *)((long)ppppuVar20 + 4) = *(undefined4 *)(param_1 + (long)(int)uVar18 * 4 + 2);
      iVar15 = (int)local_490;
      if ((int)local_490 < local_490._4_4_) {
        *(undefined8 *****)((long)local_488 + (long)(int)local_490 * 8) = ppppuVar20;
        iVar15 = (int)local_490 + 1;
        local_490 = CONCAT44(local_490._4_4_,iVar15);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x40);
    puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar17 = local_490 & 0xffffffff;
    if (1 < (int)local_490) {
      do {
        uVar14 = puVar19[3];
        uVar18 = *puVar19 ^ *puVar19 << 0xb;
        *puVar19 = puVar19[1];
        puVar19[1] = puVar19[2];
        uVar18 = uVar18 >> 8 ^ uVar14 >> 0x13 ^ uVar18 ^ uVar14;
        puVar19[2] = uVar14;
        puVar19[3] = uVar18;
        lVar28 = (uVar17 - 1 & 0xffffffff) * 8;
        uVar24 = *(undefined8 *)((long)local_488 + lVar28);
        uVar21 = uVar17 * uVar18 >> 0x1d & 0x7fffffff8;
        *(undefined8 *)((long)local_488 + lVar28) = *(undefined8 *)((long)local_488 + uVar21);
        *(undefined8 *)((long)local_488 + uVar21) = uVar24;
        bVar1 = 2 < uVar17;
        uVar17 = uVar17 - 1;
      } while (bVar1);
    }
    uVar18 = 0;
    uVar8 = *(undefined2 *)PTR_DAT_04bb37e0;
    uVar13 = PTR_DAT_04bb37e0[2];
    uVar7 = PTR_DAT_04bb37e0[3];
    uVar5 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    do {
      uVar17 = (ulong)uVar18;
      uVar18 = uVar18 + 1;
      puVar23 = (undefined2 *)((long)param_1 + ((long)(uVar17 << 0x20) >> 0x1d));
      *puVar23 = uVar8;
      *(undefined1 *)(puVar23 + 1) = uVar13;
      *(undefined1 *)((long)puVar23 + 3) = uVar7;
      *(undefined4 *)(puVar23 + 2) = uVar5;
    } while (uVar18 != 0x40);
    if ((int)local_490 != 0) {
      uVar17 = 0;
      lVar28 = (long)(int)local_490 << 3;
      puVar23 = param_1;
      do {
        puVar25 = *(undefined2 **)((long)local_488 + uVar17 * 8);
        puVar34 = puVar23;
        if (0x3f < uVar17) {
          puVar34 = param_1;
        }
        uVar17 = uVar17 + 1;
        puVar23 = puVar23 + 4;
        lVar28 = lVar28 + -8;
        *puVar34 = *puVar25;
        *(undefined1 *)(puVar34 + 1) = *(undefined1 *)(puVar25 + 1);
        *(undefined1 *)((long)puVar34 + 3) = *(undefined1 *)((long)puVar25 + 3);
        *(undefined4 *)(puVar34 + 2) = *(undefined4 *)(puVar25 + 2);
      } while (lVar28 != 0);
    }
  }
  else {
    local_490 = local_490 & 0xffffffff00000000;
    FUN_02900030(param_1,&local_490);
  }
  plVar30 = (long *)PTR_DAT_04bb43c0;
  local_490 = 0;
  local_488 = (undefined8 ****)0x0;
  local_470 = &local_468;
  local_468 = &local_460;
  local_480 = &local_470;
  local_460 = &local_458;
  local_458 = &local_450;
  local_450 = &local_448;
  local_448 = (undefined8 ****)0x0;
  if (&local_440 != (undefined8 *****)0x0) {
    local_490 = 0x600000000;
    local_488 = &local_440;
  }
  local_510[0] = 0;
  local_510[1] = 0;
  local_508 = (long *)0x0;
  local_4f0 = &local_4e8;
  local_4e8 = &local_4e0;
  local_500 = &local_4f0;
  local_4e0 = &local_4d8;
  local_4d8 = &local_4d0;
  local_4d0 = &local_4c8;
  local_4c8 = 0;
  if (local_4c0 != (long *)0x0) {
    local_510[0] = 0;
    local_510[1] = 6;
    local_508 = local_4c0;
  }
  local_590[0] = 0;
  local_590[1] = 0;
  local_588 = (undefined8 *)0x0;
  local_570 = &local_568;
  local_568 = &local_560;
  local_580 = &local_570;
  local_560 = &local_558;
  local_558 = &local_550;
  local_550 = &local_548;
  local_548 = 0;
  if (local_540 != (undefined8 *)0x0) {
    local_590[0] = 0;
    local_590[1] = 6;
    local_588 = local_540;
  }
  uVar18 = 0;
  puVar3 = PTR_DAT_04bc0510 + 0x10;
  ppppuStack_578 = local_580;
  ppppuStack_4f8 = local_500;
  ppppuStack_478 = local_480;
  do {
    lVar28 = *plVar30;
    puVar23 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar18 << 0x20) >> 0x1d));
    uVar14 = FUN_0277d6c4(puVar23);
    lVar32 = *plVar30;
    if (lVar32 != 0) {
      lVar28 = *(long *)(lVar28 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar28 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_598 = (uint *)0x0;
        puVar34 = param_1 + (long)(int)uVar18 * 4 + 1;
        puVar29 = (undefined4 *)(param_1 + (long)(int)uVar18 * 4 + 2);
        local_59c = *puVar29;
        local_5a0 = CONCAT22(*puVar34,*puVar23);
        local_5a8 = puVar3;
        uVar14 = FUN_0277d6c4(&local_5a0);
        if (*plVar30 == 0) {
LAB_02902634:
          uVar14 = 0xbc;
        }
        else {
          lVar28 = *(long *)(lVar32 + 0x57e58);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((*(uint *)(lVar28 + 0x1d8) <= uVar14) ||
             (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) goto LAB_02902634;
          lVar28 = *(long *)PTR_DAT_04bc0428;
          uVar14 = FUN_0277d6c4(puVar23);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((*(uint *)(lVar28 + 0x1d8) <= uVar14) ||
             (puVar19 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar14 * 8),
             puVar19 == (uint *)0x0)) goto LAB_02902634;
          uVar6 = *puVar19;
          uVar14 = 0;
          local_598 = puVar19;
          if ((uVar6 != 0) && (puVar19 != (uint *)(ulong)uVar6)) {
            puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar6);
            uVar14 = 0;
            if (*puVar22 != 0) {
              uVar14 = puVar22[1];
              if ((uVar14 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar28 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar28 = 0x1c;
                }
                lVar28 = (long)puVar22 + lVar28 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar28 != 0) {
                  uVar6 = 0;
                  if ((ulong)uVar14 != 0) {
                    uVar6 = (uint)((ulong)((long)puVar19 - lVar28) / (ulong)uVar14);
                  }
                  if (*puVar22 <= uVar6) {
                    uVar6 = 0xffffffff;
                  }
                  if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar14 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
                     uVar14 < 0xbd)) goto LAB_02902638;
                }
              }
              uVar14 = 0;
            }
          }
        }
LAB_02902638:
        ppppuVar12 = local_480;
        ppppuVar11 = local_500;
        ppppuVar20 = local_580;
        local_5f8 = (undefined *)CONCAT44(local_5f8._4_4_,uVar14);
        puVar4 = (undefined1 *)((long)param_1 + (long)(int)uVar18 * 8 + 3);
        if (uVar14 - 0x10 < 3) {
          if (local_590[0] < local_590[1]) {
            if (local_580 != (undefined8 ****)0x0) {
              local_580 = (undefined8 ****)*local_580;
            }
            *(undefined2 *)ppppuVar20 = *puVar23;
            *(undefined1 *)((long)ppppuVar20 + 2) = *(undefined1 *)puVar34;
            *(undefined1 *)((long)ppppuVar20 + 3) = *puVar4;
            *(undefined4 *)((long)ppppuVar20 + 4) = *puVar29;
            if (local_590[0] < local_590[1]) {
              local_588[local_590[0]] = ppppuVar20;
              local_590[0] = local_590[0] + 1;
            }
          }
        }
        else if (uVar14 - 9 < 2) {
          if ((int)local_490 < local_490._4_4_) {
            if (local_480 != (undefined8 ****)0x0) {
              local_480 = (undefined8 ****)*local_480;
            }
            *(undefined2 *)ppppuVar12 = *puVar23;
            *(undefined1 *)((long)ppppuVar12 + 2) = *(undefined1 *)puVar34;
            *(undefined1 *)((long)ppppuVar12 + 3) = *puVar4;
            *(undefined4 *)((long)ppppuVar12 + 4) = *puVar29;
            if ((int)local_490 < local_490._4_4_) {
              local_488[(int)local_490] = ppppuVar12;
              local_490 = CONCAT44(local_490._4_4_,(int)local_490 + 1);
            }
          }
        }
        else if (uVar14 == 0xd) {
          if (local_510[0] < local_510[1]) {
            if (local_500 != (undefined8 ****)0x0) {
              local_500 = (undefined8 ****)*local_500;
            }
            *(undefined2 *)ppppuVar11 = *puVar23;
            *(undefined1 *)((long)ppppuVar11 + 2) = *(undefined1 *)puVar34;
            *(undefined1 *)((long)ppppuVar11 + 3) = *puVar4;
            *(undefined4 *)((long)ppppuVar11 + 4) = *puVar29;
            if (local_510[0] < local_510[1]) {
              local_508[local_510[0]] = (long)ppppuVar11;
              local_510[0] = local_510[0] + 1;
            }
          }
        }
      }
    }
    uVar18 = uVar18 + 1;
    if (uVar18 == 0x40) {
      local_5a0 = 0;
      local_5a8 = PTR_DAT_04bbfe68 + 0x10;
      lVar28 = *(long *)PTR_DAT_04bb2720;
      if (lVar28 == 0) {
        puVar26 = &DAT_055c04a0;
      }
      else {
        puVar26 = &DAT_055c04a0;
        if (*(long *)(lVar28 + 0x330) != 0) {
          puVar26 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar28 + 0x338));
          iVar15 = FUN_006bd550(*puVar26,0);
          puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar15 != 0x758f7eaf) {
            puVar26 = &DAT_055c04a0;
          }
        }
      }
      puVar10 = PTR_DAT_04bc0510;
      local_59c = *(undefined4 *)(puVar26 + 7);
      uVar13 = FUN_017baf44();
      local_598 = (uint *)(CONCAT71(local_598._1_7_,uVar13) & 0xffffffffffffff01);
      lVar28 = FUN_01a4fa00(&local_5a8);
      iVar15 = *(int *)(lVar28 + 0x10);
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      uVar18 = 0;
      do {
        iVar2 = *(int *)(lVar28 + 0x24) + 1;
        iVar27 = *(int *)(lVar28 + 0x14);
        if (iVar2 != iVar27) {
          iVar35 = iVar15;
          do {
            local_5b8 = puVar3;
            local_5b0 = iVar35;
            iStack_5ac = iVar27;
            FUN_01a50240(&local_5c0,&local_5a8,uVar18,&local_5b8);
            lVar32 = *plVar30;
            uVar14 = FUN_0277d6c4(&local_5c0);
            if (*plVar30 != 0) {
              lVar32 = *(long *)(lVar32 + 0x57e58);
              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
              if ((uVar14 < *(uint *)(lVar32 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                local_5d0 = PTR_DAT_04bb2010 + 0x10;
                uStack_5c8 = 0;
                FUN_01a5033c(auStack_5d8,&local_5a8,uVar18,&local_5b8,&local_5d0);
                local_5e0 = *(undefined4 *)PTR_DAT_04bb37e0;
                local_5dc = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                iVar16 = FUN_0277d6c4(&local_5c0);
                if (iVar16 == 0x33dd) {
                  local_5f8 = (undefined *)0x33dd;
                  FUN_0277d4ac(&local_5f8);
                  if ((int)local_490 != 0) {
                    local_5e0 = *(undefined4 *)*local_488;
                    local_5dc = *(undefined4 *)((long)*local_488 + 4);
                    if ((int)local_490 < 1) {
                      piVar31 = (int *)&local_490;
                    }
                    else {
                      piVar31 = (int *)&local_490;
                      ppppuVar20 = (undefined8 ****)*local_488;
                      *ppppuVar20 = local_480;
                      local_480 = ppppuVar20;
                    }
LAB_02902aa0:
                    uVar14 = *piVar31 - 1;
                    if (0 < *piVar31) {
                      if (uVar14 == 0) {
                        iVar16 = 1;
                      }
                      else {
                        memmove(*(void **)(piVar31 + 2),(void *)((long)*(void **)(piVar31 + 2) + 8),
                                (ulong)uVar14 << 3);
                        iVar16 = *piVar31;
                      }
                      *piVar31 = iVar16 + -1;
                    }
                  }
                }
                else {
                  iVar16 = FUN_0277d6c4(&local_5c0);
                  if (iVar16 == 0x33de) {
                    local_5f8 = (undefined *)0x33de;
                    FUN_0277d4ac(&local_5f8);
                    if (local_510[0] != 0) {
                      local_5e0 = *(undefined4 *)*local_508;
                      local_5dc = ((undefined4 *)*local_508)[1];
                      if (local_510[0] < 1) {
                        piVar31 = local_510;
                      }
                      else {
                        piVar31 = local_510;
                        ppppuVar20 = (undefined8 ****)*local_508;
                        *ppppuVar20 = local_500;
                        local_500 = ppppuVar20;
                      }
                      goto LAB_02902aa0;
                    }
                  }
                  else {
                    iVar16 = FUN_0277d6c4(&local_5c0);
                    if (iVar16 == 0x33df) {
                      local_5f8 = (undefined *)0x33df;
                      FUN_0277d4ac(&local_5f8);
                      if (local_590[0] != 0) {
                        local_5e0 = *(undefined4 *)*local_588;
                        local_5dc = ((undefined4 *)*local_588)[1];
                        if (0 < local_590[0]) {
                          ppppuVar20 = (undefined8 ****)*local_588;
                          *ppppuVar20 = local_580;
                          local_580 = ppppuVar20;
                        }
                        piVar31 = local_590;
                        goto LAB_02902aa0;
                      }
                    }
                  }
                }
                puVar9 = PTR_DAT_04bb43c0;
                lVar33 = *(long *)PTR_DAT_04bb43c0;
                uVar14 = FUN_0277d6c4(&local_5e0);
                lVar32 = *(long *)puVar9;
                if (lVar32 != 0) {
                  lVar33 = *(long *)(lVar33 + 0x57e58);
                  uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                  if ((uVar14 < *(uint *)(lVar33 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                    local_5e8 = (uint *)0x0;
                    local_5f0 = local_5c0;
                    uStack_5ec = uStack_5bc;
                    local_5f8 = puVar10 + 0x10;
                    uVar14 = FUN_0277d6c4(&local_5f0);
                    if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_02902bbc:
                      if (local_5e8 != (uint *)0x0) goto LAB_02902bcc;
                      local_6c[0] = 0xbc;
                    }
                    else {
                      lVar32 = *(long *)(lVar32 + 0x57e58);
                      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
                      if ((*(uint *)(lVar32 + 0x1d8) <= uVar14) ||
                         (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar14 * 8) == 0))
                      goto LAB_02902bbc;
                      lVar32 = *(long *)PTR_DAT_04bc0428;
                      uVar14 = FUN_0277d6c4(&local_5c0);
                      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
                      if ((*(uint *)(lVar32 + 0x1d8) <= uVar14) ||
                         (puVar19 = *(uint **)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar14 * 8),
                         puVar19 == (uint *)0x0)) goto LAB_02902bbc;
                      local_5e8 = puVar19;
LAB_02902bcc:
                      uVar14 = *local_5e8;
                      local_6c[0] = 0;
                      if ((uVar14 != 0) && (local_5e8 != (uint *)(ulong)uVar14)) {
                        puVar19 = (uint *)((long)local_5e8 - (long)(ulong)uVar14);
                        local_6c[0] = 0;
                        if (*puVar19 != 0) {
                          uVar14 = puVar19[1];
                          if ((uVar14 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                            lVar32 = 0xc;
                            if (*(char *)((long)puVar19 + 10) != '\0') {
                              lVar32 = 0x1c;
                            }
                            lVar32 = (long)puVar19 + lVar32 + (ulong)(ushort)puVar19[2] * 8;
                            if (lVar32 != 0) {
                              uVar6 = 0;
                              if ((ulong)uVar14 != 0) {
                                uVar6 = (uint)((ulong)((long)local_5e8 - lVar32) / (ulong)uVar14);
                              }
                              if (*puVar19 <= uVar6) {
                                uVar6 = 0xffffffff;
                              }
                              if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (local_6c[0] = (uint)*(ushort *)
                                                       (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                       (long)(int)uVar6 * 2), local_6c[0] < 0xbd))
                              goto LAB_02902c70;
                            }
                          }
                          local_6c[0] = 0;
                        }
                      }
                    }
LAB_02902c70:
                    local_600 = 0xb8;
                    if (local_6c[0] == 0xb8) {
                      FUN_01b0ab1c(&local_5f8,&local_5e0);
                    }
                    local_600 = local_5f0;
                    uStack_5fc = uStack_5ec;
                    local_6c[0] = uVar18;
                    FUN_0150b144(&local_600,&local_5b8,local_6c,1);
                    FUN_01a50cb0(&local_5a8,uVar18,&local_5b8);
                    local_600 = local_5f0;
                    uStack_5fc = uStack_5ec;
                    uVar17 = FUN_01a50590(&local_5a8,uVar18,&local_5b8,&local_600);
                    if ((uVar17 & 1) != 0) {
                      local_600 = local_5f0;
                      uStack_5fc = uStack_5ec;
                      FUN_01a50970(&local_5a8,uVar18,&local_600,&local_5b8);
                    }
                  }
                }
                plVar30 = (long *)PTR_DAT_04bb43c0;
              }
            }
            if (iVar35 < *(int *)(lVar28 + 0x20)) {
              iVar35 = iVar35 + 1;
            }
            else {
              iVar27 = iVar27 + 1;
              iVar35 = *(int *)(lVar28 + 0x10);
            }
          } while ((iVar15 != iVar35) || (iVar2 != iVar27));
          iVar15 = *(int *)(lVar28 + 0x10);
        }
        uVar14 = 8;
        if ((int)uVar18 < 8) {
          uVar14 = uVar18 + 1;
        }
        uVar18 = uVar14;
        if (uVar14 == 8) {
          return;
        }
      } while( true );
    }
  } while( true );
}

