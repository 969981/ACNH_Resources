
void FUN_02698080(byte *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined2 uVar16;
  uint *puVar17;
  uint *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  int local_b08;
  undefined2 local_b00;
  undefined2 local_afe;
  undefined4 local_afc;
  undefined2 local_af8;
  undefined2 local_af6;
  undefined4 local_af4;
  undefined8 local_af0;
  uint *puStack_ae8;
  undefined *local_ae0;
  char *pcStack_ad8;
  long local_9c0;
  uint local_9a8;
  long local_970 [13];
  long local_908 [13];
  long local_8a0 [147];
  uint local_404;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
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
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 auStack_240 [152];
  undefined *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  undefined1 local_194 [7];
  undefined1 local_18d;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_75;
  uint local_6c;
  
  FUN_02699290();
  puVar6 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_ad8 = "HouseReset";
  local_ae0 = puVar1;
  FUN_027494ac(*param_2,&local_ae0,1);
  pcStack_ad8 = "CoordinateDIYStatus";
  local_ae0 = puVar1;
  FUN_027494ac(*param_2,&local_ae0,0);
  pcStack_ad8 = "ReserveDIYStatus";
  local_ae0 = puVar1;
  FUN_027494ac(*param_2,&local_ae0,0);
  pcStack_ad8 = "IslandKitchenStandPos";
  local_ae0 = puVar1;
  FUN_027494ac(*param_2,&local_ae0,0);
  pcStack_ad8 = "AudioShuffleState";
  local_ae0 = puVar1;
  uVar10 = FUN_027490f0(*param_2,&local_ae0);
  if (1 < uVar10) {
    pcStack_ad8 = "AudioShuffleState";
    local_ae0 = puVar1;
    FUN_027494ac(*param_2,&local_ae0,uVar10 & 1);
  }
  pcStack_ad8 = "AudioShuffleState";
  local_ae0 = puVar1;
  FUN_0274a060(param_1 + 0x1267c,&local_ae0,0);
  uVar19 = 0;
  pbVar21 = param_1 + 0x3c;
  do {
    if (*(int *)(pbVar21 + -0x1c) != 0 && *(int *)(pbVar21 + -0x38) != 0) {
      puVar1 = puVar6 + 0x10;
      pcStack_ad8 = "TodayCompleteCoordinateHouseInterior";
      local_ae0 = puVar1;
      iVar11 = FUN_02746e10(pbVar21,&local_ae0);
      if (iVar11 != 0) {
        pcStack_ad8 = "TodayCompleteCoordinateHouseInterior";
        local_ae0 = puVar1;
        FUN_0265d830(*param_2,uVar19 & 0xffffffff,&local_ae0,0,1);
      }
      pcStack_ad8 = "TodayCompleteCoordinateHouseExterior";
      local_ae0 = puVar1;
      iVar11 = FUN_02746e10(pbVar21,&local_ae0);
      if (iVar11 != 0) {
        local_ae0 = puVar6 + 0x10;
        pcStack_ad8 = "TodayCompleteCoordinateHouseExterior";
        FUN_0265d830(*param_2,uVar19 & 0xffffffff,&local_ae0,0,1);
      }
      puVar1 = puVar6 + 0x10;
      pcStack_ad8 = "InteriorCoordinator";
      local_ae0 = puVar1;
      iVar11 = FUN_02746e10(pbVar21,&local_ae0);
      if (iVar11 != 0) {
        pcStack_ad8 = "InteriorCoordinator";
        local_ae0 = puVar1;
        FUN_0265d830(*param_2,uVar19 & 0xffffffff,&local_ae0,0,1);
      }
      pcStack_ad8 = "ExteriorCoordinator";
      local_ae0 = puVar1;
      iVar11 = FUN_02746e10(pbVar21,&local_ae0);
      if (iVar11 != 0) {
        local_ae0 = puVar6 + 0x10;
        pcStack_ad8 = "ExteriorCoordinator";
        FUN_0265d830(*param_2,uVar19 & 0xffffffff,&local_ae0,0,1);
      }
    }
    uVar19 = uVar19 + 1;
    pbVar21 = pbVar21 + 0x5f0;
  } while (uVar19 != 8);
  local_18d = 0;
  local_198 = 8;
  local_1a0 = local_194;
  local_194[0] = 0;
  local_1a8 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_1a8,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_1a8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
  }
  (**(code **)(local_1a8 + 0x18))(&local_1a8);
  FUN_0074fda4(auStack_240,"Param/NpcRoom/%s.byml",local_1a0);
  uVar19 = FUN_03eba3a0(auStack_240);
  if (((uVar19 & 1) != 0) &&
     (plVar25 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598), plVar25 != (long *)0x0)) {
    local_400 = 0xfffe;
    FUN_0277d4ac(&local_400);
    local_3f8 = 0xfffe;
    FUN_0277d4ac(&local_3f8);
    local_3f0 = 0xfffe;
    FUN_0277d4ac(&local_3f0);
    local_3e8 = 0xfffe;
    FUN_0277d4ac(&local_3e8);
    local_3e0 = 0xfffe;
    FUN_0277d4ac(&local_3e0);
    local_3d8 = 0xfffe;
    FUN_0277d4ac(&local_3d8);
    local_3d0 = 0xfffe;
    FUN_0277d4ac(&local_3d0);
    local_3c8 = 0xfffe;
    FUN_0277d4ac(&local_3c8);
    local_3c0 = 0xfffe;
    FUN_0277d4ac(&local_3c0);
    local_3b8 = 0xfffe;
    FUN_0277d4ac(&local_3b8);
    local_3b0 = 0xfffe;
    FUN_0277d4ac(&local_3b0);
    local_3a8 = 0xfffe;
    FUN_0277d4ac(&local_3a8);
    local_3a0 = 0xfffe;
    FUN_0277d4ac(&local_3a0);
    local_398 = 0xfffe;
    FUN_0277d4ac(&local_398);
    local_390 = 0xfffe;
    FUN_0277d4ac(&local_390);
    local_388 = 0xfffe;
    FUN_0277d4ac(&local_388);
    local_380 = 0xfffe;
    FUN_0277d4ac(&local_380);
    local_378 = 0xfffe;
    FUN_0277d4ac(&local_378);
    local_370 = 0xfffe;
    FUN_0277d4ac(&local_370);
    local_368 = 0xfffe;
    FUN_0277d4ac(&local_368);
    local_360 = 0xfffe;
    FUN_0277d4ac(&local_360);
    local_358 = 0xfffe;
    FUN_0277d4ac(&local_358);
    local_350 = 0xfffe;
    FUN_0277d4ac(&local_350);
    local_348 = 0xfffe;
    FUN_0277d4ac(&local_348);
    local_340 = 0xfffe;
    FUN_0277d4ac(&local_340);
    local_338 = 0xfffe;
    FUN_0277d4ac(&local_338);
    local_330 = 0xfffe;
    FUN_0277d4ac(&local_330);
    local_328 = 0xfffe;
    FUN_0277d4ac(&local_328);
    local_320 = 0xfffe;
    FUN_0277d4ac(&local_320);
    local_318 = 0xfffe;
    FUN_0277d4ac(&local_318);
    local_310 = 0xfffe;
    FUN_0277d4ac(&local_310);
    local_308 = 0xfffe;
    FUN_0277d4ac(&local_308);
    local_300 = 0xfffe;
    FUN_0277d4ac(&local_300);
    local_2f8 = 0xfffe;
    FUN_0277d4ac(&local_2f8);
    local_2f0 = 0xfffe;
    FUN_0277d4ac(&local_2f0);
    local_2e8 = 0xfffe;
    FUN_0277d4ac(&local_2e8);
    local_2e0 = 0xfffe;
    FUN_0277d4ac(&local_2e0);
    local_2d8 = 0xfffe;
    FUN_0277d4ac(&local_2d8);
    local_2d0 = 0xfffe;
    FUN_0277d4ac(&local_2d0);
    local_2c8 = 0xfffe;
    FUN_0277d4ac(&local_2c8);
    local_2c0 = 0xfffe;
    FUN_0277d4ac(&local_2c0);
    local_2b8 = 0xfffe;
    FUN_0277d4ac(&local_2b8);
    local_2b0 = 0xfffe;
    FUN_0277d4ac(&local_2b0);
    local_2a8 = 0xfffe;
    FUN_0277d4ac(&local_2a8);
    local_2a0 = 0xfffe;
    FUN_0277d4ac(&local_2a0);
    local_298 = 0xfffe;
    FUN_0277d4ac(&local_298);
    local_290 = 0xfffe;
    FUN_0277d4ac(&local_290);
    local_288 = 0xfffe;
    FUN_0277d4ac(&local_288);
    local_280 = 0xfffe;
    FUN_0277d4ac(&local_280);
    local_278 = 0xfffe;
    FUN_0277d4ac(&local_278);
    local_270 = 0xfffe;
    FUN_0277d4ac(&local_270);
    local_268 = 0xfffe;
    FUN_0277d4ac(&local_268);
    local_260 = 0xfffe;
    FUN_0277d4ac(&local_260);
    local_258 = 0xfffe;
    FUN_0277d4ac(&local_258);
    local_250 = 0xfffe;
    FUN_0277d4ac(&local_250);
    local_248 = 0xfffe;
    FUN_0277d4ac(&local_248);
    local_340 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_348 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_350 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_358 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_360 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_368 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_370 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_378 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_380 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_388 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_390 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_398 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3a0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3a8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3b0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3b8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3c0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3c8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3d0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3d8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3e0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3e8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3f0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_3f8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_400 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_278 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_280 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_288 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_290 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_298 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2a0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2a8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2b0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2b8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2c0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2c8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2d0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2d8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2e0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2e8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2f0 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_2f8 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_300 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_308 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_310 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_318 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_320 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_328 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_330 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_338 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_248 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_250 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_258 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_260 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_268 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_270 = *(undefined8 *)PTR_DAT_04bb37e0;
    local_404 = 0;
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar24 = *(long *)(lVar13 + 0xa8);
    local_180 = "NpcRoom";
    *(long **)(lVar13 + 0xa8) = plVar25;
    local_188 = puVar6 + 0x10;
    (**(code **)(local_1a8 + 0x18))(&local_1a8);
    puStack_ae8 = (uint *)local_1a0;
    local_af0 = (undefined8 *)(puVar6 + 0x10);
    FUN_00b62c50(&local_ae0,&local_188,&local_af0,0);
    local_180 = (char *)((long)&local_178 + 4);
    local_75 = 0;
    local_178 = CONCAT35(local_178._5_3_,0x100);
    local_188 = PTR_DAT_04bb21f8 + 0x10;
    uVar19 = (**(code **)(local_ae0 + 0xf0))(&local_ae0,&local_188,1);
    if ((uVar19 & 1) != 0) {
      FUN_03c27e60(&local_ae0,&local_188,plVar25);
    }
    puVar14 = (undefined8 *)(**(code **)(local_970[0] + 0xf0))(local_970);
    uVar20 = *puVar14;
    local_af6 = 0;
    local_af4 = 0;
    local_af8 = (undefined2)uVar20;
    FUN_0277d4ac(&local_af8);
    local_af6 = (undefined2)((ulong)uVar20 >> 0x10);
    local_af4 = (undefined4)((ulong)uVar20 >> 0x20);
    FUN_0285a8b0(param_1 + 0x12880,&local_af8);
    puVar15 = (ulong *)(**(code **)(local_970[0] + 0xf0))(local_970);
    uVar19 = *puVar15;
    local_188 = (undefined *)(uVar19 & 0xffff);
    FUN_0277d4ac(&local_188);
    local_188 = (undefined *)
                CONCAT44((int)(uVar19 >> 0x20),
                         CONCAT13((char)(uVar19 >> 0x18),
                                  CONCAT12((char)(uVar19 >> 0x10),(undefined2)local_188)));
    iVar11 = 0;
    if (*(long *)PTR_DAT_04bb46d0 != 0) {
      iVar11 = FUN_017c206c(*(long *)PTR_DAT_04bb46d0,&local_188);
    }
    local_af0 = (undefined8 *)CONCAT44(local_af0._4_4_,iVar11);
    param_1[0x128a0] = param_1[0x128a0] & 0xf1 | (byte)(iVar11 << 1);
    puVar14 = (undefined8 *)(**(code **)(local_908[0] + 0xf0))(local_908);
    uVar20 = *puVar14;
    local_afe = 0;
    local_afc = 0;
    local_b00 = (undefined2)uVar20;
    FUN_0277d4ac(&local_b00);
    local_afe = (undefined2)((ulong)uVar20 >> 0x10);
    local_afc = (undefined4)((ulong)uVar20 >> 0x20);
    FUN_0285aa40(param_1 + 0x12880,&local_b00);
    param_1[0x1289f] = param_1[0x1289f] & 0xbf;
    puVar15 = (ulong *)(**(code **)(local_8a0[0] + 0xf0))(local_8a0);
    uVar19 = *puVar15;
    local_188 = (undefined *)(uVar19 & 0xffff);
    FUN_0277d4ac(&local_188);
    param_1[0x1320e] = (byte)(uVar19 >> 0x10);
    param_1[0x1320f] = (byte)(uVar19 >> 0x18);
    *(int *)(param_1 + 0x13210) = (int)(uVar19 >> 0x20);
    *(undefined2 *)(param_1 + 0x1320c) = (undefined2)local_188;
    lVar13 = *(long *)PTR_DAT_04bb26a8;
    uVar9 = FUN_0277d6c4(param_1 + 0x1320c);
    for (lVar13 = *(long *)(lVar13 + 0x19f800); lVar13 != 0; lVar13 = *(long *)(lVar13 + 8)) {
      while (*(ushort *)(lVar13 + 0x20) <= uVar9) {
        if (uVar9 <= *(ushort *)(lVar13 + 0x20)) {
          uVar16 = (undefined2)*(undefined4 *)(lVar13 + 0x24);
          goto LAB_02698c54;
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 == 0) goto LAB_02698c48;
      }
    }
LAB_02698c48:
    uVar16 = 0;
LAB_02698c54:
    *(undefined2 *)(param_1 + 0x1287c) = uVar16;
    puVar7 = PTR_DAT_04bc0048;
    puVar1 = PTR_DAT_04bb43c0;
    if (0 < (int)local_9a8) {
      uVar10 = 0;
      uVar19 = 0;
      local_b08 = -1;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      do {
        puVar15 = (ulong *)(**(code **)(*(long *)(*(long *)(local_9c0 + uVar19 * 8) + 0x60) + 0xf0))
                                     ();
        uVar22 = *puVar15;
        local_af0 = (undefined8 *)(uVar22 & 0xffff);
        FUN_0277d4ac(&local_af0);
        lVar23 = *(long *)puVar1;
        local_af0 = (undefined8 *)
                    CONCAT44((int)(uVar22 >> 0x20),
                             CONCAT13((char)(uVar22 >> 0x18),
                                      CONCAT12((char)(uVar22 >> 0x10),(undefined2)local_af0)));
        uVar12 = FUN_0277d6c4(&local_af0);
        lVar13 = *(long *)puVar1;
        if (lVar13 != 0) {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            bVar8 = 0x37 < uVar10;
            uVar22 = (ulong)uVar10;
            puVar14 = &local_400 + uVar22;
            uVar10 = uVar10 + 1;
            local_178 = 0;
            puVar4 = puVar14;
            if (bVar8) {
              puVar4 = &local_400;
            }
            *(undefined2 *)puVar4 = (undefined2)local_af0;
            puVar4 = puVar14;
            if (bVar8) {
              puVar4 = &local_400;
            }
            if (bVar8) {
              puVar14 = &local_400;
            }
            *(undefined1 *)((ulong)puVar4 | 2) = local_af0._2_1_;
            *(undefined1 *)((ulong)puVar14 | 3) = local_af0._3_1_;
            local_180._0_4_ = SUB84(local_af0,0);
            puVar3 = (undefined4 *)((long)&local_400 + uVar22 * 8 + 4);
            if (bVar8) {
              puVar3 = (undefined4 *)((long)&local_400 + 4);
            }
            *puVar3 = local_af0._4_4_;
            local_180 = (char *)CONCAT44(local_af0._4_4_,(undefined4)local_180);
            local_404 = uVar10;
            local_188 = puVar2;
            uVar12 = FUN_0277d6c4(&local_180);
            if (*(long *)puVar1 != 0) {
              lVar13 = *(long *)(lVar13 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar13 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                lVar13 = *(long *)PTR_DAT_04bc0428;
                uVar12 = FUN_0277d6c4(&local_af0);
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if ((uVar12 < *(uint *)(lVar13 + 0x1d8)) &&
                   (puVar17 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar12 * 8),
                   puVar17 != (uint *)0x0)) {
                  uVar12 = *puVar17;
                  local_6c = 0;
                  if ((uVar12 != 0) && (puVar17 != (uint *)(ulong)uVar12)) {
                    puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar12);
                    local_6c = 0;
                    if (*puVar18 != 0) {
                      uVar12 = puVar18[1];
                      if ((uVar12 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                        lVar13 = 0xc;
                        if (*(char *)((long)puVar18 + 10) != '\0') {
                          lVar13 = 0x1c;
                        }
                        lVar13 = (long)puVar18 + lVar13 + (ulong)(ushort)puVar18[2] * 8;
                        if (lVar13 != 0) {
                          uVar5 = 0;
                          if ((ulong)uVar12 != 0) {
                            uVar5 = (uint)((ulong)((long)puVar17 - lVar13) / (ulong)uVar12);
                          }
                          if (*puVar18 <= uVar5) {
                            uVar5 = 0xffffffff;
                          }
                          if ((uVar5 < *(uint *)puVar7) &&
                             (local_6c = (uint)*(ushort *)
                                                (*(long *)(puVar7 + 8) + (long)(int)uVar5 * 2),
                             local_6c < 0x52)) goto LAB_02698ec4;
                        }
                      }
                      local_6c = 0;
                    }
                  }
LAB_02698ec4:
                  if ((local_6c & 0xfffffffe) == 0x12) {
                    local_b08 = 0;
                  }
                  else {
                    uVar12 = *puVar17;
                    if ((uVar12 != 0) && (puVar17 != (uint *)(ulong)uVar12)) {
                      puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar12);
                      if ((*puVar18 != 0) &&
                         ((uVar12 = puVar18[1], uVar12 != 0 && ((ulong)(ushort)puVar18[2] != 0)))) {
                        lVar13 = 0xc;
                        if (*(char *)((long)puVar18 + 10) != '\0') {
                          lVar13 = 0x1c;
                        }
                        lVar13 = (long)puVar18 + lVar13 + (ulong)(ushort)puVar18[2] * 8;
                        if (lVar13 != 0) {
                          uVar5 = 0;
                          if ((ulong)uVar12 != 0) {
                            uVar5 = (uint)((ulong)((long)puVar17 - lVar13) / (ulong)uVar12);
                          }
                          if (*puVar18 <= uVar5) {
                            uVar5 = 0xffffffff;
                          }
                          if ((uVar5 < *(uint *)puVar7) &&
                             (*(short *)(*(long *)(puVar7 + 8) + (long)(int)uVar5 * 2) == 0x14)) {
                            iVar11 = 2;
                            if (-1 < local_b08) {
                              iVar11 = local_b08;
                            }
                            local_b08 = iVar11;
                          }
                        }
                      }
                    }
                  }
                  goto LAB_02698cc4;
                }
              }
            }
            local_6c = 0;
          }
        }
LAB_02698cc4:
        uVar19 = uVar19 + 1;
      } while (local_9a8 != uVar19);
      if (-1 < local_b08) {
        local_188 = puVar6 + 0x10;
        local_180 = "UseAudioType";
        FUN_027494ac(*param_2,&local_188);
      }
    }
    (**(code **)(local_ae0 + 0x20))(&local_ae0);
    (**(code **)(*plVar25 + 0x58))(plVar25);
    local_af0 = &local_400;
    puStack_ae8 = &local_404;
    FUN_0269add0(&local_af0,param_1 + 0x1094c);
    FUN_0269add0(&local_af0,param_1 + 0x10978);
    FUN_0269add0(&local_af0,param_1 + 0x109a4);
    FUN_0269add0(&local_af0,param_1 + 0x109d0);
    FUN_0269add0(&local_af0,param_1 + 0x109fc);
    FUN_0269add0(&local_af0,param_1 + 0x10a28);
    FUN_0269add0(&local_af0,param_1 + 0x10a54);
    FUN_0269add0(&local_af0,param_1 + 0x10a80);
    FUN_0269add0(&local_af0,param_1 + 0x10aac);
    FUN_0269add0(&local_af0,param_1 + 0x10ad8);
    FUN_0269add0(&local_af0,param_1 + 0x10b04);
    FUN_0269add0(&local_af0,param_1 + 0x10b30);
    FUN_0269add0(&local_af0,param_1 + 0x10b5c);
    FUN_0269add0(&local_af0,param_1 + 0x10b88);
    FUN_0269add0(&local_af0,param_1 + 0x10bb4);
    FUN_0269add0(&local_af0,param_1 + 0x10be0);
    FUN_0269add0(&local_af0,param_1 + 0x10c0c);
    FUN_0269add0(&local_af0,param_1 + 0x10c38);
    FUN_0269add0(&local_af0,param_1 + 0x10c64);
    FUN_0269add0(&local_af0,param_1 + 0x10c90);
    FUN_0269add0(&local_af0,param_1 + 0x10cbc);
    FUN_0269add0(&local_af0,param_1 + 0x10ce8);
    FUN_0269add0(&local_af0,param_1 + 0x10d14);
    FUN_0269add0(&local_af0,param_1 + 0x10d40);
    iVar11 = 0;
    do {
      FUN_0269add0(&local_af0,param_1 + (long)iVar11 * 0x2c + 0x10d6c);
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x20);
    local_170 = 0;
    local_178 = 0;
    local_180 = (char *)0x0;
    local_188 = (undefined *)0x0;
    if (0 < (int)local_404) {
      uVar19 = 0;
      puVar14 = &local_400;
      lVar13 = *(long *)puVar1;
      do {
        puVar4 = puVar14;
        if (0x37 < uVar19) {
          puVar4 = &local_400;
        }
        uVar10 = FUN_0277d6c4(puVar4);
        lVar23 = *(long *)puVar1;
        if (lVar23 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            FUN_0268f390(param_1,puVar4,&local_188,7,1,1,1);
            lVar23 = *(long *)puVar1;
          }
        }
        uVar19 = uVar19 + 1;
        puVar14 = puVar14 + 1;
        lVar13 = lVar23;
      } while ((long)uVar19 < (long)(int)local_404);
    }
    FUN_00b634e0(&local_ae0);
    if (lVar24 != 1) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      *(long *)(lVar13 + 0xa8) = lVar24;
    }
  }
  return;
}

