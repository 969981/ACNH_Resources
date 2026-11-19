
void FUN_03a6fd10(long param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined4 *param_5,undefined8 param_6,uint param_7,uint param_8)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined *local_388;
  undefined8 local_380;
  undefined8 local_378;
  uint local_370;
  ulong local_36c;
  undefined2 local_314 [2];
  uint local_310;
  uint local_2f8;
  undefined *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  uint local_248 [2];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  char *local_208;
  undefined4 local_200;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  float local_1b8;
  float local_1b4;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  undefined **local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined7 uStack_118;
  undefined1 local_111;
  undefined7 uStack_110;
  undefined1 auStack_108 [64];
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_84;
  short local_7e;
  
  FUN_0390cee0(&local_158);
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_1c0 = PTR_DAT_04bd1178 + 0x10;
  local_180 = 0;
  local_1a0 = (undefined **)0x0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_248[0] = 0xffffffff;
  local_208 = "agl::TextureData";
  local_218 = 0;
  local_200 = 0x10000;
  local_210 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_1e8 = 0xff;
  local_1e4 = 0;
  local_2a0 = PTR_DAT_04bd1198 + 0x10;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1e0 = 0x80000000000;
  local_1d8 = 0;
  FUN_038e4cec(local_314);
  local_314[0] = 0;
  local_310 = local_310 & 0xfffffffe;
  local_2f8 = local_2f8 & 0xfffffff0 | 7;
  FUN_038e4d90(local_314,param_1);
  puVar8 = PTR_DAT_04bbd510;
  puVar7 = PTR_DAT_04bb3508;
  puVar2 = PTR_DAT_04bb2020;
  uVar15 = (uint)*(ushort *)(param_3 + 0x30);
  if (*(ushort *)(param_3 + 0x30) < 2) {
    uVar15 = 1;
  }
  local_388 = PTR_DAT_04bb2020 + 0x10;
  lVar21 = *(long *)PTR_DAT_04bbd510;
  uVar16 = uVar15 >> 1;
  local_380 = "DecalTextureDrawer_tmp0";
  local_1b8 = (float)uVar16;
  fVar25 = local_1b8;
  if (1 < uVar15) {
    fVar25 = 0.0;
  }
  local_1a8 = 0.0;
  if (1 < uVar15) {
    local_1a8 = local_1b8;
  }
  local_1b0 = CONCAT44(fVar25,fVar25);
  local_1b4 = local_1b8;
  local_1a4 = local_1a8;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar11 == 0) {
    iVar10 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar10 = (int)lVar11 + -1;
  }
  puVar12 = (undefined4 *)
            FUN_03948e10(lVar21,param_1,lVar21 + (long)iVar10 * 0x290 + 0x10,&local_388,0x1d,1,
                         uVar16,uVar16,1,0,1,0,1,0,0,0);
  lVar11 = *(long *)puVar8;
  local_388 = puVar2 + 0x10;
  local_380 = "DecalTextureDrawer_tmp1";
  lVar21 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  if (lVar21 == 0) {
    iVar10 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar10 = (int)lVar21 + -1;
  }
  puVar13 = (undefined4 *)
            FUN_03948e10(lVar11,param_1,lVar11 + (long)iVar10 * 0x290 + 0x10,&local_388,0x1d,1,
                         uVar16,uVar16,1,0,1,0,1,0,0,0);
  FUN_01560750(&local_2a0,puVar13,local_1e4._2_1_,(undefined2)local_1e4);
  local_158 = *param_5;
  uStack_154 = param_5[1];
  local_150 = *(undefined8 *)(param_5 + 2);
  uStack_148 = *(undefined8 *)(param_5 + 4);
  local_140 = param_5[6];
  uStack_13c = param_5[7];
  local_138 = *(undefined8 *)(param_5 + 8);
  uStack_130 = *(undefined8 *)(param_5 + 10);
  uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)param_5 + 0x47) >> 8);
  local_120 = *(undefined8 *)(param_5 + 0xe);
  uStack_118 = (undefined7)*(undefined8 *)(param_5 + 0x10);
  local_111 = (undefined1)((ulong)*(undefined8 *)(param_5 + 0x10) >> 0x38);
  local_128 = *(undefined8 *)(param_5 + 0xc);
  local_1a0 = &local_2a0;
  FUN_038fd1e0(auStack_108);
  FUN_038fd2f0(auStack_108,param_5 + 0x14);
  local_c8 = *(undefined8 *)(param_5 + 0x24);
  local_c0 = param_5[0x26];
  do {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(&local_84,0x10);
    if (bVar9) {
      cVar5 = ExclusiveMonitorsStatus();
      local_84 = local_84 | 1;
    }
  } while (cVar5 != '\0');
  uVar16 = param_7;
  if (4 < param_7) {
    uVar16 = 5;
  }
  (**(code **)(local_1c0 + 0x38))(&local_1c0,param_1);
  local_380 = (char *)0x7f7fffff7f7fffff;
  local_378 = 0xff7fffffff7fffff;
  local_388 = PTR_DAT_04bd0f08 + 0x10;
  local_36c = 0x3f80000000000000;
  local_370 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_370 < 6) {
    if ((1 << (ulong)(local_370 & 0x1f) & 0x39U) == 0) {
      fVar25 = local_1b4;
      fVar26 = local_1b8;
    }
    else {
      fVar25 = local_1b8;
      fVar26 = local_1b4;
    }
    fVar28 = fVar25;
    fVar29 = 0.0;
    if (fVar25 <= 0.0) {
      fVar28 = 0.0;
      fVar29 = fVar25;
    }
    fVar27 = fVar26;
    fVar25 = 0.0;
    if (fVar26 <= 0.0) {
      fVar27 = 0.0;
      fVar25 = fVar26;
    }
    local_380 = (char *)CONCAT44(fVar25,fVar29);
    local_378 = CONCAT44(fVar27,fVar28);
  }
  FUN_038e77e4(&local_388,param_1,&local_1c0);
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x9e) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x4e8);
  }
  FUN_038e4cec(&local_388);
  local_388 = (undefined *)((ulong)local_388 & 0xfffffffeffff0000);
  local_36c = local_36c | 0xf;
  FUN_038e4d90(&local_388,param_1);
  lVar21 = *(long *)(*(long *)(lVar21 + 8) + 0x18);
  FUN_03907810(lVar21,param_1);
  puVar1 = (uint *)(lVar21 + 0x14);
  do {
    uVar22 = *puVar1;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar22 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar22 & 0x7fffffff) != 0) {
    if ((int)uVar22 < 0) {
      if ((int)*puVar1 < 0) {
        lVar11 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar11 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar21);
    }
  }
  do {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(&local_158,param_1,*(undefined8 *)(lVar21 + 0x68),0xffffffff,0);
  FUN_01557430(lVar21,param_1,0,param_2,0);
  uVar20 = *(undefined8 *)(param_1 + 0xb8);
  lVar21 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar20,0x10,lVar21 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar20,0x10,lVar21 + 0xe88);
  iVar10 = *(int *)(lVar21 + 0xe30);
  if (iVar10 != 0) {
    lVar21 = *(long *)(lVar21 + 0xe38);
    uVar23 = 0;
    uVar24 = 0;
    do {
      lVar11 = *(long *)(lVar21 + (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
      if (lVar11 != 0) {
        uVar14 = (**(code **)PTR_DAT_04bbd560)(lVar11 + 8);
        (**(code **)PTR_DAT_04bcf1e8)
                  (uVar20,uVar23 & 0xffffffff,uVar14,*(undefined4 *)(lVar11 + 0x118));
      }
      uVar23 = uVar24 + 1;
      uVar24 = uVar23 & 0xffffffff;
    } while (iVar10 != (int)uVar23);
  }
  puVar2 = PTR_DAT_04bbd568;
  lVar21 = *(long *)PTR_DAT_04bbd7e8;
  iVar10 = *(int *)(lVar21 + 0x1f8);
  if (iVar10 != 0) {
    uVar17 = *(undefined4 *)(lVar21 + 0x1dc);
    uVar14 = *(undefined8 *)(param_1 + 0xb8);
    uVar20 = (**(code **)PTR_DAT_04bbd560)(lVar21 + 0x200);
    (**(code **)puVar2)(uVar14,uVar17,*(undefined4 *)(lVar21 + 0x1d8),iVar10,uVar20);
  }
  if (local_248[0] != 0xffffffff) {
    lVar21 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar21 + 0x5c8) >> 3 & 1) == 0) {
      uVar22 = local_248[0] - *(ushort *)(lVar21 + 0x3da);
      if (*(uint *)(lVar21 + 0x368) <= uVar22) {
        uVar22 = 0;
      }
      if ((*(uint *)(*(long *)(lVar21 + 0x370) + (long)(int)uVar22 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x100) =
             *(ulong *)(param_1 + 0x100) | 1L << ((ulong)local_248[0] & 0x3f);
        goto LAB_03a7040c;
      }
    }
    if ((*(uint *)(lVar21 + 0x5c8) >> 5 & 1) == 0) {
      uVar19 = 0x112;
      uVar17 = 0x12;
    }
    else {
      uVar19 = 0x111;
      uVar17 = 0x11;
    }
    if ((*(uint *)(lVar21 + 800) & 2) != 0) {
      uVar17 = uVar19;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar17);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
LAB_03a7040c:
  if (-1 < (int)param_7) {
    uVar22 = 0;
    uVar3 = uVar16 << 2 | 2;
    puVar2 = PTR_DAT_04bd0f08 + 0x10;
    do {
      FUN_01560750(&local_2a0,puVar12,local_1e4._2_1_,(undefined2)local_1e4);
      local_1a0 = &local_2a0;
      local_128 = *(undefined8 *)(puVar13 + 0xc);
      local_158 = *puVar13;
      uStack_154 = puVar13[1];
      local_150 = *(undefined8 *)(puVar13 + 2);
      uStack_148 = *(undefined8 *)(puVar13 + 4);
      local_140 = puVar13[6];
      uStack_13c = puVar13[7];
      local_138 = *(undefined8 *)(puVar13 + 8);
      uStack_130 = *(undefined8 *)(puVar13 + 10);
      local_120 = *(undefined8 *)(puVar13 + 0xe);
      uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)puVar13 + 0x47) >> 8);
      uStack_118 = (undefined7)*(undefined8 *)(puVar13 + 0x10);
      local_111 = (undefined1)((ulong)*(undefined8 *)(puVar13 + 0x10) >> 0x38);
      FUN_038fd1e0(auStack_108);
      FUN_038fd2f0(auStack_108,puVar13 + 0x14);
      local_c8 = *(undefined8 *)(puVar13 + 0x24);
      local_c0 = puVar13[0x26];
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(&local_84,0x10);
        if (bVar9) {
          cVar5 = ExclusiveMonitorsStatus();
          local_84 = local_84 | 1;
        }
      } while (cVar5 != '\0');
      (**(code **)(local_1c0 + 0x38))(&local_1c0,param_1);
      local_380 = (char *)0x7f7fffff7f7fffff;
      local_378 = 0xff7fffffff7fffff;
      local_36c = 0x3f80000000000000;
      local_370 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_370 < 6) {
        if ((1 << (ulong)(local_370 & 0x1f) & 0x39U) == 0) {
          fVar25 = local_1b4;
          fVar26 = local_1b8;
        }
        else {
          fVar25 = local_1b8;
          fVar26 = local_1b4;
        }
        fVar29 = fVar25;
        if (fVar25 <= 0.0) {
          fVar29 = 0.0;
        }
        fVar28 = 0.0;
        if (fVar25 <= 0.0) {
          fVar28 = fVar25;
        }
        fVar27 = fVar26;
        fVar25 = 0.0;
        if (fVar26 <= 0.0) {
          fVar27 = 0.0;
          fVar25 = fVar26;
        }
        local_380 = (char *)CONCAT44(fVar25,fVar28);
        local_378 = CONCAT44(fVar27,fVar29);
      }
      local_388 = puVar2;
      FUN_038e77e4(&local_388,param_1,&local_1c0);
      lVar21 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
      uVar4 = uVar3;
      if (*(uint *)(lVar21 + 0x20) <= uVar3) {
        uVar4 = 0;
      }
      lVar21 = *(long *)(lVar21 + 0x28) + (ulong)uVar4 * 0x150;
      FUN_03907810(lVar21,param_1);
      FUN_03949e90(param_1,lVar21,&local_158,&local_388,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
      if (local_248[0] != 0xffffffff) {
        lVar21 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar21 + 0x5c8) >> 3 & 1) == 0) {
          uVar4 = local_248[0] - *(ushort *)(lVar21 + 0x3da);
          if (*(uint *)(lVar21 + 0x368) <= uVar4) {
            uVar4 = 0;
          }
          if ((*(uint *)(*(long *)(lVar21 + 0x370) + (long)(int)uVar4 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03a70690;
          uVar23 = *(ulong *)(param_1 + 0x100) | 1L << ((ulong)local_248[0] & 0x3f);
        }
        else {
LAB_03a70690:
          if ((*(uint *)(lVar21 + 0x5c8) >> 5 & 1) == 0) {
            uVar19 = 0x112;
            uVar17 = 0x12;
          }
          else {
            uVar19 = 0x111;
            uVar17 = 0x11;
          }
          if ((*(uint *)(lVar21 + 800) & 2) != 0) {
            uVar17 = uVar19;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar17);
          uVar23 = 0;
        }
        *(ulong *)(param_1 + 0x100) = uVar23;
      }
      FUN_01560750(&local_2a0,puVar13,local_1e4._2_1_,(undefined2)local_1e4);
      local_1a0 = &local_2a0;
      local_128 = *(undefined8 *)(puVar12 + 0xc);
      local_158 = *puVar12;
      uStack_154 = puVar12[1];
      local_150 = *(undefined8 *)(puVar12 + 2);
      uStack_148 = *(undefined8 *)(puVar12 + 4);
      local_140 = puVar12[6];
      uStack_13c = puVar12[7];
      local_138 = *(undefined8 *)(puVar12 + 8);
      uStack_130 = *(undefined8 *)(puVar12 + 10);
      local_120 = *(undefined8 *)(puVar12 + 0xe);
      uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)puVar12 + 0x47) >> 8);
      uStack_118 = (undefined7)*(undefined8 *)(puVar12 + 0x10);
      local_111 = (undefined1)((ulong)*(undefined8 *)(puVar12 + 0x10) >> 0x38);
      FUN_038fd1e0(auStack_108);
      FUN_038fd2f0(auStack_108,puVar12 + 0x14);
      local_c8 = *(undefined8 *)(puVar12 + 0x24);
      local_c0 = puVar12[0x26];
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(&local_84,0x10);
        if (bVar9) {
          cVar5 = ExclusiveMonitorsStatus();
          local_84 = local_84 | 1;
        }
      } while (cVar5 != '\0');
      (**(code **)(local_1c0 + 0x38))(&local_1c0,param_1);
      local_378 = 0xff7fffffff7fffff;
      local_388 = PTR_DAT_04bd0f08 + 0x10;
      local_380 = (char *)0x7f7fffff7f7fffff;
      local_36c = 0x3f80000000000000;
      local_370 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_370 < 6) {
        if ((1 << (ulong)(local_370 & 0x1f) & 0x39U) == 0) {
          fVar25 = local_1b4;
          fVar26 = local_1b8;
        }
        else {
          fVar25 = local_1b8;
          fVar26 = local_1b4;
        }
        fVar29 = fVar25;
        if (fVar25 <= 0.0) {
          fVar29 = 0.0;
        }
        fVar28 = 0.0;
        if (fVar25 <= 0.0) {
          fVar28 = fVar25;
        }
        fVar27 = fVar26;
        fVar25 = 0.0;
        if (fVar26 <= 0.0) {
          fVar27 = 0.0;
          fVar25 = fVar26;
        }
        local_380 = (char *)CONCAT44(fVar25,fVar28);
        local_378 = CONCAT44(fVar27,fVar29);
      }
      FUN_038e77e4(&local_388,param_1,&local_1c0);
      lVar21 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
      uVar4 = uVar16 << 2;
      if (*(uint *)(lVar21 + 0x20) <= uVar16 << 2) {
        uVar4 = 0;
      }
      lVar21 = *(long *)(lVar21 + 0x28) + (ulong)uVar4 * 0x150;
      FUN_03907810(lVar21,param_1);
      FUN_03949e90(param_1,lVar21,&local_158,&local_388,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
      if (local_248[0] != 0xffffffff) {
        lVar21 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar21 + 0x5c8) >> 3 & 1) == 0) {
          uVar4 = local_248[0] - *(ushort *)(lVar21 + 0x3da);
          if (*(uint *)(lVar21 + 0x368) <= uVar4) {
            uVar4 = 0;
          }
          if ((*(uint *)(*(long *)(lVar21 + 0x370) + (long)(int)uVar4 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03a708e0;
          uVar23 = *(ulong *)(param_1 + 0x100) | 1L << ((ulong)local_248[0] & 0x3f);
        }
        else {
LAB_03a708e0:
          if ((*(uint *)(lVar21 + 0x5c8) >> 5 & 1) == 0) {
            uVar19 = 0x112;
            uVar17 = 0x12;
          }
          else {
            uVar19 = 0x111;
            uVar17 = 0x11;
          }
          if ((*(uint *)(lVar21 + 800) & 2) != 0) {
            uVar17 = uVar19;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar17);
          uVar23 = 0;
        }
        *(ulong *)(param_1 + 0x100) = uVar23;
      }
      bVar9 = uVar22 != param_7;
      uVar22 = uVar22 + 1;
    } while (bVar9);
  }
  local_1b0 = 0;
  local_1b8 = (float)uVar15;
  local_1b4 = local_1b8;
  local_1a8 = local_1b8;
  local_1a4 = local_1b8;
  FUN_01560750(&local_2a0,param_3,0,param_4);
  local_128 = *(undefined8 *)(puVar13 + 0xc);
  local_158 = *puVar13;
  uStack_154 = puVar13[1];
  local_150 = *(undefined8 *)(puVar13 + 2);
  uStack_148 = *(undefined8 *)(puVar13 + 4);
  local_140 = puVar13[6];
  uStack_13c = puVar13[7];
  local_138 = *(undefined8 *)(puVar13 + 8);
  uStack_130 = *(undefined8 *)(puVar13 + 10);
  local_120 = *(undefined8 *)(puVar13 + 0xe);
  uStack_110 = (undefined7)((ulong)*(undefined8 *)((long)puVar13 + 0x47) >> 8);
  uStack_118 = (undefined7)*(undefined8 *)(puVar13 + 0x10);
  local_111 = (undefined1)((ulong)*(undefined8 *)(puVar13 + 0x10) >> 0x38);
  local_1a0 = &local_2a0;
  FUN_038fd1e0(auStack_108);
  FUN_038fd2f0(auStack_108,puVar13 + 0x14);
  local_c8 = *(undefined8 *)(puVar13 + 0x24);
  local_c0 = puVar13[0x26];
  do {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(&local_84,0x10);
    if (bVar9) {
      cVar5 = ExclusiveMonitorsStatus();
      local_84 = local_84 | 1;
    }
  } while (cVar5 != '\0');
  (**(code **)(local_1c0 + 0x38))(&local_1c0,param_1);
  puVar2 = PTR_DAT_04bbd510;
  local_378 = 0xff7fffffff7fffff;
  local_388 = PTR_DAT_04bd0f08 + 0x10;
  local_380 = (char *)0x7f7fffff7f7fffff;
  local_36c = 0x3f80000000000000;
  local_370 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_370 < 6) {
    if ((1 << (ulong)(local_370 & 0x1f) & 0x39U) == 0) {
      fVar25 = local_1b4;
      fVar26 = local_1b8;
    }
    else {
      fVar25 = local_1b8;
      fVar26 = local_1b4;
    }
    fVar28 = fVar25;
    fVar29 = 0.0;
    if (fVar25 <= 0.0) {
      fVar28 = 0.0;
      fVar29 = fVar25;
    }
    fVar27 = fVar26;
    fVar25 = 0.0;
    if (fVar26 <= 0.0) {
      fVar27 = 0.0;
      fVar25 = fVar26;
    }
    local_380 = (char *)CONCAT44(fVar25,fVar29);
    local_378 = CONCAT44(fVar27,fVar28);
  }
  FUN_038e77e4(&local_388,param_1,&local_1c0);
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x9e) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x4e8);
  }
  FUN_038e4cec(&local_388);
  local_388 = (undefined *)((ulong)local_388 & 0xfffffffeffff0000);
  local_36c = local_36c | 0xf;
  FUN_038e4d90(&local_388,param_1);
  param_8 = param_8 & 1;
  lVar11 = *(long *)(*(long *)(lVar21 + 8) + 0x28);
  if (*(uint *)(*(long *)(lVar21 + 8) + 0x20) <= param_8) {
    param_8 = 0;
  }
  lVar21 = lVar11 + (ulong)param_8 * 0x150;
  FUN_03907810(lVar21,param_1);
  puVar1 = (uint *)(lVar21 + 0x14);
  do {
    uVar15 = *puVar1;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar15 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar15 & 0x7fffffff) != 0) {
    if ((int)uVar15 < 0) {
      if ((int)*puVar1 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar21);
    }
  }
  do {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(&local_158,param_1,*(undefined8 *)(lVar11 + (ulong)param_8 * 0x150 + 0x68),0xffffffff
               ,0);
  FUN_01557430(lVar21,param_1,0,param_2,0);
  uVar20 = *(undefined8 *)(param_1 + 0xb8);
  lVar21 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar20,0x10,lVar21 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar20,0x10,lVar21 + 0xe88);
  iVar10 = *(int *)(lVar21 + 0xe30);
  if (iVar10 != 0) {
    lVar21 = *(long *)(lVar21 + 0xe38);
    uVar23 = 0;
    uVar24 = 0;
    do {
      lVar11 = *(long *)(lVar21 + (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
      if (lVar11 != 0) {
        uVar14 = (**(code **)PTR_DAT_04bbd560)(lVar11 + 8);
        (**(code **)PTR_DAT_04bcf1e8)
                  (uVar20,uVar23 & 0xffffffff,uVar14,*(undefined4 *)(lVar11 + 0x118));
      }
      uVar23 = uVar24 + 1;
      uVar24 = uVar23 & 0xffffffff;
    } while (iVar10 != (int)uVar23);
  }
  lVar21 = *(long *)PTR_DAT_04bbd7e8;
  iVar10 = *(int *)(lVar21 + 0x1f8);
  if (iVar10 != 0) {
    uVar17 = *(undefined4 *)(lVar21 + 0x1dc);
    uVar14 = *(undefined8 *)(param_1 + 0xb8);
    uVar20 = (**(code **)PTR_DAT_04bbd560)(lVar21 + 0x200);
    (**(code **)PTR_DAT_04bbd568)(uVar14,uVar17,*(undefined4 *)(lVar21 + 0x1d8),iVar10,uVar20);
  }
  puVar7 = PTR_DAT_04bc1010;
  if (local_248[0] != 0xffffffff) {
    lVar21 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar21 + 0x5c8) >> 3 & 1) == 0) {
      uVar15 = local_248[0] - *(ushort *)(lVar21 + 0x3da);
      if (*(uint *)(lVar21 + 0x368) <= uVar15) {
        uVar15 = 0;
      }
      if ((*(uint *)(*(long *)(lVar21 + 0x370) + (long)(int)uVar15 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x100) =
             *(ulong *)(param_1 + 0x100) | 1L << ((ulong)local_248[0] & 0x3f);
        goto LAB_03a70d6c;
      }
    }
    if ((*(uint *)(lVar21 + 0x5c8) >> 5 & 1) == 0) {
      uVar19 = 0x112;
      uVar17 = 0x12;
    }
    else {
      uVar19 = 0x111;
      uVar17 = 0x11;
    }
    if ((*(uint *)(lVar21 + 800) & 2) != 0) {
      uVar17 = uVar19;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar17);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
LAB_03a70d6c:
  FUN_039499cc(*(undefined8 *)puVar2,puVar12);
  FUN_039499cc(*(undefined8 *)puVar2,puVar13);
  lVar21 = *(long *)puVar7;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  uVar17 = 0x11;
  if ((*(uint *)(lVar21 + 800) & 2) != 0) {
    uVar17 = 0x111;
  }
  (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar17);
  local_2a0 = PTR_DAT_04bbd508;
  *(undefined8 *)(param_1 + 0x100) = 0;
  local_2a0 = local_2a0 + 0x10;
  FUN_038fd0e0(local_248);
  if (local_7e != -1) {
    lVar21 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar21 + 0x580));
    uVar15 = (int)local_7e - (uint)*(ushort *)(lVar21 + 0x5c0);
    if (*(uint *)(lVar21 + 0x5a0) <= uVar15) {
      uVar15 = 0;
    }
    lVar11 = *(long *)(lVar21 + 0x5a8) + (long)(int)uVar15 * 0x80;
    sVar6 = *(short *)(lVar11 + 0x76) + -1;
    *(short *)(lVar11 + 0x76) = sVar6;
    if (sVar6 == 0) {
      *(short *)(lVar21 + 0x5c4) = *(short *)(lVar21 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar21 + 0x580));
    local_7e = -1;
  }
  FUN_038fd0e0(auStack_108);
  return;
}

