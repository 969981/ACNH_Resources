
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_027301d0(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined1 *puVar11;
  int iVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  long lVar16;
  undefined1 *puVar17;
  bool bVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  undefined8 *puVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  uint *puVar30;
  undefined *puVar31;
  byte bVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  long *plVar36;
  int iVar37;
  undefined *local_5c8;
  undefined1 *puStack_5c0;
  undefined *local_5b8;
  undefined1 *local_5b0;
  undefined4 local_5a8;
  undefined1 local_5a4 [31];
  undefined1 local_585;
  undefined *local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined *local_568;
  undefined8 uStack_560;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined *local_538;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined *local_508;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined *local_4d8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined *local_4a8;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined *local_478;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined *local_448;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined *local_418;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined *local_3e8;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined *local_3b8;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined2 local_37c;
  undefined *local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined4 local_34c;
  undefined *local_348;
  undefined1 *local_340;
  undefined4 local_338;
  undefined1 local_334;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined *local_318;
  undefined1 *local_310;
  undefined4 local_308;
  undefined1 local_304 [63];
  undefined1 local_2c5;
  undefined *local_2c0;
  undefined1 *local_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac [63];
  undefined1 local_26d;
  undefined1 local_268 [8];
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined *local_228;
  undefined8 *local_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined *local_1f8;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4 [63];
  undefined1 local_1a5;
  undefined *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined1 local_18c [63];
  undefined1 local_14d;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108 [2];
  undefined8 *local_100;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined *local_78;
  uint *local_70;
  
  plVar36 = *(long **)(param_1 + 0x50);
  if (plVar36 != (long *)0x0) {
    local_b0 = DAT_04ccaca0;
    uStack_a8 = DAT_04ccaca8;
    local_a0 = DAT_04ccacb0;
    local_98 = DAT_04ccacb8;
    local_94 = DAT_04ccacbc;
    uStack_8c = DAT_04ccacc4;
    local_84 = DAT_04ccaccc;
    uVar7 = DAT_04ccacd4;
    if (1 < DAT_04ccacd4) {
      uVar7 = 0;
    }
    lVar22 = (**(code **)(*plVar36 + 0x18))(plVar36);
    if (lVar22 == 0) {
      uVar19 = 0xffffffff;
    }
    else {
      local_580 = *(undefined **)(lVar22 + 8);
      local_578 = *(undefined8 *)(lVar22 + 0x10);
      uVar19 = FUN_0272e334(&local_580,0x240e6910);
    }
    puVar23 = (undefined8 *)FUN_0272e550(plVar36 + 1,plVar36[6],uVar19,0,0);
    if (puVar23 != (undefined8 *)0x0) {
      local_b0 = *puVar23;
      uStack_a8 = puVar23[1];
      local_a0 = puVar23[2];
      local_98 = *(undefined4 *)(puVar23 + 3);
    }
    local_f4 = 0xba3afe0f;
    local_b8 = 0;
    local_ec = 0;
    local_e8 = PTR_DAT_04bc3858 + 0x10;
    local_d8 = 0;
    local_d0 = 0;
    local_e0 = (undefined *)0x0;
    local_100 = &local_f4;
    local_108[0] = 1;
    local_580 = (undefined *)0x0;
    local_c8 = 0;
    local_c0 = 0;
    local_568 = (undefined *)0x0;
    uStack_560 = 0;
    local_578 = 0;
    uStack_570 = 0;
    FUN_0272d760(plVar36 + 1,&local_580,local_108);
    if (((local_580 != (undefined *)0x0) && (*(int *)(local_580 + 0x2c) == 1)) && (plVar36[6] != 0))
    {
      local_e0 = local_580;
      local_d8 = local_578;
      local_d0 = uStack_570;
      local_c8 = local_568;
      local_c0 = uStack_560;
      local_b8 = plVar36[6];
    }
    local_214 = 0;
    local_218 = 0x20;
    local_210 = 0xffffffff;
    local_208 = 0xffffffff00000000;
    local_1f0 = local_1e4;
    local_220 = &local_148;
    local_200 = 0xffffffff;
    local_1e8 = 0x40;
    local_1a5 = 0;
    local_1e4[0] = 0;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    local_198 = local_18c;
    local_190 = 0x40;
    local_14d = 0;
    local_18c[0] = 0;
    puVar3 = PTR_DAT_04bb4e10 + 0x10;
    puVar8 = local_108;
    if (local_108 <= (undefined4 *)((long)&local_148 + 2U)) {
      puVar8 = (undefined4 *)((long)&local_148 + 2U);
    }
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    local_130 = 0;
    local_138 = 0;
    local_140 = 0;
    local_148 = 0;
    local_228 = puVar3;
    local_1f8 = puVar2;
    local_1a0 = puVar2;
    memset(local_220,0,(long)puVar8 + (-0xe0 - (long)&local_228));
    local_338 = 0x20;
    local_310 = local_304;
    local_334 = 0;
    local_2b8 = local_2ac;
    local_340 = local_268;
    local_330 = 0xffffffff;
    ppuVar9 = &local_228;
    if (&local_228 <= local_268 + 2) {
      ppuVar9 = (undefined **)(local_268 + 2);
    }
    local_328 = 0xffffffff00000000;
    local_320 = 0xffffffff;
    local_308 = 0x40;
    local_2c5 = 0;
    local_304[0] = 0;
    local_2b0 = 0x40;
    local_26d = 0;
    local_2ac[0] = 0;
    local_230 = 0;
    local_238 = 0;
    local_240 = 0;
    local_248 = 0;
    local_250 = 0;
    local_258 = 0;
    local_260 = 0;
    local_268 = (undefined1  [8])0x0;
    local_348 = puVar3;
    local_318 = puVar2;
    local_2c0 = puVar2;
    memset(local_340,0,(size_t)((long)ppuVar9 + (-0xe0 - (long)&local_348)));
    memset(&local_578,0,0x1e0);
    local_548 = 0;
    uStack_540 = 0;
    local_518 = 0;
    uStack_510 = 0;
    local_568 = PTR_DAT_04bb2d80 + 0x10;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_3f8 = 0;
    local_3f0 = 0;
    local_3c8 = 0;
    local_3c0 = 0;
    local_398 = 0xffffffff;
    local_390 = 0;
    local_388 = 0;
    local_380 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_458 = 0;
    uStack_450 = 0;
    local_428 = 0;
    uStack_420 = 0;
    local_378 = PTR_DAT_04bb2e08 + 0x10;
    local_580 = PTR_DAT_04bb2d58 + 0x10;
    local_37c = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    local_350 = 1;
    local_34c = 0;
    local_538 = local_568;
    local_508 = local_568;
    local_4d8 = local_568;
    local_4a8 = local_568;
    local_478 = local_568;
    local_448 = local_568;
    local_418 = local_568;
    local_3e8 = local_568;
    local_3b8 = local_568;
    lVar22 = (**(code **)(local_e8 + 0x18))(&local_e8);
    if (lVar22 != 0) {
      local_5b8 = *(undefined **)(lVar22 + 8);
      local_5b0 = *(undefined1 **)(lVar22 + 0x10);
      iVar20 = FUN_0272e334(&local_5b8,0x5088d1a2);
      if (((iVar20 != -1) && (lVar22 = (**(code **)(local_e8 + 0x18))(&local_e8), lVar22 != 0)) &&
         (iVar21 = FUN_0272da84(lVar22,iVar20), puVar2 = PTR_DAT_04bb4cd0, 0x32 < iVar21)) {
        iVar37 = 0x32;
        puVar3 = PTR_DAT_04bb2028 + 0x10;
        puVar4 = PTR_DAT_04bb2020 + 0x10;
        do {
          puVar24 = (uint *)FUN_0272e550(&local_e0,local_b8,iVar20,iVar37,0);
          if (puVar24 != (uint *)0x0) {
            FUN_027c1830();
            lVar22 = 0;
            puVar30 = puVar24 + 0x2d;
            do {
              iVar25 = (int)lVar22;
              bVar13 = puVar2[lVar22 + 0x2d];
              bVar32 = *(byte *)((long)puVar30 + -0xf) & 0xf0;
              *(byte *)((long)puVar30 + -0xf) = bVar32 | bVar13;
              if ((iVar25 + 1U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x2e] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x2e];
              }
              *(byte *)((long)puVar30 + -0xf) = bVar32;
              bVar13 = puVar2[lVar22 + 0x2f];
              bVar32 = *(byte *)((long)puVar30 + -0xe) & 0xf0;
              *(byte *)((long)puVar30 + -0xe) = bVar32 | bVar13;
              if ((iVar25 + 3U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x30] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x30];
              }
              *(byte *)((long)puVar30 + -0xe) = bVar32;
              bVar13 = puVar2[lVar22 + 0x31];
              bVar32 = *(byte *)((long)puVar30 + -0xd) & 0xf0;
              *(byte *)((long)puVar30 + -0xd) = bVar32 | bVar13;
              if ((iVar25 + 5U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x32] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x32];
              }
              *(byte *)((long)puVar30 + -0xd) = bVar32;
              bVar13 = puVar2[lVar22 + 0x33];
              bVar32 = (byte)puVar30[-3] & 0xf0;
              *(byte *)(puVar30 + -3) = bVar32 | bVar13;
              if ((iVar25 + 7U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x34] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x34];
              }
              *(byte *)(puVar30 + -3) = bVar32;
              bVar13 = puVar2[lVar22 + 0x35];
              bVar32 = *(byte *)((long)puVar30 + -0xb) & 0xf0;
              *(byte *)((long)puVar30 + -0xb) = bVar32 | bVar13;
              if ((iVar25 + 9U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x36] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x36];
              }
              *(byte *)((long)puVar30 + -0xb) = bVar32;
              bVar13 = puVar2[lVar22 + 0x37];
              bVar32 = *(byte *)((long)puVar30 + -10) & 0xf0;
              *(byte *)((long)puVar30 + -10) = bVar32 | bVar13;
              if ((iVar25 + 0xbU & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x38] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x38];
              }
              *(byte *)((long)puVar30 + -10) = bVar32;
              bVar13 = puVar2[lVar22 + 0x39];
              bVar32 = *(byte *)((long)puVar30 + -9) & 0xf0;
              *(byte *)((long)puVar30 + -9) = bVar32 | bVar13;
              if ((iVar25 + 0xdU & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x3a] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x3a];
              }
              *(byte *)((long)puVar30 + -9) = bVar32;
              bVar13 = puVar2[lVar22 + 0x3b];
              bVar32 = (byte)puVar30[-2] & 0xf0;
              *(byte *)(puVar30 + -2) = bVar32 | bVar13;
              if ((iVar25 + 0xfU & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x3c] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x3c];
              }
              *(byte *)(puVar30 + -2) = bVar32;
              bVar13 = puVar2[lVar22 + 0x3d];
              bVar32 = *(byte *)((long)puVar30 + -7) & 0xf0;
              *(byte *)((long)puVar30 + -7) = bVar32 | bVar13;
              if ((iVar25 + 0x11U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x3e] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x3e];
              }
              *(byte *)((long)puVar30 + -7) = bVar32;
              bVar13 = puVar2[lVar22 + 0x3f];
              bVar32 = *(byte *)((long)puVar30 + -6) & 0xf0;
              *(byte *)((long)puVar30 + -6) = bVar32 | bVar13;
              if ((iVar25 + 0x13U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x40] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x40];
              }
              *(byte *)((long)puVar30 + -6) = bVar32;
              bVar13 = puVar2[lVar22 + 0x41];
              bVar32 = *(byte *)((long)puVar30 + -5) & 0xf0;
              *(byte *)((long)puVar30 + -5) = bVar32 | bVar13;
              if ((iVar25 + 0x15U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x42] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x42];
              }
              *(byte *)((long)puVar30 + -5) = bVar32;
              bVar13 = puVar2[lVar22 + 0x43];
              bVar32 = (byte)puVar30[-1] & 0xf0;
              *(byte *)(puVar30 + -1) = bVar32 | bVar13;
              if ((iVar25 + 0x17U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x44] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x44];
              }
              *(byte *)(puVar30 + -1) = bVar32;
              bVar13 = puVar2[lVar22 + 0x45];
              bVar32 = *(byte *)((long)puVar30 + -3) & 0xf0;
              *(byte *)((long)puVar30 + -3) = bVar32 | bVar13;
              if ((iVar25 + 0x19U & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x46] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x46];
              }
              *(byte *)((long)puVar30 + -3) = bVar32;
              bVar13 = puVar2[lVar22 + 0x47];
              bVar32 = *(byte *)((long)puVar30 + -2) & 0xf0;
              *(byte *)((long)puVar30 + -2) = bVar32 | bVar13;
              if ((iVar25 + 0x1bU & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x48] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x48];
              }
              *(byte *)((long)puVar30 + -2) = bVar32;
              bVar13 = puVar2[lVar22 + 0x49];
              bVar32 = *(byte *)((long)puVar30 + -1) & 0xf0;
              *(byte *)((long)puVar30 + -1) = bVar32 | bVar13;
              if ((iVar25 + 0x1dU & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x4a] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x4a];
              }
              *(byte *)((long)puVar30 + -1) = bVar32;
              bVar13 = puVar2[lVar22 + 0x4b];
              bVar32 = (byte)*puVar30 & 0xf0;
              *(byte *)puVar30 = bVar32 | bVar13;
              if ((iVar25 + 0x1fU & 0x80000001) == 1) {
                bVar32 = bVar13 & 0xf | puVar2[lVar22 + 0x4c] << 4;
              }
              else {
                bVar32 = bVar32 | bVar13 & 0xf0 | puVar2[lVar22 + 0x4c];
              }
              lVar22 = lVar22 + 0x20;
              *(byte *)puVar30 = bVar32;
              puVar30 = puVar30 + 4;
            } while (lVar22 != 0x400);
            local_585 = 0;
            puVar24[0x1e] = 0xe52d2de5;
            puVar24[0x1f] = 0xe5e52d77;
            local_5a4[0] = 0;
            puVar24[0x20] = 0x2de5771e;
            puVar24[0x21] = 0x391b8b1b;
            puVar24[0x22] = 0x912ad6b7;
            puVar24[0x23] = 0xe53d3dd6;
            puVar24[0x24] = 0xe5e54c89;
            puVar24[0x25] = 0xa8e5c95b;
            puVar24[0x26] = 0x41508b98;
            puVar24[0x27] = 0x6ee5e5e5;
            puVar24[0x28] = 0x14146e6e;
            local_5a8 = 0x20;
            *(undefined1 *)(puVar24 + 0x29) = 0x14;
            local_5b8 = puVar3;
            local_5b0 = local_5a4;
            FUN_038d1270(&local_5b8,&DAT_0405bf91,iVar37 + 1);
            local_70 = (uint *)0x405bf79;
            local_78 = puVar4;
            (**(code **)(local_5b8 + 0x18))(&local_5b8);
            puStack_5c0 = local_5b0;
            local_5c8 = puVar4;
            FUN_006f50a0(&local_228,&local_78,&local_5c8,0);
            FUN_006f2100(&local_580,&local_348,&local_228);
            local_70 = puVar24 + 4;
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x14);
            FUN_02906c90(&local_78,&local_348);
            uVar27 = 0;
            uVar29 = 0;
            *(undefined8 *)(puVar24 + 0xe) = local_b0;
            *(undefined8 *)(puVar24 + 0x10) = uStack_a8;
            *(undefined8 *)(puVar24 + 0x12) = local_a0;
            *(undefined1 *)(puVar24 + 0x14) = (undefined1)local_98;
            *(undefined8 *)(puVar24 + 0x15) = local_94;
            *(undefined8 *)(puVar24 + 0x17) = uStack_8c;
            bVar18 = true;
            *(undefined8 *)(puVar24 + 0x19) = local_84;
            puVar24[0x1b] = uVar7;
            do {
              iVar25 = 0x20;
              uVar35 = uVar27;
              do {
                if ((((*(byte *)((long)puVar24 + uVar35 + 0xa5) ^ 0xff) & 0xf) == 0) ||
                   (0xef < *(byte *)((long)puVar24 + uVar35 + 0xa5))) goto LAB_02730cb0;
                uVar35 = (ulong)((int)uVar35 + 1);
                iVar25 = iVar25 + -2;
              } while (iVar25 != 0);
              bVar18 = uVar29 < 0x1f;
              uVar29 = uVar29 + 1;
              uVar27 = (ulong)((int)uVar27 + 0x10);
            } while (uVar29 != 0x20);
LAB_02730cb0:
            *puVar24 = 0;
            bVar32 = 2;
            if (!bVar18) {
              bVar32 = 0;
            }
            lVar22 = 0;
            uVar29 = 0;
            *(byte *)(puVar24 + 0x1c) = bVar32 | (byte)puVar24[0x1c] & 0xfc;
            do {
              iVar25 = *(int *)((long)puVar24 + lVar22);
              iVar12 = ((int *)((long)puVar24 + lVar22))[1];
              uVar29 = (iVar25 * 0x16a88000 | (uint)(iVar25 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar29;
              uVar27 = lVar22 + 4;
              lVar22 = lVar22 + 8;
              uVar29 = (iVar12 * 0x16a88000 | (uint)(iVar12 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       (uVar29 >> 0x13 | uVar29 << 0xd) * 5 + 0xe6546b64;
              uVar29 = (uVar29 >> 0x13 | uVar29 << 0xd) * 5 + 0xe6546b64;
            } while (uVar27 < 0x2a1);
            uVar29 = (uVar29 ^ uVar29 >> 0x10 ^ 0x2a8) * -0x7a143595;
            uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
            *puVar24 = uVar29 ^ uVar29 >> 0x10;
          }
          iVar37 = iVar37 + 1;
        } while (iVar37 != iVar21);
      }
    }
    lVar22 = (**(code **)(local_e8 + 0x18))(&local_e8);
    if (lVar22 != 0) {
      local_5b8 = *(undefined **)(lVar22 + 8);
      local_5b0 = *(undefined1 **)(lVar22 + 0x10);
      iVar20 = FUN_0272e334(&local_5b8,0xe42c2e2f);
      if (((iVar20 != -1) && (lVar22 = (**(code **)(local_e8 + 0x18))(&local_e8), lVar22 != 0)) &&
         (iVar21 = FUN_0272da84(lVar22,iVar20), puVar2 = PTR_DAT_04bb4d30, 0x32 < iVar21)) {
        iVar37 = 0x32;
        puVar3 = PTR_DAT_04bb2028 + 0x10;
        puVar4 = PTR_DAT_04bb2020 + 0x10;
        do {
          lVar22 = FUN_0272e550(&local_e0,local_b8,iVar20,iVar37,0);
          if (lVar22 != 0) {
            FUN_027c1eb0();
            lVar28 = 0;
            puVar31 = puVar2 + 0x31;
            *(char *)(lVar22 + 0x8a5) = (char)*(undefined4 *)puVar2;
            do {
              uVar26 = (uint)lVar28;
              lVar34 = 0;
              uVar29 = uVar26 + 0x1f;
              if (-1 < (int)uVar26) {
                uVar29 = uVar26;
              }
              iVar25 = (uVar26 - (uVar29 & 0x7ffffe0)) * 0x20;
              do {
                iVar33 = (int)lVar34;
                iVar12 = iVar33 + 0x1f;
                if (-1 < iVar33) {
                  iVar12 = iVar33;
                }
                pbVar1 = puVar31 + lVar34;
                uVar26 = ((int)uVar29 >> 5) * 2 + (iVar12 >> 5);
                lVar34 = lVar34 + 1;
                lVar10 = lVar22 + 0xa5 + (ulong)uVar26 * 0x200;
                if (3 < uVar26) {
                  lVar10 = lVar22 + 0xa5;
                }
                uVar26 = iVar33 % 0x20 + iVar25;
                uVar6 = uVar26;
                if ((int)uVar26 < 0 != SCARRY4(iVar33 % 0x20,iVar25)) {
                  uVar6 = uVar26 + 1;
                }
                lVar16 = (long)((ulong)uVar6 << 0x20) >> 0x21;
                bVar13 = *(byte *)(lVar10 + lVar16);
                bVar32 = bVar13 & 0xf0 | *pbVar1;
                if ((uVar26 & 0x80000001) == 1) {
                  bVar32 = bVar13 & 0xf | *pbVar1 << 4;
                }
                *(byte *)(lVar10 + lVar16) = bVar32;
              } while (lVar34 != 0x40);
              lVar28 = lVar28 + 1;
              puVar31 = puVar31 + 0x40;
            } while (lVar28 != 0x40);
            uVar29 = 0;
            lVar28 = 0;
            puVar5 = (undefined1 *)(lVar22 + 0x78);
            do {
              lVar34 = lVar22 + lVar28;
              lVar10 = lVar28 + 4;
              bVar18 = 0xe < uVar29;
              uVar14 = puVar2[lVar28 + 5];
              uVar15 = puVar2[lVar28 + 6];
              puVar11 = (undefined1 *)(lVar34 + 0x78);
              if (bVar18) {
                puVar11 = puVar5;
              }
              lVar28 = lVar28 + 3;
              uVar29 = uVar29 + 1;
              *puVar11 = puVar2[lVar10];
              puVar11 = (undefined1 *)(lVar34 + 0x7a);
              puVar17 = (undefined1 *)(lVar34 + 0x79);
              if (bVar18) {
                puVar11 = puVar5;
                puVar17 = puVar5;
              }
              *puVar17 = uVar14;
              *puVar11 = uVar15;
            } while (lVar28 != 0x2d);
            local_585 = 0;
            local_5a8 = 0x20;
            local_5a4[0] = 0;
            local_5b8 = puVar3;
            local_5b0 = local_5a4;
            FUN_038d1270(&local_5b8,&DAT_0405bf91,iVar37 + 0x65);
            local_70 = (uint *)0x405bf79;
            local_78 = puVar4;
            (**(code **)(local_5b8 + 0x18))(&local_5b8);
            puStack_5c0 = local_5b0;
            local_5c8 = puVar4;
            FUN_006f50a0(&local_228,&local_78,&local_5c8,0);
            FUN_006f2100(&local_580,&local_348,&local_228);
            local_70 = (uint *)(lVar22 + 0x10);
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x14);
            FUN_02906c90(&local_78,&local_348);
            *(undefined8 *)(lVar22 + 0x38) = local_b0;
            *(undefined8 *)(lVar22 + 0x40) = uStack_a8;
            *(undefined8 *)(lVar22 + 0x48) = local_a0;
            *(undefined1 *)(lVar22 + 0x50) = (undefined1)local_98;
            *(undefined8 *)(lVar22 + 0x54) = local_94;
            *(undefined8 *)(lVar22 + 0x5c) = uStack_8c;
            *(undefined8 *)(lVar22 + 100) = local_84;
            *(uint *)(lVar22 + 0x6c) = uVar7;
            FUN_027c1b80(lVar22);
          }
          iVar37 = iVar37 + 1;
        } while (iVar37 != iVar21);
      }
    }
  }
  return 1;
}

