
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03a8ead0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  char cVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined *local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 *local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined4 local_290;
  undefined8 local_28c;
  undefined4 local_284;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined *local_210;
  undefined2 local_208;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined4 local_184;
  undefined4 local_17c;
  float local_178;
  float fStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined *local_150;
  undefined1 local_148;
  undefined1 uStack_147;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  float local_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  iVar8 = *(int *)(param_1 + 0xd80);
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfffb;
  if (iVar8 == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    lVar21 = *(long *)(param_1 + 0xd88);
    uVar11 = 0;
    uVar18 = 0;
    uVar20 = 0;
    do {
      iVar19 = (int)uVar20;
      lVar17 = lVar21 + (long)iVar19 * 0x1b8;
      if (*(long *)(lVar17 + 0x160) == 0) {
        if (*(int *)(param_1 + 0x6c8) != 0) {
          FUN_03918818(param_1 + 0x490,lVar17,0,0xffffffff,uVar11);
          cVar12 = '\0';
          uVar15 = *(undefined8 *)(param_1 + 0xd90);
          *(undefined1 *)(lVar17 + 0x198) = 0;
          *(undefined8 *)(lVar17 + 0x1a8) = uVar15;
          *(undefined2 *)(lVar21 + (long)iVar19 * 0x1b8 + 0x1b0) = 0;
          if (*(long *)(lVar17 + 0x160) != 0) goto LAB_03a8eb58;
        }
      }
      else {
        cVar12 = *(char *)(lVar21 + (long)iVar19 * 0x1b8 + 0x1b0);
LAB_03a8eb58:
        iVar16 = (int)cVar12;
        uVar10 = *(int *)(param_1 + 0xd8) - uVar18;
        uVar13 = (uint)*(byte *)(param_1 + 0xb);
        if ((int)uVar10 <= (int)(uint)*(byte *)(param_1 + 0xb)) {
          uVar13 = uVar10;
        }
        iVar23 = uVar13 + iVar16;
        iVar22 = iVar23;
        if (6 < iVar23) {
          iVar22 = 7;
        }
        if (5 < iVar23) {
          iVar23 = 6;
        }
        *(char *)(lVar21 + (long)iVar19 * 0x1b8 + 0x1b1) = (char)iVar22;
        iVar19 = 0;
        if (iVar22 != iVar16) {
          iVar19 = iVar23 - iVar16;
        }
        uVar18 = iVar19 + uVar18;
        *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 4;
      }
      uVar11 = uVar20 + 1;
      uVar20 = uVar11 & 0xffffffff;
    } while (iVar8 != (int)uVar11);
    *(char *)(param_1 + 0xc) = (char)uVar18;
    if ((uVar18 & 0xff) != 0) {
      lVar21 = param_1 + 200;
      FUN_039ee490(lVar21,param_2);
      if (*(long *)(param_1 + 0xda0) != 0) {
        *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xda0);
      }
      if (*(long *)(param_1 + 0xda8) != 0) {
        *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xda8);
      }
      if (*(long *)(param_1 + 0xdb0) != 0) {
        *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xdb0);
      }
      if (*(long *)(param_1 + 0xdb8) != 0) {
        *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0xdb8);
      }
      if (*(long *)(param_1 + 0xdc0) != 0) {
        *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0xdc0);
      }
      if (*(long *)(param_1 + 0xdc8) != 0) {
        *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0xdc8);
      }
      if (*(long *)(param_1 + 0xdd0) != 0) {
        *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0xdd0);
      }
      if (*(long *)(param_1 + 0xdd8) != 0) {
        *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0xdd8);
      }
      if (*(long *)(param_1 + 0xde0) != 0) {
        *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0xde0);
      }
      if (*(long *)(param_1 + 0xde8) != 0) {
        *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0xde8);
      }
      if (*(long *)(param_1 + 0xdf0) != 0) {
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0xdf0);
      }
      if (*(long *)(param_1 + 0xdf8) != 0) {
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0xdf8);
      }
      if (*(long *)(param_1 + 0xe00) != 0) {
        *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0xe00);
      }
      if (*(long *)(param_1 + 0xe08) != 0) {
        *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0xe08);
      }
      if (*(long *)(param_1 + 0xe10) != 0) {
        *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0xe10);
      }
      if (*(long *)(param_1 + 0xe18) != 0) {
        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0xe18);
      }
      if (*(long *)(param_1 + 0xe20) != 0) {
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0xe20);
      }
      if (*(long *)(param_1 + 0xe28) != 0) {
        *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0xe28);
      }
      if (*(long *)(param_1 + 0xe30) != 0) {
        *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0xe30);
      }
      if (*(long *)(param_1 + 0xe38) != 0) {
        *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0xe38);
      }
      if (*(long *)(param_1 + 0xe40) != 0) {
        *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0xe40);
      }
      if (*(long *)(param_1 + 0xe48) != 0) {
        *(long *)(param_1 + 400) = *(long *)(param_1 + 0xe48);
      }
      if (*(long *)(param_1 + 0xe50) != 0) {
        *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0xe50);
      }
      if (*(long *)(param_1 + 0xe58) != 0) {
        *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0xe58);
      }
      if (*(long *)(param_1 + 0xe60) != 0) {
        *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0xe60);
      }
      if (*(long *)(param_1 + 0xe68) != 0) {
        *(long *)(param_1 + 0x1b0) = *(long *)(param_1 + 0xe68);
      }
      if (*(long *)(param_1 + 0xe70) != 0) {
        *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0xe70);
      }
      if (*(long *)(param_1 + 0xe78) != 0) {
        *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0xe78);
      }
      if (*(long *)(param_1 + 0xe80) != 0) {
        *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0xe80);
      }
      if (*(long *)(param_1 + 0xe88) != 0) {
        *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0xe88);
      }
      if (*(long *)(param_1 + 0xe90) != 0) {
        *(long *)(param_1 + 0x1d8) = *(long *)(param_1 + 0xe90);
      }
      if (*(long *)(param_1 + 0xe98) != 0) {
        *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0xe98);
      }
      if (*(long *)(param_1 + 0xea0) != 0) {
        *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0xea0);
      }
      if (*(long *)(param_1 + 0xea8) != 0) {
        *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0xea8);
      }
      if (*(long *)(param_1 + 0xeb0) != 0) {
        *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0xeb0);
      }
      if (*(long *)(param_1 + 0xeb8) != 0) {
        *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0xeb8);
      }
      if (*(long *)(param_1 + 0xec0) != 0) {
        *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0xec0);
      }
      if (*(long *)(param_1 + 0xec8) != 0) {
        *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0xec8);
      }
      if (*(long *)(param_1 + 0xed0) != 0) {
        *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0xed0);
      }
      if (*(long *)(param_1 + 0xed8) != 0) {
        *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0xed8);
      }
      if (*(long *)(param_1 + 0xee0) != 0) {
        *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0xee0);
      }
      if (*(long *)(param_1 + 0xee8) != 0) {
        *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0xee8);
      }
      if (*(long *)(param_1 + 0xef0) != 0) {
        *(long *)(param_1 + 0x238) = *(long *)(param_1 + 0xef0);
      }
      iVar8 = *(int *)(param_1 + 0xd80);
      if (iVar8 != 0) {
        lVar17 = *(long *)(param_1 + 0xd88);
        iVar19 = 0;
        iVar16 = 0;
        puVar1 = PTR_DAT_04bbd858 + 0x10;
        puVar2 = PTR_DAT_04bd0e98 + 0x10;
        do {
          lVar14 = lVar17 + (long)iVar16 * 0x1b8;
          if (*(long *)(lVar14 + 0x160) != 0) {
            lVar14 = *(long *)(lVar14 + 0x160);
            local_a0 = 0x3f800000;
            uStack_fc = uRam0000000005ae79b4;
            local_104 = _DAT_05ae79ac;
            local_bc = DAT_05ae79f4;
            uStack_ec = uRam0000000005ae79c4;
            local_f4 = _DAT_05ae79bc;
            local_178 = *(float *)(lVar14 + 0x250);
            uStack_dc = uRam0000000005ae79d4;
            local_e4 = _DAT_05ae79cc;
            local_a8 = DAT_05ae7a08;
            fStack_174 = *(float *)(lVar14 + 0x270);
            uStack_1bc = uRam0000000005ae79b4;
            local_1c4 = _DAT_05ae79ac;
            local_b8 = *(float *)(param_1 + 0x10);
            if (*(float *)(param_1 + 0x10) <= 0.0) {
              local_b8 = local_178;
            }
            local_160 = 0x3f800000;
            uStack_13c = uRam0000000005ae7974;
            local_144 = _DAT_05ae796c;
            fStack_b4 = *(float *)(param_1 + 0x14);
            if (*(float *)(param_1 + 0x14) <= 0.0) {
              fStack_b4 = fStack_174;
            }
            uStack_12c = uRam0000000005ae7984;
            local_134 = _DAT_05ae797c;
            local_9c = DAT_05ae7a14;
            uStack_98 = DAT_05ae7a18;
            local_15c = DAT_05ae7a14;
            local_158 = DAT_05ae7a18;
            uStack_cc = uRam0000000005ae79e4;
            local_d4 = _DAT_05ae79dc;
            local_c4 = DAT_05ae79ec;
            uStack_11c = uRam0000000005ae7994;
            local_124 = _DAT_05ae798c;
            uStack_10c = uRam0000000005ae79a4;
            local_114 = _DAT_05ae799c;
            uStack_1fc = uRam0000000005ae7974;
            local_204 = _DAT_05ae796c;
            uStack_1ec = uRam0000000005ae7984;
            local_1f4 = _DAT_05ae797c;
            uStack_1dc = uRam0000000005ae7994;
            local_1e4 = _DAT_05ae798c;
            uStack_b0 = DAT_05ae7a00;
            uStack_147 = (undefined1)((ushort)DAT_05ae7968 >> 8);
            _local_148 = CONCAT11(uStack_147,1);
            local_208 = CONCAT11(uStack_147,1);
            local_17c = DAT_05ae79f4;
            local_184 = (undefined4)DAT_05ae79ec;
            uStack_1cc = uRam0000000005ae79a4;
            local_1d4 = _DAT_05ae799c;
            uStack_1ac = uRam0000000005ae79c4;
            local_1b4 = _DAT_05ae79bc;
            uStack_19c = uRam0000000005ae79d4;
            local_1a4 = _DAT_05ae79cc;
            local_170 = DAT_05ae7a00;
            uStack_168 = DAT_05ae7a08;
            uVar15 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
            uVar5 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
            uVar3 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
            uVar6 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
            uVar4 = *(undefined8 *)PTR_DAT_04bb2f80;
            uVar7 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
            local_3e0 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x10);
            uStack_3d8 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x18);
            local_3f0 = *(undefined8 *)PTR_DAT_04bbd558;
            uStack_3e8 = *(undefined8 *)(PTR_DAT_04bbd558 + 8);
            local_3c0 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x30);
            uStack_3b8 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x38);
            local_3d0 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x20);
            uStack_3c8 = *(undefined8 *)(PTR_DAT_04bbd558 + 0x28);
            local_2a4 = *(undefined4 *)(PTR_DAT_04bb4bc8 + 8);
            local_21c = 0;
            local_358 = 0x3f800000;
            local_350 = 0;
            local_2a0 = 0;
            local_290 = 0;
            local_280 = 0;
            local_270 = 0;
            local_260 = 0;
            local_2ac = *(undefined8 *)PTR_DAT_04bb4bc8;
            local_228 = 0xff7fffffff7fffff;
            local_220 = 0xff7fffff;
            fVar24 = *(float *)(lVar14 + 0x228);
            fVar25 = *(float *)(lVar14 + 0x22c);
            fVar26 = *(float *)(lVar14 + 0x230);
            local_240 = 0xff7fffffff7fffff;
            local_238 = 0x7f7fffffff7fffff;
            uStack_18c = uRam0000000005ae79e4;
            local_194 = _DAT_05ae79dc;
            local_370 = 0x447a00003f800000;
            local_368 = 0x3fe38e393f490fdb;
            local_360 = &DAT_3f8000003f800000;
            local_250 = 0x7f7fffff00000000;
            local_248 = 0x7f7fffff7f7fffff;
            local_230 = 0x7f7fffff7f7fffff;
            local_450 = uVar4;
            uStack_448 = uVar7;
            local_440 = uVar15;
            uStack_438 = uVar5;
            local_430 = uVar3;
            uStack_428 = uVar6;
            local_210 = puVar1;
            local_150 = puVar1;
            local_420 = uVar4;
            uStack_418 = uVar7;
            local_410 = uVar15;
            uStack_408 = uVar5;
            local_400 = uVar3;
            uStack_3f8 = uVar6;
            local_3b0 = local_3f0;
            uStack_3a8 = uStack_3e8;
            local_3a0 = local_3e0;
            uStack_398 = uStack_3d8;
            local_390 = local_3d0;
            uStack_388 = uStack_3c8;
            local_380 = local_3c0;
            uStack_378 = uStack_3b8;
            local_29c = local_2ac;
            local_294 = local_2a4;
            local_28c = local_2ac;
            local_284 = local_2a4;
            local_27c = local_2ac;
            local_274 = local_2a4;
            local_26c = local_2ac;
            local_264 = local_2a4;
            local_25c = local_2ac;
            local_254 = local_2a4;
            FUN_03983a20(&local_450,&local_210);
            lVar14 = lVar17 + (long)iVar16 * 0x1b8;
            cVar12 = *(char *)(lVar14 + 0x1b0);
            uVar18 = (uint)cVar12;
            cVar9 = *(char *)(lVar14 + 0x1b1);
            uVar13 = (uint)cVar9;
            if ('\x05' < cVar9) {
              uVar13 = 6;
            }
            if ((int)cVar12 < (int)uVar13) {
              do {
                uVar11 = (ulong)uVar18;
                lVar14 = uVar11 * 0x24;
                local_480 = *(undefined8 *)((long)&DAT_05ae7a50 + lVar14);
                local_470 = *(undefined8 *)((long)&DAT_05ae7a5c + lVar14);
                local_460 = *(undefined8 *)((long)&DAT_05ae7a68 + lVar14);
                uStack_468 = CONCAT44(-((float)(&DAT_05ae7a64)[uVar11 * 9] * fVar26) -
                                      (fVar25 * *(float *)((long)&DAT_05ae7a5c + lVar14 + 4) +
                                      fVar24 * *(float *)((long)&DAT_05ae7a5c + lVar14)),
                                      (&DAT_05ae7a64)[uVar11 * 9]);
                uStack_478 = CONCAT44(-((float)(&DAT_05ae7a58)[uVar11 * 9] * fVar26) -
                                      (fVar25 * *(float *)((long)&DAT_05ae7a50 + lVar14 + 4) +
                                      fVar24 * *(float *)((long)&DAT_05ae7a50 + lVar14)),
                                      (&DAT_05ae7a58)[uVar11 * 9]);
                uStack_458 = CONCAT44(-((float)(&DAT_05ae7a70)[uVar11 * 9] * fVar26) -
                                      (fVar25 * *(float *)((long)&DAT_05ae7a68 + lVar14 + 4) +
                                      fVar24 * *(float *)((long)&DAT_05ae7a68 + lVar14)),
                                      (&DAT_05ae7a70)[uVar11 * 9]);
                local_4b8 = puVar2;
                local_4b0 = uVar4;
                uStack_4a8 = uVar7;
                local_4a0 = uVar15;
                uStack_498 = uVar5;
                local_490 = uVar3;
                uStack_488 = uVar6;
                FUN_038e4a88(&local_4b8,&local_4b0);
                uStack_428 = uStack_488;
                local_430 = local_490;
                uStack_448 = uStack_4a8;
                local_450 = local_4b0;
                uStack_438 = uStack_498;
                local_440 = local_4a0;
                FUN_007535b4(&local_420,&local_4b0);
                FUN_03982980(&local_450);
                FUN_039eea20(lVar21,iVar19,&local_4b0,&local_150,&local_4b0);
                lVar14 = *(long *)(param_1 + 0xe0);
                if ((char)local_208 == '\0') {
                  if (local_208._1_1_ != '\0') goto LAB_03a8f234;
                }
                else {
                  (**(code **)(local_210 + 0x58))(&local_210,&local_204);
                  local_208 = 0x100;
LAB_03a8f234:
                  (**(code **)(local_210 + 0x60))(&local_210,&local_1c4,&local_204,local_184);
                  local_208 = local_208 & 0xff;
                }
                FUN_039eefb0(lVar21,iVar19,lVar14 + (long)iVar19 * 0x410,&local_204,&local_450,1,0);
                uVar18 = uVar18 + 1;
                iVar19 = iVar19 + 1;
              } while (uVar13 != uVar18);
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar8 != iVar16);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

