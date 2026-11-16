
void FUN_02762ae0(undefined8 *param_1,long *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  long lVar15;
  undefined1 *puVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  uint *puVar27;
  undefined *puVar28;
  undefined8 uVar29;
  byte bVar30;
  int iVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  int iVar35;
  undefined *local_538;
  undefined1 *puStack_530;
  undefined *local_528;
  undefined1 *local_520;
  undefined4 local_518;
  undefined1 local_514 [31];
  undefined1 local_4f5;
  undefined *local_4f0;
  undefined1 auStack_4e8 [16];
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
  undefined8 uStack_3f0;
  undefined *local_3e8;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined *local_3b8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined *local_388;
  undefined8 local_368;
  undefined8 local_360;
  undefined *local_358;
  undefined8 local_338;
  undefined8 local_330;
  undefined *local_328;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined2 local_2ec;
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  undefined4 local_2bc;
  undefined *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined *local_288;
  undefined1 *local_280;
  undefined4 local_278;
  undefined1 local_274 [63];
  undefined1 local_235;
  undefined *local_230;
  undefined1 *local_228;
  undefined4 local_220;
  undefined1 local_21c [63];
  undefined1 local_1dd;
  undefined1 local_1d8 [8];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [63];
  undefined1 local_115;
  undefined *local_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined1 local_fc [63];
  undefined1 local_bd;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  uint *local_70;
  
  local_184 = 0;
  local_188 = 0x20;
  local_180 = 0xffffffff;
  local_178 = 0xffffffff00000000;
  local_160 = local_154;
  local_170 = 0xffffffff;
  local_190 = local_b8;
  local_158 = 0x40;
  local_115 = 0;
  local_154[0] = 0;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_108 = local_fc;
  local_100 = 0x40;
  local_bd = 0;
  local_fc[0] = 0;
  puVar3 = PTR_DAT_04bb4e10 + 0x10;
  ppuVar7 = &local_78;
  if (&local_78 <= local_b8 + 2) {
    ppuVar7 = (undefined **)(local_b8 + 2);
  }
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = (undefined1  [8])0x0;
  local_198 = puVar3;
  local_168 = puVar2;
  local_110 = puVar2;
  memset(local_190,0,(size_t)((long)ppuVar7 + (-0xe0 - (long)&local_198)));
  local_2a8 = 0x20;
  local_280 = local_274;
  local_2a4 = 0;
  local_228 = local_21c;
  local_2b0 = local_1d8;
  local_2a0 = 0xffffffff;
  ppuVar7 = &local_198;
  if (&local_198 <= local_1d8 + 2) {
    ppuVar7 = (undefined **)(local_1d8 + 2);
  }
  local_298 = 0xffffffff00000000;
  local_290 = 0xffffffff;
  local_278 = 0x40;
  local_235 = 0;
  local_274[0] = 0;
  local_220 = 0x40;
  local_1dd = 0;
  local_21c[0] = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = (undefined1  [8])0x0;
  local_2b8 = puVar3;
  local_288 = puVar2;
  local_230 = puVar2;
  memset(local_2b0,0,(size_t)((long)ppuVar7 + (-0xe0 - (long)&local_2b8)));
  memset(auStack_4e8,0,0x1e0);
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_4d8 = PTR_DAT_04bb2d80 + 0x10;
  local_458 = 0;
  uStack_450 = 0;
  local_368 = 0;
  local_360 = 0;
  local_338 = 0;
  local_330 = 0;
  local_308 = 0xffffffff;
  local_300 = 0;
  local_2f8 = 0;
  local_428 = 0;
  uStack_420 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_4f0 = PTR_DAT_04bb2d58 + 0x10;
  local_2f0 = 0;
  local_2ec = 0;
  local_2e8 = PTR_DAT_04bb2e08 + 0x10;
  local_2c0 = 1;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2bc = 0;
  local_4a8 = local_4d8;
  local_478 = local_4d8;
  local_448 = local_4d8;
  local_418 = local_4d8;
  local_3e8 = local_4d8;
  local_3b8 = local_4d8;
  local_388 = local_4d8;
  local_358 = local_4d8;
  local_328 = local_4d8;
  lVar20 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar20 != 0) {
    local_528 = *(undefined **)(lVar20 + 8);
    local_520 = *(undefined1 **)(lVar20 + 0x10);
    iVar18 = FUN_0272e334(&local_528,0x5088d1a2);
    if (((iVar18 != -1) && (lVar20 = (**(code **)(*param_2 + 0x18))(), lVar20 != 0)) &&
       (iVar19 = FUN_0272da84(lVar20,iVar18), puVar2 = PTR_DAT_04bb4cd0, 0x32 < iVar19)) {
      iVar35 = 0x32;
      puVar3 = PTR_DAT_04bb2028 + 0x10;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      do {
        puVar21 = (uint *)FUN_0272e550(param_2 + 1,param_2[6],iVar18,iVar35,0);
        if (puVar21 != (uint *)0x0) {
          FUN_027c1830();
          lVar20 = 0;
          puVar27 = puVar21 + 0x2d;
          do {
            iVar22 = (int)lVar20;
            bVar12 = puVar2[lVar20 + 0x2d];
            bVar30 = *(byte *)((long)puVar27 + -0xf) & 0xf0;
            *(byte *)((long)puVar27 + -0xf) = bVar30 | bVar12;
            if ((iVar22 + 1U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x2e] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x2e];
            }
            *(byte *)((long)puVar27 + -0xf) = bVar30;
            bVar12 = puVar2[lVar20 + 0x2f];
            bVar30 = *(byte *)((long)puVar27 + -0xe) & 0xf0;
            *(byte *)((long)puVar27 + -0xe) = bVar30 | bVar12;
            if ((iVar22 + 3U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x30] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x30];
            }
            *(byte *)((long)puVar27 + -0xe) = bVar30;
            bVar12 = puVar2[lVar20 + 0x31];
            bVar30 = *(byte *)((long)puVar27 + -0xd) & 0xf0;
            *(byte *)((long)puVar27 + -0xd) = bVar30 | bVar12;
            if ((iVar22 + 5U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x32] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x32];
            }
            *(byte *)((long)puVar27 + -0xd) = bVar30;
            bVar12 = puVar2[lVar20 + 0x33];
            bVar30 = (byte)puVar27[-3] & 0xf0;
            *(byte *)(puVar27 + -3) = bVar30 | bVar12;
            if ((iVar22 + 7U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x34] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x34];
            }
            *(byte *)(puVar27 + -3) = bVar30;
            bVar12 = puVar2[lVar20 + 0x35];
            bVar30 = *(byte *)((long)puVar27 + -0xb) & 0xf0;
            *(byte *)((long)puVar27 + -0xb) = bVar30 | bVar12;
            if ((iVar22 + 9U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x36] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x36];
            }
            *(byte *)((long)puVar27 + -0xb) = bVar30;
            bVar12 = puVar2[lVar20 + 0x37];
            bVar30 = *(byte *)((long)puVar27 + -10) & 0xf0;
            *(byte *)((long)puVar27 + -10) = bVar30 | bVar12;
            if ((iVar22 + 0xbU & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x38] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x38];
            }
            *(byte *)((long)puVar27 + -10) = bVar30;
            bVar12 = puVar2[lVar20 + 0x39];
            bVar30 = *(byte *)((long)puVar27 + -9) & 0xf0;
            *(byte *)((long)puVar27 + -9) = bVar30 | bVar12;
            if ((iVar22 + 0xdU & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x3a] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x3a];
            }
            *(byte *)((long)puVar27 + -9) = bVar30;
            bVar12 = puVar2[lVar20 + 0x3b];
            bVar30 = (byte)puVar27[-2] & 0xf0;
            *(byte *)(puVar27 + -2) = bVar30 | bVar12;
            if ((iVar22 + 0xfU & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x3c] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x3c];
            }
            *(byte *)(puVar27 + -2) = bVar30;
            bVar12 = puVar2[lVar20 + 0x3d];
            bVar30 = *(byte *)((long)puVar27 + -7) & 0xf0;
            *(byte *)((long)puVar27 + -7) = bVar30 | bVar12;
            if ((iVar22 + 0x11U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x3e] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x3e];
            }
            *(byte *)((long)puVar27 + -7) = bVar30;
            bVar12 = puVar2[lVar20 + 0x3f];
            bVar30 = *(byte *)((long)puVar27 + -6) & 0xf0;
            *(byte *)((long)puVar27 + -6) = bVar30 | bVar12;
            if ((iVar22 + 0x13U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x40] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x40];
            }
            *(byte *)((long)puVar27 + -6) = bVar30;
            bVar12 = puVar2[lVar20 + 0x41];
            bVar30 = *(byte *)((long)puVar27 + -5) & 0xf0;
            *(byte *)((long)puVar27 + -5) = bVar30 | bVar12;
            if ((iVar22 + 0x15U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x42] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x42];
            }
            *(byte *)((long)puVar27 + -5) = bVar30;
            bVar12 = puVar2[lVar20 + 0x43];
            bVar30 = (byte)puVar27[-1] & 0xf0;
            *(byte *)(puVar27 + -1) = bVar30 | bVar12;
            if ((iVar22 + 0x17U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x44] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x44];
            }
            *(byte *)(puVar27 + -1) = bVar30;
            bVar12 = puVar2[lVar20 + 0x45];
            bVar30 = *(byte *)((long)puVar27 + -3) & 0xf0;
            *(byte *)((long)puVar27 + -3) = bVar30 | bVar12;
            if ((iVar22 + 0x19U & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x46] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x46];
            }
            *(byte *)((long)puVar27 + -3) = bVar30;
            bVar12 = puVar2[lVar20 + 0x47];
            bVar30 = *(byte *)((long)puVar27 + -2) & 0xf0;
            *(byte *)((long)puVar27 + -2) = bVar30 | bVar12;
            if ((iVar22 + 0x1bU & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x48] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x48];
            }
            *(byte *)((long)puVar27 + -2) = bVar30;
            bVar12 = puVar2[lVar20 + 0x49];
            bVar30 = *(byte *)((long)puVar27 + -1) & 0xf0;
            *(byte *)((long)puVar27 + -1) = bVar30 | bVar12;
            if ((iVar22 + 0x1dU & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x4a] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x4a];
            }
            *(byte *)((long)puVar27 + -1) = bVar30;
            bVar12 = puVar2[lVar20 + 0x4b];
            bVar30 = (byte)*puVar27 & 0xf0;
            *(byte *)puVar27 = bVar30 | bVar12;
            if ((iVar22 + 0x1fU & 0x80000001) == 1) {
              bVar30 = bVar12 & 0xf | puVar2[lVar20 + 0x4c] << 4;
            }
            else {
              bVar30 = bVar30 | bVar12 & 0xf0 | puVar2[lVar20 + 0x4c];
            }
            lVar20 = lVar20 + 0x20;
            *(byte *)puVar27 = bVar30;
            puVar27 = puVar27 + 4;
          } while (lVar20 != 0x400);
          local_4f5 = 0;
          puVar21[0x1e] = 0xe52d2de5;
          puVar21[0x1f] = 0xe5e52d77;
          local_514[0] = 0;
          puVar21[0x20] = 0x2de5771e;
          puVar21[0x21] = 0x391b8b1b;
          puVar21[0x22] = 0x912ad6b7;
          puVar21[0x23] = 0xe53d3dd6;
          puVar21[0x24] = 0xe5e54c89;
          puVar21[0x25] = 0xa8e5c95b;
          puVar21[0x26] = 0x41508b98;
          puVar21[0x27] = 0x6ee5e5e5;
          puVar21[0x28] = 0x14146e6e;
          local_518 = 0x20;
          *(undefined1 *)(puVar21 + 0x29) = 0x14;
          local_528 = puVar3;
          local_520 = local_514;
          FUN_038d1270(&local_528,&DAT_0405bf91,iVar35 + 1);
          local_70 = (uint *)0x405bf79;
          local_78 = puVar4;
          (**(code **)(local_528 + 0x18))(&local_528);
          puStack_530 = local_520;
          local_538 = puVar4;
          FUN_006f50a0(&local_198,&local_78,&local_538,0);
          FUN_006f2100(&local_4f0,&local_2b8,&local_198);
          local_70 = puVar21 + 4;
          local_78 = (undefined *)CONCAT44(local_78._4_4_,0x14);
          FUN_02906c90(&local_78,&local_2b8);
          uVar24 = 0;
          uVar26 = 0;
          uVar11 = *param_1;
          uVar33 = param_1[2];
          uVar13 = *(undefined1 *)(param_1 + 3);
          *(undefined8 *)(puVar21 + 0x10) = param_1[1];
          *(undefined8 *)(puVar21 + 0x12) = uVar33;
          *(undefined1 *)(puVar21 + 0x14) = uVar13;
          *(undefined8 *)(puVar21 + 0xe) = uVar11;
          uVar11 = *(undefined8 *)((long)param_1 + 0x1c);
          uVar33 = *(undefined8 *)((long)param_1 + 0x24);
          *(undefined8 *)(puVar21 + 0x19) = *(undefined8 *)((long)param_1 + 0x2c);
          *(undefined8 *)(puVar21 + 0x17) = uVar33;
          *(undefined8 *)(puVar21 + 0x15) = uVar11;
          bVar17 = true;
          uVar23 = *(uint *)((long)param_1 + 0x34);
          if (1 < uVar23) {
            uVar23 = 0;
          }
          puVar21[0x1b] = uVar23;
          do {
            iVar22 = 0x20;
            uVar34 = uVar24;
            do {
              if ((((*(byte *)((long)puVar21 + uVar34 + 0xa5) ^ 0xff) & 0xf) == 0) ||
                 (0xef < *(byte *)((long)puVar21 + uVar34 + 0xa5))) goto LAB_02763490;
              uVar34 = (ulong)((int)uVar34 + 1);
              iVar22 = iVar22 + -2;
            } while (iVar22 != 0);
            bVar17 = uVar26 < 0x1f;
            uVar26 = uVar26 + 1;
            uVar24 = (ulong)((int)uVar24 + 0x10);
          } while (uVar26 != 0x20);
LAB_02763490:
          *puVar21 = 0;
          bVar30 = 2;
          if (!bVar17) {
            bVar30 = 0;
          }
          lVar20 = 0;
          uVar26 = 0;
          *(byte *)(puVar21 + 0x1c) = bVar30 | (byte)puVar21[0x1c] & 0xfc;
          do {
            iVar22 = *(int *)((long)puVar21 + lVar20);
            iVar10 = ((int *)((long)puVar21 + lVar20))[1];
            uVar26 = (iVar22 * 0x16a88000 | (uint)(iVar22 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                     uVar26;
            uVar24 = lVar20 + 4;
            lVar20 = lVar20 + 8;
            uVar26 = (iVar10 * 0x16a88000 | (uint)(iVar10 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                     (uVar26 >> 0x13 | uVar26 << 0xd) * 5 + 0xe6546b64;
            uVar26 = (uVar26 >> 0x13 | uVar26 << 0xd) * 5 + 0xe6546b64;
          } while (uVar24 < 0x2a1);
          uVar26 = (uVar26 ^ uVar26 >> 0x10 ^ 0x2a8) * -0x7a143595;
          uVar26 = (uVar26 ^ uVar26 >> 0xd) * -0x3d4d51cb;
          *puVar21 = uVar26 ^ uVar26 >> 0x10;
        }
        iVar35 = iVar35 + 1;
      } while (iVar35 != iVar19);
    }
  }
  lVar20 = (**(code **)(*param_2 + 0x18))();
  if (lVar20 != 0) {
    local_528 = *(undefined **)(lVar20 + 8);
    local_520 = *(undefined1 **)(lVar20 + 0x10);
    iVar18 = FUN_0272e334(&local_528,0xe42c2e2f);
    if (((iVar18 != -1) && (lVar20 = (**(code **)(*param_2 + 0x18))(), lVar20 != 0)) &&
       (iVar19 = FUN_0272da84(lVar20,iVar18), puVar2 = PTR_DAT_04bb4d30, 0x32 < iVar19)) {
      iVar35 = 0x32;
      puVar3 = PTR_DAT_04bb2028 + 0x10;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      do {
        lVar20 = FUN_0272e550(param_2 + 1,param_2[6],iVar18,iVar35,0);
        if (lVar20 != 0) {
          FUN_027c1eb0();
          lVar25 = 0;
          puVar28 = puVar2 + 0x31;
          *(char *)(lVar20 + 0x8a5) = (char)*(undefined4 *)puVar2;
          do {
            uVar23 = (uint)lVar25;
            lVar32 = 0;
            uVar26 = uVar23 + 0x1f;
            if (-1 < (int)uVar23) {
              uVar26 = uVar23;
            }
            iVar22 = (uVar23 - (uVar26 & 0x7ffffe0)) * 0x20;
            do {
              iVar31 = (int)lVar32;
              iVar10 = iVar31 + 0x1f;
              if (-1 < iVar31) {
                iVar10 = iVar31;
              }
              pbVar1 = puVar28 + lVar32;
              uVar23 = ((int)uVar26 >> 5) * 2 + (iVar10 >> 5);
              lVar32 = lVar32 + 1;
              lVar8 = lVar20 + 0xa5 + (ulong)uVar23 * 0x200;
              if (3 < uVar23) {
                lVar8 = lVar20 + 0xa5;
              }
              uVar23 = iVar31 % 0x20 + iVar22;
              uVar6 = uVar23;
              if ((int)uVar23 < 0 != SCARRY4(iVar31 % 0x20,iVar22)) {
                uVar6 = uVar23 + 1;
              }
              lVar15 = (long)((ulong)uVar6 << 0x20) >> 0x21;
              bVar12 = *(byte *)(lVar8 + lVar15);
              bVar30 = bVar12 & 0xf0 | *pbVar1;
              if ((uVar23 & 0x80000001) == 1) {
                bVar30 = bVar12 & 0xf | *pbVar1 << 4;
              }
              *(byte *)(lVar8 + lVar15) = bVar30;
            } while (lVar32 != 0x40);
            lVar25 = lVar25 + 1;
            puVar28 = puVar28 + 0x40;
          } while (lVar25 != 0x40);
          uVar26 = 0;
          lVar25 = 0;
          puVar5 = (undefined1 *)(lVar20 + 0x78);
          do {
            lVar32 = lVar20 + lVar25;
            lVar8 = lVar25 + 4;
            bVar17 = 0xe < uVar26;
            uVar13 = puVar2[lVar25 + 5];
            uVar14 = puVar2[lVar25 + 6];
            puVar9 = (undefined1 *)(lVar32 + 0x78);
            if (bVar17) {
              puVar9 = puVar5;
            }
            lVar25 = lVar25 + 3;
            uVar26 = uVar26 + 1;
            *puVar9 = puVar2[lVar8];
            puVar9 = (undefined1 *)(lVar32 + 0x7a);
            puVar16 = (undefined1 *)(lVar32 + 0x79);
            if (bVar17) {
              puVar9 = puVar5;
              puVar16 = puVar5;
            }
            *puVar16 = uVar13;
            *puVar9 = uVar14;
          } while (lVar25 != 0x2d);
          local_4f5 = 0;
          local_518 = 0x20;
          local_514[0] = 0;
          local_528 = puVar3;
          local_520 = local_514;
          FUN_038d1270(&local_528,&DAT_0405bf91,iVar35 + 0x65);
          local_70 = (uint *)0x405bf79;
          local_78 = puVar4;
          (**(code **)(local_528 + 0x18))(&local_528);
          puStack_530 = local_520;
          local_538 = puVar4;
          FUN_006f50a0(&local_198,&local_78,&local_538,0);
          FUN_006f2100(&local_4f0,&local_2b8,&local_198);
          local_70 = (uint *)(lVar20 + 0x10);
          local_78 = (undefined *)CONCAT44(local_78._4_4_,0x14);
          FUN_02906c90(&local_78,&local_2b8);
          uVar11 = *param_1;
          uVar33 = param_1[1];
          uVar29 = param_1[2];
          *(undefined1 *)(lVar20 + 0x50) = *(undefined1 *)(param_1 + 3);
          *(undefined8 *)(lVar20 + 0x40) = uVar33;
          *(undefined8 *)(lVar20 + 0x48) = uVar29;
          *(undefined8 *)(lVar20 + 0x38) = uVar11;
          uVar11 = *(undefined8 *)((long)param_1 + 0x1c);
          uVar33 = *(undefined8 *)((long)param_1 + 0x24);
          *(undefined8 *)(lVar20 + 100) = *(undefined8 *)((long)param_1 + 0x2c);
          *(undefined8 *)(lVar20 + 0x5c) = uVar33;
          *(undefined8 *)(lVar20 + 0x54) = uVar11;
          uVar26 = *(uint *)((long)param_1 + 0x34);
          if (1 < uVar26) {
            uVar26 = 0;
          }
          *(uint *)(lVar20 + 0x6c) = uVar26;
          FUN_027c1b80(lVar20);
        }
        iVar35 = iVar35 + 1;
      } while (iVar35 != iVar19);
    }
  }
  return;
}

