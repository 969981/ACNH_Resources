
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00999ab0(long param_1)

{
  uint uVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined **ppuVar10;
  int *piVar11;
  float *pfVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined *puVar17;
  uint uVar18;
  undefined8 uVar19;
  long ******pppppplVar20;
  long *plVar21;
  long *******ppppppplVar22;
  undefined1 *puVar23;
  undefined **ppuVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_49c;
  undefined4 uStack_498;
  undefined4 local_494;
  undefined *local_490;
  char *pcStack_488;
  undefined *local_480;
  undefined *puStack_478;
  undefined4 local_470;
  undefined *local_468;
  undefined *local_460;
  undefined1 *local_458;
  int local_450;
  undefined1 auStack_44c [63];
  undefined1 local_40d;
  undefined *local_408;
  undefined1 *puStack_400;
  int local_3f8;
  undefined1 auStack_3f4 [31];
  undefined1 local_3d5;
  undefined *local_3d0;
  undefined *puStack_3c8;
  undefined *local_3c0;
  undefined *puStack_3b8;
  undefined4 local_3b0;
  undefined8 local_3ac;
  undefined4 local_3a4;
  undefined *local_3a0;
  undefined *puStack_398;
  undefined *local_390;
  undefined *puStack_388;
  undefined4 local_380;
  undefined *local_378;
  undefined *puStack_370;
  undefined8 local_368;
  undefined8 *local_360;
  long *******local_358;
  long *******local_350;
  long *******local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  long ******local_318 [6];
  long *****local_2e8 [6];
  undefined8 local_2b8 [3];
  undefined *local_2a0;
  undefined *puStack_298;
  undefined *local_290;
  undefined *local_288;
  undefined4 local_280;
  undefined *local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined8 *local_260;
  long *******local_258;
  long *******local_250;
  long *******local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  long ******local_218 [6];
  long *****local_1e8 [6];
  undefined8 local_1b8 [3];
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  
  FUN_0099aad0();
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0x3f800000;
  puVar17 = PTR_DAT_04bb27c0;
  fVar25 = *(float *)(param_1 + 0x2c8) - *(float *)(param_1 + 0x2d4);
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  fVar27 = *(float *)(param_1 + 0x2d0) - *(float *)(param_1 + 0x2dc);
  fVar25 = SQRT(fVar27 * fVar27 + fVar25 * fVar25);
  if (lVar14 != 0) {
    uVar13 = *(uint *)PTR_DAT_04bb6090;
    if ((((uVar13 == 0) ||
         (plVar21 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                              ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar21 == (long *)0x0)) ||
        ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar21 + 0x46) != uVar13)) {
      plVar21 = (long *)0x0;
    }
    if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar14 = *(long *)puVar17;
      iVar7 = (**(code **)(*plVar8 + 0x60))();
      if (iVar7 < 0x11) {
        uVar13 = 1;
      }
      else {
        if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_00999bc0;
        uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00999bc0:
      uVar13 = 0;
    }
    if (plVar21 != (long *)0x0) {
      lVar14 = plVar21[0x2a];
      if (((*PTR_DAT_04bb6038 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6038);
      }
      uVar9 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bb6030);
      fVar27 = 0.10888889;
      uVar1 = 0;
      if ((int)lVar14 == 1) {
        uVar1 = uVar13;
      }
      if (((uVar9 & 1) == 0) || (uVar1 == 0)) goto LAB_0099a7b4;
      fVar27 = *(float *)(param_1 + 0x2cc);
      local_49c = CONCAT31(local_49c._1_3_,0xff);
      local_490 = (undefined *)CONCAT44(local_490._4_4_,*(undefined4 *)(param_1 + 0x230));
      FUN_009a7c84(*(undefined8 *)PTR_DAT_04bb4820,&local_49c,&local_490);
      lVar14 = FUN_0251b3b0(&local_49c,0);
      if (lVar14 != 0) {
        fVar27 = *(float *)(lVar14 + 4);
      }
      fVar27 = fVar27 - *(float *)(param_1 + 0x2d8);
      if (fVar27 <= 28.5) {
        if (fVar27 <= 13.5) {
          iVar7 = 0;
        }
        else {
          iVar7 = 1;
        }
      }
      else {
        iVar7 = 2;
      }
      ppuVar10 = (undefined **)FUN_0099f760(plVar21);
      pcStack_488 = ppuVar10[1];
      local_480 = ppuVar10[2];
      local_470 = *(undefined4 *)(ppuVar10 + 4);
      puStack_478 = ppuVar10[3];
      local_468 = ppuVar10[5];
      local_40d = 0;
      local_490 = PTR_DAT_04bb35d8 + 0x10;
      local_450 = 0x40;
      local_460 = PTR_DAT_04bb2f70 + 0x10;
      ppuVar24 = ppuVar10 + 6;
      local_458 = auStack_44c;
      (**(code **)(*ppuVar24 + 0x18))(ppuVar24);
      puVar23 = ppuVar10[7];
      if (auStack_44c != puVar23) {
        (**(code **)(ppuVar10[6] + 0x18))(ppuVar24);
        puVar17 = ppuVar10[7];
        lVar14 = 0;
        do {
          if (puVar17[lVar14] == '\0') goto LAB_00999d80;
          if (puVar17[lVar14 + 1] == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_00999d80;
          }
          if (puVar17[lVar14 + 2] == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_00999d80;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_00999d80:
        iVar16 = (int)lVar14;
        if (local_450 <= (int)lVar14) {
          iVar16 = local_450 + -1;
        }
        memcpy(auStack_44c,puVar23,(long)iVar16);
        auStack_44c[iVar16] = 0;
      }
      local_3d5 = 0;
      local_460 = PTR_DAT_04bb2bc0 + 0x10;
      local_3f8 = 0x20;
      local_408 = PTR_DAT_04bb2a08 + 0x10;
      ppuVar24 = ppuVar10 + 0x11;
      puStack_400 = auStack_3f4;
      (**(code **)(*ppuVar24 + 0x18))(ppuVar24);
      puVar23 = ppuVar10[0x12];
      if (auStack_3f4 != puVar23) {
        (**(code **)(ppuVar10[0x11] + 0x18))(ppuVar24);
        puVar17 = ppuVar10[0x12];
        lVar14 = 0;
        do {
          if (puVar17[lVar14] == '\0') goto LAB_00999e4c;
          if (puVar17[lVar14 + 1] == '\0') {
            lVar14 = lVar14 + 1;
            goto LAB_00999e4c;
          }
          if (puVar17[lVar14 + 2] == '\0') {
            lVar14 = lVar14 + 2;
            goto LAB_00999e4c;
          }
          lVar14 = lVar14 + 3;
        } while (lVar14 != 0x80001);
        lVar14 = 0;
LAB_00999e4c:
        iVar16 = (int)lVar14;
        if (local_3f8 <= (int)lVar14) {
          iVar16 = local_3f8 + -1;
        }
        memcpy(auStack_3f4,puVar23,(long)iVar16);
        auStack_3f4[iVar16] = 0;
      }
      puVar6 = PTR_DAT_04bb6098;
      puVar17 = PTR_DAT_04bb5240;
      puVar5 = PTR_DAT_04bb31d0;
      puStack_3c8 = ppuVar10[0x19];
      local_3c0 = ppuVar10[0x1a];
      puStack_3b8 = ppuVar10[0x1b];
      local_408 = PTR_DAT_04bb2028 + 0x10;
      local_3b0 = *(undefined4 *)(ppuVar10 + 0x1c);
      local_490 = PTR_DAT_04bb6098 + 0x10;
      puStack_388 = ppuVar10[0x21];
      local_380 = *(undefined4 *)(ppuVar10 + 0x22);
      local_3d0 = PTR_DAT_04bb3380 + 0x10;
      local_3a4 = *(undefined4 *)((long)ppuVar10 + 0xec);
      local_3ac = *(undefined8 *)((long)ppuVar10 + 0xe4);
      puStack_398 = ppuVar10[0x1f];
      local_390 = ppuVar10[0x20];
      local_378 = ppuVar10[0x23];
      puStack_370 = ppuVar10[0x24];
      local_368 = 0;
      local_360 = (undefined8 *)0x0;
      local_2e8[0] = (long *****)0x0;
      local_350 = (long *******)&local_348;
      local_348 = local_318;
      local_318[0] = local_2e8;
      if (local_2b8 == (undefined8 *)0x0) {
        iVar16 = 0;
      }
      else {
        iVar16 = 3;
        local_368 = 0x300000000;
        local_360 = local_2b8;
      }
      local_358 = local_350;
      if (&local_490 != ppuVar10) {
        iVar4 = (int)((ulong)local_368 >> 0x20);
        if (*(int *)(ppuVar10 + 0x25) <= iVar16) {
          iVar16 = *(int *)(ppuVar10 + 0x25);
        }
        if ((0 < iVar16) && (local_2b8 != (undefined8 *)0x0)) {
          if (iVar4 == 0) {
            uVar13 = 0;
          }
          else {
            lVar14 = *(long *)ppuVar10[0x26];
            if (local_350 != (long *******)0x0) {
              local_358 = local_348;
            }
            local_328 = *(undefined4 *)(lVar14 + 0x20);
            local_338 = *(undefined8 *)(lVar14 + 0x10);
            uStack_330 = *(undefined8 *)(lVar14 + 0x18);
            uStack_340 = *(undefined8 *)(lVar14 + 8);
            local_31c = *(undefined4 *)(lVar14 + 0x2c);
            local_324 = *(undefined8 *)(lVar14 + 0x24);
            local_348 = (long *******)(PTR_DAT_04bb53d0 + 0x10);
            uVar13 = 0;
            if (iVar4 != 0) {
              *local_360 = local_350;
              uVar13 = 1;
              local_368 = CONCAT44(iVar4,1);
            }
          }
          ppppppplVar22 = local_358;
          if (iVar16 != 1) {
            if (uVar13 < local_368._4_4_) {
              lVar14 = *(long *)(ppuVar10[0x26] + 8);
              if (local_358 != (long *******)0x0) {
                local_358 = (long *******)*local_358;
              }
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb3050 + 0x10);
              pppppplVar2 = *(long *******)(lVar14 + 8);
              pppppplVar3 = *(long *******)(lVar14 + 0x10);
              pppppplVar20 = *(long *******)(lVar14 + 0x18);
              *(undefined4 *)(ppppppplVar22 + 4) = *(undefined4 *)(lVar14 + 0x20);
              ppppppplVar22[2] = pppppplVar3;
              ppppppplVar22[3] = pppppplVar20;
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb31d0 + 0x10);
              ppppppplVar22[1] = pppppplVar2;
              uVar19 = *(undefined8 *)(lVar14 + 0x24);
              *(undefined4 *)((long)ppppppplVar22 + 0x2c) = *(undefined4 *)(lVar14 + 0x2c);
              *(undefined8 *)((long)ppppppplVar22 + 0x24) = uVar19;
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb53d0 + 0x10);
              uVar13 = (uint)local_368;
              if ((uint)local_368 < local_368._4_4_) {
                local_360[(int)(uint)local_368] = ppppppplVar22;
                uVar13 = (uint)local_368 + 1;
                local_368 = CONCAT44(local_368._4_4_,uVar13);
              }
            }
            ppppppplVar22 = local_358;
            if ((iVar16 != 2) && (uVar13 < local_368._4_4_)) {
              lVar14 = *(long *)(ppuVar10[0x26] + 0x10);
              if (local_358 != (long *******)0x0) {
                local_358 = (long *******)*local_358;
              }
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb3050 + 0x10);
              pppppplVar2 = *(long *******)(lVar14 + 8);
              pppppplVar3 = *(long *******)(lVar14 + 0x10);
              pppppplVar20 = *(long *******)(lVar14 + 0x18);
              *(undefined4 *)(ppppppplVar22 + 4) = *(undefined4 *)(lVar14 + 0x20);
              ppppppplVar22[2] = pppppplVar3;
              ppppppplVar22[3] = pppppplVar20;
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb31d0 + 0x10);
              ppppppplVar22[1] = pppppplVar2;
              uVar19 = *(undefined8 *)(lVar14 + 0x24);
              *(undefined4 *)((long)ppppppplVar22 + 0x2c) = *(undefined4 *)(lVar14 + 0x2c);
              *(undefined8 *)((long)ppppppplVar22 + 0x24) = uVar19;
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb53d0 + 0x10);
              if ((uint)local_368 < local_368._4_4_) {
                local_360[(int)(uint)local_368] = ppppppplVar22;
                local_368 = CONCAT44(local_368._4_4_,(uint)local_368 + 1);
              }
            }
          }
        }
      }
      puStack_298 = ppuVar10[0x3f];
      local_290 = ppuVar10[0x40];
      local_288 = ppuVar10[0x41];
      local_280 = *(undefined4 *)(ppuVar10 + 0x42);
      local_278 = ppuVar10[0x43];
      local_270 = ppuVar10[0x44];
      local_260 = (undefined8 *)0x0;
      local_268._4_4_ = 0;
      local_1e8[0] = (long *****)0x0;
      local_248 = local_218;
      local_218[0] = local_1e8;
      local_3a0 = PTR_DAT_04bb53c8 + 0x10;
      local_250 = (long *******)&local_248;
      if (local_1b8 == (undefined8 *)0x0) {
        iVar16 = 0;
      }
      else {
        iVar16 = 3;
        local_268._4_4_ = 3;
        local_260 = local_1b8;
      }
      local_268._0_4_ = 0;
      local_258 = local_250;
      if (&local_490 != ppuVar10) {
        local_268._0_4_ = 0;
        if (*(int *)(ppuVar10 + 0x45) <= iVar16) {
          iVar16 = *(int *)(ppuVar10 + 0x45);
        }
        if ((0 < iVar16) && (local_1b8 != (undefined8 *)0x0)) {
          if (local_268._4_4_ != 0) {
            lVar14 = *(long *)ppuVar10[0x46];
            if (local_250 != (long *******)0x0) {
              local_258 = local_248;
            }
            local_228 = *(undefined4 *)(lVar14 + 0x20);
            local_238 = *(undefined8 *)(lVar14 + 0x10);
            uStack_230 = *(undefined8 *)(lVar14 + 0x18);
            uStack_240 = *(undefined8 *)(lVar14 + 8);
            local_21c = *(undefined4 *)(lVar14 + 0x2c);
            local_224 = *(undefined8 *)(lVar14 + 0x24);
            local_248 = (long *******)(PTR_DAT_04bb53d0 + 0x10);
            if (local_268._4_4_ != 0) {
              *local_260 = local_250;
              local_268._0_4_ = 1;
            }
          }
          ppppppplVar22 = local_258;
          if (iVar16 != 1) {
            if ((uint)local_268 < local_268._4_4_) {
              lVar14 = *(long *)(ppuVar10[0x46] + 8);
              if (local_258 != (long *******)0x0) {
                local_258 = (long *******)*local_258;
              }
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb3050 + 0x10);
              pppppplVar2 = *(long *******)(lVar14 + 8);
              pppppplVar3 = *(long *******)(lVar14 + 0x10);
              pppppplVar20 = *(long *******)(lVar14 + 0x18);
              *(undefined4 *)(ppppppplVar22 + 4) = *(undefined4 *)(lVar14 + 0x20);
              ppppppplVar22[2] = pppppplVar3;
              ppppppplVar22[3] = pppppplVar20;
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb31d0 + 0x10);
              ppppppplVar22[1] = pppppplVar2;
              uVar19 = *(undefined8 *)(lVar14 + 0x24);
              *(undefined4 *)((long)ppppppplVar22 + 0x2c) = *(undefined4 *)(lVar14 + 0x2c);
              *(undefined8 *)((long)ppppppplVar22 + 0x24) = uVar19;
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb53d0 + 0x10);
              if ((uint)local_268 < local_268._4_4_) {
                local_260[(int)(uint)local_268] = ppppppplVar22;
                local_268._0_4_ = (uint)local_268 + 1;
              }
            }
            ppppppplVar22 = local_258;
            if ((iVar16 != 2) && ((uint)local_268 < local_268._4_4_)) {
              lVar14 = *(long *)(ppuVar10[0x46] + 0x10);
              if (local_258 != (long *******)0x0) {
                local_258 = (long *******)*local_258;
              }
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb3050 + 0x10);
              pppppplVar2 = *(long *******)(lVar14 + 8);
              pppppplVar3 = *(long *******)(lVar14 + 0x10);
              pppppplVar20 = *(long *******)(lVar14 + 0x18);
              *(undefined4 *)(ppppppplVar22 + 4) = *(undefined4 *)(lVar14 + 0x20);
              ppppppplVar22[2] = pppppplVar3;
              ppppppplVar22[3] = pppppplVar20;
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb31d0 + 0x10);
              ppppppplVar22[1] = pppppplVar2;
              uVar19 = *(undefined8 *)(lVar14 + 0x24);
              *(undefined4 *)((long)ppppppplVar22 + 0x2c) = *(undefined4 *)(lVar14 + 0x2c);
              *(undefined8 *)((long)ppppppplVar22 + 0x24) = uVar19;
              *ppppppplVar22 = (long ******)(PTR_DAT_04bb53d0 + 0x10);
              if ((uint)local_268 < local_268._4_4_) {
                local_260[(int)(uint)local_268] = ppppppplVar22;
                local_268._0_4_ = (uint)local_268 + 1;
              }
            }
          }
        }
      }
      local_190 = ppuVar10[0x60];
      local_2a0 = PTR_DAT_04bb53c8 + 0x10;
      local_180 = *(undefined4 *)(ppuVar10 + 0x62);
      local_1a0 = PTR_DAT_04bb31d0 + 0x10;
      local_198 = ppuVar10[0x5f];
      local_188 = ppuVar10[0x61];
      local_174 = *(undefined4 *)((long)ppuVar10 + 0x31c);
      local_150 = *(undefined4 *)(ppuVar10 + 0x68);
      local_158 = ppuVar10[0x67];
      local_168 = ppuVar10[0x65];
      local_17c = (undefined4)*(undefined8 *)((long)ppuVar10 + 0x314);
      uStack_178 = (undefined4)((ulong)*(undefined8 *)((long)ppuVar10 + 0x314) >> 0x20);
      local_160 = ppuVar10[0x66];
      local_120 = *(undefined4 *)(ppuVar10 + 0x6e);
      local_f0 = *(undefined4 *)(ppuVar10 + 0x74);
      local_144 = *(undefined4 *)((long)ppuVar10 + 0x34c);
      local_130 = ppuVar10[0x6c];
      local_14c = (undefined4)*(undefined8 *)((long)ppuVar10 + 0x344);
      uStack_148 = (undefined4)((ulong)*(undefined8 *)((long)ppuVar10 + 0x344) >> 0x20);
      local_138 = ppuVar10[0x6b];
      local_128 = ppuVar10[0x6d];
      local_114 = *(undefined4 *)((long)ppuVar10 + 0x37c);
      local_100 = ppuVar10[0x72];
      local_108 = ppuVar10[0x71];
      local_11c = (undefined4)*(undefined8 *)((long)ppuVar10 + 0x374);
      uStack_118 = (undefined4)((ulong)*(undefined8 *)((long)ppuVar10 + 0x374) >> 0x20);
      local_f8 = ppuVar10[0x73];
      local_e4 = *(undefined4 *)((long)ppuVar10 + 0x3ac);
      local_c0 = *(undefined4 *)(ppuVar10 + 0x7a);
      local_d0 = ppuVar10[0x78];
      local_c8 = ppuVar10[0x79];
      local_ec = (undefined4)*(undefined8 *)((long)ppuVar10 + 0x3a4);
      uStack_e8 = (undefined4)((ulong)*(undefined8 *)((long)ppuVar10 + 0x3a4) >> 0x20);
      local_d8 = ppuVar10[0x77];
      local_90 = *(undefined4 *)(ppuVar10 + 0x80);
      local_b4 = *(undefined4 *)((long)ppuVar10 + 0x3dc);
      local_bc = (undefined4)*(undefined8 *)((long)ppuVar10 + 0x3d4);
      uStack_b8 = (undefined4)((ulong)*(undefined8 *)((long)ppuVar10 + 0x3d4) >> 0x20);
      local_98 = ppuVar10[0x7f];
      local_a8 = ppuVar10[0x7d];
      local_a0 = ppuVar10[0x7e];
      local_84 = *(undefined4 *)((long)ppuVar10 + 0x40c);
      local_8c = (undefined4)*(undefined8 *)((long)ppuVar10 + 0x404);
      uStack_88 = (undefined4)((ulong)*(undefined8 *)((long)ppuVar10 + 0x404) >> 0x20);
      local_170 = local_1a0;
      local_140 = local_1a0;
      local_110 = local_1a0;
      local_e0 = local_1a0;
      local_b0 = local_1a0;
      piVar11 = (int *)(**(code **)(PTR_DAT_04bb3380 + 0x100))(&local_3d0);
      fVar27 = 0.0;
      fVar32 = (float)*piVar11 * 5.0;
      if (fVar25 < fVar32) {
        piVar11 = (int *)(**(code **)(local_3d0 + 0xf0))(&local_3d0);
        fVar27 = fVar25 / ((float)*piVar11 * 5.0);
      }
      if (iVar7 == 2) {
        pfVar12 = (float *)(**(code **)(*(long *)local_260[2] + 0xf0))();
        fVar33 = *pfVar12;
        if (fVar25 < fVar32) {
          pfVar12 = (float *)(**(code **)(*(long *)local_360[2] + 0xf0))();
          fVar33 = fVar33 - *pfVar12;
          puVar15 = local_360 + 2;
          goto LAB_0099a67c;
        }
      }
      else if (iVar7 == 1) {
        pfVar12 = (float *)(**(code **)(*(long *)local_260[1] + 0xf0))();
        fVar33 = *pfVar12;
        if (fVar25 < fVar32) {
          pfVar12 = (float *)(**(code **)(*(long *)local_360[1] + 0xf0))();
          fVar33 = fVar33 - *pfVar12;
          puVar15 = local_360 + 1;
          goto LAB_0099a67c;
        }
      }
      else {
        pfVar12 = (float *)(**(code **)(*(long *)*local_260 + 0xf0))();
        fVar33 = *pfVar12;
        if (fVar25 < fVar32) {
          pfVar12 = (float *)(**(code **)(*(long *)*local_360 + 0xf0))();
          fVar33 = fVar33 - *pfVar12;
          puVar15 = local_360;
LAB_0099a67c:
          pfVar12 = (float *)(**(code **)(*(long *)*puVar15 + 0xf0))();
          fVar33 = fVar27 * fVar33 + *pfVar12;
        }
      }
      fVar27 = fVar33 * 0.8;
      if (15.0 <= fVar25) {
        fVar27 = fVar33;
      }
      *(float *)(param_1 + 0x2e8) = fVar27;
      pfVar12 = (float *)(**(code **)(local_1a0 + 0xf0))(&local_1a0);
      local_490 = puVar6 + 0x10;
      fVar27 = *pfVar12;
      puVar17 = puVar17 + 0x10;
      local_1a0 = puVar5 + 0x10;
      uStack_88 = 0;
      local_84 = 0;
      uStack_b8 = 0;
      local_b4 = 0;
      uStack_e8 = 0;
      local_e4 = 0;
      uStack_118 = 0;
      local_114 = 0;
      uStack_148 = 0;
      local_144 = 0;
      uStack_178 = 0;
      local_174 = 0;
      local_2a0 = puVar17;
      local_170 = local_1a0;
      local_140 = local_1a0;
      local_110 = local_1a0;
      local_e0 = local_1a0;
      local_b0 = local_1a0;
      if (0 < (int)(uint)local_268) {
        lVar14 = 0;
        do {
          ppppppplVar22 = (long *******)local_260[lVar14];
          (*(code *)**ppppppplVar22)(ppppppplVar22);
          lVar14 = lVar14 + 1;
          *ppppppplVar22 = (long ******)local_258;
          local_258 = ppppppplVar22;
        } while (lVar14 < (int)(uint)local_268);
      }
      local_268 = (ulong)local_268._4_4_ << 0x20;
      local_3a0 = puVar17;
      if (0 < (int)(uint)local_368) {
        lVar14 = 0;
        do {
          ppppppplVar22 = (long *******)local_360[lVar14];
          (*(code *)**ppppppplVar22)(ppppppplVar22);
          lVar14 = lVar14 + 1;
          *ppppppplVar22 = (long ******)local_358;
          local_358 = ppppppplVar22;
        } while (lVar14 < (int)(uint)local_368);
      }
      fVar27 = fVar27 * 0.10888889;
      goto LAB_0099a7b4;
    }
  }
  fVar27 = 0.10888889;
LAB_0099a7b4:
  *(undefined4 *)(param_1 + 0x2f4) = 0x42a00000;
  *(float *)(param_1 + 0x2ec) = fVar25 / *(float *)(param_1 + 0x2e8);
  fVar25 = SQRT(10.0 / fVar27);
  if (NAN(fVar25)) {
    fVar25 = sqrtf(10.0 / fVar27);
  }
  fVar32 = 0.0;
  fVar26 = *(float *)(param_1 + 0x2cc);
  fVar33 = fVar27;
  if (fVar27 <= 0.0) {
    fVar33 = -fVar27;
  }
  uVar13 = (uint)*(float *)(param_1 + 0x2ec);
  if (uVar13 != 0) {
    uVar1 = uVar13 & 3;
    if (uVar13 < 4) {
      fVar31 = 0.0;
    }
    else {
      fVar31 = 0.0;
      uVar18 = uVar13 & 0xfffffffc;
      do {
        fVar28 = fVar31 - fVar33;
        uVar18 = uVar18 - 4;
        fVar29 = fVar28 - fVar33;
        fVar30 = fVar29 - fVar33;
        fVar31 = fVar30 - fVar33;
        fVar32 = fVar32 + fVar28 + fVar29 + fVar30 + fVar31;
      } while (uVar18 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      fVar31 = fVar31 - fVar33;
      fVar32 = fVar32 + fVar31;
    }
  }
  *(float *)(param_1 + 0x2e4) = -fVar27;
  fVar32 = (((*(float *)(param_1 + 0x2d8) + fVar25 * fVar27 * -0.5 * fVar25) - fVar26) - fVar32) /
           (float)uVar13;
  *(float *)(param_1 + 0x2e0) = fVar32;
  uVar13 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
  pfVar12 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar13 >> 0x14) & 0xff0));
  fVar27 = (float)(uVar13 & 0xffffff) * 5.9604645e-08;
  fVar25 = (*(float *)(param_1 + 0x2c8) +
           *(float *)(param_1 + 0x2e8) * (*pfVar12 + fVar27 * pfVar12[1])) -
           *(float *)(param_1 + 0x2c8);
  fVar27 = (*(float *)(param_1 + 0x2d0) +
           *(float *)(param_1 + 0x2e8) * (pfVar12[2] + fVar27 * pfVar12[3])) -
           *(float *)(param_1 + 0x2d0);
  uVar13 = FUN_006f0400(-((fVar32 + fVar26 + 0.0) - fVar26),SQRT(fVar27 * fVar27 + fVar25 * fVar25))
  ;
  uStack_498 = FUN_006f0400(*(float *)(param_1 + 0x2d4) - *(float *)(param_1 + 0x2c8),
                            *(float *)(param_1 + 0x2dc) - *(float *)(param_1 + 0x2d0));
  local_494 = 0;
  fVar27 = (float)uVar13 * 8.381903e-08;
  fVar25 = 360.0 - fVar27;
  if (fVar27 <= 0.0) {
    fVar25 = fVar27;
  }
  *(float *)(param_1 + 0x2f0) = fVar25;
  fVar27 = -fVar25;
  if (0.0 <= fVar25) {
    fVar27 = fVar25;
  }
  *(float *)(param_1 + 0x2f8) = (fVar27 + *(float *)(param_1 + 0x2f4)) / *(float *)(param_1 + 0x2ec)
  ;
  local_49c = uVar13;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x150))(*(long **)(param_1 + 0x68),&local_49c);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x178))(0x3e99999a);
  if ((*(int *)(param_1 + 0x2a0) == 0x8eb) || (*(int *)(param_1 + 0x2a0) == 0x8d0)) {
    plVar21 = *(long **)(param_1 + 0x60);
    pcStack_488 = "SpRelease";
  }
  else {
    plVar21 = *(long **)(param_1 + 0x60);
    pcStack_488 = "Swim";
  }
  local_490 = PTR_DAT_04bb2020 + 0x10;
  if (plVar21[0x227] != 0) {
    FUN_038501b0(0x41200000,plVar21[0x227],0);
    lVar14 = plVar21[0x227];
    if (*(char *)(lVar14 + 0x2c0) != '\0') {
      *(undefined1 *)(lVar14 + 0x2c0) = 0;
      FUN_03855b20(lVar14 + 0xc0,0);
    }
    FUN_0384f8c0(lVar14,&local_490,0,0);
    (**(code **)(*plVar21 + 0x120))(plVar21,&local_490,10,0);
  }
  if (*(long *)(*(long *)(param_1 + 0x60) + 0x1138) != 0) {
    FUN_03850760(0x40400000);
  }
  return;
}

