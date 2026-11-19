
void FUN_0390b240(undefined4 *param_1,long param_2,long param_3)

{
  MutexType *pMVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long local_3c8;
  uint local_3c0;
  uint local_3bc;
  uint local_3b8;
  uint uStack_3b4;
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
  
  uVar10 = 0x1b;
  if ((*(uint *)(*(long *)PTR_DAT_04bc1010 + 800) & 2) != 0) {
    uVar10 = 0x11b;
  }
  (*DAT_04c62b58)(*(undefined8 *)(param_2 + 0xb8),uVar10);
  *(undefined8 *)(param_2 + 0x100) = 0;
  FUN_038e4cec(local_dc);
  local_dc[0] = 0;
  local_d8 = local_d8 & 0xfffffffe;
  FUN_038e4d90(local_dc,param_2);
  local_370 = 0;
  uStack_368 = 0;
  local_360[0] = 0xffffffff;
  local_2b0[0] = 0xffffffff;
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
  uStack_3b4 = 0;
  local_220 = *(undefined8 *)(param_1 + 2);
  uStack_218 = *(undefined8 *)(param_1 + 4);
  local_3c8 = 0;
  local_3c0 = 0;
  local_3bc = 0;
  local_210 = param_1[6];
  local_20c = param_1[7];
  local_208 = *(undefined8 *)(param_1 + 8);
  uStack_200 = *(undefined8 *)(param_1 + 10);
  local_1f8 = *(undefined8 *)(param_1 + 0xc);
  local_1f0 = *(undefined8 *)(param_1 + 0xe);
  uStack_1e8 = (undefined7)*(undefined8 *)(param_1 + 0x10);
  local_1e1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x38);
  FUN_038fd1e0(auStack_1d8);
  uVar8 = FUN_038fd2f0(auStack_1d8,param_1 + 0x14);
  local_198 = *(undefined8 *)(param_1 + 0x24);
  local_190 = param_1[0x26];
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_154,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      local_154 = local_154 | 1;
    }
  } while (cVar3 != '\0');
  local_164 = 0;
  local_162 = 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_154,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      local_154 = local_154 | 4;
    }
  } while (cVar3 != '\0');
  uVar6 = (uint)*(byte *)((long)param_1 + 0x39);
  if ((uint)*(byte *)(param_3 + 0x39) <= (uint)*(byte *)((long)param_1 + 0x39)) {
    uVar6 = (uint)*(byte *)(param_3 + 0x39);
  }
  local_3c8 = param_3;
  if (uVar6 != 0) {
    uVar13 = 0;
    do {
      if (*(ushort *)((long)param_1 + 0x3a) < 10 &&
          (1 << (ulong)(*(ushort *)((long)param_1 + 0x3a) & 0x1f) & 0x350U) != 0) {
        uVar9 = (uint)*(ushort *)(param_1 + 0xd);
        uVar12 = uVar9;
      }
      else {
        uVar9 = (uint)*(ushort *)(param_1 + 0xd);
        uVar12 = 1;
      }
      uVar9 = uVar9 >> (ulong)(uVar13 & 0x1f);
      if ((int)uVar12 <= (int)uVar9) {
        uVar12 = uVar9;
      }
      if ((*(ushort *)(param_3 + 0x3a) < 10) &&
         ((1 << (ulong)(*(ushort *)(param_3 + 0x3a) & 0x1f) & 0x350U) != 0)) {
        uVar11 = (uint)*(ushort *)(param_3 + 0x34);
        uVar9 = uVar11;
      }
      else {
        uVar11 = (uint)*(ushort *)(param_3 + 0x34);
        uVar9 = 1;
      }
      uVar11 = uVar11 >> (ulong)(uVar13 & 0x1f);
      if ((int)uVar9 <= (int)uVar11) {
        uVar9 = uVar11;
      }
      if (uVar9 <= uVar12) {
        uVar12 = uVar9;
      }
      local_3bc = uVar13;
      uStack_3b4 = uVar13;
      if (uVar12 != 0) {
        uVar9 = 0;
        do {
          local_3c0 = uVar9;
          local_3b8 = uVar9;
          uVar8 = FUN_0390b62c(uVar8,param_2,&local_3c8,0);
          uVar9 = uVar9 + 1;
        } while (uVar12 != uVar9);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar6);
  }
  lVar7 = DAT_05ae78f0;
  if (local_14e != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar6 = (int)local_14e - (uint)*(ushort *)(lVar7 + 0x5c0);
    if (*(uint *)(lVar7 + 0x5a0) <= uVar6) {
      uVar6 = 0;
    }
    lVar2 = *(long *)(lVar7 + 0x5a8) + (long)(int)uVar6 * 0x80;
    sVar5 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar5;
    if (sVar5 == 0) {
      *(short *)(lVar7 + 0x5c4) = *(short *)(lVar7 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar1);
    local_14e = -1;
  }
  FUN_038fd0e0(auStack_1d8);
  local_308 = &PTR_LAB_049a8af0;
  FUN_038fd0e0(local_2b0);
  FUN_038fd0e0(local_360);
  return;
}

