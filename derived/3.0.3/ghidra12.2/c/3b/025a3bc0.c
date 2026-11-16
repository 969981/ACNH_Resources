
/* WARNING: Type propagation algorithm not settling */

void FUN_025a3bc0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 *******pppppppuVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined *local_490;
  char *local_488;
  undefined8 local_480;
  undefined1 *local_478;
  undefined8 *******local_470;
  undefined8 *******pppppppuStack_468;
  undefined8 *******local_460;
  undefined8 *******local_458;
  undefined8 *******local_450;
  undefined8 *******local_448;
  undefined8 *******local_440;
  undefined8 *******local_438;
  undefined8 *******local_430;
  undefined8 *******local_428;
  undefined8 *******local_420;
  undefined8 *******local_418;
  undefined8 *******local_410;
  undefined8 *******local_408;
  undefined8 *******local_400;
  undefined8 *******local_3f8;
  undefined8 *******local_3f0;
  undefined8 *******local_3e8;
  undefined8 *******local_3e0;
  undefined8 *******local_3d8;
  undefined8 *******local_3d0;
  undefined8 *******local_3c8;
  undefined8 *******local_3c0;
  undefined8 *******local_3b8;
  undefined8 *******local_3b0;
  undefined8 *******local_3a8;
  undefined8 *******local_3a0;
  undefined8 *******local_398;
  undefined8 *******local_390;
  undefined8 *******local_388;
  undefined8 *******local_380;
  undefined8 *******local_378;
  undefined8 *******local_370;
  undefined8 *******local_368;
  undefined8 *******local_360;
  undefined8 *******local_358;
  undefined8 *******local_350;
  undefined8 *******local_348;
  undefined8 *******local_340;
  undefined8 *******local_338;
  undefined8 *******local_330;
  undefined8 *******local_328;
  undefined8 *******local_320;
  undefined8 *******local_318;
  undefined8 *******local_310;
  undefined8 *******local_308;
  undefined8 *******local_300;
  undefined8 *******local_2f8;
  undefined8 *******local_2f0;
  undefined8 *******local_2e8;
  undefined8 *******local_2e0;
  undefined8 *******local_2d8;
  undefined8 *******local_2d0;
  undefined8 *******local_2c8;
  undefined8 *******local_2c0;
  undefined8 *******local_2b8;
  undefined8 *******local_2b0;
  undefined8 *******local_2a8;
  undefined8 *******local_2a0;
  undefined8 ******local_298;
  undefined8 *****local_290;
  undefined8 ****local_288;
  undefined8 ***local_280;
  undefined8 **local_278;
  undefined8 *local_270;
  undefined8 local_268;
  undefined1 local_260 [512];
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  local_268 = 0;
  local_460 = &local_458;
  local_458 = &local_450;
  local_470 = &local_460;
  local_450 = &local_448;
  local_448 = &local_440;
  local_440 = &local_438;
  local_438 = &local_430;
  local_430 = &local_428;
  local_428 = &local_420;
  local_420 = &local_418;
  local_418 = &local_410;
  local_410 = &local_408;
  local_408 = &local_400;
  local_400 = &local_3f8;
  local_3f8 = &local_3f0;
  local_3f0 = &local_3e8;
  local_3e8 = &local_3e0;
  local_3e0 = &local_3d8;
  local_3d8 = &local_3d0;
  local_3d0 = &local_3c8;
  local_3c8 = &local_3c0;
  local_3c0 = &local_3b8;
  local_3b8 = &local_3b0;
  local_3b0 = &local_3a8;
  local_3a8 = &local_3a0;
  local_3a0 = &local_398;
  local_398 = &local_390;
  local_390 = &local_388;
  local_388 = &local_380;
  local_380 = &local_378;
  local_378 = &local_370;
  local_370 = &local_368;
  local_368 = &local_360;
  local_360 = &local_358;
  local_358 = &local_350;
  local_350 = &local_348;
  local_348 = &local_340;
  local_340 = &local_338;
  local_338 = &local_330;
  local_330 = &local_328;
  local_328 = &local_320;
  local_320 = &local_318;
  local_318 = &local_310;
  local_310 = &local_308;
  local_308 = &local_300;
  local_300 = &local_2f8;
  local_2f8 = &local_2f0;
  local_2f0 = &local_2e8;
  local_2e8 = &local_2e0;
  local_2e0 = &local_2d8;
  local_2d8 = &local_2d0;
  local_2d0 = &local_2c8;
  local_2c8 = &local_2c0;
  local_2c0 = &local_2b8;
  local_2b8 = &local_2b0;
  local_2b0 = &local_2a8;
  local_2a8 = &local_2a0;
  local_2a0 = &local_298;
  local_298 = &local_290;
  local_290 = &local_288;
  local_288 = &local_280;
  local_280 = &local_278;
  local_278 = &local_270;
  local_270 = &local_268;
  local_480 = 0;
  local_478 = (undefined1 *)0x0;
  if (local_260 != (undefined1 *)0x0) {
    local_480 = 0x4000000000;
    local_478 = local_260;
  }
  pppppppuStack_468 = local_470;
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_490 = (undefined *)CONCAT71(local_490._1_7_,*(byte *)(param_1 + 0x18));
    lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_490,1);
    uVar14 = local_480;
joined_r0x025a3de4:
    local_480 = uVar14;
    if (lVar6 != 0) {
      lVar8 = lVar6 + 0x194b0;
      if (*(long *)(lVar6 + 0x194b8) == 0) {
        lVar8 = *(long *)(DAT_05574040 + 0x20);
      }
      local_480._0_4_ = (int)uVar14;
      local_480._4_4_ = (int)(uVar14 >> 0x20);
      if (local_480._4_4_ <= (int)local_480) goto LAB_025a3edc;
      lVar6 = 0;
      do {
        pppppppuVar5 = local_470;
        if ((int)local_480 < local_480._4_4_) {
          if (local_470 != (undefined8 *******)0x0) {
            local_470 = (undefined8 *******)*local_470;
          }
          *pppppppuVar5 = (undefined8 ******)0x0;
          if ((int)local_480 < local_480._4_4_) {
            *(undefined8 ********)(local_478 + (long)(int)local_480 * 8) = pppppppuVar5;
            local_480 = CONCAT44(local_480._4_4_,(int)local_480 + 1);
          }
          *(int *)pppppppuVar5 = (int)lVar6;
          if ((*(long **)(lVar8 + 0x2a920) == (long *)0x0) ||
             (puVar7 = (undefined8 *)**(long **)(lVar8 + 0x2a920), puVar7 == (undefined8 *)0x0)) {
            *(undefined4 *)((long)pppppppuVar5 + 4) =
                 *(undefined4 *)
                  (*(long *)(lVar8 + 0x2a908) + *(long *)(lVar8 + 0x2a900) + lVar6 * 4);
          }
          else {
            uVar14 = (**(code **)*puVar7)();
            *(undefined4 *)((long)pppppppuVar5 + 4) =
                 *(undefined4 *)
                  (*(long *)(lVar8 + 0x2a908) + *(long *)(lVar8 + 0x2a900) + lVar6 * 4);
            if ((((uVar14 & 1) != 0) && (*(long *)(lVar8 + 0x2a920) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x2a920) + 8),
               puVar7 != (undefined8 *)0x0)) {
              (**(code **)*puVar7)();
            }
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x40);
    }
  }
  else if ((*(int *)(param_1 + 0x1c) != -1) && (DAT_05574040 != 0)) {
    lVar6 = FUN_026eec4c();
    uVar14 = local_480;
    goto joined_r0x025a3de4;
  }
  uVar14 = local_480;
LAB_025a3edc:
  local_480 = uVar14;
  puVar4 = PTR_DAT_04bb2020;
  bVar1 = 1 < (int)local_480;
  if (bVar1) {
    uVar10 = 0;
    uVar9 = (int)local_480 - 1;
    do {
      if ((int)uVar9 <= (int)uVar10) break;
      lVar6 = *(long *)(local_478 + (ulong)uVar10 * 8);
      uVar14 = (ulong)uVar10;
      if ((uVar9 - uVar10 & 1) == 0) {
        lVar8 = lVar6;
        uVar11 = uVar14;
      }
      else {
        uVar11 = uVar14 + 1;
        lVar8 = *(long *)(local_478 + uVar11 * 8);
        if (*(int *)(lVar8 + 4) < *(int *)(lVar6 + 4)) {
          *(long *)(local_478 + uVar11 * 8) = lVar6;
          *(long *)(local_478 + uVar14 * 8) = lVar8;
          lVar8 = lVar6;
        }
      }
      uVar12 = (ulong)uVar9;
      uVar9 = uVar10;
      if (~uVar14 + uVar12 != 0) {
        plVar13 = (long *)(local_478 + uVar11 * 8 + 8);
        do {
          lVar6 = *plVar13;
          if (*(int *)(lVar6 + 4) < *(int *)(lVar8 + 4)) {
            plVar13[-1] = lVar6;
            *plVar13 = lVar8;
            uVar9 = (uint)uVar11;
          }
          else {
            lVar8 = lVar6;
          }
          lVar6 = plVar13[1];
          if (*(int *)(lVar6 + 4) < *(int *)(lVar8 + 4)) {
            uVar9 = (uint)uVar11 + 1;
            *plVar13 = lVar6;
            plVar13[1] = lVar8;
          }
          else {
            lVar8 = lVar6;
          }
          uVar11 = uVar11 + 2;
          plVar13 = plVar13 + 2;
        } while (uVar12 != uVar11);
      }
      if ((int)uVar9 <= (int)uVar10) break;
      lVar6 = *(long *)(local_478 + (ulong)uVar9 * 8);
      uVar11 = (ulong)uVar9;
      uVar10 = uVar9;
      do {
        lVar8 = *(long *)(local_478 + uVar11 * 8 + -8);
        if (*(int *)(lVar6 + 4) < *(int *)(lVar8 + 4)) {
          uVar10 = (uint)uVar11;
          *(long *)(local_478 + uVar11 * 8 + -8) = lVar6;
          *(long *)(local_478 + uVar11 * 8) = lVar8;
        }
        else {
          lVar6 = lVar8;
        }
        uVar11 = uVar11 - 1;
      } while ((long)uVar14 < (long)uVar11);
    } while (uVar10 != uVar9);
  }
  uVar14 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (uVar14 < (local_480 & 0xffffffff)) {
      lVar6 = *(long *)(local_478 + uVar14 * 8);
    }
    else {
      lVar6 = 0;
    }
    if (((uVar14 < *(uint *)(param_1 + 0x30)) && (lVar6 != 0)) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + uVar14 * 8), lVar6 != 0)) {
      local_488 = "u";
      pcVar3 = (char *)(lVar6 + 8);
      local_490 = puVar2;
      lVar6 = nn::prepo::Struct::GetBuffer();
      if (lVar6 != 0) {
        (**(code **)(local_490 + 0x18))(&local_490);
        nn::prepo::Struct::Add(pcVar3,(long)local_488);
      }
      local_490 = puVar4 + 0x10;
      local_488 = "c";
      lVar6 = nn::prepo::Struct::GetBuffer();
      if (lVar6 != 0) {
        (**(code **)(local_490 + 0x18))(&local_490);
        nn::prepo::Struct::Add(pcVar3,(long)local_488);
      }
      lVar8 = *(long *)(param_1 + 0x28);
      lVar6 = nn::prepo::Array::GetBuffer();
      if (lVar6 != 0) {
        nn::prepo::Array::Add((Struct *)(lVar8 + 8));
      }
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != 0x40);
  local_490 = puVar4 + 0x10;
  local_488 = "UseRanking";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605b30(*(long *)(param_1 + 8),&local_490,*(undefined8 *)(param_1 + 0x28));
  }
  return;
}

