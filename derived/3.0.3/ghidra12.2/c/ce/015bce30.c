
void FUN_015bce30(long param_1,uint param_2,long param_3,long param_4,undefined8 param_5)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  uint *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined8 local_358;
  float local_350;
  float fStack_34c;
  undefined8 local_348;
  float local_340;
  float local_33c;
  undefined **local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  uint local_2c8;
  undefined8 local_2c4;
  undefined *local_2b8;
  long local_2b0;
  long lStack_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  long local_288;
  long local_280;
  undefined7 uStack_278;
  undefined1 uStack_271;
  undefined7 local_270;
  undefined1 uStack_269;
  undefined8 uStack_268;
  undefined4 local_260 [2];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  long local_228;
  char *local_220;
  undefined4 local_218;
  undefined1 auStack_210 [16];
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined2 uStack_1f4;
  undefined1 uStack_1f2;
  undefined1 uStack_1f1;
  undefined1 uStack_1f0;
  undefined1 local_1ef;
  undefined6 uStack_1ee;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180 [2];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  uint local_8c;
  
  lVar18 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  lVar23 = 0xc70;
  lVar13 = lVar18 + 0xc70;
  if (*(char *)(*(long *)PTR_DAT_04bb2260 + 0x108) != '\0') {
    lVar23 = 0xc40;
    lVar13 = lVar18 + 0xc40;
  }
  local_8c = param_2;
  (**(code **)(*(long *)(lVar18 + lVar23) + 0xf0))(lVar13);
  puVar9 = PTR_DAT_04bb2200;
  local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,param_2);
  lVar23 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0x38;
  lVar13 = lVar23 + (ulong)param_2 * 0x348;
  if (1 < param_2) {
    lVar13 = lVar23;
  }
  lVar23 = *(long *)(*(long *)(lVar13 + 0x30) + 0x7e0);
  uVar3 = *(ushort *)(lVar23 + 0x30);
  uVar4 = *(ushort *)(lVar23 + 0x32);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  fVar32 = (float)uVar3;
  uVar1 = uVar4;
  if (*(short *)(lVar23 + 0x3a) != 3) {
    uVar1 = 1;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  fVar30 = (float)uVar1;
  lVar21 = *(long *)PTR_DAT_04bbd510;
  FUN_0074fda4(&local_1d8,"SSWaterHeightMap%d",param_2);
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar13 == 0) {
    iVar12 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar12 = (int)lVar13 + -1;
  }
  local_2b8 = (undefined *)CONCAT44(local_2b8._4_4_,iVar12);
  plVar14 = (long *)FUN_03948e10(lVar21,param_3,lVar21 + (long)iVar12 * 0x290 + 0x10,&local_1d8,9,1,
                                 uVar3,uVar1,1,0,1,0,1,0,0,0);
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar19 = *(undefined8 *)(param_4 + 0x3420);
  local_98 = (undefined **)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  lVar13 = *(long *)(*(long *)puVar9 + 0x50) + 0x38;
  local_f8 = PTR_DAT_04bd1178 + 0x10;
  lVar21 = lVar13 + (ulong)local_8c * 0x348;
  if (1 < local_8c) {
    lVar21 = lVar13;
  }
  local_e8 = 0;
  lVar13 = *(long *)(*(long *)(lVar21 + 0x108) + 0x290);
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1d0 = 0;
  local_180[0] = 0xffffffff;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = "agl::TextureData";
  local_138 = 0x10000;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_120 = 0xff;
  local_11c = 0;
  local_1d8 = PTR_DAT_04bd1198 + 0x10;
  local_118 = 0x80000000000;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e0 = fVar32;
  fStack_dc = fVar30;
  local_f0 = fVar32;
  fStack_ec = fVar30;
  FUN_01560750(&local_1d8,plVar14,0,0);
  local_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  local_260[0] = 0xffffffff;
  local_218 = 0x10000;
  local_280 = 0;
  uStack_278 = 0;
  uStack_271 = 0;
  local_290 = 0;
  local_288 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_2b0 = 0;
  lStack_2a8 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = "agl::TextureData";
  local_200 = 0xff;
  local_1fc = 0;
  local_2b8 = PTR_DAT_04bd11a0 + 0x10;
  local_1f8 = 0;
  uStack_1f4 = 0x800;
  uStack_1f2 = 0;
  uStack_1f1 = 0;
  uStack_1f0 = 0;
  local_1ef = 0;
  uStack_1ee = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  (**(code **)PTR_DAT_04bcf220)(auStack_210);
  FUN_0155a100(&local_2b8,lVar23,local_1fc._2_1_,(undefined2)local_1fc);
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = &local_1d8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  local_98 = &local_2b8;
  (**(code **)(local_f8 + 0x38))(&local_f8,param_3);
  puVar11 = PTR_DAT_04bd0f08;
  puVar9 = PTR_DAT_04bd0ea8;
  local_2d8 = 0x7f7fffff7f7fffff;
  local_2d0 = 0xff7fffffff7fffff;
  local_2e0 = PTR_DAT_04bd0f08 + 0x10;
  local_2c4 = 0x3f80000000000000;
  local_2c8 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_2c8 < 6) {
    if ((1 << (ulong)(local_2c8 & 0x1f) & 0x39U) == 0) {
      fVar26 = local_f0;
      fVar27 = fStack_ec;
    }
    else {
      fVar26 = fStack_ec;
      fVar27 = local_f0;
    }
    fVar28 = fVar27;
    fVar29 = 0.0;
    if (fVar27 <= 0.0) {
      fVar28 = 0.0;
      fVar29 = fVar27;
    }
    fVar25 = fVar26;
    fVar27 = 0.0;
    if (fVar26 <= 0.0) {
      fVar25 = 0.0;
      fVar27 = fVar26;
    }
    local_2d8 = CONCAT44(fVar27,fVar29);
    local_2d0 = CONCAT44(fVar25,fVar28);
  }
  FUN_038e77e4(&local_2e0,param_3,&local_f8);
  local_358 = (undefined *)0x0;
  local_350 = 0.0;
  fStack_34c = 0.0;
  FUN_039025b0(0,&local_f8,param_3,0,1,&local_358,0,&local_2e0,1);
  FUN_038e4cec(&local_358);
  uVar31 = local_358._4_4_;
  local_358 = (undefined *)CONCAT62(local_358._2_6_,1);
  local_33c = (float)((uint)local_33c & 0xfffffff0 | 1);
  local_358 = (undefined *)(CONCAT44(uVar31,(undefined4)local_358) | 0x100000000);
  FUN_038e4d90(&local_358,param_3);
  FUN_03a4f7f0(param_5,param_3,uVar19,0x18,0,0,0);
  FUN_03901694(&local_f8,param_3);
  local_2b8 = PTR_DAT_04bbd500 + 0x10;
  FUN_038fd0e0(local_260);
  local_1d8 = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(local_180);
  if (lVar13 != 0) {
    local_300 = 0;
    uStack_2f8 = 0;
    local_310 = 0;
    local_308 = 0;
    local_320 = 0;
    local_318 = 0;
    local_328 = 0;
    uVar3 = *(ushort *)(lVar13 + 0x30);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    local_340 = (float)uVar3;
    uVar4 = *(ushort *)(lVar13 + 0x32);
    local_338 = (undefined **)0x0;
    uStack_330 = 0;
    local_348 = 0;
    local_188 = 0;
    local_190 = 0;
    local_358 = PTR_DAT_04bd1178 + 0x10;
    local_198 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1b8 = 0;
    local_1d0 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    uVar3 = uVar4;
    if (*(short *)(lVar13 + 0x3a) != 3) {
      uVar3 = 1;
    }
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    local_33c = (float)uVar3;
    local_180[0] = 0xffffffff;
    local_140 = "agl::TextureData";
    local_138 = 0x10000;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_120 = 0xff;
    local_11c = 0;
    local_1d8 = PTR_DAT_04bd1198 + 0x10;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_118 = 0x80000000000;
    local_350 = local_340;
    fStack_34c = local_33c;
    FUN_01560750(&local_1d8,lVar13,0,1);
    local_308 = 0;
    local_300 = 0;
    local_318 = 0;
    local_310 = 0;
    local_328 = 0;
    local_320 = 0;
    uStack_330 = 0;
    local_338 = &local_1d8;
    (**(code **)(local_358 + 0x38))(&local_358,param_3);
    puVar10 = PTR_DAT_04bb2200;
    fStack_dc = 0.0;
    local_d8._0_4_ = 0x3f800000;
    local_f0 = 3.4028235e+38;
    fStack_ec = 3.4028235e+38;
    local_e8 = 0xff7fffffff7fffff;
    local_f8 = puVar11 + 0x10;
    local_e0 = *(float *)puVar9;
    if ((uint)local_e0 < 6) {
      if ((1 << (ulong)((uint)local_e0 & 0x1f) & 0x39U) == 0) {
        fVar26 = local_350;
        fVar27 = fStack_34c;
      }
      else {
        fVar26 = fStack_34c;
        fVar27 = local_350;
      }
      fVar29 = fVar27;
      local_f0 = 0.0;
      if (fVar27 <= 0.0) {
        fVar29 = 0.0;
        local_f0 = fVar27;
      }
      fVar27 = fVar26;
      fStack_ec = 0.0;
      if (fVar26 <= 0.0) {
        fVar27 = 0.0;
        fStack_ec = fVar26;
      }
      local_e8 = CONCAT44(fVar27,fVar29);
    }
    FUN_038e77e4(&local_f8,param_3,&local_358);
    local_2b8 = (undefined *)0x0;
    local_2b0 = 0;
    FUN_039025b0(0,&local_358,param_3,0,1,&local_2b8,0,&local_f8,1);
    lVar23 = 0;
    puVar17 = *(uint **)(*(long *)(*(long *)puVar10 + 0x40) + 0x38);
    if (0x1b < *puVar17) {
      lVar23 = *(long *)(*(long *)(puVar17 + 2) + 0xd8);
    }
    FUN_03907810(lVar23,param_3);
    FUN_038e4d90(param_1 + 0x610,param_3);
    FUN_0390cee0(&local_2b8);
    local_2b8 = (undefined *)*plVar14;
    local_288 = plVar14[6];
    local_2b0 = plVar14[1];
    lStack_2a8 = plVar14[2];
    local_2a0 = plVar14[3];
    local_298 = plVar14[4];
    local_290 = plVar14[5];
    local_280 = plVar14[7];
    local_270 = (undefined7)((ulong)*(undefined8 *)((long)plVar14 + 0x47) >> 8);
    uStack_278 = (undefined7)plVar14[8];
    uStack_271 = (undefined1)((ulong)plVar14[8] >> 0x38);
    FUN_038fd1e0(&uStack_268);
    FUN_038fd2f0(&uStack_268,plVar14 + 10);
    local_228 = plVar14[0x12];
    lVar13 = (long)&local_1e8 + 4;
    local_220 = (char *)CONCAT44(local_220._4_4_,(int)plVar14[0x13]);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(lVar13,0x10);
      if (bVar7) {
        local_1e8 = local_1e8 | 0x100000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uStack_1f4 = 0;
    uStack_1f2 = 0;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(lVar13,0x10);
      if (bVar7) {
        local_1e8 = local_1e8 & 0xfffffffbffffffff | 0x400000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uStack_1f1 = 7;
    uStack_1f0 = 7;
    local_1ef = 7;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(lVar13,0x10);
      if (bVar7) {
        local_1e8 = local_1e8 & 0xfffffffdffffffff | 0x200000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar13 = param_1 + 0xc68;
    lVar21 = *(long *)(param_1 + 0xc78);
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x20))(lVar13);
    local_2e0 = (undefined1 *)CONCAT44(local_2e0._4_4_,1.0 / fVar32);
    lVar20 = **(long **)(param_1 + 0xc70);
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar20 + 8) * 4];
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x18))(lVar13);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar21 + (ulong)*(ushort *)(lVar20 + 4)),&local_2e0,(ulong)bVar2 << 2);
    }
    lVar21 = *(long *)(param_1 + 0xc78);
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x20))(lVar13);
    local_2e0 = (undefined1 *)CONCAT44(local_2e0._4_4_,1.0 / fVar30);
    lVar20 = **(long **)(param_1 + 0xc70);
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar20 + 0x14) * 4];
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x18))(lVar13);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar21 + (ulong)*(ushort *)(lVar20 + 0x10)),&local_2e0,(ulong)bVar2 << 2);
    }
    puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar18 + 0x248) + 0xf0))(lVar18 + 0x248);
    uVar31 = *puVar15;
    lVar18 = *(long *)(param_1 + 0xc78);
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x20))(lVar13);
    local_2e0 = (undefined1 *)CONCAT44(local_2e0._4_4_,uVar31);
    lVar21 = **(long **)(param_1 + 0xc70);
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 0x44) * 4];
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x18))(lVar13);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar21 + 0x40)),&local_2e0,(ulong)bVar2 << 2);
    }
    lVar18 = *(long *)(param_1 + 0xc78);
    local_2e0 = &DAT_3f8000003f800000;
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x20))(lVar13);
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x20))(lVar13);
    lVar21 = **(long **)(param_1 + 0xc70);
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 0x50) * 4];
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x18))(lVar13);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar21 + 0x4c)),&local_2e0,(ulong)bVar2 << 2);
    }
    FUN_01557430(lVar23,param_3,0,lVar13,0);
    puVar17 = (uint *)(lVar23 + 0x14);
    do {
      uVar5 = *puVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar17,0x10);
      if (bVar7) {
        *puVar17 = uVar5 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar5 & 0x7fffffff) != 0) {
      if ((int)uVar5 < 0) {
        if ((int)*puVar17 < 0) {
          lVar13 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar13 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar17 < 0);
        }
      }
      else {
        FUN_03907b80(lVar23);
      }
    }
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar17,0x10);
      if (bVar7) {
        *puVar17 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    FUN_0390d290(&local_2b8,param_3,*(undefined8 *)(lVar23 + 0x68),0xffffffff,0);
    uVar19 = *(undefined8 *)(param_3 + 0xb8);
    (**(code **)PTR_DAT_04bcf1a8)(uVar19,0x10,param_1 + 0x4ec);
    (**(code **)PTR_DAT_04bcf1b0)(uVar19,0x10,param_1 + 0x530);
    puVar11 = PTR_DAT_04bcf1e8;
    puVar9 = PTR_DAT_04bbd560;
    iVar12 = *(int *)(param_1 + 0x4d8);
    if (iVar12 != 0) {
      lVar23 = *(long *)(param_1 + 0x4e0);
      uVar22 = 0;
      uVar24 = 0;
      do {
        lVar13 = *(long *)(lVar23 + (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
        if (lVar13 != 0) {
          uVar16 = (**(code **)puVar9)(lVar13 + 8);
          (**(code **)puVar11)(uVar19,uVar22 & 0xffffffff,uVar16,*(undefined4 *)(lVar13 + 0x118));
        }
        uVar22 = uVar24 + 1;
        uVar24 = uVar22 & 0xffffffff;
      } while (iVar12 != (int)uVar22);
    }
    iVar12 = *(int *)(param_1 + 0x5d8);
    if (iVar12 != 0) {
      uVar31 = *(undefined4 *)(param_1 + 0x5bc);
      uVar16 = *(undefined8 *)(param_3 + 0xb8);
      uVar19 = (**(code **)puVar9)(param_1 + 0x5e0);
      (**(code **)PTR_DAT_04bbd568)(uVar16,uVar31,*(undefined4 *)(param_1 + 0x5b8),iVar12,uVar19);
    }
    FUN_03901694(&local_358,param_3);
    puVar9 = PTR_DAT_04bbd508;
    if (uStack_1e0._2_2_ != -1) {
      lVar23 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar23 + 0x580));
      uVar5 = (int)uStack_1e0._2_2_ - (uint)*(ushort *)(lVar23 + 0x5c0);
      if (*(uint *)(lVar23 + 0x5a0) <= uVar5) {
        uVar5 = 0;
      }
      lVar13 = *(long *)(lVar23 + 0x5a8) + (long)(int)uVar5 * 0x80;
      sVar8 = *(short *)(lVar13 + 0x76) + -1;
      *(short *)(lVar13 + 0x76) = sVar8;
      if (sVar8 == 0) {
        *(short *)(lVar23 + 0x5c4) = *(short *)(lVar23 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar23 + 0x580));
      uStack_1e0._0_4_ = CONCAT22(0xffff,(undefined2)uStack_1e0);
    }
    FUN_038fd0e0(&uStack_268);
    local_1d8 = puVar9 + 0x10;
    FUN_038fd0e0(local_180);
  }
  FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,plVar14);
  return;
}

