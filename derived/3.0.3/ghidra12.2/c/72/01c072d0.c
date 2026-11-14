
byte FUN_01c072d0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *local_470;
  long local_468;
  long lStack_460;
  undefined *local_458;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined *local_428;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined *local_3f8;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined *local_3c8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined *local_398;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined *local_368;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined *local_338;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined *local_308;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined *local_2d8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined *local_2a8;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined *local_268;
  long local_260;
  long local_258;
  undefined *local_250;
  undefined8 local_230;
  undefined8 local_228;
  undefined *local_220;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined8 local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (param_1 == param_2) {
    return 1;
  }
  lVar8 = (**(code **)(*param_1 + 0x18))();
  lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar8 == lVar9) {
    lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      uVar10 = (**(code **)(*param_1 + 0x20))(param_1);
      lVar8 = lVar8 + (uVar10 & 0xffffffff) * 2;
    }
    lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar9 == 0) {
      if (lVar8 == 0) {
        return 1;
      }
    }
    else {
      uVar10 = (**(code **)(*param_2 + 0x20))(param_2);
      if (lVar8 == lVar9 + (uVar10 & 0xffffffff) * 2) {
        return 1;
      }
    }
  }
  memset(&local_260,0,0x1e0);
  puVar4 = PTR_DAT_04bb2d80;
  local_230 = 0;
  local_228 = 0;
  local_200 = 0;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  local_1f8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_170 = 0;
  local_168 = 0;
  local_140 = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  puVar2 = PTR_DAT_04bc0780 + 0x10;
  local_68 = 0;
  local_268 = puVar2;
  local_250 = puVar1;
  local_220 = puVar1;
  local_1f0 = puVar1;
  local_1c0 = puVar1;
  local_190 = puVar1;
  local_160 = puVar1;
  local_130 = puVar1;
  local_100 = puVar1;
  local_d0 = puVar1;
  local_a0 = puVar1;
  FUN_006f1750(&local_268);
  local_78 = 0;
  local_80 = 0xffffffff;
  local_70 = 0;
  local_68 = local_68 & 0xffffffff00000000;
  lVar8 = (**(code **)(*param_1 + 0x18))(param_1);
  lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((lVar9 != 0) && (uVar10 = (**(code **)(*param_1 + 0x20))(param_1), lVar8 != 0)) {
    local_258 = lVar9 + (uVar10 & 0xffffffff) * 2;
    local_80 = 0;
    local_250 = puVar4 + 0x10;
    local_260 = lVar8;
  }
  (**(code **)(local_268 + 0x18))(&local_268);
  memset(&local_468,0,0x1e0);
  local_438 = 0;
  uStack_430 = 0;
  local_270 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_470 = puVar2;
  local_458 = puVar1;
  local_428 = puVar1;
  local_3f8 = puVar1;
  local_3c8 = puVar1;
  local_398 = puVar1;
  local_368 = puVar1;
  local_338 = puVar1;
  local_308 = puVar1;
  local_2d8 = puVar1;
  local_2a8 = puVar1;
  FUN_006f1750(&local_470);
  local_288 = 0xffffffff;
  local_270 = local_270 & 0xffffffff00000000;
  local_280 = 0;
  uStack_278 = 0;
  lVar8 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar9 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((lVar9 != 0) && (uVar10 = (**(code **)(*param_2 + 0x20))(param_2), lVar8 != 0)) {
    lStack_460 = lVar9 + (uVar10 & 0xffffffff) * 2;
    local_288 = 0;
    local_458 = puVar4 + 0x10;
    local_468 = lVar8;
  }
  (**(code **)(local_470 + 0x18))(&local_470);
  local_68._0_6_ = (uint6)local_68 & 0xffffffffff;
  local_68 = (ulong)(uint6)local_68;
  FUN_006f1490(&local_268);
  cVar5 = local_68._5_1_;
  local_270._0_6_ = (uint6)local_270 & 0xffffffffff;
  sVar3 = local_68._6_2_;
  local_270 = (ulong)(uint6)local_270;
  bVar6 = local_68._5_1_ != '\0';
  FUN_006f1490(&local_470);
  bVar7 = local_270._5_1_ != '\0';
  if ((cVar5 != '\0') && (local_270._5_1_ != '\0')) {
    do {
      if (sVar3 != local_270._6_2_) {
        return 0;
      }
      local_68._0_6_ = (uint6)local_68 & 0xffffffffff;
      local_68 = (ulong)(uint6)local_68;
      FUN_006f1490(&local_268);
      cVar5 = local_68._5_1_;
      local_270._0_6_ = (uint6)local_270 & 0xffffffffff;
      sVar3 = local_68._6_2_;
      local_270 = (ulong)(uint6)local_270;
      bVar6 = local_68._5_1_ != '\0';
      FUN_006f1490(&local_470);
      bVar7 = local_270._5_1_ != '\0';
    } while ((cVar5 != '\0') && (local_270._5_1_ != '\0'));
  }
  return (bVar6 | bVar7) ^ 1;
}

