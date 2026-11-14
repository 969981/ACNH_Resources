
undefined8 FUN_01bdf2bc(long *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_4b8;
  undefined8 *puStack_4b0;
  undefined4 local_4a8;
  undefined1 local_4a4;
  undefined *local_4a0;
  undefined8 uStack_498;
  undefined4 local_490;
  undefined *local_488;
  long local_480;
  undefined8 local_478;
  undefined *local_470;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined *local_440;
  undefined1 local_435;
  undefined *local_430;
  long lStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined *local_410;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined *local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined *local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined *local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined *local_320;
  undefined1 auStack_318 [24];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined *local_2f0;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined6 uStack_2c0;
  undefined2 local_2ba;
  undefined6 uStack_2b8;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined4 local_284;
  undefined *local_280 [11];
  long *local_228;
  long *local_220;
  long *local_218;
  undefined *local_208;
  undefined8 *local_200;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined *local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4 [63];
  undefined1 local_185;
  undefined *local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
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
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  lVar7 = *param_1;
  lVar8 = *(long *)(lVar7 + 0x30);
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar7 + 0x38);
    lVar7 = *(long *)(lVar7 + 0x60);
    if (lVar9 != 0 && lVar7 != 0) {
      local_1f4 = 0;
      local_1f8 = 0x60;
      local_1f0 = 0xffffffff;
      local_1e8 = 0xffffffff00000000;
      local_1d0 = local_1c4;
      local_1e0 = 0xffffffff;
      local_200 = &local_128;
      local_1c8 = 0x40;
      local_185 = 0;
      local_1c4[0] = 0;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      local_178 = local_16c;
      puVar2 = auStack_68;
      if (auStack_68 <= (undefined1 *)((long)&local_128 + 2U)) {
        puVar2 = (undefined1 *)((long)&local_128 + 2U);
      }
      local_170 = 0x40;
      local_12d = 0;
      local_16c[0] = 0;
      local_208 = &DAT_04a3ceb8;
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      local_90 = 0;
      local_98 = 0;
      local_a0 = 0;
      local_a8 = 0;
      local_b0 = 0;
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
      local_1d8 = puVar1;
      local_180 = puVar1;
      memset(local_200,0,(size_t)(puVar2 + (-0xe0 - (long)&local_208)));
      local_4a8 = 0x60;
      local_480 = (long)&local_478 + 4;
      local_4a4 = 0;
      lStack_428 = (long)&local_420 + 4;
      puStack_4b0 = &local_3d8;
      local_490 = 0xffffffff;
      local_435 = 0;
      local_478 = CONCAT35(local_478._5_3_,0x40);
      local_3e0._0_4_ = (uint)(uint3)local_3e0;
      local_420 = CONCAT35(local_420._5_3_,0x40);
      puVar2 = auStack_318;
      if (auStack_318 <= (undefined1 *)((long)&local_3d8 + 2U)) {
        puVar2 = (undefined1 *)((long)&local_3d8 + 2U);
      }
      local_4a0 = (undefined *)0xffffffff;
      uStack_498 = 0xffffffff00000000;
      local_4b8 = &DAT_04a3ceb8;
      local_328 = 0;
      local_320 = (undefined *)0x0;
      local_338 = 0;
      local_330 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_358 = 0;
      local_350 = (undefined *)0x0;
      local_368 = 0;
      local_360 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_388 = 0;
      local_380 = (undefined *)0x0;
      local_398 = 0;
      local_390 = 0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_3b8 = 0;
      local_3b0 = (undefined *)0x0;
      local_3c8 = 0;
      local_3c0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_488 = puVar1;
      local_430 = puVar1;
      memset(puStack_4b0,0,(size_t)(puVar2 + (-0xe0 - (long)&local_4b8)));
      if ((param_1[0x11] == 0) || (param_1[0x12] == 0)) {
        uVar6 = FUN_006f50a0(&local_4b8,lVar9,lVar7,0);
        plVar3 = (long *)PTR_DAT_04bb3350;
      }
      else {
        iVar4 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,lVar9);
        if (iVar4 == 5) {
          lVar5 = param_1[0x12];
        }
        else {
          if (iVar4 != 9) {
            return 0;
          }
          lVar5 = param_1[0x11];
        }
        uVar6 = FUN_01ba7cc0(lVar5,&local_4b8,lVar9,lVar7);
        plVar3 = (long *)PTR_DAT_04bb3350;
      }
      PTR_DAT_04bb3350 = (undefined *)plVar3;
      if ((uVar6 & 1) != 0) {
        lVar7 = *(long *)PTR_DAT_04bc08b0;
        if (lVar7 == 0) {
          lVar9 = 1;
        }
        else {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar3 + 0x68));
          lVar9 = *(long *)(lVar5 + 0xa8);
          *(long *)(lVar5 + 0xa8) = lVar7;
        }
        FUN_01beea5c(local_280,*param_1 + 0x10,*param_1,param_1);
        FUN_006f3d64(local_280,&local_208,&local_4b8);
        local_280[0] = PTR_DAT_04bc0c00 + 0x10;
        if (local_218 != (long *)0x0) {
          (**(code **)(*local_218 + 8))();
        }
        if (local_220 != (long *)0x0) {
          (**(code **)(*local_220 + 8))();
        }
        if (local_228 != (long *)0x0) {
          (**(code **)(*local_228 + 8))();
        }
        FUN_003532f4(local_280);
        if (lVar9 != 1) {
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*plVar3 + 0x68));
          *(long *)(lVar7 + 0xa8) = lVar9;
        }
        memset(&puStack_4b0,0,0x1e0);
        local_480 = 0;
        local_478 = 0;
        local_450 = 0;
        uStack_448 = 0;
        local_4a0 = PTR_DAT_04bb2d80 + 0x10;
        local_420 = 0;
        uStack_418 = 0;
        local_2d0 = 0xffffffff;
        uStack_2b8 = 0;
        local_3f0 = 0;
        uStack_3e8 = 0;
        local_3c0 = 0;
        local_3b8 = 0;
        local_390 = 0;
        local_388 = 0;
        local_360 = 0;
        local_358 = 0;
        local_330 = 0;
        local_328 = 0;
        local_300 = 0;
        uStack_2f8 = 0;
        local_2b0 = PTR_DAT_04bb2e08 + 0x10;
        local_2a8 = 0;
        local_2a0 = 0;
        local_298 = 0;
        local_290 = 0;
        local_288 = 1;
        local_284 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_2ba = 0;
        local_4b8 = PTR_DAT_04bc07e0 + 0x10;
        local_470 = local_4a0;
        local_440 = local_4a0;
        local_410 = local_4a0;
        local_3e0 = local_4a0;
        local_3b0 = local_4a0;
        local_380 = local_4a0;
        local_350 = local_4a0;
        local_320 = local_4a0;
        local_2f0 = local_4a0;
        FUN_006f2100(&local_4b8,lVar8,&local_208);
        return 1;
      }
    }
  }
  return 0;
}

