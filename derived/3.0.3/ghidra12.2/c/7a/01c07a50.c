
byte FUN_01c07a50(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long *plVar3;
  undefined ***pppuVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *local_478;
  long local_470 [2];
  undefined **local_460 [4];
  undefined8 local_440;
  undefined8 uStack_438;
  undefined **local_430;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined **local_400;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined **local_3d0;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined **local_3a0;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined **local_370;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined **local_340;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined **local_310;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined **local_2e0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined **local_2b0;
  uint local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined *local_270;
  long local_268;
  long local_260;
  undefined **local_258;
  undefined8 local_238;
  undefined8 local_230;
  undefined **local_228;
  undefined8 local_208;
  undefined8 local_200;
  undefined **local_1f8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined **local_1c8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  undefined8 local_178;
  undefined8 local_170;
  undefined **local_168;
  undefined8 local_148;
  undefined8 local_140;
  undefined **local_138;
  undefined8 local_118;
  undefined8 local_110;
  undefined **local_108;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if (param_1 == param_2) {
    return 1;
  }
  lVar8 = (**(code **)(*param_1 + 0x18))();
  lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar8 == lVar9) {
    lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
    if (lVar8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar10 = lVar8 + (uVar10 & 0xffffffff) * 2;
    }
    lVar8 = (**(code **)(*param_2 + 0x18))(param_2);
    if ((lVar8 == 0) ||
       (uVar11 = (**(code **)(*param_2 + 0x20))(param_2),
       lVar8 + (uVar11 & 0xffffffff) * 2 <= uVar10)) {
      return 1;
    }
  }
  memset(&local_268,0,0x1e0);
  local_238 = 0;
  local_230 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2d80 + 0x10);
  local_208 = 0;
  local_200 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_178 = 0;
  local_170 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  puVar2 = PTR_DAT_04bc0780 + 0x10;
  local_70 = 0;
  local_270 = puVar2;
  local_258 = ppuVar1;
  local_228 = ppuVar1;
  local_1f8 = ppuVar1;
  local_1c8 = ppuVar1;
  local_198 = ppuVar1;
  local_168 = ppuVar1;
  local_138 = ppuVar1;
  local_108 = ppuVar1;
  local_d8 = ppuVar1;
  local_a8 = ppuVar1;
  FUN_006f1750(&local_270);
  local_80 = 0;
  local_88 = 0xffffffff;
  local_78 = 0;
  local_70 = local_70 & 0xffffffff00000000;
  lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
  lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((lVar9 != 0) && (uVar10 = (**(code **)(*param_1 + 0x20))(param_1), lVar8 != 0)) {
    local_260 = lVar9 + (uVar10 & 0xffffffff) * 2;
    local_88 = 0;
    local_258 = &PTR_FUN_048fc6e0;
    local_268 = lVar8;
  }
  (**(code **)(local_270 + 0x18))(&local_270);
  memset(local_470,0,0x1e0);
  local_440 = 0;
  uStack_438 = 0;
  local_278 = 0;
  local_410 = 0;
  uStack_408 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_478 = puVar2;
  local_460[0] = ppuVar1;
  local_430 = ppuVar1;
  local_400 = ppuVar1;
  local_3d0 = ppuVar1;
  local_3a0 = ppuVar1;
  local_370 = ppuVar1;
  local_340 = ppuVar1;
  local_310 = ppuVar1;
  local_2e0 = ppuVar1;
  local_2b0 = ppuVar1;
  FUN_006f1750(&local_478);
  local_290 = 0xffffffff;
  local_278 = local_278 & 0xffffffff00000000;
  local_288 = 0;
  uStack_280 = 0;
  lVar8 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((lVar9 != 0) && (uVar10 = (**(code **)(*param_2 + 0x20))(param_2), lVar8 != 0)) &&
     ((int)local_290 < 9)) {
    local_290 = local_290 + 1;
    uVar11 = (ulong)local_290;
    bVar7 = 9 < local_290;
    plVar3 = local_470 + uVar11 * 6;
    if (bVar7) {
      plVar3 = local_470;
    }
    *plVar3 = lVar8;
    plVar3 = local_470 + uVar11 * 6 + 1;
    if (bVar7) {
      plVar3 = local_470 + 1;
    }
    *plVar3 = lVar9 + (uVar10 & 0xffffffff) * 2;
    pppuVar4 = local_460 + uVar11 * 6;
    if (bVar7) {
      pppuVar4 = local_460;
    }
    *pppuVar4 = &PTR_FUN_048fc6e0;
  }
  (**(code **)(local_478 + 0x18))(&local_478);
  local_70._0_6_ = (uint6)local_70 & 0xffffffffff;
  local_70 = (ulong)(uint6)local_70;
  FUN_006f1490(&local_270);
  sVar5 = local_70._6_2_;
  local_278._0_6_ = (uint6)local_278 & 0xffffffffff;
  cVar6 = local_70._5_1_;
  local_278 = (ulong)(uint6)local_278;
  FUN_006f1490(&local_478);
  bVar7 = local_278._5_1_ != '\0';
  if (cVar6 != '\0') {
    ppuVar1 = (undefined **)(PTR_DAT_04bb2d80 + 0x10);
    do {
      if (!bVar7) {
        return 1;
      }
      if (sVar5 != local_278._6_2_) {
        local_278._0_6_ = (uint6)local_278 & 0xffffffffff;
        local_278 = (ulong)(uint6)local_278;
        (**(code **)(local_478 + 0x10))(&local_478);
        local_290 = 0xffffffff;
        local_278 = local_278 & 0xffffffff00000000;
        local_288 = 0;
        uStack_280 = 0;
        lVar8 = (**(code **)(*param_2 + 0x18))(param_2);
        lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
        if (((lVar9 != 0) && (uVar10 = (**(code **)(*param_2 + 0x20))(param_2), lVar8 != 0)) &&
           ((int)local_290 < 9)) {
          local_290 = local_290 + 1;
          uVar11 = (ulong)local_290;
          bVar7 = 9 < local_290;
          plVar3 = local_470 + uVar11 * 6;
          if (bVar7) {
            plVar3 = local_470;
          }
          *plVar3 = lVar8;
          plVar3 = local_470 + uVar11 * 6 + 1;
          if (bVar7) {
            plVar3 = local_470 + 1;
          }
          *plVar3 = lVar9 + (uVar10 & 0xffffffff) * 2;
          pppuVar4 = local_460 + uVar11 * 6;
          if (bVar7) {
            pppuVar4 = local_460;
          }
          *pppuVar4 = (undefined **)(PTR_DAT_04bb2d80 + 0x10);
        }
        (**(code **)(local_478 + 0x18))(&local_478);
        local_278._0_6_ = (uint6)local_278 & 0xffffffffff;
        local_278 = (ulong)(uint6)local_278;
        FUN_006f1490(&local_478);
        if (sVar5 != local_278._6_2_) {
          local_278._0_6_ = (uint6)local_278 & 0xffffffffff;
          local_278 = (ulong)(uint6)local_278;
          (**(code **)(local_478 + 0x10))(&local_478);
          local_290 = 0xffffffff;
          local_278 = local_278 & 0xffffffff00000000;
          local_288 = 0;
          uStack_280 = 0;
          lVar8 = (**(code **)(*param_2 + 0x18))(param_2);
          lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
          if (((lVar9 != 0) && (uVar10 = (**(code **)(*param_2 + 0x20))(param_2), lVar8 != 0)) &&
             ((int)local_290 < 9)) {
            local_290 = local_290 + 1;
            uVar11 = (ulong)local_290;
            bVar7 = 9 < local_290;
            plVar3 = local_470 + uVar11 * 6;
            if (bVar7) {
              plVar3 = local_470;
            }
            *plVar3 = lVar8;
            plVar3 = local_470 + uVar11 * 6 + 1;
            if (bVar7) {
              plVar3 = local_470 + 1;
            }
            *plVar3 = lVar9 + (uVar10 & 0xffffffff) * 2;
            pppuVar4 = local_460 + uVar11 * 6;
            if (bVar7) {
              pppuVar4 = local_460;
            }
            *pppuVar4 = ppuVar1;
          }
          (**(code **)(local_478 + 0x18))(&local_478);
        }
      }
      local_70._0_6_ = (uint6)local_70 & 0xffffffffff;
      local_70 = (ulong)(uint6)local_70;
      FUN_006f1490(&local_270);
      sVar5 = local_70._6_2_;
      local_278._0_6_ = (uint6)local_278 & 0xffffffffff;
      cVar6 = local_70._5_1_;
      local_278 = (ulong)(uint6)local_278;
      FUN_006f1490(&local_478);
      bVar7 = local_278._5_1_ != '\0';
    } while (cVar6 != '\0');
  }
  return bVar7 ^ 1;
}

