
void FUN_0320ca3c(long param_1,short *param_2,uint param_3)

{
  undefined *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined6 *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  undefined *local_780;
  undefined *puStack_778;
  undefined *local_770;
  undefined4 local_768;
  undefined4 uStack_764;
  long local_760;
  undefined *local_758;
  undefined8 *local_750;
  undefined4 local_748;
  undefined1 local_744;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined4 local_730;
  undefined *local_728;
  undefined1 *puStack_720;
  undefined4 local_718;
  undefined1 local_714 [63];
  undefined1 local_6d5;
  undefined *local_6d0;
  undefined1 *puStack_6c8;
  undefined4 local_6c0;
  undefined1 local_6bc [63];
  undefined1 local_67d;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined6 uStack_660;
  undefined2 local_65a;
  undefined6 uStack_658;
  undefined1 auStack_652 [2];
  undefined4 local_650;
  undefined *local_648;
  undefined2 local_640;
  undefined8 local_63c;
  undefined4 local_634;
  undefined *local_630;
  undefined8 uStack_628;
  undefined4 local_620;
  undefined1 local_61c;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined4 local_608;
  undefined *local_600;
  undefined1 *puStack_5f8;
  undefined4 local_5f0;
  undefined1 local_5ec [63];
  undefined1 local_5ad;
  undefined *local_5a8;
  undefined1 *puStack_5a0;
  undefined4 local_598;
  undefined1 local_594 [63];
  undefined1 local_555;
  undefined8 local_550;
  undefined *local_548;
  undefined8 local_540;
  undefined4 local_538;
  undefined1 local_534;
  undefined8 local_530;
  undefined8 local_528;
  undefined4 local_520;
  undefined *local_518;
  undefined1 *local_510;
  undefined4 local_508;
  undefined1 local_504 [63];
  undefined1 local_4c5;
  undefined *local_4c0;
  undefined1 *local_4b8;
  undefined4 local_4b0;
  undefined1 local_4ac [63];
  undefined1 local_46d;
  undefined8 local_468;
  undefined *local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined *local_430;
  undefined1 *local_428;
  undefined4 local_420;
  undefined1 local_41c [63];
  undefined1 local_3dd;
  undefined *local_3d8;
  undefined1 *local_3d0;
  undefined4 local_3c8;
  undefined1 local_3c4 [63];
  undefined1 local_385;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined *local_368;
  undefined1 *local_360;
  undefined4 local_358;
  undefined1 local_354 [63];
  undefined1 local_315;
  undefined *local_310;
  undefined1 *local_308;
  undefined4 local_300;
  undefined1 local_2fc [63];
  undefined1 local_2bd;
  undefined *local_2b8;
  int local_2b0;
  undefined1 local_2ac;
  undefined8 local_2a8;
  undefined2 local_2a0;
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
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined1 local_18c [63];
  undefined1 local_14d;
  undefined *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined1 local_134 [63];
  undefined1 local_f5;
  undefined8 local_f0;
  undefined *local_e8;
  int local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  
  if (*param_2 == -2) {
    return;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x210) + 0x578);
  if (lVar9 == 0) {
    return;
  }
  puVar10 = (undefined8 *)0x0;
  if ((-1 < (int)param_3) &&
     ((int)param_3 < (int)*(uint *)(lVar9 + 0x208) && param_3 < *(uint *)(lVar9 + 0x208))) {
    puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x210) + (ulong)param_3 * 8);
  }
  if (((*PTR_DAT_04bc4d98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d98);
  }
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  uVar8 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4d90);
  puVar5 = PTR_DAT_04bb2bc0;
  if ((uVar8 & 1) == 0) {
    return;
  }
  lVar9 = *(long *)puVar10[0x5c];
  if (lVar9 == 0) {
    return;
  }
  local_75 = 0;
  local_b8 = 0x40;
  puStack_c0 = local_b4;
  local_b4[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_c8 = puVar1;
  FUN_038d1270(&local_c8,&DAT_0409e973,"ShopBuy");
  local_288 = 0;
  local_278 = local_26c;
  local_290 = 0;
  local_220 = local_214;
  local_198 = local_18c;
  local_270 = 0x40;
  local_22d = 0;
  local_26c[0] = 0;
  local_218 = 0x40;
  local_1d5 = 0;
  local_214[0] = 0;
  local_1c0 = 0;
  local_1bc = 0;
  local_1b8 = 0xffffffff;
  local_1b0 = 0xffffffff00000000;
  local_1a8 = 0xffffffff;
  local_18c[0] = 0;
  local_140 = local_134;
  local_134[0] = 0;
  local_190 = 0x40;
  local_14d = 0;
  local_138 = 0x40;
  local_f5 = 0;
  local_630 = PTR_DAT_04bb2e00 + 0x10;
  local_1c8 = 0;
  local_e0 = *(int *)PTR_DAT_04bc0b30;
  local_2b0 = local_e0 + 1;
  local_dc = 0;
  local_2b8 = PTR_DAT_04bc0a78 + 0x10;
  local_d0 = 0x100;
  local_640 = 0x100;
  local_63c = 0;
  puStack_5f8 = local_5ec;
  local_528 = 0xffffffff00000000;
  local_440 = 0xffffffff00000000;
  local_f0 = 0;
  local_d8 = 0;
  local_634 = 0;
  local_620 = 0;
  local_61c = 0;
  local_608 = 0xffffffff;
  local_5f0 = 0x40;
  local_5ad = 0;
  local_5ec[0] = 0;
  local_598 = 0x40;
  local_555 = 0;
  local_594[0] = 0;
  local_540 = 0;
  local_538 = 0;
  local_534 = 0;
  local_530 = 0xffffffff;
  local_520 = 0xffffffff;
  local_508 = 0x40;
  local_4c5 = 0;
  local_4b0 = 0x40;
  local_46d = 0;
  local_550 = 0;
  local_458 = 0;
  local_450 = 0;
  local_44c = 0;
  local_448 = 0xffffffff;
  local_438 = 0xffffffff;
  local_420 = 0x40;
  local_3dd = 0;
  local_3c8 = 0x40;
  local_385 = 0;
  local_468 = 0;
  local_370 = 0;
  local_378 = 0;
  local_380 = 0;
  local_358 = 0x40;
  local_315 = 0;
  local_300 = 0x40;
  local_2bd = 0;
  local_2ac = 0;
  *(int *)PTR_DAT_04bc0b30 = local_e0 + 2;
  local_2a8 = 0;
  puStack_5a0 = local_594;
  local_618 = 0xffffffff;
  uStack_610 = 0xffffffff00000000;
  local_4b8 = local_4ac;
  local_4ac[0] = 0;
  local_428 = local_41c;
  local_41c[0] = 0;
  local_354[0] = 0;
  local_510 = local_504;
  local_504[0] = 0;
  local_3d0 = local_3c4;
  local_3c4[0] = 0;
  uStack_628 = 0;
  local_360 = local_354;
  local_308 = local_2fc;
  local_2fc[0] = 0;
  local_648 = PTR_DAT_04bc0bf0 + 0x10;
  local_2a0 = 0;
  local_298 = 0;
  plVar11 = *(long **)(lVar9 + 0x48);
  local_600 = puVar1;
  local_5a8 = puVar1;
  local_548 = local_630;
  local_518 = puVar1;
  local_4c0 = puVar1;
  local_460 = local_630;
  local_430 = puVar1;
  local_3d8 = puVar1;
  local_368 = puVar1;
  local_310 = puVar1;
  local_280 = puVar1;
  local_228 = puVar1;
  local_1d0 = local_630;
  local_1a0 = puVar1;
  local_148 = puVar1;
  local_e8 = local_2b8;
  if (plVar11[1] != 0) {
    local_758 = PTR_DAT_04bc0878 + 0x10;
    local_750 = (undefined8 *)CONCAT44(local_750._4_4_,9);
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_758);
    (**(code **)(plVar11[3] + 0x5e0))(plVar11[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar9);
  }
  puVar1 = PTR_DAT_04bb43c0;
  piVar2 = (int *)(param_1 + 0x1cf24);
  if (*piVar2 == 0xc) {
    local_744 = 0;
    local_748 = 0x13;
    puStack_720 = local_714;
    local_728 = puVar5 + 0x10;
    local_740 = 0xffffffff;
    uStack_738 = 0xffffffff00000000;
    local_750 = &local_678;
    puStack_6c8 = local_6bc;
    local_730 = 0xffffffff;
    local_718 = 0x40;
    local_6d5 = 0;
    local_714[0] = 0;
    local_6c0 = 0x40;
    local_67d = 0;
    local_6bc[0] = 0;
    local_758 = PTR_DAT_04bc0bc0 + 0x10;
    uStack_658 = 0;
    puVar3 = auStack_652;
    if (auStack_652 <= (undefined1 *)((long)&local_678 + 2U)) {
      puVar3 = (undefined1 *)((long)&local_678 + 2U);
    }
    local_668 = 0;
    uStack_660 = 0;
    local_65a = 0;
    local_678 = 0;
    uStack_670 = 0;
    local_6d0 = local_728;
    memset(local_750,0,(ulong)(puVar3 + (-0xe1 - (long)&local_758)) & 0xfffffffffffffffc | 2);
    local_650 = 0;
    FUN_01be4af0(&local_758,**(undefined4 **)PTR_DAT_04bb3448,100,10,0,0);
    local_650 = 100;
    FUN_01bea4e8(&local_648,lVar9,&local_758);
    FUN_01bea9c8(&local_648);
    uVar13 = 0x3f800000;
  }
  else {
    local_760 = 0;
    local_770 = PTR_DAT_04bc0510 + 0x10;
    local_768 = *(undefined4 *)param_2;
    uStack_764 = *(undefined4 *)(param_2 + 2);
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_768);
    if (*(long *)puVar1 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (uVar6 < *(uint *)(lVar12 + 0x1d8)) {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar12 != 0) {
            local_760 = lVar12;
          }
        }
      }
    }
    local_744 = 0;
    local_748 = 0x10;
    puStack_720 = local_714;
    local_728 = puVar5 + 0x10;
    local_740 = 0xffffffff;
    uStack_738 = 0xffffffff00000000;
    local_750 = &local_678;
    puStack_6c8 = local_6bc;
    local_730 = 0xffffffff;
    local_718 = 0x40;
    local_6d5 = 0;
    local_714[0] = 0;
    local_6c0 = 0x40;
    local_67d = 0;
    local_6bc[0] = 0;
    local_758 = PTR_DAT_04bc0838 + 0x10;
    puVar4 = &uStack_658;
    if (&uStack_658 <= (undefined6 *)((long)&local_678 + 2U)) {
      puVar4 = (undefined6 *)((long)&local_678 + 2U);
    }
    local_668 = 0;
    uStack_660 = 0;
    local_65a = 0;
    local_678 = 0;
    uStack_670 = 0;
    local_6d0 = local_728;
    memset(local_750,0,(long)puVar4 + (-0xe0 - (long)&local_758));
    local_780 = PTR_DAT_04bb2020 + 0x10;
    puStack_778 = &DAT_040a04a8;
    FUN_01bebc30(&local_290,&local_758,&local_c8,&local_780,lVar9);
    if ((*piVar2 == 0xd) || (*piVar2 == 0x11)) {
      iVar7 = FUN_01af13b8(&local_770);
    }
    else if ((*piVar2 == 0) || (*piVar2 == 1)) {
      iVar7 = FUN_01af0560(&local_770,0);
    }
    else if (*piVar2 == 0x10) {
      iVar7 = FUN_01aed730(&local_770);
      iVar7 = (iVar7 * 0xc) / 10;
    }
    else {
      iVar7 = FUN_01aed730(&local_770);
    }
    FUN_01bafd70(&local_e8,iVar7,0);
    FUN_01bebe38(&local_290);
    FUN_01bea4e8(&local_648,lVar9,&local_758);
    FUN_01bea9c8(&local_648);
    uVar13 = 0;
  }
  plVar11 = *(long **)(puVar10[0x5e] + (ulong)(1 < *(uint *)(puVar10 + 0x5d)) * 8);
  if (plVar11 != (long *)0x0) {
    local_758 = PTR_DAT_04bc4f00 + 0x10;
    local_750 = (undefined8 *)CONCAT44(local_750._4_4_,0x14);
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_758);
    (**(code **)(plVar11[3] + 0x158))(uVar13,plVar11[1]);
  }
  FUN_01be9eb8(&local_648);
  FUN_01bebabc(&local_290);
  return;
}

