
/* WARNING: Removing unreachable block (ram,0x02c82950) */
/* WARNING: Removing unreachable block (ram,0x02c82960) */
/* WARNING: Type propagation algorithm not settling */

void FUN_02c82670(long param_1,byte *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  long *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  byte bVar16;
  undefined8 *******pppppppuVar17;
  long lVar18;
  undefined2 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined2 *puVar22;
  long lVar23;
  uint local_584;
  undefined *local_558;
  undefined2 local_550;
  undefined1 local_54e;
  undefined1 local_54d;
  undefined4 local_54c;
  long local_548;
  undefined *local_540;
  undefined2 local_538;
  undefined1 local_536;
  undefined1 local_535;
  undefined4 local_534;
  long local_530;
  undefined8 local_528;
  undefined8 *local_520;
  undefined8 *******local_518;
  undefined8 *******pppppppuStack_510;
  undefined8 *******local_508;
  undefined8 *******local_500;
  undefined8 *******local_4f8;
  undefined8 *******local_4f0;
  undefined8 *******local_4e8;
  undefined8 *******local_4e0;
  undefined8 *******local_4d8;
  undefined8 *******local_4d0;
  undefined8 *******local_4c8;
  undefined8 *******local_4c0;
  undefined8 *******local_4b8;
  undefined8 *******local_4b0;
  undefined8 *******local_4a8;
  undefined8 *******local_4a0;
  undefined8 *******local_498;
  undefined8 *******local_490;
  undefined8 *******local_488;
  undefined8 *******local_480;
  undefined8 *******local_478;
  undefined8 *******local_470;
  undefined8 *******local_468;
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
  undefined8 ******local_340;
  undefined8 *****local_338;
  undefined8 ****local_330;
  undefined8 ***local_328;
  undefined8 **local_320;
  undefined8 *local_318;
  undefined8 local_310;
  undefined8 local_308 [64];
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 *******local_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 *******local_e8;
  undefined8 ******local_e0;
  undefined8 *****local_d8;
  undefined8 ****local_d0;
  undefined8 ***local_c8;
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [9];
  
  bVar16 = *param_2;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  local_528 = CONCAT71(local_528._1_7_,bVar16);
  lVar8 = FUN_02583354(DAT_055021a0,&local_528,1);
  if (lVar8 == 0) {
    return;
  }
  lVar18 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar18 = *(long *)(DAT_05574040 + 0x20);
    plVar11 = *(long **)(lVar18 + 0x1100);
  }
  else {
    plVar11 = *(long **)(lVar8 + 0x1a5b0);
  }
  if ((plVar11 == (long *)0x0) || ((undefined8 *)*plVar11 == (undefined8 *)0x0)) {
    local_584 = 0;
  }
  else {
    local_584 = (*(code *)**(undefined8 **)*plVar11)();
  }
  lVar8 = *(long *)(lVar18 + 0x10e0);
  local_e8 = &local_e0;
  lVar20 = *(long *)(lVar18 + 0x10e8);
  local_e0 = &local_d8;
  local_f8 = &local_e8;
  local_d8 = &local_d0;
  local_d0 = &local_c8;
  local_c8 = &local_c0;
  local_c0 = &local_b8;
  local_b8 = &local_b0;
  local_108 = 0;
  local_100 = (undefined8 *)0x0;
  local_b0 = 0;
  if (local_a8 != (undefined8 *)0x0) {
    local_108 = 0x800000000;
    local_100 = local_a8;
  }
  pppppppuStack_f0 = local_f8;
  FUN_0264cdf0(&local_108,param_1 + 8);
  local_528 = 0;
  local_520 = (undefined8 *)0x0;
  local_508 = &local_500;
  local_500 = &local_4f8;
  local_518 = &local_508;
  local_4f8 = &local_4f0;
  local_4f0 = &local_4e8;
  local_310 = 0;
  local_4e8 = &local_4e0;
  local_4e0 = &local_4d8;
  local_4d8 = &local_4d0;
  local_4d0 = &local_4c8;
  local_4c8 = &local_4c0;
  local_4c0 = &local_4b8;
  local_4b8 = &local_4b0;
  local_4b0 = &local_4a8;
  local_4a8 = &local_4a0;
  local_4a0 = &local_498;
  local_498 = &local_490;
  local_490 = &local_488;
  local_488 = &local_480;
  local_480 = &local_478;
  local_478 = &local_470;
  local_470 = &local_468;
  local_468 = &local_460;
  local_460 = &local_458;
  local_458 = &local_450;
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
  local_368 = &local_360;
  local_358 = &local_350;
  local_370 = &local_368;
  local_348 = &local_340;
  local_360 = &local_358;
  local_338 = &local_330;
  local_350 = &local_348;
  local_328 = &local_320;
  local_340 = &local_338;
  local_320 = &local_318;
  local_330 = &local_328;
  local_318 = &local_310;
  if (local_308 != (undefined8 *)0x0) {
    local_528 = 0x4000000000;
    local_520 = local_308;
  }
  piVar12 = *(int **)(param_1 + 0xb0);
  pppppppuStack_510 = local_518;
  if ((piVar12 != (int *)0x0) && (*piVar12 != 0)) {
    puVar21 = *(undefined8 **)(piVar12 + 2);
    lVar23 = (long)*piVar12 << 3;
    do {
      puVar19 = (undefined2 *)*puVar21;
      uVar9 = FUN_0277d7b4(param_1 + 8,puVar19);
      pppppppuVar17 = local_518;
      if ((uVar9 & 1) != 0) {
        if ((int)local_528 < local_528._4_4_) {
          if (local_518 != (undefined8 *******)0x0) {
            local_518 = (undefined8 *******)*local_518;
          }
          *(undefined2 *)pppppppuVar17 = *puVar19;
          *(undefined1 *)((long)pppppppuVar17 + 2) = *(undefined1 *)(puVar19 + 1);
          *(undefined1 *)((long)pppppppuVar17 + 3) = *(undefined1 *)((long)puVar19 + 3);
          *(undefined4 *)((long)pppppppuVar17 + 4) = *(undefined4 *)(puVar19 + 2);
          if ((int)local_528 < local_528._4_4_) {
            local_520[(int)local_528] = pppppppuVar17;
            local_528 = CONCAT44(local_528._4_4_,(int)local_528 + 1);
          }
        }
      }
      puVar21 = puVar21 + 1;
      lVar23 = lVar23 + -8;
    } while (lVar23 != 0);
  }
  puVar3 = PTR_DAT_04bc0510;
  if ((int)local_108 != 0) {
    puVar2 = local_100 + (int)local_108;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puVar21 = local_100;
    do {
      puVar19 = (undefined2 *)*puVar21;
      uVar9 = FUN_01b00960(puVar19);
      lVar23 = DAT_053274a0;
      if ((((uint)(uVar9 >> 7) & 0x1ffffff) < 0x7d) &&
         ((*(uint *)(lVar20 + lVar8 + (uVar9 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar9 & 0x1f) &
          1) != 0)) {
        if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
          puVar13 = *(undefined8 **)(param_1 + 0x20);
          if (puVar13 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x20) = *puVar13;
          }
          *(undefined2 *)puVar13 = *puVar19;
          *(undefined1 *)((long)puVar13 + 2) = *(undefined1 *)(puVar19 + 1);
          *(undefined1 *)((long)puVar13 + 3) = *(undefined1 *)((long)puVar19 + 3);
          *(undefined4 *)((long)puVar13 + 4) = *(undefined4 *)(puVar19 + 2);
          if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
            *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) =
                 puVar13;
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          }
        }
      }
      else if ((int)local_528 != 0) {
        local_538 = *puVar19;
        local_536 = *(undefined1 *)(puVar19 + 1);
        local_535 = *(undefined1 *)((long)puVar19 + 3);
        local_534 = *(undefined4 *)(puVar19 + 2);
        local_530 = 0;
        local_540 = puVar1;
        uVar4 = FUN_0277d6c4(&local_538);
        if (DAT_053274a0 != 0) {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar23 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar23 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(puVar19);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if (uVar4 < *(uint *)(lVar23 + 0x1d8)) {
              lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar4 * 8);
              if (lVar23 != 0) {
                local_530 = lVar23;
              }
            }
          }
        }
        if ((int)local_528 != 0) {
          lVar23 = (long)(int)local_528 << 3;
          puVar13 = local_520;
          do {
            lVar14 = DAT_053274a0;
            puVar22 = (undefined2 *)*puVar13;
            local_558 = puVar3 + 0x10;
            local_550 = *puVar22;
            local_54e = *(undefined1 *)(puVar22 + 1);
            local_54d = *(undefined1 *)((long)puVar22 + 3);
            local_54c = *(undefined4 *)(puVar22 + 2);
            local_548 = 0;
            uVar4 = FUN_0277d6c4(&local_550);
            if (DAT_053274a0 != 0) {
              lVar14 = *(long *)(lVar14 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                lVar14 = *(long *)PTR_DAT_04bc0428;
                uVar4 = FUN_0277d6c4(puVar22);
                uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if (uVar4 < *(uint *)(lVar14 + 0x1d8)) {
                  lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8);
                  if (lVar14 != 0) {
                    local_548 = lVar14;
                  }
                }
              }
            }
            iVar5 = FUN_01ad7260(&local_540);
            if ((iVar5 == 0) ||
               (puVar10 = (ushort *)FUN_01afd600(&local_540), puVar10 == (ushort *)0x0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = *puVar10 & 7;
              uVar6 = FUN_01ad7260(&local_540);
              if (uVar6 <= uVar4) {
                uVar4 = 0;
              }
            }
            iVar5 = FUN_01ad7260(&local_558);
            if ((iVar5 == 0) ||
               (puVar10 = (ushort *)FUN_01afd600(&local_558), puVar10 == (ushort *)0x0)) {
              if (uVar4 == 0) goto LAB_02c82d20;
            }
            else {
              uVar6 = *puVar10 & 7;
              uVar7 = FUN_01ad7260(&local_558);
              if (uVar7 <= uVar6) {
                uVar6 = 0;
              }
              if (uVar4 == uVar6) {
LAB_02c82d20:
                if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
                  puVar15 = *(undefined8 **)(param_1 + 0x20);
                  if (puVar15 != (undefined8 *)0x0) {
                    *(undefined8 *)(param_1 + 0x20) = *puVar15;
                  }
                  *(undefined2 *)puVar15 = *puVar19;
                  *(undefined1 *)((long)puVar15 + 2) = *(undefined1 *)(puVar19 + 1);
                  *(undefined1 *)((long)puVar15 + 3) = *(undefined1 *)((long)puVar19 + 3);
                  *(undefined4 *)((long)puVar15 + 4) = *(undefined4 *)(puVar19 + 2);
                  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
                    *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8)
                         = puVar15;
                    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                  }
                }
              }
            }
            puVar13 = puVar13 + 1;
            lVar23 = lVar23 + -8;
          } while (lVar23 != 0);
        }
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar2);
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (0 < *(int *)(param_1 + 0x14))) {
    puVar21 = *(undefined8 **)(param_1 + 0x20);
    if (puVar21 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = *puVar21;
    }
    *(undefined2 *)puVar21 = *(undefined2 *)(param_1 + 8);
    *(undefined1 *)((long)puVar21 + 2) = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)((long)puVar21 + 3) = *(undefined1 *)(param_1 + 0xb);
    *(undefined4 *)((long)puVar21 + 4) = *(undefined4 *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
      *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = puVar21;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  if (0 < (int)local_528) {
    lVar8 = 0;
    pppppppuVar17 = local_518;
    do {
      local_518 = (undefined8 *******)local_520[lVar8];
      lVar8 = lVar8 + 1;
      *local_518 = pppppppuVar17;
      pppppppuVar17 = local_518;
    } while (lVar8 < (int)local_528);
  }
  if ((((local_584 & 1) != 0) && (*(long *)(lVar18 + 0x1100) != 0)) &&
     (puVar21 = *(undefined8 **)(*(long *)(lVar18 + 0x1100) + 8), puVar21 != (undefined8 *)0x0)) {
    (**(code **)*puVar21)();
  }
  return;
}

