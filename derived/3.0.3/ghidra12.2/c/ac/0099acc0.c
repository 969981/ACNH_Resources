
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0099acc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long ******pppppplVar4;
  long ******pppppplVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  long ******pppppplVar17;
  long *******ppppppplVar18;
  long *plVar19;
  undefined1 *puVar20;
  float fVar21;
  float extraout_s0;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined *local_450;
  undefined1 *local_448;
  int local_440;
  undefined1 auStack_43c [63];
  undefined1 local_3fd;
  undefined *local_3f8;
  undefined1 *local_3f0;
  int local_3e8;
  undefined1 auStack_3e4 [31];
  undefined1 local_3c5;
  undefined *local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined4 local_394;
  undefined *local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  uint local_358;
  uint uStack_354;
  undefined8 *local_350;
  long *******local_348;
  long *******local_340;
  long *******local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined8 local_314;
  undefined4 local_30c;
  long ******local_308 [6];
  long *****local_2d8 [6];
  undefined8 local_2a8 [3];
  undefined *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 *local_250;
  long *******local_248;
  long *******local_240;
  long *******local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  long ******local_208 [6];
  long *****local_1d8 [6];
  undefined8 local_1a8 [3];
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  float local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  float local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  byte local_48 [4];
  undefined4 local_44;
  
  local_48[0] = 0xff;
  local_480._0_4_ = *(float *)(param_1 + 0x230);
  fVar21 = (float)FUN_009a7c84(*(undefined8 *)PTR_DAT_04bb4820,local_48,&local_480);
  fVar26 = 1.0;
  if (local_48[0] < 8) {
    lVar8 = FUN_0251b3b0(local_48,0);
    lVar9 = FUN_0251bdc4(local_48,0);
    puVar6 = PTR_DAT_04bb2d00;
    puVar2 = PTR_DAT_04bb27c8;
    fVar21 = extraout_s0;
    if ((lVar8 != 0) && (fVar21 = extraout_s0, lVar9 != 0)) {
      iVar7 = 9;
      do {
        local_44 = 0;
        pfVar3 = (float *)(puVar6 + ((ulong)(*(uint *)(lVar9 + 4) >> 0x14) & 0xff0));
        fVar21 = (float)(*(uint *)(lVar9 + 4) & 0xffffff) * 5.9604645e-08;
        local_478 = CONCAT44(local_478._4_4_,
                             *(float *)(param_1 + 0x328) +
                             fVar26 * 5.0 * (pfVar3[2] + fVar21 * pfVar3[3]));
        local_480._0_4_ = *(float *)(param_1 + 800) + fVar26 * 5.0 * (*pfVar3 + fVar21 * pfVar3[1]);
        local_480._4_4_ = *(float *)(lVar8 + 4);
        fVar21 = (float)FUN_0093a950(*(long *)puVar2 + 0x28,&local_480,&local_44);
        fVar22 = *(float *)(lVar8 + 4) - fVar21;
        fVar23 = -fVar22;
        if (0.0 <= fVar22) {
          fVar23 = fVar22;
        }
        if (fVar23 < 5.0) goto LAB_0099ae18;
        iVar7 = iVar7 + -1;
        fVar26 = fVar26 + -0.1;
      } while (iVar7 != 0);
      fVar26 = 1.0;
      fVar21 = local_480._4_4_;
    }
  }
LAB_0099ae18:
  *(float *)(param_1 + 0x330) = fVar21;
  *(float *)(param_1 + 0x32c) = (float)local_480;
  *(undefined4 *)(param_1 + 0x334) = (undefined4)local_478;
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar13 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar13 == 0) ||
       (plVar19 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
      ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar13)) {
    plVar19 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar7 = (**(code **)(*plVar10 + 0x60))();
    if (iVar7 < 0x11) {
      uVar13 = 1;
      goto joined_r0x0099aedc;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0099aedc;
    }
  }
  uVar13 = 0;
joined_r0x0099aedc:
  if (plVar19 != (long *)0x0) {
    lVar8 = plVar19[0x2a];
    if (((*PTR_DAT_04bb6038 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6038);
    }
    uVar11 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb6030);
    uVar14 = 0;
    if ((int)lVar8 == 1) {
      uVar14 = uVar13;
    }
    if (((uVar11 & 1) != 0) && (uVar14 != 0)) {
      puVar12 = (undefined1 *)FUN_0099f760(plVar19);
      local_478 = *(undefined8 *)(puVar12 + 8);
      local_470 = *(undefined8 *)(puVar12 + 0x10);
      local_460 = *(undefined4 *)(puVar12 + 0x20);
      uStack_468 = *(undefined8 *)(puVar12 + 0x18);
      local_458 = *(undefined8 *)(puVar12 + 0x28);
      local_3fd = 0;
      local_480 = PTR_DAT_04bb35d8 + 0x10;
      local_440 = 0x40;
      local_450 = PTR_DAT_04bb2f70 + 0x10;
      plVar19 = (long *)(puVar12 + 0x30);
      local_448 = auStack_43c;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      puVar20 = *(undefined1 **)(puVar12 + 0x38);
      if (auStack_43c != puVar20) {
        (**(code **)(*(long *)(puVar12 + 0x30) + 0x18))(plVar19);
        lVar8 = 0;
        do {
          if (*(char *)(*(long *)(puVar12 + 0x38) + lVar8) == '\0') goto LAB_0099b00c;
          lVar9 = *(long *)(puVar12 + 0x38) + lVar8;
          if (*(char *)(lVar9 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0099b00c;
          }
          if (*(char *)(lVar9 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0099b00c;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0099b00c:
        iVar7 = (int)lVar8;
        if (local_440 <= (int)lVar8) {
          iVar7 = local_440 + -1;
        }
        memcpy(auStack_43c,puVar20,(long)iVar7);
        auStack_43c[iVar7] = 0;
      }
      local_3e8 = 0x20;
      local_3c5 = 0;
      local_450 = PTR_DAT_04bb2bc0 + 0x10;
      local_3f8 = PTR_DAT_04bb2a08 + 0x10;
      plVar19 = (long *)(puVar12 + 0x88);
      local_3f0 = auStack_3e4;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      puVar20 = *(undefined1 **)(puVar12 + 0x90);
      if (auStack_3e4 != puVar20) {
        (**(code **)(*(long *)(puVar12 + 0x88) + 0x18))(plVar19);
        lVar8 = 0;
        do {
          if (*(char *)(*(long *)(puVar12 + 0x90) + lVar8) == '\0') goto LAB_0099b0dc;
          lVar9 = *(long *)(puVar12 + 0x90) + lVar8;
          if (*(char *)(lVar9 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0099b0dc;
          }
          if (*(char *)(lVar9 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0099b0dc;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0099b0dc:
        iVar7 = (int)lVar8;
        if (local_3e8 <= (int)lVar8) {
          iVar7 = local_3e8 + -1;
        }
        memcpy(auStack_3e4,puVar20,(long)iVar7);
        auStack_3e4[iVar7] = 0;
      }
      puVar6 = PTR_DAT_04bb6098;
      puVar2 = PTR_DAT_04bb5240;
      local_3a0 = *(undefined4 *)(puVar12 + 0xe0);
      uStack_3b8 = *(undefined8 *)(puVar12 + 200);
      local_3b0 = *(undefined8 *)(puVar12 + 0xd0);
      uStack_3a8 = *(undefined8 *)(puVar12 + 0xd8);
      local_3f8 = PTR_DAT_04bb2028 + 0x10;
      local_480 = PTR_DAT_04bb6098 + 0x10;
      local_3c0 = PTR_DAT_04bb3380 + 0x10;
      uStack_378 = *(undefined8 *)(puVar12 + 0x108);
      local_370 = *(undefined4 *)(puVar12 + 0x110);
      local_394 = *(undefined4 *)(puVar12 + 0xec);
      local_39c = *(undefined8 *)(puVar12 + 0xe4);
      uStack_388 = *(undefined8 *)(puVar12 + 0xf8);
      local_380 = *(undefined8 *)(puVar12 + 0x100);
      local_368 = *(undefined8 *)(puVar12 + 0x118);
      uStack_360 = *(undefined8 *)(puVar12 + 0x120);
      uStack_354 = 0;
      local_350 = (undefined8 *)0x0;
      local_2d8[0] = (long *****)0x0;
      local_340 = (long *******)&local_338;
      local_338 = local_308;
      local_308[0] = local_2d8;
      if (local_2a8 == (undefined8 *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = 3;
        uStack_354 = 3;
        local_350 = local_2a8;
      }
      local_358 = 0;
      uVar13 = local_358;
      local_348 = local_340;
      if (&local_480 != (undefined8 *)puVar12) {
        if (*(int *)(puVar12 + 0x128) <= iVar7) {
          iVar7 = *(int *)(puVar12 + 0x128);
        }
        if ((0 < iVar7) && (local_2a8 != (undefined8 *)0x0)) {
          if (uStack_354 == 0) {
            uVar14 = 0;
            local_358 = uVar13;
          }
          else {
            lVar8 = **(long **)(puVar12 + 0x130);
            if (local_340 != (long *******)0x0) {
              local_348 = local_338;
            }
            local_318 = *(undefined4 *)(lVar8 + 0x20);
            local_328 = *(undefined8 *)(lVar8 + 0x10);
            uStack_320 = *(undefined8 *)(lVar8 + 0x18);
            uStack_330 = *(undefined8 *)(lVar8 + 8);
            local_30c = *(undefined4 *)(lVar8 + 0x2c);
            local_314 = *(undefined8 *)(lVar8 + 0x24);
            local_338 = (long *******)(PTR_DAT_04bb53d0 + 0x10);
            local_358 = 0;
            uVar14 = local_358;
            local_358 = uVar13;
            if (uStack_354 != 0) {
              *local_350 = local_340;
              uVar14 = 1;
              local_358 = 1;
            }
          }
          ppppppplVar18 = local_348;
          if (iVar7 != 1) {
            if (uVar14 < uStack_354) {
              lVar8 = *(long *)(*(long *)(puVar12 + 0x130) + 8);
              if (local_348 != (long *******)0x0) {
                local_348 = (long *******)*local_348;
              }
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb3050 + 0x10);
              pppppplVar4 = *(long *******)(lVar8 + 8);
              pppppplVar5 = *(long *******)(lVar8 + 0x10);
              pppppplVar17 = *(long *******)(lVar8 + 0x18);
              *(undefined4 *)(ppppppplVar18 + 4) = *(undefined4 *)(lVar8 + 0x20);
              ppppppplVar18[2] = pppppplVar5;
              ppppppplVar18[3] = pppppplVar17;
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb31d0 + 0x10);
              ppppppplVar18[1] = pppppplVar4;
              uVar16 = *(undefined8 *)(lVar8 + 0x24);
              *(undefined4 *)((long)ppppppplVar18 + 0x2c) = *(undefined4 *)(lVar8 + 0x2c);
              *(undefined8 *)((long)ppppppplVar18 + 0x24) = uVar16;
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb53d0 + 0x10);
              uVar14 = local_358;
              if (local_358 < uStack_354) {
                local_350[(int)local_358] = ppppppplVar18;
                uVar14 = local_358 + 1;
                local_358 = uVar14;
              }
            }
            ppppppplVar18 = local_348;
            if ((iVar7 != 2) && (uVar14 < uStack_354)) {
              lVar8 = *(long *)(*(long *)(puVar12 + 0x130) + 0x10);
              if (local_348 != (long *******)0x0) {
                local_348 = (long *******)*local_348;
              }
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb3050 + 0x10);
              pppppplVar4 = *(long *******)(lVar8 + 8);
              pppppplVar5 = *(long *******)(lVar8 + 0x10);
              pppppplVar17 = *(long *******)(lVar8 + 0x18);
              *(undefined4 *)(ppppppplVar18 + 4) = *(undefined4 *)(lVar8 + 0x20);
              ppppppplVar18[2] = pppppplVar5;
              ppppppplVar18[3] = pppppplVar17;
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb31d0 + 0x10);
              ppppppplVar18[1] = pppppplVar4;
              uVar16 = *(undefined8 *)(lVar8 + 0x24);
              *(undefined4 *)((long)ppppppplVar18 + 0x2c) = *(undefined4 *)(lVar8 + 0x2c);
              *(undefined8 *)((long)ppppppplVar18 + 0x24) = uVar16;
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb53d0 + 0x10);
              if (local_358 < uStack_354) {
                local_350[(int)local_358] = ppppppplVar18;
                local_358 = local_358 + 1;
              }
            }
          }
        }
      }
      local_288 = *(undefined8 *)(puVar12 + 0x1f8);
      uStack_280 = *(undefined8 *)(puVar12 + 0x200);
      local_278 = *(undefined8 *)(puVar12 + 0x208);
      local_270 = *(undefined4 *)(puVar12 + 0x210);
      local_268 = *(undefined8 *)(puVar12 + 0x218);
      local_260 = *(undefined8 *)(puVar12 + 0x220);
      local_250 = (undefined8 *)0x0;
      local_258._4_4_ = 0;
      local_1d8[0] = (long *****)0x0;
      local_240 = (long *******)&local_238;
      local_390 = PTR_DAT_04bb53c8 + 0x10;
      local_238 = local_208;
      local_208[0] = local_1d8;
      if (local_1a8 == (undefined8 *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = 3;
        local_258._4_4_ = 3;
        local_250 = local_1a8;
      }
      local_258._0_4_ = 0;
      local_248 = local_240;
      if (&local_480 != (undefined8 *)puVar12) {
        local_258._0_4_ = 0;
        if (*(int *)(puVar12 + 0x228) <= iVar7) {
          iVar7 = *(int *)(puVar12 + 0x228);
        }
        if ((0 < iVar7) && (local_1a8 != (undefined8 *)0x0)) {
          if (local_258._4_4_ != 0) {
            lVar8 = **(long **)(puVar12 + 0x230);
            if (local_240 != (long *******)0x0) {
              local_248 = local_238;
            }
            local_218 = *(undefined4 *)(lVar8 + 0x20);
            local_228 = *(undefined8 *)(lVar8 + 0x10);
            uStack_220 = *(undefined8 *)(lVar8 + 0x18);
            uStack_230 = *(undefined8 *)(lVar8 + 8);
            local_20c = *(undefined4 *)(lVar8 + 0x2c);
            local_214 = *(undefined8 *)(lVar8 + 0x24);
            local_238 = (long *******)(PTR_DAT_04bb53d0 + 0x10);
            if (local_258._4_4_ != 0) {
              *local_250 = local_240;
              local_258._0_4_ = 1;
            }
          }
          ppppppplVar18 = local_248;
          if (iVar7 != 1) {
            if ((uint)local_258 < local_258._4_4_) {
              lVar8 = *(long *)(*(long *)(puVar12 + 0x230) + 8);
              if (local_248 != (long *******)0x0) {
                local_248 = (long *******)*local_248;
              }
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb3050 + 0x10);
              pppppplVar4 = *(long *******)(lVar8 + 8);
              pppppplVar5 = *(long *******)(lVar8 + 0x10);
              pppppplVar17 = *(long *******)(lVar8 + 0x18);
              *(undefined4 *)(ppppppplVar18 + 4) = *(undefined4 *)(lVar8 + 0x20);
              ppppppplVar18[2] = pppppplVar5;
              ppppppplVar18[3] = pppppplVar17;
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb31d0 + 0x10);
              ppppppplVar18[1] = pppppplVar4;
              uVar16 = *(undefined8 *)(lVar8 + 0x24);
              *(undefined4 *)((long)ppppppplVar18 + 0x2c) = *(undefined4 *)(lVar8 + 0x2c);
              *(undefined8 *)((long)ppppppplVar18 + 0x24) = uVar16;
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb53d0 + 0x10);
              if ((uint)local_258 < local_258._4_4_) {
                local_250[(int)(uint)local_258] = ppppppplVar18;
                local_258._0_4_ = (uint)local_258 + 1;
              }
            }
            ppppppplVar18 = local_248;
            if ((iVar7 != 2) && ((uint)local_258 < local_258._4_4_)) {
              lVar8 = *(long *)(*(long *)(puVar12 + 0x230) + 0x10);
              if (local_248 != (long *******)0x0) {
                local_248 = (long *******)*local_248;
              }
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb3050 + 0x10);
              pppppplVar4 = *(long *******)(lVar8 + 8);
              pppppplVar5 = *(long *******)(lVar8 + 0x10);
              pppppplVar17 = *(long *******)(lVar8 + 0x18);
              *(undefined4 *)(ppppppplVar18 + 4) = *(undefined4 *)(lVar8 + 0x20);
              ppppppplVar18[2] = pppppplVar5;
              ppppppplVar18[3] = pppppplVar17;
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb31d0 + 0x10);
              ppppppplVar18[1] = pppppplVar4;
              uVar16 = *(undefined8 *)(lVar8 + 0x24);
              *(undefined4 *)((long)ppppppplVar18 + 0x2c) = *(undefined4 *)(lVar8 + 0x2c);
              *(undefined8 *)((long)ppppppplVar18 + 0x24) = uVar16;
              *ppppppplVar18 = (long ******)(PTR_DAT_04bb53d0 + 0x10);
              if ((uint)local_258 < local_258._4_4_) {
                local_250[(int)(uint)local_258] = ppppppplVar18;
                local_258._0_4_ = (uint)local_258 + 1;
              }
            }
          }
        }
      }
      local_290 = PTR_DAT_04bb53c8 + 0x10;
      puVar1 = PTR_DAT_04bb31d0 + 0x10;
      local_188 = *(undefined8 *)(puVar12 + 0x2f8);
      local_164 = *(undefined4 *)(puVar12 + 0x31c);
      local_180 = *(undefined8 *)(puVar12 + 0x300);
      local_178 = *(undefined8 *)(puVar12 + 0x308);
      local_170 = *(undefined4 *)(puVar12 + 0x310);
      local_16c = (undefined4)*(undefined8 *)(puVar12 + 0x314);
      uStack_168 = (undefined4)((ulong)*(undefined8 *)(puVar12 + 0x314) >> 0x20);
      local_150 = *(undefined8 *)(puVar12 + 0x330);
      local_148 = *(undefined8 *)(puVar12 + 0x338);
      local_140 = *(undefined4 *)(puVar12 + 0x340);
      local_158 = *(undefined8 *)(puVar12 + 0x328);
      local_134 = *(undefined4 *)(puVar12 + 0x34c);
      fVar23 = *(float *)(param_1 + 0x328) - *(float *)(param_1 + 0x334);
      local_120 = *(undefined8 *)(puVar12 + 0x360);
      local_13c = (float)*(undefined8 *)(puVar12 + 0x344);
      uStack_138 = (undefined4)((ulong)*(undefined8 *)(puVar12 + 0x344) >> 0x20);
      local_128 = *(undefined8 *)(puVar12 + 0x358);
      local_118 = *(undefined8 *)(puVar12 + 0x368);
      local_110 = *(undefined4 *)(puVar12 + 0x370);
      local_104 = *(undefined4 *)(puVar12 + 0x37c);
      fVar21 = *(float *)(param_1 + 800) - *(float *)(param_1 + 0x32c);
      local_f8 = *(undefined8 *)(puVar12 + 0x388);
      local_f0 = *(undefined8 *)(puVar12 + 0x390);
      local_e8 = *(undefined8 *)(puVar12 + 0x398);
      local_10c = (float)*(undefined8 *)(puVar12 + 0x374);
      uStack_108 = (undefined4)((ulong)*(undefined8 *)(puVar12 + 0x374) >> 0x20);
      local_e0 = *(undefined4 *)(puVar12 + 0x3a0);
      local_d4 = *(undefined4 *)(puVar12 + 0x3ac);
      local_dc = (undefined4)*(undefined8 *)(puVar12 + 0x3a4);
      uStack_d8 = (undefined4)((ulong)*(undefined8 *)(puVar12 + 0x3a4) >> 0x20);
      local_c8 = *(undefined8 *)(puVar12 + 0x3b8);
      local_c0 = *(undefined8 *)(puVar12 + 0x3c0);
      local_b8 = *(undefined8 *)(puVar12 + 0x3c8);
      local_b0 = *(undefined4 *)(puVar12 + 0x3d0);
      local_a4 = *(undefined4 *)(puVar12 + 0x3dc);
      local_ac = (undefined4)*(undefined8 *)(puVar12 + 0x3d4);
      uStack_a8 = (undefined4)((ulong)*(undefined8 *)(puVar12 + 0x3d4) >> 0x20);
      local_98 = *(undefined8 *)(puVar12 + 1000);
      local_90 = *(undefined8 *)(puVar12 + 0x3f0);
      fVar22 = local_10c * -0.10888889;
      local_88 = *(undefined8 *)(puVar12 + 0x3f8);
      local_80 = *(undefined4 *)(puVar12 + 0x400);
      fVar21 = SQRT(fVar23 * fVar23 + fVar21 * fVar21) / (fVar26 * local_13c);
      local_74 = *(undefined4 *)(puVar12 + 0x40c);
      uVar16 = *(undefined8 *)(puVar12 + 0x404);
      *(float *)(param_1 + 0x2e8) = fVar26 * local_13c;
      local_7c = (undefined4)uVar16;
      uStack_78 = (undefined4)((ulong)uVar16 >> 0x20);
      *(float *)(param_1 + 0x2e4) = fVar22;
      *(float *)(param_1 + 0x2ec) = fVar21;
      uVar13 = (uint)fVar21;
      fVar21 = -(local_10c * -0.10888889);
      if (0.0 <= fVar22) {
        fVar21 = fVar22;
      }
      if (uVar13 == 0) {
        fVar26 = 0.0;
      }
      else {
        uVar14 = uVar13 & 3;
        if (uVar13 < 4) {
          fVar23 = 0.0;
          fVar26 = 0.0;
        }
        else {
          fVar23 = 0.0;
          fVar26 = 0.0;
          uVar15 = uVar13 & 0xfffffffc;
          do {
            fVar22 = fVar23 - fVar21;
            uVar15 = uVar15 - 4;
            fVar24 = fVar22 - fVar21;
            fVar25 = fVar24 - fVar21;
            fVar23 = fVar25 - fVar21;
            fVar26 = fVar26 + fVar22 + fVar24 + fVar25 + fVar23;
          } while (uVar15 != 0);
        }
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          fVar23 = fVar23 - fVar21;
          fVar26 = fVar26 + fVar23;
        }
      }
      *(float *)(param_1 + 0x2e0) =
           ((*(float *)(param_1 + 0x330) - *(float *)(param_1 + 0x324)) - fVar26) / (float)uVar13;
      plVar19 = *(long **)(param_1 + 0x68);
      local_190 = puVar1;
      local_160 = puVar1;
      local_130 = puVar1;
      local_100 = puVar1;
      local_d0 = puVar1;
      local_a0 = puVar1;
      local_44 = FUN_006f0400(*(float *)(param_1 + 0x32c) - *(float *)(param_1 + 800),
                              *(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x328));
      (**(code **)(*plVar19 + 0x160))(plVar19,&local_44);
      local_480 = puVar6 + 0x10;
      puVar2 = puVar2 + 0x10;
      uStack_78 = 0;
      local_74 = 0;
      uStack_a8 = 0;
      local_a4 = 0;
      uStack_d8 = 0;
      local_d4 = 0;
      uStack_108 = 0;
      local_104 = 0;
      uStack_138 = 0;
      local_134 = 0;
      uStack_168 = 0;
      local_164 = 0;
      local_290 = puVar2;
      local_190 = puVar1;
      local_160 = puVar1;
      local_130 = puVar1;
      local_100 = puVar1;
      local_d0 = puVar1;
      local_a0 = puVar1;
      if (0 < (int)(uint)local_258) {
        lVar8 = 0;
        do {
          ppppppplVar18 = (long *******)local_250[lVar8];
          (*(code *)**ppppppplVar18)(ppppppplVar18);
          lVar8 = lVar8 + 1;
          *ppppppplVar18 = (long ******)local_248;
          local_248 = ppppppplVar18;
        } while (lVar8 < (int)(uint)local_258);
      }
      local_258 = (ulong)local_258._4_4_ << 0x20;
      if (0 < (int)local_358) {
        lVar8 = 0;
        local_390 = puVar2;
        do {
          ppppppplVar18 = (long *******)local_350[lVar8];
          (*(code *)**ppppppplVar18)(ppppppplVar18);
          lVar8 = lVar8 + 1;
          *ppppppplVar18 = (long ******)local_348;
          local_348 = ppppppplVar18;
        } while (lVar8 < (int)local_358);
      }
    }
  }
  return;
}

