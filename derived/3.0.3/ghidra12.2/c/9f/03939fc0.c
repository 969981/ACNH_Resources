
void FUN_03939fc0(float param_1,float param_2,long param_3,long param_4,undefined8 param_5,
                 long *param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined4 *puVar25;
  ulong uVar26;
  int iVar27;
  undefined4 *puVar28;
  int iVar29;
  ulong uVar30;
  undefined8 uVar31;
  long lVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined **local_4f0;
  long local_4e8 [2];
  int local_4d8;
  undefined **local_4d0;
  undefined8 local_4c8 [2];
  int local_4b8;
  undefined **local_4b0;
  undefined8 local_4a8 [2];
  int local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  float local_478;
  undefined8 local_474;
  undefined4 local_46c;
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  undefined *local_458;
  char *pcStack_450;
  float local_444;
  float local_440;
  undefined4 local_43c;
  undefined4 local_438;
  float local_434;
  undefined8 local_430;
  undefined4 local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  undefined *local_3d0;
  undefined *local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined8 local_3b4;
  undefined8 local_3a8;
  long local_3a0;
  undefined8 local_398;
  undefined *local_390;
  char *local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  uint local_338 [2];
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  char *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined *local_2b0;
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
  uint local_258 [2];
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  char *local_218;
  undefined4 local_210;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  uint local_178 [2];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  char *local_138;
  undefined4 local_130;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if (*(char *)(param_3 + 0x56c) != '\0') {
    lVar18 = *(long *)PTR_DAT_04bd1050;
    if ((*(uint *)(lVar18 + 8) & 3) == 0) {
      bVar14 = (*(uint *)(lVar18 + 8) & 4) != 0;
      uVar5 = 0x40;
      if (bVar14) {
        uVar5 = *(undefined2 *)(lVar18 + 0xe);
      }
      uVar31 = *(undefined8 *)(param_4 + 0xb8);
      uVar6 = 0x40;
      if (bVar14) {
        uVar6 = *(undefined2 *)(lVar18 + 0xc);
      }
      (**(code **)PTR_DAT_04bcfdb8)(uVar31,1);
      (**(code **)PTR_DAT_04bcfdc0)(uVar31,uVar6,uVar5);
    }
  }
  puVar12 = PTR_DAT_04bbd510;
  puVar4 = PTR_DAT_04bb2020;
  lVar18 = param_6[4];
  local_4b0 = &PTR_LAB_04b678b8;
  local_498 = 0;
  local_4d0 = &PTR_LAB_04b678b8;
  local_4b8 = 0;
  uVar7 = *(ushort *)(lVar18 + 0x38);
  local_4f0 = &PTR_LAB_04b678b8;
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  uVar8 = *(ushort *)(lVar18 + 0x3a);
  local_4d8 = 0;
  local_388 = "near_coc_tex";
  lVar32 = *(long *)PTR_DAT_04bbd510;
  uVar9 = uVar8;
  if (*(short *)(lVar18 + 0x42) != 3) {
    uVar9 = 1;
  }
  local_390 = PTR_DAT_04bb2020 + 0x10;
  if (uVar9 <= uVar8) {
    uVar9 = uVar8;
  }
  iVar27 = (int)(*(float *)(param_3 + 0x55c) * (float)uVar7);
  iVar29 = (int)(*(float *)(param_3 + 0x55c) * (float)uVar9);
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar18 == 0) {
    local_444 = (float)nn::os::GetCurrentCoreNumber();
  }
  else {
    local_444 = (float)((int)lVar18 + -1);
  }
  local_4a8[0] = FUN_03948e10(lVar32,param_4,lVar32 + (long)(int)local_444 * 0x290 + 0x10,&local_390
                              ,0x2b,1,iVar27,iVar29,1,0,1,0,1,0,0,0);
  local_390 = puVar4 + 0x10;
  local_388 = "far_coc_tex";
  lVar32 = *(long *)puVar12;
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar18 == 0) {
    local_444 = (float)nn::os::GetCurrentCoreNumber();
  }
  else {
    local_444 = (float)((int)lVar18 + -1);
  }
  local_4c8[0] = FUN_03948e10(lVar32,param_4,lVar32 + (long)(int)local_444 * 0x290 + 0x10,&local_390
                              ,0x2b,1,iVar27,iVar29,1,0,1,0,1,0,0,0);
  local_390 = puVar4 + 0x10;
  local_388 = "coc_map_tex";
  lVar32 = *(long *)puVar12;
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar18 == 0) {
    local_444 = (float)nn::os::GetCurrentCoreNumber();
  }
  else {
    local_444 = (float)((int)lVar18 + -1);
  }
  local_4e8[0] = FUN_03948e10(lVar32,param_4,lVar32 + (long)(int)local_444 * 0x290 + 0x10,&local_390
                              ,0x19,1,iVar27,iVar29,1,0,1,0,1,0,0,0);
  lVar32 = *(long *)PTR_DAT_04bbd510;
  local_390 = puVar4 + 0x10;
  local_388 = "near_coc_tex";
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar18 == 0) {
    local_444 = (float)nn::os::GetCurrentCoreNumber();
  }
  else {
    local_444 = (float)((int)lVar18 + -1);
  }
  local_4a8[1] = FUN_03948e10(lVar32,param_4,lVar32 + (long)(int)local_444 * 0x290 + 0x10,&local_390
                              ,0x2b,1,iVar27,iVar29,1,0,1,0,1,0,0,0);
  lVar32 = *(long *)PTR_DAT_04bbd510;
  local_390 = puVar4 + 0x10;
  local_388 = "far_coc_tex";
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar18 == 0) {
    local_444 = (float)nn::os::GetCurrentCoreNumber();
  }
  else {
    local_444 = (float)((int)lVar18 + -1);
  }
  local_4c8[1] = FUN_03948e10(lVar32,param_4,lVar32 + (long)(int)local_444 * 0x290 + 0x10,&local_390
                              ,0x2b,1,iVar27,iVar29,1,0,1,0,1,0,0,0);
  lVar32 = *(long *)PTR_DAT_04bbd510;
  local_390 = puVar4 + 0x10;
  local_388 = "coc_map_tex";
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar18 == 0) {
    local_444 = (float)nn::os::GetCurrentCoreNumber();
  }
  else {
    local_444 = (float)((int)lVar18 - 1);
  }
  local_4e8[1] = FUN_03948e10(lVar32,param_4,lVar32 + (long)(int)local_444 * 0x290 + 0x10,&local_390
                              ,0x19,1,iVar27,iVar29,1,0,1,0,1,0,0,0);
  iVar13 = local_498;
  iVar29 = local_4b8;
  iVar27 = local_4d8;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  local_90 = 0;
  local_e0 = 0;
  local_d8 = 0x3f800000;
  uStack_d4 = 0x3f800000;
  local_f0 = PTR_DAT_04bd1178 + 0x10;
  local_e8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  uStack_b8 = 0;
  local_340 = 0;
  local_348 = 0;
  local_350 = 0;
  local_358 = 0;
  local_360 = 0;
  local_368 = 0;
  local_370 = 0;
  local_378 = 0;
  local_380 = 0;
  local_388 = (char *)0x0;
  local_338[0] = 0xffffffff;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = "agl::TextureData";
  local_2f0 = 0x10000;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_2d8 = 0xff;
  local_390 = PTR_DAT_04bd1198 + 0x10;
  local_2d4 = 0;
  local_2d0 = 0x80000000000;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258[0] = 0xffffffff;
  local_228 = 0;
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_248 = 0;
  local_250 = 0;
  local_220 = 0;
  local_218 = "agl::TextureData";
  local_210 = 0x10000;
  local_1f8 = 0xff;
  local_1f4 = 0;
  local_2b0 = local_390;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1f0 = 0x80000000000;
  local_1e8 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178[0] = 0xffffffff;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_138 = "agl::TextureData";
  local_130 = 0x10000;
  local_118 = 0xff;
  lVar18 = (long)local_4d8;
  local_1d0 = local_390;
  local_3a8 = local_4c8[local_4b8];
  local_398 = local_4a8[local_498];
  local_110 = 0x80000000000;
  local_3a0 = local_4e8[lVar18];
  local_114 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_3b8 = *(undefined4 *)PTR_DAT_04bd0ea8;
  local_3d0 = PTR_DAT_04bd0f08 + 0x10;
  local_3b4 = 0x3f80000000000000;
  local_3c8 = (undefined *)0x7f7fffff7f7fffff;
  uStack_3c0 = 0xff7fffffff7fffff;
  uVar19 = 2;
  if (*(char *)(param_3 + 0xe8) != '\0') {
    uVar19 = 3;
  }
  FUN_0393d6e0(param_4,&local_3a8,&local_390,uVar19,&local_f0,&local_3d0);
  FUN_038e4cec(&local_444);
  local_444 = (float)((uint)local_444 & 0xffff0000);
  local_440 = 0.0;
  FUN_038e4d90(&local_444,param_4);
  lVar32 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 600);
  local_458 = &DAT_040d3199;
  if (*(char *)(param_3 + 0xe8) != '\0') {
    local_458 = &DAT_040b3e5e;
  }
  pcStack_450 = "ENABLE_NEAR_COC";
  iVar15 = FUN_03907ef0(*(long *)(lVar32 + 8) + 0x10,1,&pcStack_450,&local_458,
                        *(undefined2 *)(lVar32 + 0x1e));
  lVar32 = *(long *)(lVar32 + 8);
  if (iVar15 < 1) {
    lVar32 = *(long *)(lVar32 + 0x18);
  }
  else {
    uVar11 = iVar15 - 1;
    if (*(uint *)(lVar32 + 0x20) <= uVar11) {
      uVar11 = 0;
    }
    lVar32 = *(long *)(lVar32 + 0x28) + (ulong)uVar11 * 0x150;
  }
  FUN_03907810(lVar32,param_4);
  lVar22 = param_6[4];
  puVar28 = (undefined4 *)(param_3 + 0xf0);
  *puVar28 = *(undefined4 *)(lVar22 + 8);
  lVar24 = param_3 + 0x140;
  *(undefined4 *)(param_3 + 0xf4) = *(undefined4 *)(lVar22 + 0xc);
  *(undefined8 *)(param_3 + 0xf8) = *(undefined8 *)(lVar22 + 0x10);
  *(undefined8 *)(param_3 + 0x100) = *(undefined8 *)(lVar22 + 0x18);
  *(undefined4 *)(param_3 + 0x108) = *(undefined4 *)(lVar22 + 0x20);
  *(undefined4 *)(param_3 + 0x10c) = *(undefined4 *)(lVar22 + 0x24);
  *(undefined8 *)(param_3 + 0x110) = *(undefined8 *)(lVar22 + 0x28);
  *(undefined8 *)(param_3 + 0x118) = *(undefined8 *)(lVar22 + 0x30);
  uVar31 = *(undefined8 *)(lVar22 + 0x38);
  uVar16 = *(undefined8 *)(lVar22 + 0x40);
  uVar21 = *(undefined8 *)(lVar22 + 0x48);
  *(undefined8 *)(param_3 + 0x137) = *(undefined8 *)(lVar22 + 0x4f);
  *(undefined8 *)(param_3 + 0x128) = uVar16;
  *(undefined8 *)(param_3 + 0x130) = uVar21;
  *(undefined8 *)(param_3 + 0x120) = uVar31;
  FUN_038fd1e0(lVar24);
  FUN_038fd2f0(lVar24,lVar22 + 0x58);
  puVar1 = (uint *)(param_3 + 0x1c4);
  uVar31 = *(undefined8 *)(lVar22 + 0x98);
  *(undefined4 *)(param_3 + 0x188) = *(undefined4 *)(lVar22 + 0xa0);
  *(undefined8 *)(param_3 + 0x180) = uVar31;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = *puVar1 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined2 *)(param_3 + 0x1b4) = 0x101;
  *(undefined1 *)(param_3 + 0x1b6) = 1;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  puVar2 = (uint *)(lVar32 + 0x14);
  do {
    uVar11 = *puVar2;
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar14) {
      *puVar2 = uVar11 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar2 < 0) {
        lVar22 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar22 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar32);
    }
  }
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar14) {
      *puVar2 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  FUN_0390d290(puVar28,param_4,*(undefined8 *)(lVar32 + 0x68),0xffffffff,0);
  lVar22 = param_3 + 0x220;
  lVar23 = param_6[0xc];
  *(undefined4 *)(param_3 + 0x1d0) = *(undefined4 *)(lVar23 + 8);
  *(undefined4 *)(param_3 + 0x1d4) = *(undefined4 *)(lVar23 + 0xc);
  *(undefined8 *)(param_3 + 0x1d8) = *(undefined8 *)(lVar23 + 0x10);
  *(undefined8 *)(param_3 + 0x1e0) = *(undefined8 *)(lVar23 + 0x18);
  *(undefined4 *)(param_3 + 0x1e8) = *(undefined4 *)(lVar23 + 0x20);
  *(undefined4 *)(param_3 + 0x1ec) = *(undefined4 *)(lVar23 + 0x24);
  *(undefined8 *)(param_3 + 0x1f0) = *(undefined8 *)(lVar23 + 0x28);
  *(undefined8 *)(param_3 + 0x1f8) = *(undefined8 *)(lVar23 + 0x30);
  uVar21 = *(undefined8 *)(lVar23 + 0x48);
  uVar31 = *(undefined8 *)(lVar23 + 0x38);
  uVar16 = *(undefined8 *)(lVar23 + 0x40);
  *(undefined8 *)(param_3 + 0x217) = *(undefined8 *)(lVar23 + 0x4f);
  *(undefined8 *)(param_3 + 0x210) = uVar21;
  *(undefined8 *)(param_3 + 0x208) = uVar16;
  *(undefined8 *)(param_3 + 0x200) = uVar31;
  FUN_038fd1e0(lVar22);
  FUN_038fd2f0(lVar22,lVar23 + 0x58);
  puVar3 = (uint *)(param_3 + 0x2a4);
  uVar31 = *(undefined8 *)(lVar23 + 0x98);
  *(undefined4 *)(param_3 + 0x268) = *(undefined4 *)(lVar23 + 0xa0);
  *(undefined8 *)(param_3 + 0x260) = uVar31;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = *puVar3 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined2 *)(param_3 + 0x294) = 0;
  *(undefined1 *)(param_3 + 0x296) = 1;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = *puVar3 & 0xfffffffb | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  do {
    uVar11 = *puVar2;
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar14) {
      *puVar2 = uVar11 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar2 < 0) {
        lVar23 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar23 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar32);
    }
  }
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar14) {
      *puVar2 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  FUN_0390d290(param_3 + 0x1d0,param_4,
               *(long *)(lVar32 + 0x68) + (ulong)(1 < *(uint *)(lVar32 + 0x60)) * 0x18,0xffffffff,0)
  ;
  local_474 = 0;
  local_46c = 0;
  fVar34 = (*(float *)(param_3 + 0x554) * *(float *)(param_3 + 0x40)) / 1000.0;
  lVar23 = param_6[4];
  uVar7 = *(ushort *)(lVar23 + 0x38);
  local_480 = (undefined *)CONCAT44(*(undefined4 *)(param_3 + 0xa0),*(undefined4 *)(param_3 + 0x80))
  ;
  fVar37 = *(float *)(param_3 + 0x20) * fVar34;
  fVar38 = *(float *)(param_3 + 0x60) - fVar37;
  local_478 = 1.0 / ((*(float *)(param_3 + 0x554) * *(float *)(param_3 + 0x550)) / 1000.0);
  fVar39 = 1.1920929e-07;
  if (1.1920929e-07 <= fVar38) {
    fVar39 = fVar38;
  }
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  uVar8 = *(ushort *)(lVar23 + 0x3a);
  uVar9 = uVar8;
  if (*(short *)(lVar23 + 0x42) != 3) {
    uVar9 = 1;
  }
  if (uVar9 <= uVar8) {
    uVar9 = uVar8;
  }
  local_488 = (undefined *)CONCAT44(*(float *)(param_3 + 0x60),(fVar34 * fVar37) / fVar39);
  local_468 = 1.0 / (float)uVar7;
  fVar39 = 1.0 - param_1 / param_2;
  local_464 = 1.0 / (float)uVar9;
  local_460 = param_1;
  local_45c = fVar39;
  local_490 = FUN_03900ad0(*(undefined8 *)PTR_DAT_04bd1128,&local_488,0x30);
  FUN_0391e640(lVar32,param_4,0,&local_490,0);
  uVar31 = *(undefined8 *)(param_4 + 0xb8);
  lVar32 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar31,0x10,lVar32 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar31,0x10,lVar32 + 0x1068);
  iVar15 = *(int *)(lVar32 + 0x1010);
  if (iVar15 != 0) {
    lVar32 = *(long *)(lVar32 + 0x1018);
    uVar30 = 0;
    uVar26 = 0;
    do {
      lVar23 = *(long *)(lVar32 + (-(uVar26 >> 0x1f) & 0xfffffff800000000 | uVar26 << 3));
      if (lVar23 != 0) {
        uVar16 = (**(code **)PTR_DAT_04bbd560)(lVar23 + 8);
        (**(code **)PTR_DAT_04bcf1e8)
                  (uVar31,uVar30 & 0xffffffff,uVar16,*(undefined4 *)(lVar23 + 0x118));
      }
      uVar30 = uVar26 + 1;
      uVar26 = uVar30 & 0xffffffff;
    } while (iVar15 != (int)uVar30);
  }
  puVar4 = PTR_DAT_04bbd568;
  lVar32 = *(long *)PTR_DAT_04bbd7e8;
  iVar15 = *(int *)(lVar32 + 0x480);
  if (iVar15 != 0) {
    uVar19 = *(undefined4 *)(lVar32 + 0x464);
    uVar16 = *(undefined8 *)(param_4 + 0xb8);
    uVar31 = (**(code **)PTR_DAT_04bbd560)(lVar32 + 0x488);
    (**(code **)puVar4)(uVar16,uVar19,*(undefined4 *)(lVar32 + 0x460),iVar15,uVar31);
  }
  puVar4 = PTR_DAT_04bc1010;
  plVar33 = (long *)PTR_DAT_04bbd510;
  if (local_338[0] != 0xffffffff) {
    lVar32 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar32 + 0x5c8) >> 3 & 1) == 0) {
      uVar11 = local_338[0] - *(ushort *)(lVar32 + 0x3da);
      if (*(uint *)(lVar32 + 0x368) <= uVar11) {
        uVar11 = 0;
      }
      if ((*(uint *)(*(long *)(lVar32 + 0x370) + (long)(int)uVar11 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_4 + 0x100) =
             *(ulong *)(param_4 + 0x100) | 1L << ((ulong)local_338[0] & 0x3f);
        goto LAB_0393ad54;
      }
    }
    if ((*(uint *)(lVar32 + 0x5c8) >> 5 & 1) == 0) {
      uVar20 = 0x112;
      uVar19 = 0x12;
    }
    else {
      uVar20 = 0x111;
      uVar19 = 0x11;
    }
    if ((*(uint *)(lVar32 + 800) & 2) != 0) {
      uVar19 = uVar20;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_4 + 0xb8),uVar19);
    *(undefined8 *)(param_4 + 0x100) = 0;
  }
LAB_0393ad54:
  if (local_258[0] != 0xffffffff) {
    lVar32 = *(long *)puVar4;
    if ((*(uint *)(lVar32 + 0x5c8) >> 3 & 1) == 0) {
      uVar11 = local_258[0] - *(ushort *)(lVar32 + 0x3da);
      if (*(uint *)(lVar32 + 0x368) <= uVar11) {
        uVar11 = 0;
      }
      if ((*(uint *)(*(long *)(lVar32 + 0x370) + (long)(int)uVar11 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_4 + 0x100) =
             *(ulong *)(param_4 + 0x100) | 1L << ((ulong)local_258[0] & 0x3f);
        goto LAB_0393ade8;
      }
    }
    if ((*(uint *)(lVar32 + 0x5c8) >> 5 & 1) == 0) {
      uVar20 = 0x112;
      uVar19 = 0x12;
    }
    else {
      uVar20 = 0x111;
      uVar19 = 0x11;
    }
    if ((*(uint *)(lVar32 + 800) & 2) != 0) {
      uVar19 = uVar20;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_4 + 0xb8),uVar19);
    *(undefined8 *)(param_4 + 0x100) = 0;
  }
LAB_0393ade8:
  if (local_178[0] != 0xffffffff) {
    lVar32 = *(long *)puVar4;
    if ((*(uint *)(lVar32 + 0x5c8) >> 3 & 1) == 0) {
      uVar11 = local_178[0] - *(ushort *)(lVar32 + 0x3da);
      if (*(uint *)(lVar32 + 0x368) <= uVar11) {
        uVar11 = 0;
      }
      if ((*(uint *)(*(long *)(lVar32 + 0x370) + (long)(int)uVar11 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_4 + 0x100) =
             *(ulong *)(param_4 + 0x100) | 1L << ((ulong)local_178[0] & 0x3f);
        goto LAB_0393ae7c;
      }
    }
    if ((*(uint *)(lVar32 + 0x5c8) >> 5 & 1) == 0) {
      uVar20 = 0x112;
      uVar19 = 0x12;
    }
    else {
      uVar20 = 0x111;
      uVar19 = 0x11;
    }
    if ((*(uint *)(lVar32 + 800) & 2) != 0) {
      uVar19 = uVar20;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_4 + 0xb8),uVar19);
    *(undefined8 *)(param_4 + 0x100) = 0;
  }
LAB_0393ae7c:
  local_498 = 1 - iVar13;
  local_4b8 = 1 - iVar29;
  local_4d8 = 1 - iVar27;
  puVar4 = PTR_DAT_04bbd508 + 0x10;
  local_1d0 = puVar4;
  FUN_038fd0e0(local_178);
  local_2b0 = puVar4;
  FUN_038fd0e0(local_258);
  local_390 = puVar4;
  FUN_038fd0e0(local_338);
  lVar32 = local_4e8[0];
  lVar23 = local_4e8[lVar18];
  lVar18 = lVar23;
  if (0 < *(int *)(param_3 + 0x564)) {
    lVar18 = *plVar33;
    local_388 = "tmp_tile";
    local_390 = PTR_DAT_04bb2020 + 0x10;
    uVar7 = *(ushort *)(local_4e8[0] + 0x30) >> 1;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    uVar9 = *(ushort *)(local_4e8[0] + 0x32);
    if (*(short *)(local_4e8[0] + 0x3a) != 3) {
      uVar9 = 1;
    }
    uVar8 = *(ushort *)(local_4e8[0] + 0x32) >> 1;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar17 == 0) {
      local_444 = (float)nn::os::GetCurrentCoreNumber();
    }
    else {
      local_444 = (float)((int)lVar17 - 1);
    }
    lVar18 = FUN_03948e10(lVar18,param_4,lVar18 + (long)(int)local_444 * 0x290 + 0x10,&local_390,
                          0x19,1,uVar7,uVar9,1,0,1,0,1,0,0,0);
    FUN_0393bdc0(param_3,param_4,lVar18,lVar23);
    if (1 < *(int *)(param_3 + 0x564)) {
      iVar27 = 1;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      lVar23 = lVar18;
      do {
        local_388 = "tmp_tile";
        uVar7 = *(ushort *)(lVar32 + 0x32);
        uVar9 = *(ushort *)(lVar32 + 0x30) >> (ulong)(iVar27 + 1U & 0x1f);
        uVar8 = uVar7 >> (ulong)(iVar27 + 1U & 0x1f);
        lVar18 = *plVar33;
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        if (*(short *)(lVar32 + 0x3a) != 3) {
          uVar7 = 1;
        }
        if (uVar7 <= uVar8) {
          uVar7 = uVar8;
        }
        local_390 = puVar4;
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar17 == 0) {
          local_444 = (float)nn::os::GetCurrentCoreNumber();
        }
        else {
          local_444 = (float)((int)lVar17 - 1);
        }
        lVar18 = FUN_03948e10(lVar18,param_4,lVar18 + (long)(int)local_444 * 0x290 + 0x10,&local_390
                              ,0x19,1,uVar9,uVar7,1,0,1,0,1,0,0,0);
        FUN_0393bdc0(param_3,param_4,lVar18,lVar23);
        plVar33 = (long *)PTR_DAT_04bbd510;
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,lVar23);
        iVar27 = iVar27 + 1;
        lVar23 = lVar18;
      } while (iVar27 < *(int *)(param_3 + 0x564));
    }
  }
  if (*(char *)(param_3 + 0xe8) != '\0') {
    lVar32 = *plVar33;
    local_388 = "tmp_tile";
    local_390 = PTR_DAT_04bb2020 + 0x10;
    uVar9 = *(ushort *)(lVar18 + 0x32);
    uVar7 = *(ushort *)(lVar18 + 0x30);
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    uVar8 = uVar9;
    if (*(short *)(lVar18 + 0x3a) != 3) {
      uVar8 = 1;
    }
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar23 == 0) {
      local_444 = (float)nn::os::GetCurrentCoreNumber();
    }
    else {
      local_444 = (float)((int)lVar23 + -1);
    }
    lVar32 = FUN_03948e10(lVar32,param_4,lVar32 + (long)(int)local_444 * 0x290 + 0x10,&local_390,
                          0x19,1,uVar7,uVar8,1,0,1,0,1,0,0,0);
    FUN_0393c370(0,0x3f800000,param_3,param_4,lVar32,lVar18);
    FUN_039499cc(*plVar33,lVar18);
    lVar18 = *plVar33;
    local_390 = PTR_DAT_04bb2020 + 0x10;
    uVar9 = *(ushort *)(lVar32 + 0x32);
    local_388 = "tmp_tile";
    uVar7 = *(ushort *)(lVar32 + 0x30);
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    uVar8 = uVar9;
    if (*(short *)(lVar32 + 0x3a) != 3) {
      uVar8 = 1;
    }
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar23 == 0) {
      local_444 = (float)nn::os::GetCurrentCoreNumber();
    }
    else {
      local_444 = (float)((int)lVar23 - 1);
    }
    lVar18 = FUN_03948e10(lVar18,param_4,lVar18 + (long)(int)local_444 * 0x290 + 0x10,&local_390,
                          0x19,1,uVar7,uVar8,1,0,1,0,1,0,0,0);
    FUN_0393c370(0x3f800000,0,param_3,param_4,lVar18,lVar32);
    plVar33 = (long *)PTR_DAT_04bbd510;
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,lVar32);
  }
  puVar25 = (undefined4 *)(param_3 + 200);
  if (*(uint *)(param_3 + 0xc0) != 3) {
    puVar25 = (undefined4 *)(&DAT_041b3988 + (ulong)*(uint *)(param_3 + 0xc0) * 4);
  }
  FUN_0393c940(param_3,param_4,&local_4b0,&local_4d0,&local_4f0,lVar18,*puVar25,0);
  puVar25 = (undefined4 *)(param_3 + 0xcc);
  if (*(uint *)(param_3 + 0xc0) != 3) {
    puVar25 = (undefined4 *)(&DAT_041b3994 + (ulong)*(uint *)(param_3 + 0xc0) * 4);
  }
  FUN_0393c940(param_3,param_4,&local_4b0,&local_4d0,&local_4f0,lVar18,*puVar25,1);
  (**(code **)(*param_6 + 0x38))(param_6,param_4);
  local_e0 = 0xff7fffffff7fffff;
  local_f0 = PTR_DAT_04bd0f08 + 0x10;
  local_e8 = (undefined1 *)0x7f7fffff7f7fffff;
  uStack_d4 = 0;
  local_d0 = 0x3f800000;
  local_d8 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_d8 < 6) {
    if ((1 << (ulong)(local_d8 & 0x1f) & 0x39U) == 0) {
      fVar37 = *(float *)(param_6 + 1);
      fVar34 = *(float *)((long)param_6 + 0xc);
    }
    else {
      fVar34 = *(float *)(param_6 + 1);
      fVar37 = *(float *)((long)param_6 + 0xc);
    }
    fVar36 = fVar34;
    fVar38 = 0.0;
    if (fVar34 <= 0.0) {
      fVar36 = 0.0;
      fVar38 = fVar34;
    }
    fVar35 = fVar37;
    fVar34 = 0.0;
    if (fVar37 <= 0.0) {
      fVar35 = 0.0;
      fVar34 = fVar37;
    }
    local_e8 = (undefined1 *)CONCAT44(fVar34,fVar38);
    local_e0 = CONCAT44(fVar35,fVar36);
  }
  FUN_038e77e4(&local_f0,param_4,param_6);
  FUN_038e4cec(&local_390);
  local_390 = (undefined *)(((ulong)local_390 >> 0x10 & 0xffff) << 0x10);
  FUN_038e4d90(&local_390,param_4);
  lVar32 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x278);
  local_488 = PTR_s_ENABLE_NEAR_COC_04b67898;
  local_480 = PTR_s_VISUALIZE_04b678a0;
  local_3d0 = &DAT_040d3199;
  if (*(char *)(param_3 + 0xe8) != '\0') {
    local_3d0 = &DAT_040b3e5e;
  }
  local_3c8 = &DAT_041b39a0 + *(int *)(&DAT_041b39a0 + (ulong)*(uint *)(param_3 + 0x570) * 4);
  iVar27 = FUN_03907ef0(*(long *)(lVar32 + 8) + 0x10,2,&local_488,&local_3d0,
                        *(undefined2 *)(lVar32 + 0x1e));
  lVar32 = *(long *)(lVar32 + 8);
  if (iVar27 < 1) {
    lVar32 = *(long *)(lVar32 + 0x18);
  }
  else {
    uVar11 = iVar27 - 1;
    if (*(uint *)(lVar32 + 0x20) <= uVar11) {
      uVar11 = 0;
    }
    lVar32 = *(long *)(lVar32 + 0x28) + (ulong)uVar11 * 0x150;
  }
  FUN_03907810(lVar32,param_4);
  lVar23 = param_6[4];
  *(undefined4 *)(param_3 + 0xf0) = *(undefined4 *)(lVar23 + 8);
  *(undefined4 *)(param_3 + 0xf4) = *(undefined4 *)(lVar23 + 0xc);
  *(undefined8 *)(param_3 + 0xf8) = *(undefined8 *)(lVar23 + 0x10);
  *(undefined8 *)(param_3 + 0x100) = *(undefined8 *)(lVar23 + 0x18);
  *(undefined4 *)(param_3 + 0x108) = *(undefined4 *)(lVar23 + 0x20);
  *(undefined4 *)(param_3 + 0x10c) = *(undefined4 *)(lVar23 + 0x24);
  *(undefined8 *)(param_3 + 0x110) = *(undefined8 *)(lVar23 + 0x28);
  *(undefined8 *)(param_3 + 0x118) = *(undefined8 *)(lVar23 + 0x30);
  uVar31 = *(undefined8 *)(lVar23 + 0x38);
  uVar16 = *(undefined8 *)(lVar23 + 0x40);
  uVar21 = *(undefined8 *)(lVar23 + 0x48);
  *(undefined8 *)(param_3 + 0x137) = *(undefined8 *)(lVar23 + 0x4f);
  *(undefined8 *)(param_3 + 0x128) = uVar16;
  *(undefined8 *)(param_3 + 0x130) = uVar21;
  *(undefined8 *)(param_3 + 0x120) = uVar31;
  FUN_038fd1e0(lVar24);
  FUN_038fd2f0(lVar24,lVar23 + 0x58);
  uVar31 = *(undefined8 *)(lVar23 + 0x98);
  *(undefined4 *)(param_3 + 0x188) = *(undefined4 *)(lVar23 + 0xa0);
  *(undefined8 *)(param_3 + 0x180) = uVar31;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = *puVar1 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined2 *)(param_3 + 0x1b4) = 0;
  *(undefined1 *)(param_3 + 0x1b6) = 1;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar24 = param_6[0xc];
  *(undefined4 *)(param_3 + 0x1d0) = *(undefined4 *)(lVar24 + 8);
  *(undefined4 *)(param_3 + 0x1d4) = *(undefined4 *)(lVar24 + 0xc);
  *(undefined8 *)(param_3 + 0x1d8) = *(undefined8 *)(lVar24 + 0x10);
  *(undefined8 *)(param_3 + 0x1e0) = *(undefined8 *)(lVar24 + 0x18);
  *(undefined4 *)(param_3 + 0x1e8) = *(undefined4 *)(lVar24 + 0x20);
  *(undefined4 *)(param_3 + 0x1ec) = *(undefined4 *)(lVar24 + 0x24);
  *(undefined8 *)(param_3 + 0x1f0) = *(undefined8 *)(lVar24 + 0x28);
  *(undefined8 *)(param_3 + 0x1f8) = *(undefined8 *)(lVar24 + 0x30);
  uVar31 = *(undefined8 *)(lVar24 + 0x38);
  uVar16 = *(undefined8 *)(lVar24 + 0x40);
  uVar21 = *(undefined8 *)(lVar24 + 0x48);
  *(undefined8 *)(param_3 + 0x217) = *(undefined8 *)(lVar24 + 0x4f);
  *(undefined8 *)(param_3 + 0x200) = uVar31;
  *(undefined8 *)(param_3 + 0x208) = uVar16;
  *(undefined8 *)(param_3 + 0x210) = uVar21;
  FUN_038fd1e0(lVar22);
  FUN_038fd2f0(lVar22,lVar24 + 0x58);
  uVar31 = *(undefined8 *)(lVar24 + 0x98);
  *(undefined4 *)(param_3 + 0x268) = *(undefined4 *)(lVar24 + 0xa0);
  *(undefined8 *)(param_3 + 0x260) = uVar31;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = *puVar3 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined2 *)(param_3 + 0x294) = 0;
  *(undefined1 *)(param_3 + 0x296) = 1;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = *puVar3 & 0xfffffffb | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  puVar25 = (undefined4 *)local_4a8[1 - (long)local_498];
  *(undefined4 *)(param_3 + 0x390) = *puVar25;
  *(undefined4 *)(param_3 + 0x394) = puVar25[1];
  *(undefined8 *)(param_3 + 0x398) = *(undefined8 *)(puVar25 + 2);
  *(undefined8 *)(param_3 + 0x3a0) = *(undefined8 *)(puVar25 + 4);
  *(undefined4 *)(param_3 + 0x3a8) = puVar25[6];
  *(undefined4 *)(param_3 + 0x3ac) = puVar25[7];
  *(undefined8 *)(param_3 + 0x3b0) = *(undefined8 *)(puVar25 + 8);
  *(undefined8 *)(param_3 + 0x3b8) = *(undefined8 *)(puVar25 + 10);
  uVar21 = *(undefined8 *)(puVar25 + 0x10);
  uVar31 = *(undefined8 *)(puVar25 + 0xc);
  uVar16 = *(undefined8 *)(puVar25 + 0xe);
  *(undefined8 *)(param_3 + 0x3d7) = *(undefined8 *)((long)puVar25 + 0x47);
  *(undefined8 *)(param_3 + 0x3d0) = uVar21;
  *(undefined8 *)(param_3 + 0x3c8) = uVar16;
  *(undefined8 *)(param_3 + 0x3c0) = uVar31;
  FUN_038fd1e0(param_3 + 0x3e0);
  FUN_038fd2f0(param_3 + 0x3e0,puVar25 + 0x14);
  uVar19 = puVar25[0x26];
  *(undefined8 *)(param_3 + 0x420) = *(undefined8 *)(puVar25 + 0x24);
  puVar1 = (uint *)(param_3 + 0x464);
  *(undefined4 *)(param_3 + 0x428) = uVar19;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = *puVar1 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined2 *)(param_3 + 0x454) = 0x101;
  *(undefined1 *)(param_3 + 0x456) = 1;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  puVar25 = (undefined4 *)local_4c8[1 - (long)local_4b8];
  *(undefined4 *)(param_3 + 0x470) = *puVar25;
  *(undefined4 *)(param_3 + 0x474) = puVar25[1];
  *(undefined8 *)(param_3 + 0x478) = *(undefined8 *)(puVar25 + 2);
  *(undefined8 *)(param_3 + 0x480) = *(undefined8 *)(puVar25 + 4);
  *(undefined4 *)(param_3 + 0x488) = puVar25[6];
  *(undefined4 *)(param_3 + 0x48c) = puVar25[7];
  *(undefined8 *)(param_3 + 0x490) = *(undefined8 *)(puVar25 + 8);
  *(undefined8 *)(param_3 + 0x498) = *(undefined8 *)(puVar25 + 10);
  uVar21 = *(undefined8 *)(puVar25 + 0x10);
  uVar31 = *(undefined8 *)(puVar25 + 0xc);
  uVar16 = *(undefined8 *)(puVar25 + 0xe);
  *(undefined8 *)(param_3 + 0x4b7) = *(undefined8 *)((long)puVar25 + 0x47);
  *(undefined8 *)(param_3 + 0x4b0) = uVar21;
  *(undefined8 *)(param_3 + 0x4a8) = uVar16;
  *(undefined8 *)(param_3 + 0x4a0) = uVar31;
  FUN_038fd1e0(param_3 + 0x4c0);
  FUN_038fd2f0(param_3 + 0x4c0,puVar25 + 0x14);
  uVar19 = puVar25[0x26];
  *(undefined8 *)(param_3 + 0x500) = *(undefined8 *)(puVar25 + 0x24);
  puVar1 = (uint *)(param_3 + 0x544);
  *(undefined4 *)(param_3 + 0x508) = uVar19;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = *puVar1 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined2 *)(param_3 + 0x534) = 0x101;
  *(undefined1 *)(param_3 + 0x536) = 1;
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  puVar1 = (uint *)(lVar32 + 0x14);
  do {
    uVar11 = *puVar1;
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar11 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar32);
    }
  }
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  FUN_0390d290(puVar28,param_4,*(undefined8 *)(lVar32 + 0x68),0xffffffff,0);
  do {
    uVar11 = *puVar1;
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar11 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar32);
    }
  }
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  FUN_0390d290(param_3 + 0x1d0,param_4,
               *(long *)(lVar32 + 0x68) + (ulong)(1 < *(uint *)(lVar32 + 0x60)) * 0x18,0xffffffff,0)
  ;
  do {
    uVar11 = *puVar1;
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar11 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar32);
    }
  }
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar24 = 0x30;
  if (*(uint *)(lVar32 + 0x60) < 3) {
    lVar24 = 0;
  }
  FUN_0390d290(param_3 + 0x390,param_4,*(long *)(lVar32 + 0x68) + lVar24,0xffffffff,0);
  do {
    uVar11 = *puVar1;
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = uVar11 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar11 & 0x7fffffff) != 0) {
    if ((int)uVar11 < 0) {
      if ((int)*puVar1 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar32);
    }
  }
  do {
    cVar10 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar14) {
      *puVar1 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar24 = 0x48;
  if (*(uint *)(lVar32 + 0x60) < 4) {
    lVar24 = 0;
  }
  FUN_0390d290(param_3 + 0x470,param_4,*(long *)(lVar32 + 0x68) + lVar24,0xffffffff,0);
  local_430 = 0;
  local_428 = 0;
  lVar24 = param_6[4];
  local_43c = *(undefined4 *)(param_3 + 0x80);
  local_438 = *(undefined4 *)(param_3 + 0xa0);
  fVar34 = (*(float *)(param_3 + 0x554) * *(float *)(param_3 + 0x40)) / 1000.0;
  fVar37 = *(float *)(param_3 + 0x20) * fVar34;
  local_440 = *(float *)(param_3 + 0x60);
  uVar7 = *(ushort *)(lVar24 + 0x38);
  fVar38 = local_440 - fVar37;
  local_434 = 1.0 / ((*(float *)(param_3 + 0x554) * *(float *)(param_3 + 0x550)) / 1000.0);
  local_444 = 1.1920929e-07;
  if (1.1920929e-07 <= fVar38) {
    local_444 = fVar38;
  }
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  local_444 = (fVar34 * fVar37) / local_444;
  local_424 = (float)uVar7;
  uVar9 = *(ushort *)(lVar24 + 0x3a);
  uVar7 = uVar9;
  if (*(short *)(lVar24 + 0x42) != 3) {
    uVar7 = 1;
  }
  if (uVar7 <= uVar9) {
    uVar7 = uVar9;
  }
  local_420 = (float)uVar7;
  local_41c = param_1;
  local_418 = fVar39;
  local_3a8 = FUN_03900ad0(*(undefined8 *)PTR_DAT_04bd1128,&local_444,0x30);
  FUN_0391e640(lVar32,param_4,0,&local_3a8,0);
  uVar31 = *(undefined8 *)(param_4 + 0xb8);
  lVar32 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar31,0x10,lVar32 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar31,0x10,lVar32 + 0x1068);
  iVar27 = *(int *)(lVar32 + 0x1010);
  if (iVar27 != 0) {
    lVar32 = *(long *)(lVar32 + 0x1018);
    uVar30 = 0;
    uVar26 = 0;
    do {
      lVar24 = *(long *)(lVar32 + (-(uVar26 >> 0x1f) & 0xfffffff800000000 | uVar26 << 3));
      if (lVar24 != 0) {
        uVar16 = (**(code **)PTR_DAT_04bbd560)(lVar24 + 8);
        (**(code **)PTR_DAT_04bcf1e8)
                  (uVar31,uVar30 & 0xffffffff,uVar16,*(undefined4 *)(lVar24 + 0x118));
      }
      uVar30 = uVar26 + 1;
      uVar26 = uVar30 & 0xffffffff;
    } while (iVar27 != (int)uVar30);
  }
  lVar32 = *(long *)PTR_DAT_04bbd7e8;
  iVar27 = *(int *)(lVar32 + 0x480);
  if (iVar27 != 0) {
    uVar19 = *(undefined4 *)(lVar32 + 0x464);
    uVar16 = *(undefined8 *)(param_4 + 0xb8);
    uVar31 = (**(code **)PTR_DAT_04bbd560)(lVar32 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar16,uVar19,*(undefined4 *)(lVar32 + 0x460),iVar27,uVar31);
  }
  FUN_039499cc(*plVar33,local_4a8[0]);
  FUN_039499cc(*plVar33,local_4c8[0]);
  FUN_039499cc(*plVar33,local_4e8[0]);
  FUN_039499cc(*plVar33,local_4a8[1]);
  FUN_039499cc(*plVar33,local_4c8[1]);
  FUN_039499cc(*plVar33,local_4e8[1]);
  FUN_039499cc(*plVar33,lVar18);
  if ((*(char *)(param_3 + 0x56c) != '\0') && ((*(byte *)(*(long *)PTR_DAT_04bd1050 + 8) & 3) == 0))
  {
    (**(code **)PTR_DAT_04bcfdb8)(*(undefined8 *)(param_4 + 0xb8),2);
  }
  return;
}

