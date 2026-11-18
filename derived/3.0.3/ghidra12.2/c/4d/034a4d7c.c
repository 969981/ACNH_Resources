
void FUN_034a4d7c(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  float fVar15;
  undefined **local_530;
  char *local_528;
  undefined4 local_520;
  char local_51c [7];
  undefined1 local_515;
  undefined *local_510;
  char *local_508;
  undefined4 local_500;
  char local_4fc [7];
  undefined1 local_4f5;
  undefined *local_4f0;
  undefined2 local_4e8;
  undefined2 uStack_4e6;
  undefined4 local_4e4;
  undefined4 uStack_4e0;
  uint local_4dc;
  undefined **local_4d8;
  undefined8 uStack_4d0;
  undefined4 local_4c8;
  undefined1 local_4c4;
  undefined1 *local_4c0;
  undefined1 *puStack_4b8;
  undefined4 local_4b0;
  undefined1 local_4ac [4];
  undefined *local_4a8;
  undefined1 *puStack_4a0;
  undefined4 local_498;
  undefined1 local_494 [39];
  undefined1 local_46d;
  undefined1 *local_468;
  undefined1 *puStack_460;
  uint local_458;
  undefined1 local_454 [4];
  undefined *local_450;
  undefined1 *puStack_448;
  undefined4 local_440;
  undefined1 local_43c [39];
  undefined1 local_415;
  undefined1 local_410 [8];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined **local_3f0;
  undefined8 local_3e8;
  ulong local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined *local_3c0;
  long local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined *local_368;
  long lStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined **local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined *local_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4 [63];
  undefined1 local_285;
  undefined *local_280;
  undefined1 *local_278;
  undefined4 local_270;
  undefined1 local_26c [63];
  undefined1 local_22d;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined1 *local_208;
  undefined4 local_200;
  undefined1 local_1fc [63];
  undefined1 local_1bd;
  undefined *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [63];
  undefined1 local_165;
  undefined *local_160;
  int local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [4];
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  char *local_108;
  undefined *local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined8 *local_e8;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined2 *puStack_b8;
  undefined4 local_b0;
  undefined2 local_ac [15];
  undefined2 local_8e;
  undefined **local_88;
  char *local_80;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb2020;
  if ((param_2 == 0) || (param_3 == (long *)0x0)) {
    local_4f0 = PTR_DAT_04bb2020 + 0x10;
    local_4e8 = 0x208b;
    uStack_4e6 = 0x40c;
    local_4e4 = 0;
    lVar7 = FUN_02bcb7b8(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_4f0);
    if (*(long *)(*(long *)(lVar7 + 0x230) + (ulong)(1 < *(uint *)(lVar7 + 0x228)) * 8) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x244) < 1) {
      return;
    }
    (**(code **)(**(long **)(param_1 + 0x238) + 0xb0))();
    *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
    return;
  }
  local_138 = 0;
  local_130 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_12c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  FUN_007ef010(auStack_128,PTR_DAT_04bb3170);
  local_120 = 0;
  uStack_118 = 0;
  local_124 = 0xffffffff;
  local_110 = 0;
  local_108 = (char *)0x0;
  local_100 = (undefined *)0x0;
  local_f8 = (undefined **)(PTR_DAT_04bc5058 + 0x10);
  local_d8 = 0xffffffff;
  local_b0 = 0x10;
  local_8e = 0;
  local_ac[0] = 0;
  puStack_b8 = local_ac;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = PTR_DAT_04bbd6c0 + 0x10;
  local_4f0 = puVar4 + 0x10;
  local_4e8 = 0x208b;
  uStack_4e6 = 0x40c;
  local_4e4 = 0;
  lVar7 = FUN_02bcb7b8(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_4f0);
  plVar13 = *(long **)(*(long *)(lVar7 + 0x230) + (ulong)(2 < *(uint *)(lVar7 + 0x228)) * 0x10);
  if ((*(char *)(param_1 + 0x1ce8c) == '\0') ||
     (uVar8 = (**(code **)(*param_3 + 0x20))(param_3), (uVar8 & 1) != 0)) {
    if (*(int *)(param_1 + 0x1b0) == 5) {
      local_4f0 = puVar4 + 0x10;
      local_4e8 = 0x208b;
      uStack_4e6 = 0x40c;
      local_4e4 = 0;
      lVar7 = FUN_02bcb7b8(**(long **)(*(long *)(param_1 + 0x228) + 0x3f8) + 0x38,&local_4f0);
      if (*(long *)(*(long *)(lVar7 + 0x230) + (ulong)(1 < *(uint *)(lVar7 + 0x228)) * 8) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x244) < 1) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x238) + 0xb0))();
      *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
      return;
    }
    if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
      puVar1 = PTR_DAT_04bc4e68 + 0x10;
      local_4e8 = 7;
      uStack_4e6 = 0;
      local_4f0 = puVar1;
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_4f0);
      (**(code **)(plVar13[3] + 0x1c0))(plVar13[1]);
      local_4e8 = 9;
      uStack_4e6 = 0;
      local_4f0 = puVar1;
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_4f0);
      (**(code **)(plVar13[3] + 0x1d0))(plVar13[1]);
    }
    puVar1 = PTR_DAT_04bc0a78;
    uVar11 = *(uint *)(lVar7 + 0x218);
    lVar10 = *(long *)(lVar7 + 0x220);
    lVar12 = *(long *)(lVar10 + (ulong)(1 < uVar11) * 8);
    if (lVar12 != 0) {
      local_4e4 = 0;
      uStack_4e0 = 0;
      local_4e8 = 0x100;
      local_4dc = 0;
      puStack_4a0 = local_494;
      local_4c8 = 0;
      local_4c4 = 0;
      local_4b0 = 0xffffffff;
      local_498 = 0x40;
      local_458 = local_458 & 0xffffff;
      local_494[0] = 0;
      local_4c0 = &DAT_ffffffff;
      puStack_4b8 = &DAT_ffffffff00000000;
      local_4a8 = PTR_DAT_04bb2bc0 + 0x10;
      local_440 = 0x40;
      uStack_400._0_4_ = (uint)(uint3)uStack_400;
      local_43c[0] = 0;
      puStack_448 = local_43c;
      lStack_360 = (long)&local_358 + 4;
      uVar3 = (ulong)local_358 >> 0x20;
      local_2e8 = 0xffffffff00000000;
      local_3e0 = local_3e0 & 0xffffff0000000000;
      local_3b8 = (long)&local_3b0 + 4;
      uVar8 = (ulong)local_3b0 >> 0x20;
      local_308 = &PTR_FUN_048fc868;
      local_3c8 = CONCAT44(local_3c8._4_4_,0xffffffff);
      local_3b0 = CONCAT44((uint)uVar8 & 0xffffff00,0x40);
      uStack_370._0_4_ = (uint)(uint3)uStack_370;
      local_358 = CONCAT44((uint)uVar3 & 0xffffff00,0x40);
      local_318._0_4_ = (uint)(uint3)local_318;
      local_3f8 = 0;
      local_300 = 0;
      local_2f8 = 0;
      local_2f4 = 0;
      local_2f0 = 0xffffffff;
      local_2e0 = 0xffffffff;
      local_2c8 = 0x40;
      local_285 = 0;
      local_270 = 0x40;
      local_22d = 0;
      local_310 = 0;
      local_218 = 0;
      local_220 = 0;
      local_228 = 0;
      local_200 = 0x40;
      local_1bd = 0;
      local_1a8 = 0x40;
      local_165 = 0;
      local_3d8 = 0xffffffff;
      uStack_3d0 = 0xffffffff00000000;
      local_4d8 = &PTR_FUN_048fc868;
      uStack_4d0 = 0;
      local_2d0 = local_2c4;
      local_2c4[0] = 0;
      local_278 = local_26c;
      local_26c[0] = 0;
      local_1fc[0] = 0;
      local_1a4[0] = 0;
      local_3f0 = &PTR_FUN_048fc868;
      local_3e8 = 0;
      local_208 = local_1fc;
      local_1b0 = local_1a4;
      local_158 = *(int *)PTR_DAT_04bc0b30;
      local_154 = 0;
      *(int *)PTR_DAT_04bc0b30 = local_158 + 1;
      local_160 = puVar1 + 0x10;
      local_150 = 0;
      local_4f0 = PTR_DAT_04bc0bf0 + 0x10;
      local_148 = 0;
      local_140 = 0;
      plVar13 = *(long **)(lVar12 + 0x48);
      local_450 = local_4a8;
      local_3c0 = local_4a8;
      local_368 = local_4a8;
      local_2d8 = local_4a8;
      local_280 = local_4a8;
      local_210 = local_4a8;
      local_1b8 = local_4a8;
      if (plVar13[1] != 0) {
        local_510 = PTR_DAT_04bc0878 + 0x10;
        local_508 = (char *)CONCAT44(local_508._4_4_,9);
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_510);
        (**(code **)(plVar13[3] + 0x5e0))(plVar13[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar12);
      }
      local_510 = puVar4 + 0x10;
      local_508 = "STR_KeyIcon";
      FUN_033fbef0(&local_530,7,param_1 + 0x1f8);
      FUN_01bea210(&local_4f0,lVar12,&local_510,&local_530);
      FUN_01bea9c8(&local_4f0);
      FUN_01be9eb8(&local_4f0);
      uVar11 = *(uint *)(lVar7 + 0x218);
      lVar10 = *(long *)(lVar7 + 0x220);
    }
    local_138 = **(undefined8 **)(param_2 + 0x2d0);
    local_d0 = *(undefined8 *)(lVar10 + (ulong)(2 < uVar11) * 0x10);
    lVar10 = 0x18;
    if (*(uint *)(lVar7 + 0x208) < 4) {
      lVar10 = 0;
    }
    local_c8 = *(undefined8 *)(*(long *)(lVar7 + 0x210) + lVar10);
    local_108 = "ConstructionPortfolioAdvertising";
    local_100 = &DAT_040bcae6;
    goto LAB_034a5278;
  }
  local_64 = 0xffffffff;
  iVar6 = (**(code **)(*param_3 + 0x30))(param_3,&local_64);
  if (iVar6 != 0) {
    return;
  }
  local_4dc = local_4dc & 0xffffff00;
  uStack_4e0 = 0x80;
  local_4d8 = (undefined **)0xffffffff;
  uStack_4d0 = 0xffffffff00000000;
  puStack_4b8 = local_4ac;
  local_4c8 = 0xffffffff;
  local_4b0 = 0x40;
  local_46d = 0;
  local_4ac[0] = 0;
  local_4c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_458 = 0x40;
  local_415 = 0;
  local_454[0] = 0;
  puStack_460 = local_454;
  local_4f0 = PTR_DAT_04bb6b38 + 0x10;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_410 = (undefined1  [8])0x0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_368 = (undefined *)0x0;
  lStack_360 = 0;
  local_4e8 = SUB82(local_410,0);
  uStack_4e6 = (undefined2)((ulong)local_410 >> 0x10);
  local_4e4 = (undefined4)((ulong)local_410 >> 0x20);
  puVar2 = &local_310;
  if (&local_310 <= local_410 + 2) {
    puVar2 = (undefined8 *)(local_410 + 2);
  }
  local_378 = 0;
  uStack_370 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3c8 = 0;
  local_3c0 = (undefined *)0x0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3f8 = 0;
  local_3f0 = (undefined **)0x0;
  local_408 = 0;
  uStack_400 = 0;
  local_468 = local_4c0;
  memset(local_410,0,(size_t)((long)puVar2 + (-0xe0 - (long)&local_4f0)));
  iVar6 = (**(code **)(*param_3 + 0x80))(param_3,local_64 == 2,&local_4f0);
  if (iVar6 != 0) {
    return;
  }
  if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
    puVar1 = PTR_DAT_04bc4e68 + 0x10;
    local_508._0_4_ = 6;
    local_510 = puVar1;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_510);
    (**(code **)(plVar13[3] + 0x1b8))(plVar13[1]);
    local_508 = (char *)CONCAT44(local_508._4_4_,9);
    local_510 = puVar1;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_510);
    (**(code **)(plVar13[3] + 0x1d0))(plVar13[1]);
  }
  local_138 = **(undefined8 **)(param_2 + 0x2d0);
  local_108 = "ConstructionPortfolioAdvertising";
  psVar9 = (short *)(**(code **)(local_4f0 + 0x18))(&local_4f0);
  iVar6 = (**(code **)(local_4f0 + 0x20))(&local_4f0);
  bVar5 = true;
  if ((psVar9 != (short *)0x0) && (iVar6 != 0)) {
    bVar5 = *psVar9 == 0;
  }
  if (local_64 < 2) {
    local_100 = &DAT_0406e071;
    if (bVar5) {
      iVar6 = (**(code **)(*param_3 + 0x60))(param_3,&local_510);
      if (iVar6 != 0) {
        return;
      }
      local_f8 = &PTR_LAB_04b2f0e8;
      local_f0 = (undefined **)CONCAT44(local_f0._4_4_,(uint)(ushort)local_510);
    }
    else {
      local_e8 = (undefined8 *)(CONCAT71(local_e8._1_7_,bVar5) ^ 1);
      local_f0 = &local_4f0;
      local_f8 = &PTR_LAB_04b2f0c0;
    }
  }
  else if (local_64 == 2) {
    if (bVar5 == false) {
      local_e8 = (undefined8 *)((ulong)local_e8._1_7_ << 8 ^ 1);
      local_100 = &DAT_040f07e0;
      local_f8 = &PTR_LAB_04b2f070;
      local_f0 = &local_4f0;
    }
    else {
      local_530 = (undefined **)CONCAT44(local_530._4_4_,5);
      iVar6 = (**(code **)(*param_3 + 0x88))(param_3,&local_530);
      if (iVar6 != 0) {
        return;
      }
      if ((int)(uint)local_530 < 5) {
        uVar11 = (uint)local_530;
        if (4 < (uint)local_530) {
          uVar11 = 0;
        }
        local_e8 = (undefined8 *)(&PTR_DAT_04b29518)[(int)uVar11];
      }
      else {
        local_e8 = &DAT_0407ebb1;
      }
      local_100 = &DAT_040bc6d1;
      local_f8 = &PTR_LAB_04b2f098;
      local_f0 = (undefined **)0x40f3d62;
    }
  }
  puVar1 = PTR_DAT_04bb3768;
  if (*DAT_04ccdcc0 != 0) {
    local_110 = 1;
  }
  local_4f5 = 0;
  local_500 = 8;
  local_508 = local_4fc;
  local_4fc[0] = '\0';
  local_510 = PTR_DAT_04bb3768 + 0x10;
  if (local_64 != 2) {
    (**(code **)(*param_3 + 0x38))(param_3,&local_510);
  }
  plVar13 = (long *)**(undefined8 **)(lVar7 + 0x230);
  local_528 = "kpp";
  local_530 = (undefined **)(puVar4 + 0x10);
  uVar8 = FUN_00710cb0(&local_510,&local_530);
  if ((uVar8 & 1) == 0) {
    local_80 = "hgs";
    local_88 = (undefined **)(puVar4 + 0x10);
    uVar8 = FUN_00710cb0(&local_510,&local_88);
    if ((uVar8 & 1) == 0) {
      if (plVar13 != (long *)0x0) {
        fVar15 = (float)(int)local_64;
        local_530 = &PTR_LAB_04aa7fe0;
        local_528._0_4_ = 0x14;
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_530);
        (**(code **)(plVar13[3] + 0x158))(fVar15,plVar13[1]);
        local_530 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
        local_528 = (char *)CONCAT44(local_528._4_4_,9);
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_530);
        (**(code **)(plVar13[3] + 0x1d0))(plVar13[1]);
      }
      lVar10 = param_1 + 600;
      FUN_03412cc8(lVar10,*(undefined4 *)(param_1 + 0x1cf10));
      *(undefined4 *)(param_1 + 0x1cf10) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1cf14) = 0;
      FUN_03412cc8(lVar10,*(undefined4 *)(param_1 + 0x1cf40));
      *(undefined4 *)(param_1 + 0x1cf40) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x1cf44) = 0;
      if (local_64 == 2) {
        local_530 = (undefined **)(puVar4 + 0x10);
        local_528 = "/L_FacilityIcon_00";
        lVar10 = FUN_034b0150(lVar7,&local_530);
        if ((lVar10 != 0) && (plVar13 = *(long **)(lVar10 + 0x288), plVar13 != (long *)0x0)) {
          local_88 = (undefined **)CONCAT44(local_88._4_4_,5);
          iVar6 = (**(code **)(*param_3 + 0x88))(param_3,&local_88);
          if (iVar6 != 0) {
            return;
          }
          fVar15 = (float)(int)local_88;
          local_530 = &PTR_LAB_04aa7fe0;
          local_528 = (char *)CONCAT44(local_528._4_4_,0x14);
          (**(code **)(*plVar13 + 0x18))(plVar13,&local_530);
          (**(code **)(plVar13[3] + 0x158))(fVar15,plVar13[1]);
        }
      }
      else {
        if (local_64 == 1) {
          lVar12 = *(long *)(lVar7 + 0x210);
          uVar11 = *(uint *)(lVar7 + 0x208);
          plVar13 = *(long **)(lVar12 + (ulong)(1 < uVar11) * 8);
          if (plVar13 != (long *)0x0) {
            local_515 = 0;
            local_520 = 8;
            local_530 = (undefined **)(puVar1 + 0x10);
            local_51c[0] = '\0';
            local_528 = local_51c;
            iVar6 = (**(code **)(*param_3 + 0x38))(param_3,&local_530);
            if (iVar6 != 0) {
              return;
            }
            (*(code *)local_530[3])(&local_530);
            local_88 = (undefined **)(puVar4 + 0x10);
            local_80 = local_528;
            uVar14 = FUN_03412c20(lVar10,&local_88,0x11);
            *(undefined4 *)(param_1 + 0x1cf10) = uVar14;
            *(long **)(param_1 + 0x1cf08) = plVar13;
            local_88 = (undefined **)(PTR_DAT_04bc0cb8 + 0x10);
            local_80 = (char *)CONCAT44(local_80._4_4_,0x1f);
            (**(code **)(*plVar13 + 0x18))(plVar13,&local_88);
            (**(code **)(plVar13[3] + 0x208))(plVar13[1],0,0,param_1 + 0x1c190);
            uVar11 = *(uint *)(lVar7 + 0x208);
            lVar12 = *(long *)(lVar7 + 0x210);
          }
          plVar13 = *(long **)(lVar12 + (ulong)(2 < uVar11) * 0x10);
          if (plVar13 == (long *)0x0) goto LAB_034a5278;
          local_515 = 0;
          local_520 = 8;
          local_530 = (undefined **)(puVar1 + 0x10);
          local_51c[0] = '\0';
          local_528 = local_51c;
          iVar6 = (**(code **)(*param_3 + 0x40))(param_3,&local_530);
          if (iVar6 != 0) {
            return;
          }
          (*(code *)local_530[3])(&local_530);
          local_88 = (undefined **)(puVar4 + 0x10);
          local_80 = local_528;
          uVar14 = FUN_03412c20(lVar10,&local_88,0x11);
          *(undefined4 *)(param_1 + 0x1cf40) = uVar14;
          *(long **)(param_1 + 0x1cf38) = plVar13;
          local_88 = (undefined **)(PTR_DAT_04bc0cb8 + 0x10);
          local_80 = (char *)CONCAT44(local_80._4_4_,0x1f);
          (**(code **)(*plVar13 + 0x18))(plVar13,&local_88);
          lVar12 = plVar13[3];
          lVar10 = plVar13[1];
        }
        else {
          if ((local_64 != 0) ||
             (plVar13 = *(long **)(*(long *)(lVar7 + 0x210) +
                                  (ulong)(1 < *(uint *)(lVar7 + 0x208)) * 8), plVar13 == (long *)0x0
             )) goto LAB_034a5278;
          local_515 = 0;
          local_528 = local_51c;
          local_520 = 8;
          local_530 = (undefined **)(puVar1 + 0x10);
          local_51c[0] = '\0';
          iVar6 = (**(code **)(*param_3 + 0x38))(param_3,&local_530);
          if (iVar6 != 0) {
            return;
          }
          (*(code *)local_530[3])(&local_530);
          local_88 = (undefined **)(puVar4 + 0x10);
          local_80 = local_528;
          uVar14 = FUN_03412c20(lVar10,&local_88,0x11);
          *(undefined4 *)(param_1 + 0x1cf10) = uVar14;
          *(long **)(param_1 + 0x1cf08) = plVar13;
          local_88 = &PTR_LAB_04a3ee98;
          local_80 = (char *)CONCAT44(local_80._4_4_,0x1f);
          (**(code **)(*plVar13 + 0x18))(plVar13,&local_88);
          lVar12 = plVar13[3];
          lVar10 = plVar13[1];
        }
        (**(code **)(lVar12 + 0x208))(lVar10,0,0,param_1 + 0x1c190);
      }
      goto LAB_034a5278;
    }
  }
  if (plVar13 != (long *)0x0) {
    local_530 = (undefined **)(puVar4 + 0x10);
    local_528 = "kpp";
    uVar8 = FUN_00710cb0(&local_510,&local_530);
    if ((uVar8 & 1) == 0) {
      local_530 = &PTR_LAB_04aa7fe0;
      local_528 = (char *)CONCAT44(local_528._4_4_,0x14);
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_530);
      uVar14 = 0x40800000;
    }
    else {
      local_530 = &PTR_LAB_04aa7fe0;
      local_528 = (char *)CONCAT44(local_528._4_4_,0x14);
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_530);
      uVar14 = 0x40400000;
    }
    (**(code **)(plVar13[3] + 0x158))(uVar14,plVar13[1]);
    local_530 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
    local_528 = (char *)CONCAT44(local_528._4_4_,9);
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_530);
    (**(code **)(plVar13[3] + 0x1d0))(plVar13[1]);
  }
LAB_034a5278:
  FUN_03111440(*(undefined8 *)(param_1 + 0x238),&local_138);
  *(undefined4 *)(param_1 + 0x244) = 0x3c;
  plVar13 = *(long **)(*(long *)(lVar7 + 0x230) + (ulong)(1 < *(uint *)(lVar7 + 0x228)) * 8);
  if (plVar13 != (long *)0x0) {
    local_4f0 = PTR_DAT_04bc4f00 + 0x10;
    local_4e8 = 2;
    uStack_4e6 = 0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&local_4f0);
    (**(code **)(plVar13[3] + 0x38))(plVar13[1],0);
  }
  return;
}

