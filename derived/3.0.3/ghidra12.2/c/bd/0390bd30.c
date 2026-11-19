
void FUN_0390bd30(undefined4 *param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  short sVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360 [2];
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  char *pcStack_320;
  undefined4 local_318;
  undefined **local_310;
  undefined **local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0 [2];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  char *pcStack_270;
  undefined4 local_268;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined7 uStack_1e8;
  undefined1 local_1e1;
  undefined7 uStack_1e0;
  undefined1 auStack_1d8 [64];
  undefined8 local_198;
  undefined4 local_190;
  undefined2 local_164;
  undefined1 local_162;
  uint local_154;
  short local_14e;
  undefined *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_dc [2];
  uint local_d8;
  
  uVar16 = 0x1b;
  if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
    uVar16 = 0x11b;
  }
  (*DAT_04c62b58)(*(undefined8 *)(param_2 + 0xb8),uVar16);
  *(undefined8 *)(param_2 + 0x100) = 0;
  FUN_038e4cec(local_dc);
  local_dc[0] = 0;
  local_d8 = local_d8 & 0xfffffffe;
  FUN_038e4d90(local_dc,param_2);
  local_360[0] = 0xffffffff;
  local_2b0[0] = 0xffffffff;
  local_370 = 0;
  uStack_368 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_318 = 0x10000;
  local_268 = 0x10000;
  local_390 = 0;
  uStack_388 = 0;
  local_3a0 = 0;
  uStack_398 = 0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  pcStack_320 = "agl::TextureData";
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_278 = 0;
  pcStack_270 = "agl::TextureData";
  local_250 = 0xff;
  local_308 = &PTR_LAB_04b65dc0;
  local_24c = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0x80000000000;
  uStack_240 = 0;
  FUN_0390cee0(&local_228);
  local_138 = 0;
  local_310 = &local_148;
  local_128 = 0;
  local_140 = &DAT_3f8000003f800000;
  local_130 = &DAT_3f8000003f800000;
  local_148 = PTR_DAT_04bd1178 + 0x10;
  local_228 = *param_1;
  local_224 = param_1[1];
  uStack_1e0 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x47) >> 8);
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_3b8 = 0;
  local_220 = *(undefined8 *)(param_1 + 2);
  uStack_218 = *(undefined8 *)(param_1 + 4);
  uStack_1e8 = (undefined7)*(undefined8 *)(param_1 + 0x10);
  local_1e1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x38);
  local_3c8 = 0;
  local_3c0 = 0;
  local_210 = param_1[6];
  local_20c = param_1[7];
  local_208 = *(undefined8 *)(param_1 + 8);
  uStack_200 = *(undefined8 *)(param_1 + 10);
  local_1f8 = *(undefined8 *)(param_1 + 0xc);
  local_1f0 = *(undefined8 *)(param_1 + 0xe);
  FUN_038fd1e0(auStack_1d8);
  uVar14 = FUN_038fd2f0(auStack_1d8,param_1 + 0x14);
  local_198 = *(undefined8 *)(param_1 + 0x24);
  local_190 = param_1[0x26];
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(&local_154,0x10);
    if (bVar10) {
      cVar9 = ExclusiveMonitorsStatus();
      local_154 = local_154 | 1;
    }
  } while (cVar9 != '\0');
  local_164 = 0;
  local_162 = 1;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(&local_154,0x10);
    if (bVar10) {
      cVar9 = ExclusiveMonitorsStatus();
      local_154 = local_154 | 4;
    }
  } while (cVar9 != '\0');
  if (*(ushort *)(param_3 + 0x3a) < 10 &&
      (1 << (ulong)(*(ushort *)(param_3 + 0x3a) & 0x1f) & 0x350U) != 0) {
    uVar15 = (uint)*(ushort *)(param_3 + 0x34);
    uVar18 = uVar15;
  }
  else {
    uVar15 = (uint)*(ushort *)(param_3 + 0x34);
    uVar18 = 1;
  }
  if (uVar18 <= uVar15) {
    uVar18 = uVar15;
  }
  if ((*(ushort *)((long)param_1 + 0x3a) < 10) &&
     ((1 << (ulong)(*(ushort *)((long)param_1 + 0x3a) & 0x1f) & 0x350U) != 0)) {
    uVar17 = (uint)*(ushort *)(param_1 + 0xd);
    uVar15 = uVar17;
  }
  else {
    uVar17 = (uint)*(ushort *)(param_1 + 0xd);
    uVar15 = 1;
  }
  local_3c8 = param_3;
  if (0 < param_5) {
    if (uVar15 <= uVar17) {
      uVar15 = uVar17;
    }
    uVar17 = *(byte *)(param_3 + 0x39) - 1;
    uVar12 = *(byte *)((long)param_1 + 0x39) - 1;
    if (param_4 < 1) {
      uVar18 = param_5 + -1 + param_7;
      uVar15 = uVar18;
      if ((int)uVar17 <= (int)uVar18) {
        uVar15 = uVar17;
      }
      uVar17 = 0;
      if (-1 < (int)uVar18) {
        uVar17 = uVar15;
      }
      local_3c0 = CONCAT44(uVar17,(undefined4)local_3c0);
      uVar18 = param_5 + -1 + param_9;
      uVar15 = uVar18;
      if ((int)uVar12 <= (int)uVar18) {
        uVar15 = uVar12;
      }
      uVar17 = 0;
      if (-1 < (int)uVar18) {
        uVar17 = uVar15;
      }
      local_3b8 = CONCAT44(uVar17,(undefined4)local_3b8);
    }
    else {
      iVar19 = 0;
      do {
        uVar2 = iVar19 + param_7;
        uVar3 = iVar19 + param_9;
        uVar6 = uVar2;
        if ((int)uVar17 <= (int)uVar2) {
          uVar6 = uVar17;
        }
        uVar5 = 0;
        if (-1 < (int)uVar2) {
          uVar5 = uVar6;
        }
        uVar2 = uVar3;
        if ((int)uVar12 <= (int)uVar3) {
          uVar2 = uVar12;
        }
        local_3c0 = (ulong)uVar5 << 0x20;
        uVar6 = 0;
        if (-1 < (int)uVar3) {
          uVar6 = uVar2;
        }
        local_3b8 = (ulong)uVar6 << 0x20;
        iVar22 = param_6;
        iVar20 = param_8;
        iVar21 = param_4;
        do {
          iVar7 = iVar22;
          if ((int)(uVar18 - 1) <= iVar22) {
            iVar7 = uVar18 - 1;
          }
          iVar8 = 0;
          if (-1 < iVar22) {
            iVar8 = iVar7;
          }
          local_3c0 = CONCAT44(local_3c0._4_4_,iVar8);
          iVar7 = iVar20;
          if ((int)(uVar15 - 1) <= iVar20) {
            iVar7 = uVar15 - 1;
          }
          iVar8 = 0;
          if (-1 < iVar20) {
            iVar8 = iVar7;
          }
          local_3b8 = CONCAT44(local_3b8._4_4_,iVar8);
          uVar14 = FUN_0390b62c(uVar14,param_2,&local_3c8,0);
          iVar21 = iVar21 + -1;
          iVar20 = iVar20 + 1;
          iVar22 = iVar22 + 1;
        } while (iVar21 != 0);
        iVar19 = iVar19 + 1;
      } while (iVar19 != param_5);
    }
  }
  lVar13 = DAT_05ae78f0;
  if (local_14e != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar18 = (int)local_14e - (uint)*(ushort *)(lVar13 + 0x5c0);
    if (*(uint *)(lVar13 + 0x5a0) <= uVar18) {
      uVar18 = 0;
    }
    lVar4 = *(long *)(lVar13 + 0x5a8) + (long)(int)uVar18 * 0x80;
    sVar11 = *(short *)(lVar4 + 0x76) + -1;
    *(short *)(lVar4 + 0x76) = sVar11;
    if (sVar11 == 0) {
      *(short *)(lVar13 + 0x5c4) = *(short *)(lVar13 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar1);
    local_14e = -1;
  }
  FUN_038fd0e0(auStack_1d8);
  local_308 = (undefined **)(PTR_DAT_04bbd508 + 0x10);
  FUN_038fd0e0(local_2b0);
  FUN_038fd0e0(local_360);
  return;
}

