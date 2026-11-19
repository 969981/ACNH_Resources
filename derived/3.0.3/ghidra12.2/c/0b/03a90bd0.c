
void FUN_03a90bd0(long param_1,long param_2,uint param_3,long param_4,long param_5,long param_6,
                 undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,undefined4 *param_10,
                 undefined4 *param_11)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  char cVar21;
  uint uVar22;
  undefined *puVar23;
  undefined ***pppuVar24;
  bool bVar25;
  bool bVar26;
  undefined8 uVar27;
  long lVar28;
  int iVar29;
  undefined4 uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  undefined8 uVar36;
  long *plVar37;
  uint uVar38;
  undefined8 uVar39;
  ulong uVar40;
  uint uVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint *puVar46;
  long lVar47;
  uint *puVar48;
  float *pfVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined4 *puVar53;
  ulong uVar54;
  uint *puVar55;
  undefined ***pppuVar56;
  undefined ***pppuVar57;
  long *plVar58;
  long lVar59;
  int iVar60;
  long lVar61;
  long lVar62;
  long *plVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  undefined8 *puVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined4 uVar73;
  float fVar74;
  float fVar75;
  ulong in_stack_fffffffffffff910;
  uint local_5d8;
  uint local_5ac;
  undefined **local_588;
  undefined8 local_580;
  undefined8 local_578;
  uint local_570;
  undefined8 local_56c;
  undefined1 auStack_530 [152];
  undefined *local_498;
  undefined1 *local_490;
  undefined8 local_488;
  undefined1 *local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined *local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  char *local_398;
  undefined4 local_390;
  undefined4 local_378;
  undefined4 local_374;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined **local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_334;
  undefined8 local_328;
  undefined2 local_320 [4];
  undefined8 local_318;
  long local_310;
  undefined8 local_308;
  long local_300;
  undefined1 auStack_2c0 [152];
  undefined *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 *local_210;
  long local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  char *local_128;
  undefined4 local_120;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined2 local_b0;
  
  uVar52 = *(uint *)(param_1 + 8);
  uVar45 = 0;
  if (param_4 != 0) {
    uVar45 = uVar52 >> 4 & 1;
  }
  uVar51 = 0;
  if (param_5 != 0) {
    uVar51 = uVar52 >> 3 & 1;
  }
  if ((uVar52 & 1) == 0) {
    return;
  }
  if (uVar45 == 0 && uVar51 == 0) {
    return;
  }
  iVar29 = 0;
  uVar52 = param_3;
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    uVar52 = 0;
  }
  uVar50 = *(uint *)(param_1 + 0x208);
  local_5ac = (uint)(*(float *)(param_6 + 0x10) - *(float *)(param_6 + 8));
  local_5d8 = *(uint *)(param_1 + 0x20c);
  if ((int)uVar50 <= (int)*(uint *)(param_1 + 0x20c)) {
    local_5d8 = uVar50;
  }
  uVar41 = (uint)(*(float *)(param_6 + 0x14) - *(float *)(param_6 + 0xc));
  if (1 < local_5ac && 1 < uVar41) {
    iVar29 = 0;
    uVar35 = local_5ac;
    uVar38 = uVar41;
    do {
      iVar29 = iVar29 + 1;
      if (uVar35 < 4) break;
      uVar35 = uVar35 >> 1;
      bVar25 = 3 < uVar38;
      uVar38 = uVar38 >> 1;
    } while (bVar25);
  }
  lVar64 = *(long *)(param_1 + 0x18);
  *(int *)(param_1 + 0x268) = iVar29;
  uVar35 = *(uint *)(param_1 + 0x210);
  if (0 < (int)uVar50) {
    uVar38 = 0;
    lVar42 = lVar64 + (long)(int)uVar52 * 0x5b0;
    uVar43 = local_5ac;
    uVar44 = uVar41;
    do {
      if ((uVar43 < 2) || (uVar44 < 2)) {
        if ((int)uVar38 <= (int)local_5d8) {
          local_5d8 = uVar38;
        }
        goto LAB_03a90da4;
      }
      uVar43 = uVar43 >> 1;
      uVar44 = uVar44 >> 1;
      uVar14 = uVar38;
      if (*(uint *)(lVar42 + 0x240) <= uVar38) {
        uVar14 = 0;
      }
      *(uint *)(*(long *)(lVar42 + 0x248) + (ulong)uVar14 * 0x20 + 0x18) = uVar43;
      uVar14 = uVar38;
      if (*(uint *)(lVar42 + 0x240) <= uVar38) {
        uVar14 = 0;
      }
      *(uint *)(*(long *)(lVar42 + 0x248) + (ulong)uVar14 * 0x20 + 0x1c) = uVar44;
      if ((int)uVar38 < (int)local_5d8) {
        uVar14 = uVar38;
        if (*(uint *)(lVar42 + 0x250) <= uVar38) {
          uVar14 = 0;
        }
        *(uint *)(*(long *)(lVar42 + 600) + (ulong)uVar14 * 0x20 + 0x18) = uVar43;
        uVar14 = uVar38;
        if (*(uint *)(lVar42 + 0x250) <= uVar38) {
          uVar14 = 0;
        }
        *(uint *)(*(long *)(lVar42 + 600) + (ulong)uVar14 * 0x20 + 0x1c) = uVar44;
      }
      uVar38 = uVar38 + 1;
    } while (uVar50 != uVar38);
  }
  uVar38 = uVar50;
LAB_03a90da4:
  if ((int)uVar38 <= (int)uVar35) {
    uVar35 = uVar38 - 1;
  }
  lVar42 = lVar64 + (long)(int)uVar52 * 0x5b0;
  uVar50 = uVar35;
  if (*(uint *)(lVar42 + 0x240) <= uVar35) {
    uVar50 = 0;
  }
  lVar47 = *(long *)(lVar42 + 0x248) + (long)(int)uVar50 * 0x20;
  *(undefined4 *)(lVar42 + 0x530) = *(undefined4 *)(lVar47 + 0x18);
  *(undefined4 *)(lVar42 + 0x534) = *(undefined4 *)(lVar47 + 0x1c);
  lVar47 = *(long *)(param_1 + 0x18);
  uVar50 = param_3;
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    uVar50 = 0;
  }
  lVar59 = lVar47 + (long)(int)uVar50 * 0x5b0;
  if ((*(byte *)(param_1 + 8) >> 6 & 1) == 0) {
    if (*(char *)(lVar59 + 0x528) != '\0') {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                   *(undefined8 *)(lVar47 + (long)(int)uVar50 * 0x5b0 + 0x2c8));
    }
    *(undefined1 *)(lVar59 + 0x528) = 0;
    lVar47 = lVar47 + (long)(int)uVar50 * 0x5b0;
    *(undefined8 *)(lVar47 + 0x2c8) = 0;
    *(undefined1 *)(lVar47 + 0x529) = 0;
  }
  else {
    if (*(char *)(lVar59 + 0x528) != '\0') {
      lVar61 = lVar47 + (long)(int)uVar50 * 0x5b0;
      if ((*(int *)(lVar61 + 0x520) == *(int *)(lVar61 + 0x530)) &&
         (lVar61 = lVar47 + (long)(int)uVar50 * 0x5b0,
         *(int *)(lVar61 + 0x524) == *(int *)(lVar61 + 0x534))) goto LAB_03a90f1c;
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                   *(undefined8 *)(lVar47 + (long)(int)uVar50 * 0x5b0 + 0x2c8));
    }
    *(undefined1 *)(lVar59 + 0x528) = 0;
    lVar47 = lVar47 + (long)(int)uVar50 * 0x5b0;
    *(undefined8 *)(lVar47 + 0x2c8) = 0;
    *(undefined1 *)(lVar47 + 0x529) = 0;
    FUN_03a8fcf0(lVar59 + 0x2c0,param_2,1,*(undefined4 *)(lVar47 + 0x530),
                 *(undefined4 *)(lVar47 + 0x534),"PrevFrameBuffer",1);
    (**(code **)(*(long *)(lVar47 + 0x3b0) + 0x38))(lVar47 + 0x3b0,param_2);
    local_318 = (undefined **)0x0;
    local_310 = 0x3f80000000000000;
    (**(code **)PTR_DAT_04bcfd90)(*(undefined8 *)(param_2 + 0xb8),0,&local_318,0xf);
  }
LAB_03a90f1c:
  puVar1 = (uint *)(lVar42 + 0x530);
  puVar2 = (uint *)(lVar42 + 0x534);
  if ((*(byte *)(param_1 + 8) >> 6 & 1) == 0) {
    if (*(char *)(lVar64 + (long)(int)uVar52 * 0x5b0 + 0x528) != '\0') {
      local_318 = (undefined **)0x0;
      local_310 = 0x3f80000000000000;
      (**(code **)PTR_DAT_04bcfd90)(*(undefined8 *)(param_2 + 0xb8),0,&local_318,0xf);
    }
    lVar47 = lVar64 + (long)(int)uVar52 * 0x5b0;
    lVar61 = *(long *)(lVar47 + 0x270);
    uVar40 = (ulong)(1 < *(uint *)(lVar47 + 0x268));
    lVar59 = lVar61 + uVar40 * 0x270;
    puVar67 = (undefined8 *)(lVar59 + 8);
    puVar3 = (uint *)(lVar59 + 0xe4);
    if (param_8 == (undefined4 *)0x0) {
      *puVar67 = param_7;
      *(undefined4 *)(lVar59 + 0x10) = *param_7;
      *(undefined4 *)(lVar59 + 0x14) = param_7[1];
      *(undefined8 *)(lVar59 + 0x18) = *(undefined8 *)(param_7 + 2);
      *(undefined8 *)(lVar59 + 0x20) = *(undefined8 *)(param_7 + 4);
      *(undefined4 *)(lVar59 + 0x28) = param_7[6];
      *(undefined4 *)(lVar59 + 0x2c) = param_7[7];
      *(undefined8 *)(lVar59 + 0x30) = *(undefined8 *)(param_7 + 8);
      *(undefined8 *)(lVar59 + 0x38) = *(undefined8 *)(param_7 + 10);
      uVar39 = *(undefined8 *)(param_7 + 0x10);
      uVar27 = *(undefined8 *)(param_7 + 0xc);
      uVar36 = *(undefined8 *)(param_7 + 0xe);
      *(undefined8 *)(lVar59 + 0x57) = *(undefined8 *)((long)param_7 + 0x47);
      *(undefined8 *)(lVar59 + 0x48) = uVar36;
      *(undefined8 *)(lVar59 + 0x50) = uVar39;
      *(undefined8 *)(lVar59 + 0x40) = uVar27;
      FUN_038fd1e0(lVar59 + 0x60);
      FUN_038fd2f0(lVar59 + 0x60,param_7 + 0x14);
      uVar27 = *(undefined8 *)(param_7 + 0x24);
      *(undefined4 *)(lVar59 + 0xa8) = param_7[0x26];
      *(undefined8 *)(lVar59 + 0xa0) = uVar27;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar25) {
          *puVar3 = *puVar3 | 1;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      *(undefined1 *)(lVar59 + 0xd4) = 1;
      *(undefined1 *)(lVar59 + 0xd5) = 1;
      *(undefined1 *)(lVar59 + 0xd6) = 1;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar25) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar61 = lVar61 + uVar40 * 0x270;
      FUN_01560750(lVar61 + 0x158,*puVar67,*(undefined1 *)(lVar61 + 0x216),
                   *(undefined2 *)(lVar61 + 0x214));
      *(undefined8 *)(lVar61 + 0x100) = 0;
      *(long *)(lVar61 + 0x110) = lVar61 + 0x158;
      *(uint *)(lVar61 + 0x260) = local_5ac;
      fVar71 = (float)local_5ac;
      *(uint *)(lVar61 + 0x264) = uVar41;
      fVar72 = (float)uVar41;
      *(float *)(lVar61 + 0xf8) = fVar71;
      *(float *)(lVar61 + 0xfc) = fVar72;
      *(float *)(lVar61 + 0x108) = fVar71;
      *(float *)(lVar61 + 0x10c) = fVar72;
      puVar67 = (undefined8 *)PTR_DAT_04bbd510;
      if (*(uint *)(lVar61 + 0x250) < 6) {
        fVar75 = fVar71;
        fVar74 = fVar72;
        if ((1 << (ulong)(*(uint *)(lVar61 + 0x250) & 0x1f) & 0x39U) == 0) {
          fVar75 = fVar72;
          fVar74 = fVar71;
        }
        *(undefined8 *)(lVar61 + 0x240) = 0;
        *(float *)(lVar61 + 0x248) = fVar75;
        *(float *)(lVar61 + 0x24c) = fVar74;
      }
      lVar59 = *(long *)(lVar47 + 0x270);
      *(undefined4 **)(lVar59 + 8) = param_9;
      *(undefined4 *)(lVar59 + 0x10) = *param_9;
      *(undefined4 *)(lVar59 + 0x14) = param_9[1];
      *(undefined8 *)(lVar59 + 0x18) = *(undefined8 *)(param_9 + 2);
      *(undefined8 *)(lVar59 + 0x20) = *(undefined8 *)(param_9 + 4);
      *(undefined4 *)(lVar59 + 0x28) = param_9[6];
      *(undefined4 *)(lVar59 + 0x2c) = param_9[7];
      *(undefined8 *)(lVar59 + 0x30) = *(undefined8 *)(param_9 + 8);
      *(undefined8 *)(lVar59 + 0x38) = *(undefined8 *)(param_9 + 10);
      uVar27 = *(undefined8 *)(param_9 + 0xc);
      uVar36 = *(undefined8 *)(param_9 + 0xe);
      uVar39 = *(undefined8 *)(param_9 + 0x10);
      *(undefined8 *)(lVar59 + 0x57) = *(undefined8 *)((long)param_9 + 0x47);
      *(undefined8 *)(lVar59 + 0x48) = uVar36;
      *(undefined8 *)(lVar59 + 0x50) = uVar39;
      *(undefined8 *)(lVar59 + 0x40) = uVar27;
      FUN_038fd1e0(lVar59 + 0x60);
      FUN_038fd2f0(lVar59 + 0x60,param_9 + 0x14);
      uVar73 = param_9[0x26];
      *(undefined8 *)(lVar59 + 0xa0) = *(undefined8 *)(param_9 + 0x24);
      puVar3 = (uint *)(lVar59 + 0xe4);
      *(undefined4 *)(lVar59 + 0xa8) = uVar73;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar25) {
          *puVar3 = *puVar3 | 1;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      *(undefined2 *)(lVar59 + 0xd4) = 0x101;
      *(undefined1 *)(lVar59 + 0xd6) = 1;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar25) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
    }
    else {
      *puVar67 = param_8;
      *(undefined4 *)(lVar59 + 0x10) = *param_8;
      *(undefined4 *)(lVar59 + 0x14) = param_8[1];
      *(undefined8 *)(lVar59 + 0x18) = *(undefined8 *)(param_8 + 2);
      *(undefined8 *)(lVar59 + 0x20) = *(undefined8 *)(param_8 + 4);
      *(undefined4 *)(lVar59 + 0x28) = param_8[6];
      *(undefined4 *)(lVar59 + 0x2c) = param_8[7];
      *(undefined8 *)(lVar59 + 0x30) = *(undefined8 *)(param_8 + 8);
      *(undefined8 *)(lVar59 + 0x38) = *(undefined8 *)(param_8 + 10);
      uVar27 = *(undefined8 *)(param_8 + 0xe);
      uVar36 = *(undefined8 *)(param_8 + 0x10);
      uVar39 = *(undefined8 *)((long)param_8 + 0x47);
      *(undefined8 *)(lVar59 + 0x40) = *(undefined8 *)(param_8 + 0xc);
      *(undefined8 *)(lVar59 + 0x57) = uVar39;
      *(undefined8 *)(lVar59 + 0x48) = uVar27;
      *(undefined8 *)(lVar59 + 0x50) = uVar36;
      FUN_038fd1e0(lVar59 + 0x60);
      FUN_038fd2f0(lVar59 + 0x60,param_8 + 0x14);
      uVar27 = *(undefined8 *)(param_8 + 0x24);
      *(undefined4 *)(lVar59 + 0xa8) = param_8[0x26];
      *(undefined8 *)(lVar59 + 0xa0) = uVar27;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar25) {
          *puVar3 = *puVar3 | 1;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      *(undefined1 *)(lVar59 + 0xd4) = 1;
      *(undefined1 *)(lVar59 + 0xd5) = 1;
      *(undefined1 *)(lVar59 + 0xd6) = 1;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar25) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar61 = lVar61 + uVar40 * 0x270;
      FUN_01560750(lVar61 + 0x158,*puVar67,*(undefined1 *)(lVar61 + 0x216),
                   *(undefined2 *)(lVar61 + 0x214));
      *(undefined8 *)(lVar61 + 0x100) = 0;
      *(long *)(lVar61 + 0x110) = lVar61 + 0x158;
      *(uint *)(lVar61 + 0x260) = local_5ac;
      fVar71 = (float)local_5ac;
      *(uint *)(lVar61 + 0x264) = uVar41;
      fVar72 = (float)uVar41;
      *(float *)(lVar61 + 0xf8) = fVar71;
      *(float *)(lVar61 + 0xfc) = fVar72;
      *(float *)(lVar61 + 0x108) = fVar71;
      *(float *)(lVar61 + 0x10c) = fVar72;
      puVar67 = (undefined8 *)PTR_DAT_04bbd510;
      if (*(uint *)(lVar61 + 0x250) < 6) {
        fVar75 = fVar71;
        fVar74 = fVar72;
        if ((1 << (ulong)(*(uint *)(lVar61 + 0x250) & 0x1f) & 0x39U) == 0) {
          fVar75 = fVar72;
          fVar74 = fVar71;
        }
        *(undefined8 *)(lVar61 + 0x240) = 0;
        *(float *)(lVar61 + 0x248) = fVar75;
        *(float *)(lVar61 + 0x24c) = fVar74;
      }
      lVar59 = *(long *)(lVar47 + 0x270);
      *(undefined4 **)(lVar59 + 8) = param_9;
      *(undefined4 *)(lVar59 + 0x10) = *param_9;
      *(undefined4 *)(lVar59 + 0x14) = param_9[1];
      *(undefined8 *)(lVar59 + 0x18) = *(undefined8 *)(param_9 + 2);
      *(undefined8 *)(lVar59 + 0x20) = *(undefined8 *)(param_9 + 4);
      *(undefined4 *)(lVar59 + 0x28) = param_9[6];
      *(undefined4 *)(lVar59 + 0x2c) = param_9[7];
      *(undefined8 *)(lVar59 + 0x30) = *(undefined8 *)(param_9 + 8);
      *(undefined8 *)(lVar59 + 0x38) = *(undefined8 *)(param_9 + 10);
      uVar27 = *(undefined8 *)(param_9 + 0xc);
      uVar36 = *(undefined8 *)(param_9 + 0xe);
      uVar39 = *(undefined8 *)(param_9 + 0x10);
      *(undefined8 *)(lVar59 + 0x57) = *(undefined8 *)((long)param_9 + 0x47);
      *(undefined8 *)(lVar59 + 0x48) = uVar36;
      *(undefined8 *)(lVar59 + 0x50) = uVar39;
      *(undefined8 *)(lVar59 + 0x40) = uVar27;
      FUN_038fd1e0(lVar59 + 0x60);
      FUN_038fd2f0(lVar59 + 0x60,param_9 + 0x14);
      uVar73 = param_9[0x26];
      *(undefined8 *)(lVar59 + 0xa0) = *(undefined8 *)(param_9 + 0x24);
      puVar3 = (uint *)(lVar59 + 0xe4);
      *(undefined4 *)(lVar59 + 0xa8) = uVar73;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar25) {
          *puVar3 = *puVar3 | 1;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      *(undefined2 *)(lVar59 + 0xd4) = 0x101;
      *(undefined1 *)(lVar59 + 0xd6) = 1;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar25) {
          *puVar3 = *puVar3 & 0xfffffffb | 4;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
    }
    FUN_01560750(lVar59 + 0x158,*(undefined8 *)(lVar59 + 8),*(undefined1 *)(lVar59 + 0x216),
                 *(undefined2 *)(lVar59 + 0x214));
    *(float *)(lVar59 + 0xf8) = fVar71;
    *(float *)(lVar59 + 0xfc) = fVar72;
    *(undefined8 *)(lVar59 + 0x100) = 0;
    *(float *)(lVar59 + 0x108) = fVar71;
    *(float *)(lVar59 + 0x10c) = fVar72;
    *(long *)(lVar59 + 0x110) = lVar59 + 0x158;
    *(uint *)(lVar59 + 0x260) = local_5ac;
    *(uint *)(lVar59 + 0x264) = uVar41;
    if (*(uint *)(lVar59 + 0x250) < 6) {
      if ((1 << (ulong)(*(uint *)(lVar59 + 0x250) & 0x1f) & 0x39U) == 0) {
        fVar75 = fVar72;
      }
      else {
        fVar75 = fVar71;
        fVar71 = fVar72;
      }
      goto LAB_03a917bc;
    }
  }
  else {
    uVar50 = *puVar1;
    lVar47 = lVar64 + (long)(int)uVar52 * 0x5b0;
    lVar59 = *(long *)(lVar47 + 0x270);
    puVar53 = *(undefined4 **)(lVar47 + 0x2c8);
    uVar40 = (ulong)(1 < *(uint *)(lVar47 + 0x268));
    uVar43 = *puVar2;
    lVar61 = lVar59 + uVar40 * 0x270;
    *(undefined8 *)(lVar61 + 8) = puVar53;
    *(undefined4 *)(lVar61 + 0x10) = *puVar53;
    *(undefined4 *)(lVar61 + 0x14) = puVar53[1];
    *(undefined8 *)(lVar61 + 0x18) = *(undefined8 *)(puVar53 + 2);
    *(undefined8 *)(lVar61 + 0x20) = *(undefined8 *)(puVar53 + 4);
    *(undefined4 *)(lVar61 + 0x28) = puVar53[6];
    *(undefined4 *)(lVar61 + 0x2c) = puVar53[7];
    *(undefined8 *)(lVar61 + 0x30) = *(undefined8 *)(puVar53 + 8);
    *(undefined8 *)(lVar61 + 0x38) = *(undefined8 *)(puVar53 + 10);
    uVar27 = *(undefined8 *)(puVar53 + 0xc);
    uVar36 = *(undefined8 *)(puVar53 + 0xe);
    uVar39 = *(undefined8 *)(puVar53 + 0x10);
    *(undefined8 *)(lVar61 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
    *(undefined8 *)(lVar61 + 0x48) = uVar36;
    *(undefined8 *)(lVar61 + 0x50) = uVar39;
    *(undefined8 *)(lVar61 + 0x40) = uVar27;
    FUN_038fd1e0(lVar61 + 0x60);
    FUN_038fd2f0(lVar61 + 0x60,puVar53 + 0x14);
    uVar73 = puVar53[0x26];
    *(undefined8 *)(lVar61 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
    puVar3 = (uint *)(lVar61 + 0xe4);
    *(undefined4 *)(lVar61 + 0xa8) = uVar73;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar25) {
        *puVar3 = *puVar3 | 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar28 = lVar59 + uVar40 * 0x270;
    *(undefined2 *)(lVar28 + 0xd4) = 0x101;
    *(undefined1 *)(lVar28 + 0xd6) = 1;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar25) {
        *puVar3 = *puVar3 & 0xfffffffb | 4;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar59 = lVar59 + uVar40 * 0x270;
    FUN_01560750(lVar59 + 0x158,*(undefined8 *)(lVar61 + 8),*(undefined1 *)(lVar59 + 0x216),
                 *(undefined2 *)(lVar59 + 0x214));
    *(undefined8 *)(lVar59 + 0x100) = 0;
    *(long *)(lVar59 + 0x110) = lVar59 + 0x158;
    fVar72 = (float)uVar50;
    *(uint *)(lVar59 + 0x260) = uVar50;
    *(uint *)(lVar59 + 0x264) = uVar43;
    fVar71 = (float)uVar43;
    *(float *)(lVar59 + 0x108) = fVar72;
    *(float *)(lVar59 + 0xf8) = fVar72;
    *(float *)(lVar59 + 0xfc) = fVar71;
    *(float *)(lVar59 + 0x10c) = fVar71;
    puVar67 = (undefined8 *)PTR_DAT_04bbd510;
    if (*(uint *)(lVar59 + 0x250) < 6) {
      if ((1 << (ulong)(*(uint *)(lVar59 + 0x250) & 0x1f) & 0x39U) == 0) {
        fVar75 = fVar72;
      }
      else {
        fVar75 = fVar71;
        fVar71 = fVar72;
      }
      *(undefined8 *)(lVar59 + 0x240) = 0;
      *(float *)(lVar59 + 0x248) = fVar71;
      *(float *)(lVar59 + 0x24c) = fVar75;
    }
    uVar50 = *puVar1;
    lVar59 = *(long *)(lVar47 + 0x270);
    puVar53 = *(undefined4 **)(lVar47 + 0x2c8);
    uVar43 = *puVar2;
    *(undefined4 **)(lVar59 + 8) = puVar53;
    *(undefined4 *)(lVar59 + 0x10) = *puVar53;
    *(undefined4 *)(lVar59 + 0x14) = puVar53[1];
    *(undefined8 *)(lVar59 + 0x18) = *(undefined8 *)(puVar53 + 2);
    *(undefined8 *)(lVar59 + 0x20) = *(undefined8 *)(puVar53 + 4);
    *(undefined4 *)(lVar59 + 0x28) = puVar53[6];
    *(undefined4 *)(lVar59 + 0x2c) = puVar53[7];
    *(undefined8 *)(lVar59 + 0x30) = *(undefined8 *)(puVar53 + 8);
    *(undefined8 *)(lVar59 + 0x38) = *(undefined8 *)(puVar53 + 10);
    uVar27 = *(undefined8 *)(puVar53 + 0xc);
    uVar36 = *(undefined8 *)(puVar53 + 0xe);
    uVar39 = *(undefined8 *)(puVar53 + 0x10);
    *(undefined8 *)(lVar59 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
    *(undefined8 *)(lVar59 + 0x40) = uVar27;
    *(undefined8 *)(lVar59 + 0x48) = uVar36;
    *(undefined8 *)(lVar59 + 0x50) = uVar39;
    FUN_038fd1e0(lVar59 + 0x60);
    FUN_038fd2f0(lVar59 + 0x60,puVar53 + 0x14);
    uVar73 = puVar53[0x26];
    *(undefined8 *)(lVar59 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
    puVar3 = (uint *)(lVar59 + 0xe4);
    *(undefined4 *)(lVar59 + 0xa8) = uVar73;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar25) {
        *puVar3 = *puVar3 | 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    *(undefined2 *)(lVar59 + 0xd4) = 0x101;
    *(undefined1 *)(lVar59 + 0xd6) = 1;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar25) {
        *puVar3 = *puVar3 & 0xfffffffb | 4;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    FUN_01560750(lVar59 + 0x158,*(undefined8 *)(lVar59 + 8),*(undefined1 *)(lVar59 + 0x216),
                 *(undefined2 *)(lVar59 + 0x214));
    fVar71 = (float)uVar50;
    *(undefined8 *)(lVar59 + 0x100) = 0;
    fVar72 = (float)uVar43;
    *(long *)(lVar59 + 0x110) = lVar59 + 0x158;
    *(uint *)(lVar59 + 0x260) = uVar50;
    *(uint *)(lVar59 + 0x264) = uVar43;
    *(float *)(lVar59 + 0xf8) = fVar71;
    *(float *)(lVar59 + 0xfc) = fVar72;
    *(float *)(lVar59 + 0x108) = fVar71;
    *(float *)(lVar59 + 0x10c) = fVar72;
    if (*(uint *)(lVar59 + 0x250) < 6) {
      if ((1 << (ulong)(*(uint *)(lVar59 + 0x250) & 0x1f) & 0x39U) == 0) {
        fVar75 = fVar72;
      }
      else {
        fVar75 = fVar71;
        fVar71 = fVar72;
      }
LAB_03a917bc:
      *(undefined8 *)(lVar59 + 0x240) = 0;
      *(float *)(lVar59 + 0x248) = fVar75;
      *(float *)(lVar59 + 0x24c) = fVar71;
    }
  }
  lVar47 = lVar64 + (long)(int)uVar52 * 0x5b0;
  puVar3 = (uint *)(lVar42 + 0x240);
  lVar59 = *(long *)(lVar47 + 0x270);
  uVar40 = (ulong)(2 < *(uint *)(lVar47 + 0x268));
  lVar61 = lVar59 + uVar40 * 0x4e0;
  *(undefined8 *)(lVar61 + 8) = param_10;
  *(undefined4 *)(lVar61 + 0x10) = *param_10;
  *(undefined4 *)(lVar61 + 0x14) = param_10[1];
  *(undefined8 *)(lVar61 + 0x18) = *(undefined8 *)(param_10 + 2);
  *(undefined8 *)(lVar61 + 0x20) = *(undefined8 *)(param_10 + 4);
  *(undefined4 *)(lVar61 + 0x28) = param_10[6];
  *(undefined4 *)(lVar61 + 0x2c) = param_10[7];
  *(undefined8 *)(lVar61 + 0x30) = *(undefined8 *)(param_10 + 8);
  *(undefined8 *)(lVar61 + 0x38) = *(undefined8 *)(param_10 + 10);
  uVar27 = *(undefined8 *)(param_10 + 0xc);
  uVar36 = *(undefined8 *)(param_10 + 0xe);
  uVar39 = *(undefined8 *)(param_10 + 0x10);
  *(undefined8 *)(lVar61 + 0x57) = *(undefined8 *)((long)param_10 + 0x47);
  plVar4 = (long *)(lVar42 + 0x248);
  *(undefined8 *)(lVar61 + 0x48) = uVar36;
  *(undefined8 *)(lVar61 + 0x50) = uVar39;
  *(undefined8 *)(lVar61 + 0x40) = uVar27;
  puVar5 = (uint *)(lVar47 + 0x268);
  plVar6 = (long *)(lVar47 + 0x270);
  FUN_038fd1e0(lVar61 + 0x60);
  FUN_038fd2f0(lVar61 + 0x60,param_10 + 0x14);
  uVar73 = param_10[0x26];
  *(undefined8 *)(lVar61 + 0xa0) = *(undefined8 *)(param_10 + 0x24);
  puVar48 = (uint *)(lVar61 + 0xe4);
  *(undefined4 *)(lVar61 + 0xa8) = uVar73;
  do {
    cVar21 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
    if (bVar25) {
      *puVar48 = *puVar48 | 1;
      cVar21 = ExclusiveMonitorsStatus();
    }
  } while (cVar21 != '\0');
  lVar42 = lVar59 + uVar40 * 0x4e0;
  *(undefined2 *)(lVar42 + 0xd4) = 0x101;
  *(undefined1 *)(lVar42 + 0xd6) = 1;
  do {
    cVar21 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
    if (bVar25) {
      *puVar48 = *puVar48 & 0xfffffffb | 4;
      cVar21 = ExclusiveMonitorsStatus();
    }
  } while (cVar21 != '\0');
  lVar59 = lVar59 + uVar40 * 0x4e0;
  FUN_01560750(lVar59 + 0x158,*(undefined8 *)(lVar61 + 8),*(undefined1 *)(lVar59 + 0x216),
               *(undefined2 *)(lVar59 + 0x214));
  *(undefined8 *)(lVar59 + 0x100) = 0;
  *(long *)(lVar59 + 0x110) = lVar59 + 0x158;
  *(uint *)(lVar59 + 0x264) = uVar41;
  fVar71 = (float)local_5ac;
  *(uint *)(lVar59 + 0x260) = local_5ac;
  fVar72 = (float)uVar41;
  *(float *)(lVar59 + 0xf8) = fVar71;
  *(float *)(lVar59 + 0xfc) = fVar72;
  *(float *)(lVar59 + 0x108) = fVar71;
  *(float *)(lVar59 + 0x10c) = fVar72;
  if (*(uint *)(lVar59 + 0x250) < 6) {
    fVar75 = fVar71;
    fVar74 = fVar72;
    if ((1 << (ulong)(*(uint *)(lVar59 + 0x250) & 0x1f) & 0x39U) == 0) {
      fVar75 = fVar72;
      fVar74 = fVar71;
    }
    *(undefined8 *)(lVar59 + 0x240) = 0;
    *(float *)(lVar59 + 0x248) = fVar75;
    *(float *)(lVar59 + 0x24c) = fVar74;
  }
  lVar47 = *plVar6;
  lVar42 = 3;
  if (*puVar5 < 4) {
    lVar42 = 0;
  }
  lVar59 = lVar47 + lVar42 * 0x270;
  *(undefined8 *)(lVar59 + 8) = param_11;
  *(undefined4 *)(lVar59 + 0x10) = *param_11;
  *(undefined4 *)(lVar59 + 0x14) = param_11[1];
  *(undefined8 *)(lVar59 + 0x18) = *(undefined8 *)(param_11 + 2);
  *(undefined8 *)(lVar59 + 0x20) = *(undefined8 *)(param_11 + 4);
  *(undefined4 *)(lVar59 + 0x28) = param_11[6];
  *(undefined4 *)(lVar59 + 0x2c) = param_11[7];
  *(undefined8 *)(lVar59 + 0x30) = *(undefined8 *)(param_11 + 8);
  *(undefined8 *)(lVar59 + 0x38) = *(undefined8 *)(param_11 + 10);
  uVar27 = *(undefined8 *)(param_11 + 0xc);
  uVar36 = *(undefined8 *)(param_11 + 0xe);
  uVar39 = *(undefined8 *)(param_11 + 0x10);
  *(undefined8 *)(lVar59 + 0x57) = *(undefined8 *)((long)param_11 + 0x47);
  *(undefined8 *)(lVar59 + 0x40) = uVar27;
  *(undefined8 *)(lVar59 + 0x48) = uVar36;
  *(undefined8 *)(lVar59 + 0x50) = uVar39;
  FUN_038fd1e0(lVar59 + 0x60);
  FUN_038fd2f0(lVar59 + 0x60,param_11 + 0x14);
  uVar73 = param_11[0x26];
  *(undefined8 *)(lVar59 + 0xa0) = *(undefined8 *)(param_11 + 0x24);
  puVar48 = (uint *)(lVar59 + 0xe4);
  *(undefined4 *)(lVar59 + 0xa8) = uVar73;
  do {
    cVar21 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
    if (bVar25) {
      *puVar48 = *puVar48 | 1;
      cVar21 = ExclusiveMonitorsStatus();
    }
  } while (cVar21 != '\0');
  lVar61 = lVar47 + lVar42 * 0x270;
  *(undefined2 *)(lVar61 + 0xd4) = 0x101;
  *(undefined1 *)(lVar61 + 0xd6) = 1;
  do {
    cVar21 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
    if (bVar25) {
      *puVar48 = *puVar48 & 0xfffffffb | 4;
      cVar21 = ExclusiveMonitorsStatus();
    }
  } while (cVar21 != '\0');
  lVar47 = lVar47 + lVar42 * 0x270;
  FUN_01560750(lVar47 + 0x158,*(undefined8 *)(lVar59 + 8),*(undefined1 *)(lVar47 + 0x216),
               *(undefined2 *)(lVar47 + 0x214));
  *(float *)(lVar47 + 0xf8) = fVar71;
  *(float *)(lVar47 + 0xfc) = fVar72;
  *(undefined8 *)(lVar47 + 0x100) = 0;
  *(uint *)(lVar47 + 0x260) = local_5ac;
  *(float *)(lVar47 + 0x108) = fVar71;
  *(float *)(lVar47 + 0x10c) = fVar72;
  *(long *)(lVar47 + 0x110) = lVar47 + 0x158;
  *(uint *)(lVar47 + 0x264) = uVar41;
  if (*(uint *)(lVar47 + 0x250) < 6) {
    if ((1 << (ulong)(*(uint *)(lVar47 + 0x250) & 0x1f) & 0x39U) == 0) {
      fVar75 = fVar72;
    }
    else {
      fVar75 = fVar71;
      fVar71 = fVar72;
    }
    *(undefined8 *)(lVar47 + 0x240) = 0;
    *(float *)(lVar47 + 0x248) = fVar75;
    *(float *)(lVar47 + 0x24c) = fVar71;
  }
  lVar42 = param_1 + 0x20;
  lVar61 = lVar64 + (long)(int)uVar52 * 0x5b0;
  lVar47 = *(long *)(lVar61 + 0x290);
  uVar40 = (ulong)(1 < *(uint *)(lVar61 + 0x288));
  lVar59 = *(long *)(lVar61 + 0x2b0);
  uVar31 = (ulong)(1 < *(uint *)(lVar61 + 0x2a8));
  FUN_038e4d90(lVar42,param_2);
  if (0 < (int)uVar38) {
    uVar50 = 0;
    lVar28 = lVar64 + (long)(int)uVar52 * 0x5b0;
    plVar7 = (long *)(lVar28 + 600);
    do {
      if ((local_5ac < 2) || (uVar41 < 2)) {
        if ((int)uVar50 <= (int)local_5d8) {
          local_5d8 = uVar50;
        }
        uVar38 = uVar50;
        goto LAB_03a92ad0;
      }
      uVar44 = uVar41 >> 1;
      uVar14 = local_5ac >> 1;
      uVar43 = uVar50;
      if (*puVar3 <= uVar50) {
        uVar43 = 0;
      }
      lVar66 = *plVar4 + (ulong)uVar43 * 0x20;
      puVar48 = (uint *)(lVar66 + 8);
      plVar63 = (long *)(lVar66 + 0x10);
      FUN_03a8fcf0(*plVar63 + (ulong)(1 < *puVar48) * 0x270,param_2,1,uVar14,uVar44,"difbuf_light",0
                  );
      lVar66 = 0x4e0;
      if (*puVar48 < 3) {
        lVar66 = 0;
      }
      FUN_03a8fcf0(*plVar63 + lVar66,param_2,2,uVar14,uVar44,"difbuf_normal",0);
      lVar66 = 0x750;
      if (*puVar48 < 4) {
        lVar66 = 0;
      }
      FUN_03a8fcf0(*plVar63 + lVar66,param_2,3,uVar14,uVar44,"difbuf_depth",0);
      lVar66 = *plVar63;
      puVar53 = *(undefined4 **)(*plVar6 + 8);
      *(undefined4 **)(lVar66 + 8) = puVar53;
      *(undefined4 *)(lVar66 + 0x10) = *puVar53;
      *(undefined4 *)(lVar66 + 0x14) = puVar53[1];
      *(undefined8 *)(lVar66 + 0x18) = *(undefined8 *)(puVar53 + 2);
      *(undefined8 *)(lVar66 + 0x20) = *(undefined8 *)(puVar53 + 4);
      *(undefined4 *)(lVar66 + 0x28) = puVar53[6];
      *(undefined4 *)(lVar66 + 0x2c) = puVar53[7];
      *(undefined8 *)(lVar66 + 0x30) = *(undefined8 *)(puVar53 + 8);
      *(undefined8 *)(lVar66 + 0x38) = *(undefined8 *)(puVar53 + 10);
      uVar27 = *(undefined8 *)(puVar53 + 0xc);
      uVar36 = *(undefined8 *)(puVar53 + 0xe);
      uVar39 = *(undefined8 *)(puVar53 + 0x10);
      *(undefined8 *)(lVar66 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
      *(undefined8 *)(lVar66 + 0x40) = uVar27;
      *(undefined8 *)(lVar66 + 0x48) = uVar36;
      *(undefined8 *)(lVar66 + 0x50) = uVar39;
      FUN_038fd1e0(lVar66 + 0x60);
      FUN_038fd2f0(lVar66 + 0x60,puVar53 + 0x14);
      uVar73 = puVar53[0x26];
      *(undefined8 *)(lVar66 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
      puVar46 = (uint *)(lVar66 + 0xe4);
      *(undefined4 *)(lVar66 + 0xa8) = uVar73;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar46,0x10);
        if (bVar25) {
          *puVar46 = *puVar46 | 1;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      *(undefined2 *)(lVar66 + 0xd4) = 0x101;
      *(undefined1 *)(lVar66 + 0xd6) = 1;
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar46,0x10);
        if (bVar25) {
          *puVar46 = *puVar46 & 0xfffffffb | 4;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      FUN_01560750(lVar66 + 0x158,*(undefined8 *)(lVar66 + 8),*(undefined1 *)(lVar66 + 0x216),
                   *(undefined2 *)(lVar66 + 0x214));
      *(undefined8 *)(lVar66 + 0x100) = 0;
      *(long *)(lVar66 + 0x110) = lVar66 + 0x158;
      *(uint *)(lVar66 + 0x260) = uVar14;
      fVar71 = (float)uVar14;
      *(uint *)(lVar66 + 0x264) = uVar44;
      *(float *)(lVar66 + 0xf8) = fVar71;
      fVar72 = (float)uVar44;
      *(float *)(lVar66 + 0xfc) = fVar72;
      *(float *)(lVar66 + 0x108) = fVar71;
      *(float *)(lVar66 + 0x10c) = fVar72;
      if (*(uint *)(lVar66 + 0x250) < 6) {
        if ((1 << (ulong)(*(uint *)(lVar66 + 0x250) & 0x1f) & 0x39U) == 0) {
          fVar75 = fVar72;
          if (1 < uVar41) {
            fVar75 = 0.0;
          }
          fVar74 = 0.0;
          if (1 < uVar41) {
            fVar74 = fVar72;
          }
          *(float *)(lVar66 + 0x240) = fVar75;
          *(float *)(lVar66 + 0x248) = fVar74;
          fVar75 = fVar71;
          if (1 < local_5ac) {
            fVar75 = 0.0;
          }
          fVar74 = 0.0;
          if (1 < local_5ac) {
            fVar74 = fVar71;
          }
        }
        else {
          fVar75 = fVar71;
          if (1 < local_5ac) {
            fVar75 = 0.0;
          }
          fVar74 = 0.0;
          if (1 < local_5ac) {
            fVar74 = fVar71;
          }
          *(float *)(lVar66 + 0x240) = fVar75;
          *(float *)(lVar66 + 0x248) = fVar74;
          fVar75 = fVar72;
          if (1 < uVar41) {
            fVar75 = 0.0;
          }
          fVar74 = 0.0;
          if (1 < uVar41) {
            fVar74 = fVar72;
          }
        }
        *(float *)(lVar66 + 0x244) = fVar75;
        *(float *)(lVar66 + 0x24c) = fVar74;
      }
      if (uVar50 == 0) {
        lVar66 = 0x4e0;
        if (*puVar48 < 3) {
          lVar66 = 0;
        }
        lVar65 = 0x4e0;
        if (*puVar5 < 3) {
          lVar65 = 0;
        }
        FUN_03a96ac0(param_1,param_2,0,*plVar63 + lVar66 + 0xf0,*plVar6 + lVar65 + 0x10);
        lVar66 = 0x750;
        if (*puVar48 < 4) {
          lVar66 = 0;
        }
        lVar65 = 0x750;
        if (*puVar5 < 4) {
          lVar65 = 0;
        }
        FUN_03a96ac0(param_1,param_2,0,*plVar63 + lVar66 + 0xf0,*plVar6 + lVar65 + 0x10);
        puVar67 = (undefined8 *)PTR_DAT_04bbd510;
        if (0 < (int)local_5d8) {
          lVar65 = *plVar7;
          lVar33 = *(long *)(lVar65 + 0x10);
          uVar32 = (ulong)(2 < *(uint *)(lVar65 + 8));
          lVar66 = 0x4e0;
          if (*puVar48 < 3) {
            lVar66 = 0;
          }
          lVar62 = lVar33 + uVar32 * 0x4e0;
          puVar53 = *(undefined4 **)(*plVar63 + lVar66 + 8);
          *(undefined8 *)(lVar62 + 8) = puVar53;
          *(undefined4 *)(lVar62 + 0x10) = *puVar53;
          *(undefined4 *)(lVar62 + 0x14) = puVar53[1];
          *(undefined8 *)(lVar62 + 0x18) = *(undefined8 *)(puVar53 + 2);
          *(undefined8 *)(lVar62 + 0x20) = *(undefined8 *)(puVar53 + 4);
          *(undefined4 *)(lVar62 + 0x28) = puVar53[6];
          *(undefined4 *)(lVar62 + 0x2c) = puVar53[7];
          *(undefined8 *)(lVar62 + 0x30) = *(undefined8 *)(puVar53 + 8);
          *(undefined8 *)(lVar62 + 0x38) = *(undefined8 *)(puVar53 + 10);
          uVar27 = *(undefined8 *)(puVar53 + 0xc);
          uVar36 = *(undefined8 *)(puVar53 + 0xe);
          uVar39 = *(undefined8 *)(puVar53 + 0x10);
          *(undefined8 *)(lVar62 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
          *(undefined8 *)(lVar62 + 0x48) = uVar36;
          *(undefined8 *)(lVar62 + 0x50) = uVar39;
          *(undefined8 *)(lVar62 + 0x40) = uVar27;
          FUN_038fd1e0(lVar62 + 0x60);
          FUN_038fd2f0(lVar62 + 0x60,puVar53 + 0x14);
          uVar73 = puVar53[0x26];
          *(undefined8 *)(lVar62 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
          puVar46 = (uint *)(lVar62 + 0xe4);
          *(undefined4 *)(lVar62 + 0xa8) = uVar73;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar46,0x10);
            if (bVar25) {
              *puVar46 = *puVar46 | 1;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          lVar66 = lVar33 + uVar32 * 0x4e0;
          *(undefined2 *)(lVar66 + 0xd4) = 0x101;
          *(undefined1 *)(lVar66 + 0xd6) = 1;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar46,0x10);
            if (bVar25) {
              *puVar46 = *puVar46 & 0xfffffffb | 4;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          lVar33 = lVar33 + uVar32 * 0x4e0;
          FUN_01560750(lVar33 + 0x158,*(undefined8 *)(lVar62 + 8),*(undefined1 *)(lVar33 + 0x216),
                       *(undefined2 *)(lVar33 + 0x214));
          *(float *)(lVar33 + 0xf8) = fVar71;
          *(float *)(lVar33 + 0xfc) = fVar72;
          *(undefined8 *)(lVar33 + 0x100) = 0;
          *(uint *)(lVar33 + 0x260) = uVar14;
          *(float *)(lVar33 + 0x108) = fVar71;
          *(float *)(lVar33 + 0x10c) = fVar72;
          *(long *)(lVar33 + 0x110) = lVar33 + 0x158;
          *(uint *)(lVar33 + 0x264) = uVar44;
          puVar67 = (undefined8 *)PTR_DAT_04bbd510;
          if (*(uint *)(lVar33 + 0x250) < 6) {
            if ((1 << (ulong)(*(uint *)(lVar33 + 0x250) & 0x1f) & 0x39U) == 0) {
              fVar75 = fVar72;
              if (1 < uVar41) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < uVar41) {
                fVar74 = fVar72;
              }
              *(float *)(lVar33 + 0x240) = fVar75;
              *(float *)(lVar33 + 0x248) = fVar74;
              fVar75 = fVar71;
              if (1 < local_5ac) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < local_5ac) {
                fVar74 = fVar71;
              }
            }
            else {
              fVar75 = fVar71;
              if (1 < local_5ac) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < local_5ac) {
                fVar74 = fVar71;
              }
              *(float *)(lVar33 + 0x240) = fVar75;
              *(float *)(lVar33 + 0x248) = fVar74;
              fVar75 = fVar72;
              if (1 < uVar41) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < uVar41) {
                fVar74 = fVar72;
              }
            }
            *(float *)(lVar33 + 0x244) = fVar75;
            *(float *)(lVar33 + 0x24c) = fVar74;
          }
          lVar33 = *(long *)(lVar65 + 0x10);
          lVar66 = 3;
          if (*(uint *)(lVar65 + 8) < 4) {
            lVar66 = 0;
          }
          lVar62 = 0x750;
          if (*puVar48 < 4) {
            lVar62 = 0;
          }
          lVar34 = lVar33 + lVar66 * 0x270;
          puVar53 = *(undefined4 **)(*plVar63 + lVar62 + 8);
          *(undefined8 *)(lVar34 + 8) = puVar53;
          *(undefined4 *)(lVar34 + 0x10) = *puVar53;
          *(undefined4 *)(lVar34 + 0x14) = puVar53[1];
          *(undefined8 *)(lVar34 + 0x18) = *(undefined8 *)(puVar53 + 2);
          *(undefined8 *)(lVar34 + 0x20) = *(undefined8 *)(puVar53 + 4);
          *(undefined4 *)(lVar34 + 0x28) = puVar53[6];
          *(undefined4 *)(lVar34 + 0x2c) = puVar53[7];
          *(undefined8 *)(lVar34 + 0x30) = *(undefined8 *)(puVar53 + 8);
          *(undefined8 *)(lVar34 + 0x38) = *(undefined8 *)(puVar53 + 10);
          uVar27 = *(undefined8 *)(puVar53 + 0xc);
          uVar36 = *(undefined8 *)(puVar53 + 0xe);
          uVar39 = *(undefined8 *)(puVar53 + 0x10);
          *(undefined8 *)(lVar34 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
          *(undefined8 *)(lVar34 + 0x40) = uVar27;
          *(undefined8 *)(lVar34 + 0x48) = uVar36;
          *(undefined8 *)(lVar34 + 0x50) = uVar39;
          FUN_038fd1e0(lVar34 + 0x60);
          FUN_038fd2f0(lVar34 + 0x60,puVar53 + 0x14);
          uVar73 = puVar53[0x26];
          *(undefined8 *)(lVar34 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
          puVar48 = (uint *)(lVar34 + 0xe4);
          *(undefined4 *)(lVar34 + 0xa8) = uVar73;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = *puVar48 | 1;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          lVar62 = lVar33 + lVar66 * 0x270;
          *(undefined2 *)(lVar62 + 0xd4) = 0x101;
          *(undefined1 *)(lVar62 + 0xd6) = 1;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = *puVar48 & 0xfffffffb | 4;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          lVar33 = lVar33 + lVar66 * 0x270;
          FUN_01560750(lVar33 + 0x158,*(undefined8 *)(lVar34 + 8),*(undefined1 *)(lVar33 + 0x216),
                       *(undefined2 *)(lVar33 + 0x214));
          *(float *)(lVar33 + 0xf8) = fVar71;
          *(float *)(lVar33 + 0xfc) = fVar72;
          *(undefined8 *)(lVar33 + 0x100) = 0;
          *(float *)(lVar33 + 0x108) = fVar71;
          *(float *)(lVar33 + 0x10c) = fVar72;
          *(uint *)(lVar33 + 0x260) = uVar14;
          *(long *)(lVar33 + 0x110) = lVar33 + 0x158;
          *(uint *)(lVar33 + 0x264) = uVar44;
          if (*(uint *)(lVar33 + 0x250) < 6) {
            if ((1 << (ulong)(*(uint *)(lVar33 + 0x250) & 0x1f) & 0x39U) == 0) {
              fVar75 = fVar72;
              if (1 < uVar41) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < uVar41) {
                fVar74 = fVar72;
              }
              *(float *)(lVar33 + 0x240) = fVar75;
              *(float *)(lVar33 + 0x248) = fVar74;
              fVar75 = fVar71;
              if (1 < local_5ac) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < local_5ac) {
                fVar74 = fVar71;
              }
            }
            else {
              fVar75 = fVar71;
              if (1 < local_5ac) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < local_5ac) {
                fVar74 = fVar71;
              }
              *(float *)(lVar33 + 0x240) = fVar75;
              *(float *)(lVar33 + 0x248) = fVar74;
              fVar75 = fVar72;
              if (1 < uVar41) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < uVar41) {
                fVar74 = fVar72;
              }
            }
            *(float *)(lVar33 + 0x244) = fVar75;
            *(float *)(lVar33 + 0x24c) = fVar74;
          }
          lVar66 = *(long *)(lVar65 + 0x10);
          puVar53 = *(undefined4 **)(*plVar63 + 8);
          *(undefined4 **)(lVar66 + 8) = puVar53;
          *(undefined4 *)(lVar66 + 0x10) = *puVar53;
          *(undefined4 *)(lVar66 + 0x14) = puVar53[1];
          *(undefined8 *)(lVar66 + 0x18) = *(undefined8 *)(puVar53 + 2);
          *(undefined8 *)(lVar66 + 0x20) = *(undefined8 *)(puVar53 + 4);
          *(undefined4 *)(lVar66 + 0x28) = puVar53[6];
          *(undefined4 *)(lVar66 + 0x2c) = puVar53[7];
          *(undefined8 *)(lVar66 + 0x30) = *(undefined8 *)(puVar53 + 8);
          *(undefined8 *)(lVar66 + 0x38) = *(undefined8 *)(puVar53 + 10);
          uVar27 = *(undefined8 *)(puVar53 + 0xc);
          uVar36 = *(undefined8 *)(puVar53 + 0xe);
          uVar39 = *(undefined8 *)(puVar53 + 0x10);
          *(undefined8 *)(lVar66 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
          *(undefined8 *)(lVar66 + 0x40) = uVar27;
          *(undefined8 *)(lVar66 + 0x48) = uVar36;
          *(undefined8 *)(lVar66 + 0x50) = uVar39;
          FUN_038fd1e0(lVar66 + 0x60);
          FUN_038fd2f0(lVar66 + 0x60,puVar53 + 0x14);
          uVar73 = puVar53[0x26];
          *(undefined8 *)(lVar66 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
          puVar48 = (uint *)(lVar66 + 0xe4);
          *(undefined4 *)(lVar66 + 0xa8) = uVar73;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = *puVar48 | 1;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          *(undefined2 *)(lVar66 + 0xd4) = 0x101;
          *(undefined1 *)(lVar66 + 0xd6) = 1;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = *puVar48 & 0xfffffffb | 4;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          goto LAB_03a92a24;
        }
      }
      else {
        uVar22 = uVar50 - 1;
        uVar43 = uVar22;
        if (*puVar3 <= uVar22) {
          uVar43 = 0;
        }
        lVar66 = 0x4e0;
        if (*puVar48 < 3) {
          lVar66 = 0;
        }
        lVar65 = *plVar4 + (long)(int)uVar43 * 0x20;
        lVar33 = 0x4e0;
        if (*(uint *)(lVar65 + 8) < 3) {
          lVar33 = 0;
        }
        FUN_03a96ac0(param_1,param_2,*(undefined4 *)(param_1 + 500),*plVar63 + lVar66 + 0xf0,
                     *(long *)(lVar65 + 0x10) + lVar33 + 0x10);
        lVar66 = 0x750;
        if (*puVar48 < 4) {
          lVar66 = 0;
        }
        lVar33 = 0x750;
        if (*(uint *)(lVar65 + 8) < 4) {
          lVar33 = 0;
        }
        FUN_03a96ac0(param_1,param_2,*(undefined4 *)(param_1 + 0x1f8),*plVar63 + lVar66 + 0xf0,
                     *(long *)(lVar65 + 0x10) + lVar33 + 0x10);
        puVar67 = (undefined8 *)PTR_DAT_04bbd510;
        if ((int)uVar50 < (int)local_5d8) {
          uVar17 = *(uint *)(lVar28 + 0x250);
          lVar66 = *plVar7;
          uVar43 = uVar50;
          if (uVar17 <= uVar50) {
            uVar43 = 0;
          }
          if (uVar17 <= uVar22) {
            uVar22 = 0;
          }
          lVar65 = lVar66 + (ulong)uVar43 * 0x20;
          puVar46 = (uint *)(lVar65 + 8);
          plVar58 = (long *)(lVar65 + 0x10);
          lVar65 = *plVar58;
          uVar32 = (ulong)(2 < *puVar46);
          if (*(int *)(param_1 + 500) == *(int *)(param_1 + 0x200)) {
            lVar62 = lVar65 + uVar32 * 0x4e0;
            lVar33 = 0x4e0;
            if (*puVar48 < 3) {
              lVar33 = 0;
            }
            puVar53 = *(undefined4 **)(*plVar63 + lVar33 + 8);
            *(undefined8 *)(lVar62 + 8) = puVar53;
            *(undefined4 *)(lVar62 + 0x10) = *puVar53;
            *(undefined4 *)(lVar62 + 0x14) = puVar53[1];
            *(undefined8 *)(lVar62 + 0x18) = *(undefined8 *)(puVar53 + 2);
            *(undefined8 *)(lVar62 + 0x20) = *(undefined8 *)(puVar53 + 4);
            *(undefined4 *)(lVar62 + 0x28) = puVar53[6];
            *(undefined4 *)(lVar62 + 0x2c) = puVar53[7];
            *(undefined8 *)(lVar62 + 0x30) = *(undefined8 *)(puVar53 + 8);
            *(undefined8 *)(lVar62 + 0x38) = *(undefined8 *)(puVar53 + 10);
            uVar27 = *(undefined8 *)(puVar53 + 0xc);
            uVar36 = *(undefined8 *)(puVar53 + 0xe);
            uVar39 = *(undefined8 *)(puVar53 + 0x10);
            *(undefined8 *)(lVar62 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
            *(undefined8 *)(lVar62 + 0x48) = uVar36;
            *(undefined8 *)(lVar62 + 0x50) = uVar39;
            *(undefined8 *)(lVar62 + 0x40) = uVar27;
            FUN_038fd1e0(lVar62 + 0x60);
            FUN_038fd2f0(lVar62 + 0x60,puVar53 + 0x14);
            uVar73 = puVar53[0x26];
            *(undefined8 *)(lVar62 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
            puVar55 = (uint *)(lVar62 + 0xe4);
            *(undefined4 *)(lVar62 + 0xa8) = uVar73;
            do {
              cVar21 = '\x01';
              bVar25 = (bool)ExclusiveMonitorPass(puVar55,0x10);
              if (bVar25) {
                *puVar55 = *puVar55 | 1;
                cVar21 = ExclusiveMonitorsStatus();
              }
            } while (cVar21 != '\0');
            lVar33 = lVar65 + uVar32 * 0x4e0;
            *(undefined2 *)(lVar33 + 0xd4) = 0x101;
            *(undefined1 *)(lVar33 + 0xd6) = 1;
            do {
              cVar21 = '\x01';
              bVar25 = (bool)ExclusiveMonitorPass(puVar55,0x10);
              if (bVar25) {
                *puVar55 = *puVar55 & 0xfffffffb | 4;
                cVar21 = ExclusiveMonitorsStatus();
              }
            } while (cVar21 != '\0');
            lVar65 = lVar65 + uVar32 * 0x4e0;
            FUN_01560750(lVar65 + 0x158,*(undefined8 *)(lVar62 + 8),*(undefined1 *)(lVar65 + 0x216),
                         *(undefined2 *)(lVar65 + 0x214));
            *(float *)(lVar65 + 0xf8) = fVar71;
            *(float *)(lVar65 + 0xfc) = fVar72;
            *(uint *)(lVar65 + 0x260) = uVar14;
            *(undefined8 *)(lVar65 + 0x100) = 0;
            *(float *)(lVar65 + 0x108) = fVar71;
            *(float *)(lVar65 + 0x10c) = fVar72;
            *(long *)(lVar65 + 0x110) = lVar65 + 0x158;
            *(uint *)(lVar65 + 0x264) = uVar44;
            puVar67 = (undefined8 *)PTR_DAT_04bbd510;
            if (*(uint *)(lVar65 + 0x250) < 6) {
              if ((1 << (ulong)(*(uint *)(lVar65 + 0x250) & 0x1f) & 0x39U) == 0) {
                fVar75 = fVar72;
                if (1 < uVar41) {
                  fVar75 = 0.0;
                }
                fVar74 = 0.0;
                if (1 < uVar41) {
                  fVar74 = fVar72;
                }
                *(float *)(lVar65 + 0x240) = fVar75;
                *(float *)(lVar65 + 0x248) = fVar74;
                fVar75 = fVar71;
                if (1 < local_5ac) {
                  fVar75 = 0.0;
                }
                fVar74 = 0.0;
                if (1 < local_5ac) {
                  fVar74 = fVar71;
                }
              }
              else {
                fVar75 = fVar71;
                if (1 < local_5ac) {
                  fVar75 = 0.0;
                }
                fVar74 = 0.0;
                if (1 < local_5ac) {
                  fVar74 = fVar71;
                }
                *(float *)(lVar65 + 0x240) = fVar75;
                *(float *)(lVar65 + 0x248) = fVar74;
                fVar75 = fVar72;
                if (1 < uVar41) {
                  fVar75 = 0.0;
                }
                fVar74 = 0.0;
                if (1 < uVar41) {
                  fVar74 = fVar72;
                }
              }
              *(float *)(lVar65 + 0x244) = fVar75;
              *(float *)(lVar65 + 0x24c) = fVar74;
            }
          }
          else {
            FUN_03a8fcf0(lVar65 + uVar32 * 0x4e0,param_2,2,uVar14,uVar44,"refbuf_normal",0);
            lVar65 = 0x4e0;
            if (*puVar46 < 3) {
              lVar65 = 0;
            }
            lVar33 = lVar66 + (long)(int)uVar22 * 0x20;
            lVar62 = 0x4e0;
            if (*(uint *)(lVar33 + 8) < 3) {
              lVar62 = 0;
            }
            FUN_03a96ac0(param_1,param_2,*(undefined4 *)(param_1 + 0x200),*plVar58 + lVar65 + 0xf0,
                         *(long *)(lVar33 + 0x10) + lVar62 + 0x10);
          }
          lVar33 = *plVar58;
          lVar65 = 3;
          if (*puVar46 < 4) {
            lVar65 = 0;
          }
          if (*(int *)(param_1 + 0x1f8) == *(int *)(param_1 + 0x204)) {
            lVar62 = lVar33 + lVar65 * 0x270;
            lVar66 = 0x750;
            if (*puVar48 < 4) {
              lVar66 = 0;
            }
            puVar53 = *(undefined4 **)(*plVar63 + lVar66 + 8);
            *(undefined8 *)(lVar62 + 8) = puVar53;
            *(undefined4 *)(lVar62 + 0x10) = *puVar53;
            *(undefined4 *)(lVar62 + 0x14) = puVar53[1];
            *(undefined8 *)(lVar62 + 0x18) = *(undefined8 *)(puVar53 + 2);
            *(undefined8 *)(lVar62 + 0x20) = *(undefined8 *)(puVar53 + 4);
            *(undefined4 *)(lVar62 + 0x28) = puVar53[6];
            *(undefined4 *)(lVar62 + 0x2c) = puVar53[7];
            *(undefined8 *)(lVar62 + 0x30) = *(undefined8 *)(puVar53 + 8);
            *(undefined8 *)(lVar62 + 0x38) = *(undefined8 *)(puVar53 + 10);
            uVar27 = *(undefined8 *)(puVar53 + 0xc);
            uVar36 = *(undefined8 *)(puVar53 + 0xe);
            uVar39 = *(undefined8 *)(puVar53 + 0x10);
            *(undefined8 *)(lVar62 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
            *(undefined8 *)(lVar62 + 0x40) = uVar27;
            *(undefined8 *)(lVar62 + 0x48) = uVar36;
            *(undefined8 *)(lVar62 + 0x50) = uVar39;
            FUN_038fd1e0(lVar62 + 0x60);
            FUN_038fd2f0(lVar62 + 0x60,puVar53 + 0x14);
            uVar73 = puVar53[0x26];
            *(undefined8 *)(lVar62 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
            puVar48 = (uint *)(lVar62 + 0xe4);
            *(undefined4 *)(lVar62 + 0xa8) = uVar73;
            do {
              cVar21 = '\x01';
              bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
              if (bVar25) {
                *puVar48 = *puVar48 | 1;
                cVar21 = ExclusiveMonitorsStatus();
              }
            } while (cVar21 != '\0');
            lVar66 = lVar33 + lVar65 * 0x270;
            *(undefined2 *)(lVar66 + 0xd4) = 0x101;
            *(undefined1 *)(lVar66 + 0xd6) = 1;
            do {
              cVar21 = '\x01';
              bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
              if (bVar25) {
                *puVar48 = *puVar48 & 0xfffffffb | 4;
                cVar21 = ExclusiveMonitorsStatus();
              }
            } while (cVar21 != '\0');
            lVar33 = lVar33 + lVar65 * 0x270;
            FUN_01560750(lVar33 + 0x158,*(undefined8 *)(lVar62 + 8),*(undefined1 *)(lVar33 + 0x216),
                         *(undefined2 *)(lVar33 + 0x214));
            *(float *)(lVar33 + 0xf8) = fVar71;
            *(float *)(lVar33 + 0xfc) = fVar72;
            *(undefined8 *)(lVar33 + 0x100) = 0;
            *(float *)(lVar33 + 0x108) = fVar71;
            *(float *)(lVar33 + 0x10c) = fVar72;
            *(uint *)(lVar33 + 0x260) = uVar14;
            *(long *)(lVar33 + 0x110) = lVar33 + 0x158;
            *(uint *)(lVar33 + 0x264) = uVar44;
            if (*(uint *)(lVar33 + 0x250) < 6) {
              if ((1 << (ulong)(*(uint *)(lVar33 + 0x250) & 0x1f) & 0x39U) == 0) {
                fVar75 = fVar72;
                if (1 < uVar41) {
                  fVar75 = 0.0;
                }
                fVar74 = 0.0;
                if (1 < uVar41) {
                  fVar74 = fVar72;
                }
                *(float *)(lVar33 + 0x240) = fVar75;
                *(float *)(lVar33 + 0x248) = fVar74;
                fVar75 = fVar71;
                if (1 < local_5ac) {
                  fVar75 = 0.0;
                }
                fVar74 = 0.0;
                if (1 < local_5ac) {
                  fVar74 = fVar71;
                }
              }
              else {
                fVar75 = fVar71;
                if (1 < local_5ac) {
                  fVar75 = 0.0;
                }
                fVar74 = 0.0;
                if (1 < local_5ac) {
                  fVar74 = fVar71;
                }
                *(float *)(lVar33 + 0x240) = fVar75;
                *(float *)(lVar33 + 0x248) = fVar74;
                fVar75 = fVar72;
                if (1 < uVar41) {
                  fVar75 = 0.0;
                }
                fVar74 = 0.0;
                if (1 < uVar41) {
                  fVar74 = fVar72;
                }
              }
              *(float *)(lVar33 + 0x244) = fVar75;
              *(float *)(lVar33 + 0x24c) = fVar74;
            }
          }
          else {
            FUN_03a8fcf0(lVar33 + lVar65 * 0x270,param_2,3,uVar14,uVar44,"refbuf_depth",0);
            lVar65 = 0x750;
            if (*puVar46 < 4) {
              lVar65 = 0;
            }
            lVar66 = lVar66 + (long)(int)uVar22 * 0x20;
            lVar33 = 0x750;
            if (*(uint *)(lVar66 + 8) < 4) {
              lVar33 = 0;
            }
            FUN_03a96ac0(param_1,param_2,*(undefined4 *)(param_1 + 0x204),*plVar58 + lVar65 + 0xf0,
                         *(long *)(lVar66 + 0x10) + lVar33 + 0x10);
          }
          lVar66 = *plVar58;
          puVar53 = *(undefined4 **)(*plVar63 + 8);
          *(undefined4 **)(lVar66 + 8) = puVar53;
          *(undefined4 *)(lVar66 + 0x10) = *puVar53;
          *(undefined4 *)(lVar66 + 0x14) = puVar53[1];
          *(undefined8 *)(lVar66 + 0x18) = *(undefined8 *)(puVar53 + 2);
          *(undefined8 *)(lVar66 + 0x20) = *(undefined8 *)(puVar53 + 4);
          *(undefined4 *)(lVar66 + 0x28) = puVar53[6];
          *(undefined4 *)(lVar66 + 0x2c) = puVar53[7];
          *(undefined8 *)(lVar66 + 0x30) = *(undefined8 *)(puVar53 + 8);
          *(undefined8 *)(lVar66 + 0x38) = *(undefined8 *)(puVar53 + 10);
          uVar39 = *(undefined8 *)(puVar53 + 0x10);
          uVar27 = *(undefined8 *)(puVar53 + 0xc);
          uVar36 = *(undefined8 *)(puVar53 + 0xe);
          *(undefined8 *)(lVar66 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
          *(undefined8 *)(lVar66 + 0x48) = uVar36;
          *(undefined8 *)(lVar66 + 0x50) = uVar39;
          *(undefined8 *)(lVar66 + 0x40) = uVar27;
          FUN_038fd1e0(lVar66 + 0x60);
          FUN_038fd2f0(lVar66 + 0x60,puVar53 + 0x14);
          uVar73 = puVar53[0x26];
          *(undefined8 *)(lVar66 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
          puVar48 = (uint *)(lVar66 + 0xe4);
          *(undefined4 *)(lVar66 + 0xa8) = uVar73;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = *puVar48 | 1;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          *(undefined2 *)(lVar66 + 0xd4) = 0x101;
          *(undefined1 *)(lVar66 + 0xd6) = 1;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = *puVar48 & 0xfffffffb | 4;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
LAB_03a92a24:
          FUN_01560750(lVar66 + 0x158,*(undefined8 *)(lVar66 + 8),*(undefined1 *)(lVar66 + 0x216),
                       *(undefined2 *)(lVar66 + 0x214));
          *(float *)(lVar66 + 0xf8) = fVar71;
          *(float *)(lVar66 + 0xfc) = fVar72;
          *(undefined8 *)(lVar66 + 0x100) = 0;
          *(float *)(lVar66 + 0x108) = fVar71;
          *(float *)(lVar66 + 0x10c) = fVar72;
          *(long *)(lVar66 + 0x110) = lVar66 + 0x158;
          *(uint *)(lVar66 + 0x260) = uVar14;
          *(uint *)(lVar66 + 0x264) = uVar44;
          if (*(uint *)(lVar66 + 0x250) < 6) {
            if ((1 << (ulong)(*(uint *)(lVar66 + 0x250) & 0x1f) & 0x39U) == 0) {
              fVar75 = fVar72;
              if (1 < uVar41) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < uVar41) {
                fVar74 = fVar72;
              }
              *(float *)(lVar66 + 0x240) = fVar75;
              *(float *)(lVar66 + 0x248) = fVar74;
              fVar75 = fVar71;
              if (1 < local_5ac) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < local_5ac) {
                fVar74 = fVar71;
              }
            }
            else {
              fVar75 = fVar71;
              if (1 < local_5ac) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < local_5ac) {
                fVar74 = fVar71;
              }
              *(float *)(lVar66 + 0x240) = fVar75;
              *(float *)(lVar66 + 0x248) = fVar74;
              fVar75 = fVar72;
              if (1 < uVar41) {
                fVar75 = 0.0;
              }
              fVar74 = 0.0;
              if (1 < uVar41) {
                fVar74 = fVar72;
              }
            }
            *(float *)(lVar66 + 0x244) = fVar75;
            *(float *)(lVar66 + 0x24c) = fVar74;
          }
        }
      }
      uVar50 = uVar50 + 1;
      local_5ac = uVar14;
      uVar41 = uVar44;
    } while (uVar50 != uVar38);
  }
LAB_03a92ad0:
  uVar50 = uVar35;
  if ((int)uVar38 <= (int)uVar35) {
    uVar50 = uVar38;
  }
  uVar41 = uVar50 - 1;
  if (0 < (int)uVar50) {
    uVar43 = 0;
    lVar28 = lVar64 + (long)(int)uVar52 * 0x5b0;
    do {
      uVar44 = uVar43;
      if (*(uint *)(lVar28 + 0x250) <= uVar43) {
        uVar44 = 0;
      }
      lVar66 = *(long *)(lVar28 + 600) + (ulong)uVar44 * 0x20;
      uVar44 = *(uint *)(lVar66 + 8);
      lVar65 = *(long *)(lVar66 + 0x10);
      lVar66 = 0x4e0;
      if (uVar44 < 3) {
        lVar66 = 0;
      }
      lVar66 = lVar65 + lVar66;
      FUN_03a8fcf0(lVar65 + (ulong)(1 < uVar44) * 0x270,param_2,1,*(undefined4 *)(lVar66 + 0x260),
                   *(undefined4 *)(lVar66 + 0x264),"refbuf_light",0);
      uVar43 = uVar43 + 1;
    } while (uVar50 != uVar43);
  }
  if ((int)uVar35 < (int)uVar38) {
    puVar8 = PTR_DAT_04bd1178 + 0x10;
    puVar9 = PTR_DAT_04bd1198 + 0x10;
    ppuVar10 = (undefined **)(PTR_DAT_04bd0f08 + 0x10);
    uVar43 = uVar50;
    do {
      uVar44 = uVar43;
      if (*puVar3 <= uVar43) {
        uVar44 = 0;
      }
      lVar28 = *plVar4 + (long)(int)uVar44 * 0x20;
      if (uVar43 == uVar50) {
        lVar66 = *(long *)(lVar28 + 0x10);
        uVar32 = (ulong)(1 < *(uint *)(lVar28 + 8));
        if ((*(byte *)(param_1 + 8) >> 6 & 1) == 0) {
          lVar66 = lVar66 + uVar32 * 0x270;
          uVar44 = *puVar5;
          lVar28 = *plVar6;
          lVar65 = *(long *)(lVar66 + 0x110);
          local_310 = 0;
          uVar18 = *(ushort *)(lVar65 + 0x38);
          if (uVar18 < 2) {
            uVar18 = 1;
          }
          uVar19 = *(ushort *)(lVar65 + 0x3a);
          uVar20 = uVar19;
          if (*(short *)(lVar65 + 0x42) != 3) {
            uVar20 = 1;
          }
          if (uVar20 <= uVar19) {
            uVar20 = uVar19;
          }
          local_318 = &PTR_FUN_04b70ae8;
          FUN_0390cee0(&local_308);
          puVar23 = PTR_DAT_04bd0ea8;
          local_218 = 0;
          local_210 = &DAT_3f8000003f800000;
          local_220 = &DAT_3f8000003f800000;
          local_168 = 0xffffffff;
          local_208 = 0;
          local_200 = 0;
          local_1f8 = 0;
          local_1f0 = 0;
          local_1c8 = 0;
          local_1e8 = 0;
          local_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_198 = 0;
          local_190 = 0;
          local_188 = 0;
          local_180 = 0;
          local_178 = 0;
          local_170 = 0;
          local_130 = 0;
          local_160 = 0;
          local_158 = 0;
          local_150 = 0;
          local_148 = 0;
          local_140 = 0;
          local_138 = 0;
          local_128 = "agl::TextureData";
          local_120 = 0x10000;
          local_108 = 0xff;
          local_104 = 0;
          local_100 = 0x80000000000;
          local_e8 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_c8 = *(undefined4 *)PTR_DAT_04bd0ea8;
          local_d8 = 0x7f7fffff7f7fffff;
          local_d0 = 0xff7fffffff7fffff;
          local_c4 = 0x3f80000000000000;
          local_b0 = 0;
          local_b8 = 0;
          local_228 = puVar8;
          local_1c0 = puVar9;
          local_e0 = ppuVar10;
          FUN_03a8fcf0(&local_318,param_2,1,uVar18,uVar20,"temp_pre_render_buf",0);
          (**(code **)(local_228 + 0x38))(&local_228,param_2);
          local_570 = *(uint *)puVar23;
          local_580 = 0x7f7fffff7f7fffff;
          local_578 = 0xff7fffffff7fffff;
          local_56c = 0x3f80000000000000;
          if (local_570 < 6) {
            if ((1 << (ulong)(local_570 & 0x1f) & 0x39U) == 0) {
              fVar71 = local_220._4_4_;
              fVar72 = (float)local_220;
            }
            else {
              fVar71 = (float)local_220;
              fVar72 = local_220._4_4_;
            }
            fVar74 = fVar71;
            fVar75 = 0.0;
            if (fVar71 <= 0.0) {
              fVar74 = 0.0;
              fVar75 = fVar71;
            }
            fVar68 = fVar72;
            fVar71 = 0.0;
            if (fVar72 <= 0.0) {
              fVar68 = 0.0;
              fVar71 = fVar72;
            }
            local_580 = CONCAT44(fVar71,fVar75);
            local_578 = CONCAT44(fVar68,fVar74);
          }
          local_588 = ppuVar10;
          FUN_038e77e4(&local_588,param_2,&local_228);
          if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x88) {
            lVar65 = 0;
          }
          else {
            lVar65 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x438);
          }
          FUN_03907810(lVar65,param_2);
          puVar48 = (uint *)(lVar65 + 0x14);
          do {
            uVar14 = *puVar48;
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = uVar14 | 0x80000000;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          if ((uVar14 & 0x7fffffff) != 0) {
            if ((int)uVar14 < 0) {
              if ((int)*puVar48 < 0) {
                lVar33 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar33 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar48 < 0);
              }
            }
            else {
              FUN_03907b80(lVar65);
            }
          }
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = 0;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          FUN_0390d290(lVar28 + 0x10 + (ulong)(1 < uVar44) * 0x270,param_2,
                       *(undefined8 *)(lVar65 + 0x68),0xffffffff,0);
          do {
            uVar44 = *puVar48;
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = uVar44 | 0x80000000;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          if ((uVar44 & 0x7fffffff) != 0) {
            if ((int)uVar44 < 0) {
              if ((int)*puVar48 < 0) {
                lVar33 = *(long *)PTR_DAT_04bb29d0;
                do {
                  nn::os::ConvertToTimeSpan(lVar33 / 1000000);
                  nn::os::SleepThread();
                } while ((int)*puVar48 < 0);
              }
            }
            else {
              FUN_03907b80(lVar65);
            }
          }
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = 0;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          FUN_0390d290(lVar28 + 0x10,param_2,
                       *(long *)(lVar65 + 0x68) + (ulong)(1 < *(uint *)(lVar65 + 0x60)) * 0x18,
                       0xffffffff,0);
          uVar27 = *(undefined8 *)(param_2 + 0xb8);
          lVar28 = *(long *)PTR_DAT_04bbd7e0;
          (**(code **)PTR_DAT_04bcf1a8)(uVar27,0x10,lVar28 + 0x1024);
          (**(code **)PTR_DAT_04bcf1b0)(uVar27,0x10,lVar28 + 0x1068);
          puVar67 = (undefined8 *)PTR_DAT_04bbd510;
          iVar29 = *(int *)(lVar28 + 0x1010);
          if (iVar29 != 0) {
            lVar28 = *(long *)(lVar28 + 0x1018);
            uVar32 = 0;
            uVar54 = 0;
            do {
              lVar65 = *(long *)(lVar28 + (-(uVar54 >> 0x1f) & 0xfffffff800000000 | uVar54 << 3));
              if (lVar65 != 0) {
                uVar36 = (**(code **)PTR_DAT_04bbd560)(lVar65 + 8);
                (**(code **)PTR_DAT_04bcf1e8)
                          (uVar27,uVar32 & 0xffffffff,uVar36,*(undefined4 *)(lVar65 + 0x118));
              }
              uVar32 = uVar54 + 1;
              uVar54 = uVar32 & 0xffffffff;
            } while (iVar29 != (int)uVar32);
          }
          lVar28 = *(long *)PTR_DAT_04bbd7e8;
          iVar29 = *(int *)(lVar28 + 0x480);
          if (iVar29 != 0) {
            uVar73 = *(undefined4 *)(lVar28 + 0x464);
            uVar36 = *(undefined8 *)(param_2 + 0xb8);
            uVar27 = (**(code **)PTR_DAT_04bbd560)(lVar28 + 0x488);
            (**(code **)PTR_DAT_04bbd568)
                      (uVar36,uVar73,*(undefined4 *)(lVar28 + 0x460),iVar29,uVar27);
          }
          uVar44 = *(uint *)(local_208 + 0x58);
          if (uVar44 != 0xffffffff) {
            lVar28 = *(long *)PTR_DAT_04bc1010;
            if ((*(uint *)(lVar28 + 0x5c8) >> 3 & 1) == 0) {
              uVar14 = uVar44 - *(ushort *)(lVar28 + 0x3da);
              if (*(uint *)(lVar28 + 0x368) <= uVar14) {
                uVar14 = 0;
              }
              if ((*(uint *)(*(long *)(lVar28 + 0x370) + (long)(int)uVar14 * 0x20 + 4) >> 2 & 1) !=
                  0) goto LAB_03a933b4;
              uVar32 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar44 & 0x3f);
            }
            else {
LAB_03a933b4:
              if ((*(uint *)(lVar28 + 0x5c8) >> 5 & 1) == 0) {
                uVar30 = 0x112;
                uVar73 = 0x12;
              }
              else {
                uVar30 = 0x111;
                uVar73 = 0x11;
              }
              if ((*(uint *)(lVar28 + 800) & 2) != 0) {
                uVar73 = uVar30;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar73);
              uVar32 = 0;
            }
            *(ulong *)(param_2 + 0x100) = uVar32;
          }
          FUN_03a96ac0(param_1,param_2,0,lVar66 + 0xf0,&local_308);
          if ((char)local_b0 != '\0') {
            FUN_039499cc(*puVar67,local_310);
          }
          local_310 = 0;
          local_b0 = 0;
          FUN_03a8fb98(&local_318);
        }
        else {
          lVar65 = lVar66 + uVar32 * 0x270;
          if (*(char *)(lVar65 + 0x268) != '\0') {
            FUN_039499cc(*puVar67,*(undefined8 *)(lVar66 + uVar32 * 0x270 + 8));
          }
          lVar66 = lVar66 + uVar32 * 0x270;
          *(undefined1 *)(lVar65 + 0x268) = 0;
          *(undefined8 *)(lVar66 + 8) = 0;
          *(undefined1 *)(lVar66 + 0x269) = 0;
          lVar66 = *(long *)(lVar28 + 0x10);
          uVar32 = (ulong)(1 < *(uint *)(lVar28 + 8));
          lVar28 = lVar66 + uVar32 * 0x270;
          puVar53 = *(undefined4 **)(*plVar6 + (ulong)(1 < *puVar5) * 0x270 + 8);
          uVar44 = *puVar1;
          uVar14 = *puVar2;
          *(undefined8 *)(lVar28 + 8) = puVar53;
          *(undefined4 *)(lVar28 + 0x10) = *puVar53;
          *(undefined4 *)(lVar28 + 0x14) = puVar53[1];
          *(undefined8 *)(lVar28 + 0x18) = *(undefined8 *)(puVar53 + 2);
          *(undefined8 *)(lVar28 + 0x20) = *(undefined8 *)(puVar53 + 4);
          *(undefined4 *)(lVar28 + 0x28) = puVar53[6];
          *(undefined4 *)(lVar28 + 0x2c) = puVar53[7];
          *(undefined8 *)(lVar28 + 0x30) = *(undefined8 *)(puVar53 + 8);
          *(undefined8 *)(lVar28 + 0x38) = *(undefined8 *)(puVar53 + 10);
          uVar27 = *(undefined8 *)(puVar53 + 0xc);
          uVar36 = *(undefined8 *)(puVar53 + 0xe);
          uVar39 = *(undefined8 *)(puVar53 + 0x10);
          *(undefined8 *)(lVar28 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
          *(undefined8 *)(lVar28 + 0x40) = uVar27;
          *(undefined8 *)(lVar28 + 0x48) = uVar36;
          *(undefined8 *)(lVar28 + 0x50) = uVar39;
          FUN_038fd1e0(lVar28 + 0x60);
          FUN_038fd2f0(lVar28 + 0x60,puVar53 + 0x14);
          uVar73 = puVar53[0x26];
          *(undefined8 *)(lVar28 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
          puVar48 = (uint *)(lVar28 + 0xe4);
          *(undefined4 *)(lVar28 + 0xa8) = uVar73;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = *puVar48 | 1;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          lVar65 = lVar66 + uVar32 * 0x270;
          *(undefined2 *)(lVar65 + 0xd4) = 0x101;
          *(undefined1 *)(lVar65 + 0xd6) = 1;
          do {
            cVar21 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
            if (bVar25) {
              *puVar48 = *puVar48 & 0xfffffffb | 4;
              cVar21 = ExclusiveMonitorsStatus();
            }
          } while (cVar21 != '\0');
          lVar66 = lVar66 + uVar32 * 0x270;
          FUN_01560750(lVar66 + 0x158,*(undefined8 *)(lVar28 + 8),*(undefined1 *)(lVar66 + 0x216),
                       *(undefined2 *)(lVar66 + 0x214));
          *(undefined8 *)(lVar66 + 0x100) = 0;
          *(long *)(lVar66 + 0x110) = lVar66 + 0x158;
          fVar71 = (float)uVar44;
          *(uint *)(lVar66 + 0x260) = uVar44;
          *(uint *)(lVar66 + 0x264) = uVar14;
          fVar72 = (float)uVar14;
          *(float *)(lVar66 + 0x108) = fVar71;
          *(float *)(lVar66 + 0xf8) = fVar71;
          *(float *)(lVar66 + 0xfc) = fVar72;
          *(float *)(lVar66 + 0x10c) = fVar72;
          puVar67 = (undefined8 *)PTR_DAT_04bbd510;
          if (*(uint *)(lVar66 + 0x250) < 6) {
            *(undefined8 *)(lVar66 + 0x240) = 0;
            fVar75 = fVar72;
            if ((1 << (ulong)(*(uint *)(lVar66 + 0x250) & 0x1f) & 0x39U) == 0) {
              fVar75 = fVar71;
              fVar71 = fVar72;
            }
            *(float *)(lVar66 + 0x248) = fVar71;
            *(float *)(lVar66 + 0x24c) = fVar75;
          }
        }
      }
      else {
        FUN_038e4d90(lVar42,param_2);
        uVar44 = uVar43 - 1;
        if (*puVar3 <= uVar44) {
          uVar44 = 0;
        }
        lVar66 = *plVar4 + (long)(int)uVar44 * 0x20;
        FUN_03a96ac0(param_1,param_2,*(undefined4 *)(param_1 + 0x1f0),
                     *(long *)(lVar28 + 0x10) + (ulong)(1 < *(uint *)(lVar28 + 8)) * 0x270 + 0xf0,
                     *(long *)(lVar66 + 0x10) + (ulong)(1 < *(uint *)(lVar66 + 8)) * 0x270 + 0x10);
      }
      uVar43 = uVar43 + 1;
    } while (uVar43 != uVar38);
  }
  puVar1 = (uint *)(lVar61 + 0x288);
  plVar7 = (long *)(lVar61 + 0x290);
  uVar43 = uVar50;
  if (*puVar3 <= uVar50) {
    uVar43 = 0;
  }
  lVar28 = *plVar4 + (long)(int)uVar43 * 0x20;
  lVar66 = *(long *)(lVar28 + 0x10);
  uVar32 = (ulong)(1 < *(uint *)(lVar28 + 8));
  if (uVar45 != 0) {
    lVar28 = lVar66 + uVar32 * 0x270;
    FUN_03a8fcf0(*plVar7 + (ulong)(1 < *puVar1) * 0x270,param_2,1,*(undefined4 *)(lVar28 + 0x260),
                 *(undefined4 *)(lVar28 + 0x264),"dif_renderbuf",0);
    lVar65 = *plVar7;
    uVar43 = *(uint *)(lVar28 + 0x260);
    uVar44 = *(uint *)(lVar28 + 0x264);
    puVar53 = *(undefined4 **)(*plVar6 + 8);
    *(undefined4 **)(lVar65 + 8) = puVar53;
    *(undefined4 *)(lVar65 + 0x10) = *puVar53;
    *(undefined4 *)(lVar65 + 0x14) = puVar53[1];
    *(undefined8 *)(lVar65 + 0x18) = *(undefined8 *)(puVar53 + 2);
    *(undefined8 *)(lVar65 + 0x20) = *(undefined8 *)(puVar53 + 4);
    *(undefined4 *)(lVar65 + 0x28) = puVar53[6];
    *(undefined4 *)(lVar65 + 0x2c) = puVar53[7];
    *(undefined8 *)(lVar65 + 0x30) = *(undefined8 *)(puVar53 + 8);
    *(undefined8 *)(lVar65 + 0x38) = *(undefined8 *)(puVar53 + 10);
    uVar39 = *(undefined8 *)(puVar53 + 0x10);
    uVar27 = *(undefined8 *)(puVar53 + 0xc);
    uVar36 = *(undefined8 *)(puVar53 + 0xe);
    *(undefined8 *)(lVar65 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
    *(undefined8 *)(lVar65 + 0x48) = uVar36;
    *(undefined8 *)(lVar65 + 0x50) = uVar39;
    *(undefined8 *)(lVar65 + 0x40) = uVar27;
    FUN_038fd1e0(lVar65 + 0x60);
    FUN_038fd2f0(lVar65 + 0x60,puVar53 + 0x14);
    uVar73 = puVar53[0x26];
    *(undefined8 *)(lVar65 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
    puVar2 = (uint *)(lVar65 + 0xe4);
    *(undefined4 *)(lVar65 + 0xa8) = uVar73;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar25) {
        *puVar2 = *puVar2 | 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    *(undefined2 *)(lVar65 + 0xd4) = 0x101;
    *(undefined1 *)(lVar65 + 0xd6) = 1;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar25) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    FUN_01560750(lVar65 + 0x158,*(undefined8 *)(lVar65 + 8),*(undefined1 *)(lVar65 + 0x216),
                 *(undefined2 *)(lVar65 + 0x214));
    fVar72 = (float)uVar43;
    *(undefined8 *)(lVar65 + 0x100) = 0;
    fVar71 = (float)uVar44;
    *(long *)(lVar65 + 0x110) = lVar65 + 0x158;
    *(uint *)(lVar65 + 0x260) = uVar43;
    *(uint *)(lVar65 + 0x264) = uVar44;
    *(float *)(lVar65 + 0xf8) = fVar72;
    *(float *)(lVar65 + 0xfc) = fVar71;
    *(float *)(lVar65 + 0x108) = fVar72;
    *(float *)(lVar65 + 0x10c) = fVar71;
    if (*(uint *)(lVar65 + 0x250) < 6) {
      if ((1 << (ulong)(*(uint *)(lVar65 + 0x250) & 0x1f) & 0x39U) == 0) {
        fVar75 = fVar72;
      }
      else {
        fVar75 = fVar71;
        fVar71 = fVar72;
      }
      *(undefined8 *)(lVar65 + 0x240) = 0;
      *(float *)(lVar65 + 0x248) = fVar71;
      *(float *)(lVar65 + 0x24c) = fVar75;
    }
    uVar43 = *(uint *)(lVar28 + 0x260);
    lVar33 = *plVar7;
    uVar54 = (ulong)(2 < *puVar1);
    lVar65 = 0x4e0;
    if (*puVar5 < 3) {
      lVar65 = 0;
    }
    puVar53 = *(undefined4 **)(*plVar6 + lVar65 + 8);
    lVar65 = lVar33 + uVar54 * 0x4e0;
    uVar44 = *(uint *)(lVar28 + 0x264);
    *(undefined8 *)(lVar65 + 8) = puVar53;
    *(undefined4 *)(lVar65 + 0x10) = *puVar53;
    *(undefined4 *)(lVar65 + 0x14) = puVar53[1];
    *(undefined8 *)(lVar65 + 0x18) = *(undefined8 *)(puVar53 + 2);
    *(undefined8 *)(lVar65 + 0x20) = *(undefined8 *)(puVar53 + 4);
    *(undefined4 *)(lVar65 + 0x28) = puVar53[6];
    *(undefined4 *)(lVar65 + 0x2c) = puVar53[7];
    *(undefined8 *)(lVar65 + 0x30) = *(undefined8 *)(puVar53 + 8);
    *(undefined8 *)(lVar65 + 0x38) = *(undefined8 *)(puVar53 + 10);
    uVar27 = *(undefined8 *)(puVar53 + 0xc);
    uVar36 = *(undefined8 *)(puVar53 + 0xe);
    uVar39 = *(undefined8 *)(puVar53 + 0x10);
    *(undefined8 *)(lVar65 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
    *(undefined8 *)(lVar65 + 0x40) = uVar27;
    *(undefined8 *)(lVar65 + 0x48) = uVar36;
    *(undefined8 *)(lVar65 + 0x50) = uVar39;
    FUN_038fd1e0(lVar65 + 0x60);
    FUN_038fd2f0(lVar65 + 0x60,puVar53 + 0x14);
    uVar73 = puVar53[0x26];
    *(undefined8 *)(lVar65 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
    puVar2 = (uint *)(lVar65 + 0xe4);
    *(undefined4 *)(lVar65 + 0xa8) = uVar73;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar25) {
        *puVar2 = *puVar2 | 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar62 = lVar33 + uVar54 * 0x4e0;
    *(undefined2 *)(lVar62 + 0xd4) = 0x101;
    *(undefined1 *)(lVar62 + 0xd6) = 1;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar25) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar33 = lVar33 + uVar54 * 0x4e0;
    FUN_01560750(lVar33 + 0x158,*(undefined8 *)(lVar65 + 8),*(undefined1 *)(lVar33 + 0x216),
                 *(undefined2 *)(lVar33 + 0x214));
    fVar72 = (float)uVar43;
    *(undefined8 *)(lVar33 + 0x100) = 0;
    fVar71 = (float)uVar44;
    *(long *)(lVar33 + 0x110) = lVar33 + 0x158;
    *(uint *)(lVar33 + 0x260) = uVar43;
    *(uint *)(lVar33 + 0x264) = uVar44;
    *(float *)(lVar33 + 0xf8) = fVar72;
    *(float *)(lVar33 + 0xfc) = fVar71;
    *(float *)(lVar33 + 0x108) = fVar72;
    *(float *)(lVar33 + 0x10c) = fVar71;
    if (*(uint *)(lVar33 + 0x250) < 6) {
      if ((1 << (ulong)(*(uint *)(lVar33 + 0x250) & 0x1f) & 0x39U) == 0) {
        fVar75 = fVar72;
      }
      else {
        fVar75 = fVar71;
        fVar71 = fVar72;
      }
      *(undefined8 *)(lVar33 + 0x240) = 0;
      *(float *)(lVar33 + 0x248) = fVar71;
      *(float *)(lVar33 + 0x24c) = fVar75;
    }
    uVar43 = *(uint *)(lVar28 + 0x260);
    lVar65 = 3;
    if (*puVar1 < 4) {
      lVar65 = 0;
    }
    lVar62 = *plVar7;
    lVar33 = 0x750;
    if (*puVar5 < 4) {
      lVar33 = 0;
    }
    puVar53 = *(undefined4 **)(*plVar6 + lVar33 + 8);
    lVar33 = lVar62 + lVar65 * 0x270;
    uVar44 = *(uint *)(lVar28 + 0x264);
    *(undefined8 *)(lVar33 + 8) = puVar53;
    *(undefined4 *)(lVar33 + 0x10) = *puVar53;
    *(undefined4 *)(lVar33 + 0x14) = puVar53[1];
    *(undefined8 *)(lVar33 + 0x18) = *(undefined8 *)(puVar53 + 2);
    *(undefined8 *)(lVar33 + 0x20) = *(undefined8 *)(puVar53 + 4);
    *(undefined4 *)(lVar33 + 0x28) = puVar53[6];
    *(undefined4 *)(lVar33 + 0x2c) = puVar53[7];
    *(undefined8 *)(lVar33 + 0x30) = *(undefined8 *)(puVar53 + 8);
    *(undefined8 *)(lVar33 + 0x38) = *(undefined8 *)(puVar53 + 10);
    uVar27 = *(undefined8 *)(puVar53 + 0xc);
    uVar36 = *(undefined8 *)(puVar53 + 0xe);
    uVar39 = *(undefined8 *)(puVar53 + 0x10);
    *(undefined8 *)(lVar33 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
    *(undefined8 *)(lVar33 + 0x48) = uVar36;
    *(undefined8 *)(lVar33 + 0x50) = uVar39;
    *(undefined8 *)(lVar33 + 0x40) = uVar27;
    FUN_038fd1e0(lVar33 + 0x60);
    FUN_038fd2f0(lVar33 + 0x60,puVar53 + 0x14);
    uVar73 = puVar53[0x26];
    *(undefined8 *)(lVar33 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
    puVar2 = (uint *)(lVar33 + 0xe4);
    *(undefined4 *)(lVar33 + 0xa8) = uVar73;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar25) {
        *puVar2 = *puVar2 | 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar28 = lVar62 + lVar65 * 0x270;
    *(undefined2 *)(lVar28 + 0xd4) = 0x101;
    *(undefined1 *)(lVar28 + 0xd6) = 1;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar25) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar62 = lVar62 + lVar65 * 0x270;
    FUN_01560750(lVar62 + 0x158,*(undefined8 *)(lVar33 + 8),*(undefined1 *)(lVar62 + 0x216),
                 *(undefined2 *)(lVar62 + 0x214));
    fVar72 = (float)uVar43;
    *(undefined8 *)(lVar62 + 0x100) = 0;
    fVar71 = (float)uVar44;
    *(long *)(lVar62 + 0x110) = lVar62 + 0x158;
    *(uint *)(lVar62 + 0x260) = uVar43;
    *(uint *)(lVar62 + 0x264) = uVar44;
    *(float *)(lVar62 + 0xf8) = fVar72;
    *(float *)(lVar62 + 0xfc) = fVar71;
    *(float *)(lVar62 + 0x108) = fVar72;
    *(float *)(lVar62 + 0x10c) = fVar71;
    puVar67 = (undefined8 *)PTR_DAT_04bbd510;
    if (*(uint *)(lVar62 + 0x250) < 6) {
      if ((1 << (ulong)(*(uint *)(lVar62 + 0x250) & 0x1f) & 0x39U) == 0) {
        fVar75 = fVar72;
      }
      else {
        fVar75 = fVar71;
        fVar71 = fVar72;
      }
      *(undefined8 *)(lVar62 + 0x240) = 0;
      *(float *)(lVar62 + 0x248) = fVar71;
      *(float *)(lVar62 + 0x24c) = fVar75;
    }
    plVar63 = (long *)(*plVar7 + (ulong)(1 < *puVar1) * 0x270 + 0xf0);
    (**(code **)(*plVar63 + 0x38))(plVar63,param_2);
    lVar28 = *plVar7 + (ulong)(1 < *puVar1) * 0x270;
    FUN_038e77e4(lVar28 + 0x238,param_2,lVar28 + 0xf0);
    local_318 = (undefined **)0x0;
    local_310 = 0x3f80000000000000;
    (**(code **)PTR_DAT_04bcfd90)(*(undefined8 *)(param_2 + 0xb8),0,&local_318,0xf);
  }
  puVar2 = (uint *)(lVar61 + 0x2a8);
  plVar63 = (long *)(lVar61 + 0x2b0);
  if (uVar51 != 0) {
    lVar66 = lVar66 + uVar32 * 0x270;
    FUN_03a8fcf0(*plVar63 + (ulong)(1 < *puVar2) * 0x270,param_2,1,*(undefined4 *)(lVar66 + 0x260),
                 *(undefined4 *)(lVar66 + 0x264),"ref_renderbuf",0);
    lVar61 = *plVar63;
    uVar43 = *(uint *)(lVar66 + 0x260);
    uVar44 = *(uint *)(lVar66 + 0x264);
    puVar53 = *(undefined4 **)(*plVar6 + 8);
    *(undefined4 **)(lVar61 + 8) = puVar53;
    *(undefined4 *)(lVar61 + 0x10) = *puVar53;
    *(undefined4 *)(lVar61 + 0x14) = puVar53[1];
    *(undefined8 *)(lVar61 + 0x18) = *(undefined8 *)(puVar53 + 2);
    *(undefined8 *)(lVar61 + 0x20) = *(undefined8 *)(puVar53 + 4);
    *(undefined4 *)(lVar61 + 0x28) = puVar53[6];
    *(undefined4 *)(lVar61 + 0x2c) = puVar53[7];
    *(undefined8 *)(lVar61 + 0x30) = *(undefined8 *)(puVar53 + 8);
    *(undefined8 *)(lVar61 + 0x38) = *(undefined8 *)(puVar53 + 10);
    uVar39 = *(undefined8 *)(puVar53 + 0x10);
    uVar27 = *(undefined8 *)(puVar53 + 0xc);
    uVar36 = *(undefined8 *)(puVar53 + 0xe);
    *(undefined8 *)(lVar61 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
    *(undefined8 *)(lVar61 + 0x48) = uVar36;
    *(undefined8 *)(lVar61 + 0x50) = uVar39;
    *(undefined8 *)(lVar61 + 0x40) = uVar27;
    FUN_038fd1e0(lVar61 + 0x60);
    FUN_038fd2f0(lVar61 + 0x60,puVar53 + 0x14);
    uVar73 = puVar53[0x26];
    *(undefined8 *)(lVar61 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
    puVar48 = (uint *)(lVar61 + 0xe4);
    *(undefined4 *)(lVar61 + 0xa8) = uVar73;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
      if (bVar25) {
        *puVar48 = *puVar48 | 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    *(undefined2 *)(lVar61 + 0xd4) = 0x101;
    *(undefined1 *)(lVar61 + 0xd6) = 1;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
      if (bVar25) {
        *puVar48 = *puVar48 & 0xfffffffb | 4;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    FUN_01560750(lVar61 + 0x158,*(undefined8 *)(lVar61 + 8),*(undefined1 *)(lVar61 + 0x216),
                 *(undefined2 *)(lVar61 + 0x214));
    fVar72 = (float)uVar43;
    *(undefined8 *)(lVar61 + 0x100) = 0;
    fVar71 = (float)uVar44;
    *(long *)(lVar61 + 0x110) = lVar61 + 0x158;
    *(uint *)(lVar61 + 0x260) = uVar43;
    *(uint *)(lVar61 + 0x264) = uVar44;
    *(float *)(lVar61 + 0xf8) = fVar72;
    *(float *)(lVar61 + 0xfc) = fVar71;
    *(float *)(lVar61 + 0x108) = fVar72;
    *(float *)(lVar61 + 0x10c) = fVar71;
    if (*(uint *)(lVar61 + 0x250) < 6) {
      if ((1 << (ulong)(*(uint *)(lVar61 + 0x250) & 0x1f) & 0x39U) == 0) {
        fVar75 = fVar72;
      }
      else {
        fVar75 = fVar71;
        fVar71 = fVar72;
      }
      *(undefined8 *)(lVar61 + 0x240) = 0;
      *(float *)(lVar61 + 0x248) = fVar71;
      *(float *)(lVar61 + 0x24c) = fVar75;
    }
    lVar28 = *plVar63;
    uVar32 = (ulong)(2 < *puVar2);
    lVar61 = 0x4e0;
    if (*puVar5 < 3) {
      lVar61 = 0;
    }
    puVar53 = *(undefined4 **)(*plVar6 + lVar61 + 8);
    lVar61 = lVar28 + uVar32 * 0x4e0;
    uVar43 = *(uint *)(lVar66 + 0x260);
    uVar44 = *(uint *)(lVar66 + 0x264);
    *(undefined8 *)(lVar61 + 8) = puVar53;
    *(undefined4 *)(lVar61 + 0x10) = *puVar53;
    *(undefined4 *)(lVar61 + 0x14) = puVar53[1];
    *(undefined8 *)(lVar61 + 0x18) = *(undefined8 *)(puVar53 + 2);
    *(undefined8 *)(lVar61 + 0x20) = *(undefined8 *)(puVar53 + 4);
    *(undefined4 *)(lVar61 + 0x28) = puVar53[6];
    *(undefined4 *)(lVar61 + 0x2c) = puVar53[7];
    *(undefined8 *)(lVar61 + 0x30) = *(undefined8 *)(puVar53 + 8);
    *(undefined8 *)(lVar61 + 0x38) = *(undefined8 *)(puVar53 + 10);
    uVar27 = *(undefined8 *)(puVar53 + 0xc);
    uVar36 = *(undefined8 *)(puVar53 + 0xe);
    uVar39 = *(undefined8 *)(puVar53 + 0x10);
    *(undefined8 *)(lVar61 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
    *(undefined8 *)(lVar61 + 0x40) = uVar27;
    *(undefined8 *)(lVar61 + 0x48) = uVar36;
    *(undefined8 *)(lVar61 + 0x50) = uVar39;
    FUN_038fd1e0(lVar61 + 0x60);
    FUN_038fd2f0(lVar61 + 0x60,puVar53 + 0x14);
    uVar73 = puVar53[0x26];
    *(undefined8 *)(lVar61 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
    puVar48 = (uint *)(lVar61 + 0xe4);
    *(undefined4 *)(lVar61 + 0xa8) = uVar73;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
      if (bVar25) {
        *puVar48 = *puVar48 | 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar65 = lVar28 + uVar32 * 0x4e0;
    *(undefined2 *)(lVar65 + 0xd4) = 0x101;
    *(undefined1 *)(lVar65 + 0xd6) = 1;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
      if (bVar25) {
        *puVar48 = *puVar48 & 0xfffffffb | 4;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar28 = lVar28 + uVar32 * 0x4e0;
    FUN_01560750(lVar28 + 0x158,*(undefined8 *)(lVar61 + 8),*(undefined1 *)(lVar28 + 0x216),
                 *(undefined2 *)(lVar28 + 0x214));
    fVar72 = (float)uVar43;
    *(undefined8 *)(lVar28 + 0x100) = 0;
    fVar71 = (float)uVar44;
    *(long *)(lVar28 + 0x110) = lVar28 + 0x158;
    *(uint *)(lVar28 + 0x260) = uVar43;
    *(uint *)(lVar28 + 0x264) = uVar44;
    *(float *)(lVar28 + 0xf8) = fVar72;
    *(float *)(lVar28 + 0xfc) = fVar71;
    *(float *)(lVar28 + 0x108) = fVar72;
    *(float *)(lVar28 + 0x10c) = fVar71;
    if (*(uint *)(lVar28 + 0x250) < 6) {
      if ((1 << (ulong)(*(uint *)(lVar28 + 0x250) & 0x1f) & 0x39U) == 0) {
        fVar75 = fVar72;
      }
      else {
        fVar75 = fVar71;
        fVar71 = fVar72;
      }
      *(undefined8 *)(lVar28 + 0x240) = 0;
      *(float *)(lVar28 + 0x248) = fVar71;
      *(float *)(lVar28 + 0x24c) = fVar75;
    }
    lVar61 = 3;
    if (*puVar2 < 4) {
      lVar61 = 0;
    }
    lVar65 = *plVar63;
    lVar28 = 0x750;
    if (*puVar5 < 4) {
      lVar28 = 0;
    }
    puVar53 = *(undefined4 **)(*plVar6 + lVar28 + 8);
    lVar28 = lVar65 + lVar61 * 0x270;
    uVar43 = *(uint *)(lVar66 + 0x260);
    uVar44 = *(uint *)(lVar66 + 0x264);
    *(undefined8 *)(lVar28 + 8) = puVar53;
    *(undefined4 *)(lVar28 + 0x10) = *puVar53;
    *(undefined4 *)(lVar28 + 0x14) = puVar53[1];
    *(undefined8 *)(lVar28 + 0x18) = *(undefined8 *)(puVar53 + 2);
    *(undefined8 *)(lVar28 + 0x20) = *(undefined8 *)(puVar53 + 4);
    *(undefined4 *)(lVar28 + 0x28) = puVar53[6];
    *(undefined4 *)(lVar28 + 0x2c) = puVar53[7];
    *(undefined8 *)(lVar28 + 0x30) = *(undefined8 *)(puVar53 + 8);
    *(undefined8 *)(lVar28 + 0x38) = *(undefined8 *)(puVar53 + 10);
    uVar27 = *(undefined8 *)(puVar53 + 0xc);
    uVar36 = *(undefined8 *)(puVar53 + 0xe);
    uVar39 = *(undefined8 *)(puVar53 + 0x10);
    *(undefined8 *)(lVar28 + 0x57) = *(undefined8 *)((long)puVar53 + 0x47);
    *(undefined8 *)(lVar28 + 0x40) = uVar27;
    *(undefined8 *)(lVar28 + 0x48) = uVar36;
    *(undefined8 *)(lVar28 + 0x50) = uVar39;
    FUN_038fd1e0(lVar28 + 0x60);
    FUN_038fd2f0(lVar28 + 0x60,puVar53 + 0x14);
    uVar73 = puVar53[0x26];
    *(undefined8 *)(lVar28 + 0xa0) = *(undefined8 *)(puVar53 + 0x24);
    puVar48 = (uint *)(lVar28 + 0xe4);
    *(undefined4 *)(lVar28 + 0xa8) = uVar73;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
      if (bVar25) {
        *puVar48 = *puVar48 | 1;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar66 = lVar65 + lVar61 * 0x270;
    *(undefined2 *)(lVar66 + 0xd4) = 0x101;
    *(undefined1 *)(lVar66 + 0xd6) = 1;
    do {
      cVar21 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(puVar48,0x10);
      if (bVar25) {
        *puVar48 = *puVar48 & 0xfffffffb | 4;
        cVar21 = ExclusiveMonitorsStatus();
      }
    } while (cVar21 != '\0');
    lVar65 = lVar65 + lVar61 * 0x270;
    FUN_01560750(lVar65 + 0x158,*(undefined8 *)(lVar28 + 8),*(undefined1 *)(lVar65 + 0x216),
                 *(undefined2 *)(lVar65 + 0x214));
    fVar72 = (float)uVar43;
    *(undefined8 *)(lVar65 + 0x100) = 0;
    fVar71 = (float)uVar44;
    *(long *)(lVar65 + 0x110) = lVar65 + 0x158;
    *(uint *)(lVar65 + 0x260) = uVar43;
    *(uint *)(lVar65 + 0x264) = uVar44;
    *(float *)(lVar65 + 0xf8) = fVar72;
    *(float *)(lVar65 + 0xfc) = fVar71;
    *(float *)(lVar65 + 0x108) = fVar72;
    *(float *)(lVar65 + 0x10c) = fVar71;
    puVar67 = (undefined8 *)PTR_DAT_04bbd510;
    if (*(uint *)(lVar65 + 0x250) < 6) {
      if ((1 << (ulong)(*(uint *)(lVar65 + 0x250) & 0x1f) & 0x39U) == 0) {
        fVar75 = fVar72;
      }
      else {
        fVar75 = fVar71;
        fVar71 = fVar72;
      }
      *(undefined8 *)(lVar65 + 0x240) = 0;
      *(float *)(lVar65 + 0x248) = fVar71;
      *(float *)(lVar65 + 0x24c) = fVar75;
    }
    plVar58 = (long *)(*plVar63 + (ulong)(1 < *puVar2) * 0x270 + 0xf0);
    (**(code **)(*plVar58 + 0x38))(plVar58,param_2);
    lVar61 = *plVar63 + (ulong)(1 < *puVar2) * 0x270;
    FUN_038e77e4(lVar61 + 0x238,param_2,lVar61 + 0xf0);
    local_318 = (undefined **)0x0;
    local_310 = 0x3f80000000000000;
    (**(code **)PTR_DAT_04bcfd90)(*(undefined8 *)(param_2 + 0xb8),0,&local_318,0xf);
  }
  lVar61 = param_1 + 0x94;
  FUN_038e4d90(lVar61,param_2);
  if (uVar45 != 0) {
    uVar43 = uVar50;
    if (*puVar3 <= uVar50) {
      uVar43 = 0;
    }
    if ((int)uVar35 < (int)uVar38) {
      fVar71 = 1.0;
      lVar66 = lVar47 + uVar40 * 0x270;
      lVar28 = *plVar4;
      uVar44 = uVar38;
      do {
        uVar22 = uVar44 - 1;
        fVar71 = fVar71 + *(float *)(param_1 + 0x224);
        uVar14 = uVar22;
        if (*puVar3 <= uVar22) {
          uVar14 = 0;
        }
        lVar65 = *plVar4 + (long)(int)uVar14 * 0x20;
        uVar14 = uVar22;
        if (*(uint *)(param_1 + 0x240) <= uVar22) {
          uVar14 = 0;
        }
        plVar58 = (long *)(*(long *)(param_1 + 0x248) + (long)(int)uVar14 * 0x20);
        local_318 = (undefined **)*plVar58;
        local_308._0_4_ = (float)plVar58[2];
        local_310 = plVar58[1];
        local_300 = plVar58[3];
        local_308._4_4_ = (undefined4)((ulong)plVar58[2] >> 0x20);
        local_308 = CONCAT44(local_308._4_4_,
                             (float)local_308 * (*(float *)(param_1 + 0x218) / fVar71));
        in_stack_fffffffffffff910 = in_stack_fffffffffffff910 & 0xffffffffffffff00;
        FUN_03a97670(param_1,param_2,param_3,&local_318,lVar66 + 0xf0,lVar66 + 0x238,lVar65,
                     lVar28 + (long)(int)uVar43 * 0x20,in_stack_fffffffffffff910);
        if (((uVar50 + 1 != uVar44) && (*(int *)(param_1 + 0x214) < (int)uVar44)) &&
           ((*(byte *)(param_1 + 8) >> 2 & 1) != 0)) {
          uVar44 = uVar44 - 2;
          if (*puVar3 <= uVar44) {
            uVar44 = 0;
          }
          lVar33 = *plVar4 + (long)(int)uVar44 * 0x20;
          uVar44 = uVar22;
          if (*(uint *)(param_1 + 0x240) <= uVar22) {
            uVar44 = 0;
          }
          lVar62 = *(long *)(lVar33 + 0x10) + (ulong)(1 < *(uint *)(lVar33 + 8)) * 0x270;
          plVar58 = (long *)(*(long *)(param_1 + 0x248) + (long)(int)uVar44 * 0x20);
          local_318 = (undefined **)*plVar58;
          local_308._0_4_ = (float)plVar58[2];
          local_310 = plVar58[1];
          local_300 = plVar58[3];
          local_308._4_4_ = (undefined4)((ulong)plVar58[2] >> 0x20);
          local_308 = CONCAT44(local_308._4_4_,*(float *)(param_1 + 0x220) * (float)local_308);
          in_stack_fffffffffffff910 = CONCAT71((int7)(in_stack_fffffffffffff910 >> 8),1);
          FUN_03a97670(param_1,param_2,param_3,&local_318,lVar62 + 0xf0,lVar62 + 0x238,lVar65,lVar33
                       ,in_stack_fffffffffffff910);
        }
        uVar44 = uVar22;
      } while ((int)uVar50 < (int)uVar22);
    }
  }
  if ((uVar51 != 0) && ((int)uVar50 < (int)local_5d8)) {
    fVar71 = 1.0;
    lVar66 = lVar59 + uVar31 * 0x270;
    lVar28 = lVar64 + (long)(int)uVar52 * 0x5b0;
    plVar58 = (long *)(lVar66 + 0xf0);
    puVar48 = (uint *)(lVar28 + 0x250);
    plVar11 = (long *)(lVar28 + 600);
    uVar43 = uVar50;
    if (*puVar48 <= uVar50) {
      uVar43 = 0;
    }
    lVar28 = *plVar11 + (long)(int)uVar43 * 0x20;
    plVar12 = (long *)(lVar28 + 0x10);
    puVar46 = (uint *)(lVar28 + 8);
    do {
      local_5d8 = local_5d8 - 1;
      fVar72 = *(float *)(param_1 + 0x228);
      fVar75 = *(float *)(param_1 + 0x21c);
      lVar28 = *plVar11;
      uVar43 = local_5d8;
      if (*puVar48 <= local_5d8) {
        uVar43 = 0;
      }
      lVar65 = *plVar4;
      uVar44 = local_5d8;
      if (*puVar3 <= local_5d8) {
        uVar44 = 0;
      }
      uVar14 = local_5d8;
      if (*(uint *)(param_1 + 0x240) <= local_5d8) {
        uVar14 = 0;
      }
      lVar33 = *(long *)(param_1 + 0x248) + (long)(int)uVar14 * 0x20;
      lVar62 = *(long *)(param_1 + 0x18);
      fVar74 = *(float *)(lVar33 + 0x1c);
      iVar29 = *(int *)(lVar33 + 0x14);
      iVar60 = *(int *)(lVar33 + 0x18);
      uVar14 = param_3;
      if (*(uint *)(param_1 + 0x10) <= param_3) {
        uVar14 = 0;
      }
      (**(code **)(*plVar58 + 0x38))(plVar58,param_2);
      FUN_038e77e4(lVar66 + 0x238,param_2,plVar58);
      lVar65 = lVar65 + (long)(int)uVar44 * 0x20;
      puVar55 = (uint *)(lVar65 + 8);
      plVar37 = (long *)(lVar65 + 0x10);
      lVar65 = *(long *)(*plVar37 + (ulong)(1 < *puVar55) * 0x270 + 8);
      uVar18 = *(ushort *)(lVar65 + 0x30);
      uVar20 = *(ushort *)(lVar65 + 0x32);
      if (uVar18 < 2) {
        uVar18 = 1;
      }
      uVar19 = uVar20;
      if (*(short *)(lVar65 + 0x3a) != 3) {
        uVar19 = 1;
      }
      if (uVar19 <= uVar20) {
        uVar19 = uVar20;
      }
      lVar65 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x420) + 8);
      iVar29 = iVar29 * (uint)*(ushort *)(*(long *)(lVar65 + 0x38) + 0x30) +
               iVar60 * (uint)*(ushort *)
                               (*(long *)(lVar65 + 0x38) +
                                (ulong)(1 < *(uint *)(lVar65 + 0x30)) * 0x38 + 0x30);
      if (iVar29 < 1) {
        lVar65 = *(long *)(lVar65 + 0x18);
      }
      else {
        uVar44 = iVar29 - 1;
        if (*(uint *)(lVar65 + 0x20) <= uVar44) {
          uVar44 = 0;
        }
        lVar65 = *(long *)(lVar65 + 0x28) + (ulong)uVar44 * 0x150;
      }
      fVar71 = fVar71 + fVar72;
      fVar72 = *(float *)(lVar66 + 0x248);
      fVar68 = *(float *)(lVar66 + 0x24c);
      fVar69 = *(float *)(lVar66 + 0x240);
      fVar70 = *(float *)(lVar66 + 0x244);
      FUN_03907810(lVar65,param_2);
      puVar67 = (undefined8 *)PTR_DAT_04bbd510;
      puVar13 = (uint *)(lVar65 + 0x14);
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if (**(int **)(lVar65 + 0x38) != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                   (long)**(int **)(lVar65 + 0x38),8,lVar62 + (long)(int)uVar14 * 0x5b0 + 0x5a0);
      }
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      iVar29 = *(int *)(*(long *)(lVar65 + 0x38) + (ulong)(1 < *(uint *)(lVar65 + 0x30)) * 0x18);
      if (iVar29 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar29,8,
                   lVar62 + (long)(int)uVar14 * 0x5b0 + 0x5a8);
      }
      local_318 = (undefined **)CONCAT44(1.0 / (float)uVar19,1.0 / (float)uVar18);
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar33 = 0x30;
      if (*(uint *)(lVar65 + 0x30) < 3) {
        lVar33 = 0;
      }
      iVar29 = *(int *)(*(long *)(lVar65 + 0x38) + lVar33);
      if (iVar29 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar29,8,&local_318);
      }
      local_318 = (undefined **)CONCAT44(1.0 / (fVar68 - fVar70),1.0 / (fVar72 - fVar69));
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar33 = 0x48;
      if (*(uint *)(lVar65 + 0x30) < 4) {
        lVar33 = 0;
      }
      iVar29 = *(int *)(*(long *)(lVar65 + 0x38) + lVar33);
      if (iVar29 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar29,8,&local_318);
      }
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      local_318 = (undefined **)CONCAT44(local_318._4_4_,(fVar74 * fVar75) / fVar71);
      lVar33 = 0x60;
      if (*(uint *)(lVar65 + 0x30) < 5) {
        lVar33 = 0;
      }
      iVar29 = *(int *)(*(long *)(lVar65 + 0x38) + lVar33);
      if (iVar29 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar29,4,&local_318);
      }
      lVar62 = lVar62 + (long)(int)uVar14 * 0x5b0;
      pfVar49 = (float *)(lVar62 + 0xe4);
      fVar72 = *pfVar49;
      fVar75 = *(float *)(lVar62 + 0xe8);
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      local_318 = (undefined **)CONCAT44(local_318._4_4_,fVar75 - fVar72);
      lVar33 = 0x78;
      if (*(uint *)(lVar65 + 0x30) < 6) {
        lVar33 = 0;
      }
      iVar29 = *(int *)(*(long *)(lVar65 + 0x38) + lVar33);
      if (iVar29 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar29,4,&local_318);
      }
      fVar72 = *pfVar49;
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      local_318 = (undefined **)CONCAT44(local_318._4_4_,fVar72);
      lVar33 = 0x90;
      if (*(uint *)(lVar65 + 0x30) < 7) {
        lVar33 = 0;
      }
      iVar29 = *(int *)(*(long *)(lVar65 + 0x38) + lVar33);
      if (iVar29 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar29,4,&local_318);
      }
      uVar73 = *(undefined4 *)(param_1 + 0x22c);
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      local_318 = (undefined **)CONCAT44(local_318._4_4_,uVar73);
      lVar33 = 0xa8;
      if (*(uint *)(lVar65 + 0x30) < 8) {
        lVar33 = 0;
      }
      iVar29 = *(int *)(*(long *)(lVar65 + 0x38) + lVar33);
      if (iVar29 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar29,4,&local_318);
      }
      uVar73 = *(undefined4 *)(param_1 + 0x234);
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      local_318 = (undefined **)CONCAT44(local_318._4_4_,uVar73);
      lVar33 = 0xc0;
      if (*(uint *)(lVar65 + 0x30) < 9) {
        lVar33 = 0;
      }
      iVar29 = *(int *)(*(long *)(lVar65 + 0x38) + lVar33);
      if (iVar29 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar29,4,&local_318);
      }
      uVar73 = *(undefined4 *)(param_1 + 0x238);
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      local_318 = (undefined **)CONCAT44(local_318._4_4_,uVar73);
      lVar33 = 0xd8;
      if (*(uint *)(lVar65 + 0x30) < 10) {
        lVar33 = 0;
      }
      iVar29 = *(int *)(*(long *)(lVar65 + 0x38) + lVar33);
      if (iVar29 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar29,4,&local_318);
      }
      uVar44 = *puVar55;
      lVar33 = *plVar37;
      do {
        uVar14 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar14 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar14 & 0x7fffffff) != 0) {
        if ((int)uVar14 < 0) {
          if ((int)*puVar13 < 0) {
            lVar62 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar62 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      FUN_0390d290(lVar33 + (ulong)(1 < uVar44) * 0x270 + 0x10,param_2,
                   *(undefined8 *)(lVar65 + 0x68),0xffffffff,0);
      lVar28 = lVar28 + (long)(int)uVar43 * 0x20;
      plVar37 = (long *)(lVar28 + 0x10);
      lVar33 = *plVar37;
      do {
        uVar43 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar43 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar43 & 0x7fffffff) != 0) {
        if ((int)uVar43 < 0) {
          if ((int)*puVar13 < 0) {
            lVar62 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar62 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      puVar55 = (uint *)(lVar28 + 8);
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      FUN_0390d290(lVar33 + 0x10,param_2,
                   *(long *)(lVar65 + 0x68) + (ulong)(1 < *(uint *)(lVar65 + 0x60)) * 0x18,
                   0xffffffff,0);
      uVar43 = *puVar55;
      lVar28 = *plVar37;
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar33 = 0x4e0;
      if (uVar43 < 3) {
        lVar33 = 0;
      }
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar62 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar62 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar62 = 0x48;
      if (*(uint *)(lVar65 + 0x60) < 4) {
        lVar62 = 0;
      }
      FUN_0390d290(lVar28 + lVar33 + 0x10,param_2,*(long *)(lVar65 + 0x68) + lVar62,0xffffffff,0);
      uVar43 = *puVar55;
      lVar28 = *plVar37;
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar33 = 0x750;
      if (uVar43 < 4) {
        lVar33 = 0;
      }
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar62 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar62 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar62 = 0x30;
      if (*(uint *)(lVar65 + 0x60) < 3) {
        lVar62 = 0;
      }
      FUN_0390d290(lVar28 + lVar33 + 0x10,param_2,*(long *)(lVar65 + 0x68) + lVar62,0xffffffff,0);
      lVar28 = *plVar12;
      do {
        uVar43 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar43 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      if ((uVar43 & 0x7fffffff) != 0) {
        if ((int)uVar43 < 0) {
          if ((int)*puVar13 < 0) {
            lVar33 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar33 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar33 = 0x78;
      if (*(uint *)(lVar65 + 0x60) < 6) {
        lVar33 = 0;
      }
      FUN_0390d290(lVar28 + 0x10,param_2,*(long *)(lVar65 + 0x68) + lVar33,0xffffffff,0);
      lVar28 = *plVar12;
      uVar43 = *puVar46;
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar33 = 0x4e0;
      if (uVar43 < 3) {
        lVar33 = 0;
      }
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar62 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar62 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar62 = 0xa8;
      if (*(uint *)(lVar65 + 0x60) < 8) {
        lVar62 = 0;
      }
      FUN_0390d290(lVar28 + lVar33 + 0x10,param_2,*(long *)(lVar65 + 0x68) + lVar62,0xffffffff,0);
      lVar28 = *plVar12;
      uVar43 = *puVar46;
      do {
        uVar44 = *puVar13;
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = uVar44 | 0x80000000;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar33 = 0x750;
      if (uVar43 < 4) {
        lVar33 = 0;
      }
      if ((uVar44 & 0x7fffffff) != 0) {
        if ((int)uVar44 < 0) {
          if ((int)*puVar13 < 0) {
            lVar62 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar62 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar13 < 0);
          }
        }
        else {
          FUN_03907b80(lVar65);
        }
      }
      do {
        cVar21 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar25) {
          *puVar13 = 0;
          cVar21 = ExclusiveMonitorsStatus();
        }
      } while (cVar21 != '\0');
      lVar62 = 0x90;
      if (*(uint *)(lVar65 + 0x60) < 7) {
        lVar62 = 0;
      }
      FUN_0390d290(lVar28 + lVar33 + 0x10,param_2,*(long *)(lVar65 + 0x68) + lVar62,0xffffffff,0);
      uVar27 = *(undefined8 *)(param_2 + 0xb8);
      lVar28 = *(long *)PTR_DAT_04bbd7e0;
      (**(code **)PTR_DAT_04bcf1a8)(uVar27,0x10,lVar28 + 0x1024);
      (**(code **)PTR_DAT_04bcf1b0)(uVar27,0x10,lVar28 + 0x1068);
      iVar29 = *(int *)(lVar28 + 0x1010);
      if (iVar29 != 0) {
        lVar28 = *(long *)(lVar28 + 0x1018);
        uVar32 = 0;
        uVar54 = 0;
        do {
          lVar65 = *(long *)(lVar28 + (-(uVar54 >> 0x1f) & 0xfffffff800000000 | uVar54 << 3));
          if (lVar65 != 0) {
            uVar36 = (**(code **)PTR_DAT_04bbd560)(lVar65 + 8);
            (**(code **)PTR_DAT_04bcf1e8)
                      (uVar27,uVar32 & 0xffffffff,uVar36,*(undefined4 *)(lVar65 + 0x118));
          }
          uVar32 = uVar54 + 1;
          uVar54 = uVar32 & 0xffffffff;
        } while (iVar29 != (int)uVar32);
      }
      lVar28 = *(long *)PTR_DAT_04bbd7e8;
      iVar29 = *(int *)(lVar28 + 0x480);
      if (iVar29 != 0) {
        uVar73 = *(undefined4 *)(lVar28 + 0x464);
        uVar36 = *(undefined8 *)(param_2 + 0xb8);
        uVar27 = (**(code **)PTR_DAT_04bbd560)(lVar28 + 0x488);
        (**(code **)PTR_DAT_04bbd568)(uVar36,uVar73,*(undefined4 *)(lVar28 + 0x460),iVar29,uVar27);
      }
      uVar43 = *(uint *)(*(long *)(lVar66 + 0x110) + 0x58);
      if (uVar43 != 0xffffffff) {
        lVar28 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar28 + 0x5c8) >> 3 & 1) == 0) {
          uVar44 = uVar43 - *(ushort *)(lVar28 + 0x3da);
          if (*(uint *)(lVar28 + 0x368) <= uVar44) {
            uVar44 = 0;
          }
          if ((*(uint *)(*(long *)(lVar28 + 0x370) + (long)(int)uVar44 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03a95290;
          uVar32 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar43 & 0x3f);
        }
        else {
LAB_03a95290:
          if ((*(uint *)(lVar28 + 0x5c8) >> 5 & 1) == 0) {
            uVar30 = 0x112;
            uVar73 = 0x12;
          }
          else {
            uVar30 = 0x111;
            uVar73 = 0x11;
          }
          if ((*(uint *)(lVar28 + 800) & 2) != 0) {
            uVar73 = uVar30;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar73);
          uVar32 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar32;
      }
    } while ((int)uVar50 < (int)local_5d8);
  }
  if (*(char *)(param_1 + 8) < '\0') {
    if (uVar45 != 0) {
      pppuVar57 = (undefined ***)&local_318;
      lVar28 = lVar47 + uVar40 * 0x270;
      uVar14 = *(uint *)(lVar28 + 0x260);
      uVar22 = *(uint *)(lVar28 + 0x264);
      local_318 = &PTR_FUN_04b70ae8;
      local_310 = 0;
      uVar43 = uVar14 >> 1;
      uVar44 = uVar22 >> 1;
      FUN_0390cee0(&local_308);
      local_208 = 0;
      local_200 = 0;
      local_218 = 0;
      puVar8 = PTR_DAT_04bd1178 + 0x10;
      local_210 = &DAT_3f8000003f800000;
      local_220 = &DAT_3f8000003f800000;
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_168 = 0xffffffff;
      local_128 = "agl::TextureData";
      local_120 = 0x10000;
      local_1c8 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_160 = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_108 = 0xff;
      local_104 = 0;
      puVar9 = PTR_DAT_04bd1198 + 0x10;
      local_100 = 0x80000000000;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      ppuVar10 = (undefined **)(PTR_DAT_04bd0f08 + 0x10);
      local_c8 = *(undefined4 *)PTR_DAT_04bd0ea8;
      local_b0 = 0;
      local_b8 = 0;
      local_c4 = 0x3f80000000000000;
      local_d8 = 0x7f7fffff7f7fffff;
      local_d0 = 0xff7fffffff7fffff;
      local_588 = &PTR_FUN_04b70ae8;
      local_580 = 0;
      local_228 = puVar8;
      local_1c0 = puVar9;
      local_e0 = ppuVar10;
      FUN_0390cee0(&local_578);
      puVar67 = (undefined8 *)PTR_DAT_04bbd510;
      local_488 = 0;
      local_480 = &DAT_3f8000003f800000;
      local_490 = &DAT_3f8000003f800000;
      local_3d8 = 0xffffffff;
      local_398 = "agl::TextureData";
      local_390 = 0x10000;
      local_478 = 0;
      local_470 = 0;
      local_468 = 0;
      local_460 = 0;
      local_458 = 0;
      local_450 = 0;
      local_448 = 0;
      local_440 = 0;
      local_438 = 0;
      local_428 = 0;
      local_420 = 0;
      local_418 = 0;
      local_410 = 0;
      local_408 = 0;
      local_400 = 0;
      local_3f8 = 0;
      local_3f0 = 0;
      local_3e8 = 0;
      local_3e0 = 0;
      local_3d0 = 0;
      local_3c8 = 0;
      local_3c0 = 0;
      local_3b8 = 0;
      local_3b0 = 0;
      local_3a8 = 0;
      local_3a0 = 0;
      local_378 = 0xff;
      local_374 = 0;
      local_370 = 0x80000000000;
      local_368 = 0;
      local_360 = 0;
      local_358 = 0;
      local_338 = *(undefined4 *)PTR_DAT_04bd0ea8;
      local_334 = 0x3f80000000000000;
      local_348 = 0x7f7fffff7f7fffff;
      local_340 = 0xff7fffffff7fffff;
      if (uVar14 < 2) {
        uVar43 = 1;
      }
      if (uVar22 < 2) {
        uVar44 = 1;
      }
      local_320[0] = 0;
      local_328 = 0;
      local_498 = puVar8;
      local_430 = puVar9;
      local_350 = ppuVar10;
      FUN_038e4d90(lVar42,param_2);
      FUN_03a8fcf0(&local_318,param_2,1,uVar43,uVar44,"summary0",0);
      FUN_03a96ac0(param_1,param_2,0,&local_228,lVar28 + 0x10);
      bVar25 = uVar44 != 1;
      bVar26 = uVar43 != 1;
      if ((bVar26) || (uVar44 != 1)) {
        pppuVar24 = &local_588;
        pppuVar57 = (undefined ***)&local_318;
        do {
          pppuVar56 = pppuVar57;
          pppuVar57 = pppuVar24;
          uVar43 = uVar43 >> 1;
          if (!bVar26) {
            uVar43 = 1;
          }
          uVar44 = uVar44 >> 1;
          if (!bVar25) {
            uVar44 = 1;
          }
          FUN_03a8fcf0(pppuVar57,param_2,1,uVar43,uVar44,"summary",0);
          FUN_03a96ac0(param_1,param_2,0,pppuVar57 + 0x1e,pppuVar56 + 2);
          if (*(char *)(pppuVar56 + 0x4d) != '\0') {
            FUN_039499cc(*puVar67,pppuVar56[1]);
          }
          bVar26 = uVar43 != 1;
          pppuVar56[1] = (undefined **)0x0;
          bVar25 = uVar44 != 1;
          *(undefined2 *)(pppuVar56 + 0x4d) = 0;
          pppuVar24 = pppuVar56;
        } while ((bVar25) || (uVar43 != 1));
      }
      FUN_03a98480(param_1,param_2,lVar47 + uVar40 * 0x270 + 0xf0,lVar28 + 0x10,pppuVar57 + 2);
      if (*(char *)(pppuVar57 + 0x4d) != '\0') {
        FUN_039499cc(*puVar67,pppuVar57[1]);
      }
      pppuVar57[1] = (undefined **)0x0;
      *(undefined2 *)(pppuVar57 + 0x4d) = 0;
      FUN_03a8fb98(&local_588);
      FUN_03a8fb98(&local_318);
    }
    if (uVar51 != 0) {
      pppuVar57 = (undefined ***)&local_318;
      lVar28 = lVar47 + uVar40 * 0x270;
      uVar14 = *(uint *)(lVar28 + 0x260);
      uVar22 = *(uint *)(lVar28 + 0x264);
      local_318 = &PTR_FUN_04b70ae8;
      local_310 = 0;
      uVar43 = uVar14 >> 1;
      uVar44 = uVar22 >> 1;
      FUN_0390cee0(&local_308);
      local_208 = 0;
      local_200 = 0;
      local_218 = 0;
      local_210 = &DAT_3f8000003f800000;
      puVar8 = PTR_DAT_04bd1178 + 0x10;
      local_220 = &DAT_3f8000003f800000;
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_168 = 0xffffffff;
      local_128 = "agl::TextureData";
      local_120 = 0x10000;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_160 = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_108 = 0xff;
      local_104 = 0;
      puVar9 = PTR_DAT_04bd1198 + 0x10;
      local_100 = 0x80000000000;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      ppuVar10 = (undefined **)(PTR_DAT_04bd0f08 + 0x10);
      local_c8 = *(undefined4 *)PTR_DAT_04bd0ea8;
      local_b0 = 0;
      local_b8 = 0;
      local_c4 = 0x3f80000000000000;
      local_d8 = 0x7f7fffff7f7fffff;
      local_d0 = 0xff7fffffff7fffff;
      local_588 = &PTR_FUN_04b70ae8;
      local_580 = 0;
      local_228 = puVar8;
      local_1c0 = puVar9;
      local_e0 = ppuVar10;
      FUN_0390cee0(&local_578);
      puVar67 = (undefined8 *)PTR_DAT_04bbd510;
      local_488 = 0;
      local_480 = &DAT_3f8000003f800000;
      local_490 = &DAT_3f8000003f800000;
      local_3d8 = 0xffffffff;
      local_398 = "agl::TextureData";
      local_390 = 0x10000;
      local_478 = 0;
      local_470 = 0;
      local_468 = 0;
      local_460 = 0;
      local_458 = 0;
      local_450 = 0;
      local_448 = 0;
      local_440 = 0;
      local_438 = 0;
      local_428 = 0;
      local_420 = 0;
      local_418 = 0;
      local_410 = 0;
      local_408 = 0;
      local_400 = 0;
      local_3f8 = 0;
      local_3f0 = 0;
      local_3e8 = 0;
      local_3e0 = 0;
      local_3d0 = 0;
      local_3c8 = 0;
      local_3c0 = 0;
      local_3b8 = 0;
      local_3b0 = 0;
      local_3a8 = 0;
      local_3a0 = 0;
      local_378 = 0xff;
      local_374 = 0;
      local_370 = 0x80000000000;
      local_368 = 0;
      local_360 = 0;
      local_358 = 0;
      local_338 = *(undefined4 *)PTR_DAT_04bd0ea8;
      local_334 = 0x3f80000000000000;
      local_348 = 0x7f7fffff7f7fffff;
      local_340 = 0xff7fffffff7fffff;
      if (uVar14 < 2) {
        uVar43 = 1;
      }
      if (uVar22 < 2) {
        uVar44 = 1;
      }
      local_320[0] = 0;
      local_328 = 0;
      local_498 = puVar8;
      local_430 = puVar9;
      local_350 = ppuVar10;
      FUN_038e4d90(lVar42,param_2);
      FUN_03a8fcf0(&local_318,param_2,1,uVar43,uVar44,"summary0",0);
      lVar28 = lVar59 + uVar31 * 0x270 + 0x10;
      FUN_03a96ac0(param_1,param_2,0,&local_228,lVar28);
      bVar25 = uVar44 != 1;
      bVar26 = uVar43 != 1;
      if ((bVar26) || (uVar44 != 1)) {
        pppuVar24 = &local_588;
        pppuVar57 = (undefined ***)&local_318;
        do {
          pppuVar56 = pppuVar57;
          pppuVar57 = pppuVar24;
          uVar43 = uVar43 >> 1;
          if (!bVar26) {
            uVar43 = 1;
          }
          uVar44 = uVar44 >> 1;
          if (!bVar25) {
            uVar44 = 1;
          }
          FUN_03a8fcf0(pppuVar57,param_2,1,uVar43,uVar44,"summary",0);
          FUN_03a96ac0(param_1,param_2,0,pppuVar57 + 0x1e,pppuVar56 + 2);
          if (*(char *)(pppuVar56 + 0x4d) != '\0') {
            FUN_039499cc(*puVar67,pppuVar56[1]);
          }
          bVar26 = uVar43 != 1;
          pppuVar56[1] = (undefined **)0x0;
          bVar25 = uVar44 != 1;
          *(undefined2 *)(pppuVar56 + 0x4d) = 0;
          pppuVar24 = pppuVar56;
        } while ((bVar25) || (uVar43 != 1));
      }
      FUN_03a98480(param_1,param_2,lVar59 + uVar31 * 0x270 + 0xf0,lVar28,pppuVar57 + 2);
      if (*(char *)(pppuVar57 + 0x4d) != '\0') {
        FUN_039499cc(*puVar67,pppuVar57[1]);
      }
      pppuVar57[1] = (undefined **)0x0;
      *(undefined2 *)(pppuVar57 + 0x4d) = 0;
      FUN_03a8fb98(&local_588);
      FUN_03a8fb98(&local_318);
      goto LAB_03a95b0c;
    }
  }
  else {
LAB_03a95b0c:
    if (((uVar45 & uVar51) == 1) && ((*(byte *)(param_1 + 8) >> 5 & 1) != 0)) {
      if (-1 < (int)uVar50) {
        iVar29 = 0;
        lVar42 = lVar64 + (long)(int)uVar52 * 0x5b0;
        plVar58 = (long *)(lVar42 + 0x558);
        uVar41 = uVar50;
        while( true ) {
          uVar43 = uVar41;
          if (*puVar3 <= uVar41) {
            uVar43 = 0;
          }
          lVar66 = *plVar4 + (ulong)uVar43 * 0x20;
          lVar28 = lVar59 + uVar31 * 0x270;
          lVar65 = lVar47 + uVar40 * 0x270;
          if (iVar29 != 0) {
            uVar43 = uVar41;
            if (*(uint *)(lVar42 + 0x250) <= uVar41) {
              uVar43 = 0;
            }
            lVar28 = *(long *)(lVar42 + 600) + (ulong)uVar43 * 0x20;
            lVar65 = *(long *)(lVar66 + 0x10) + (ulong)(1 < *(uint *)(lVar66 + 8)) * 0x270;
            lVar28 = *(long *)(lVar28 + 0x10) + (ulong)(1 < *(uint *)(lVar28 + 8)) * 0x270;
          }
          lVar65 = lVar65 + 0x10;
          lVar28 = lVar28 + 0x10;
          if (uVar41 == 0) break;
          uVar44 = uVar41 - 1;
          uVar43 = uVar44;
          if (*puVar3 <= uVar44) {
            uVar43 = 0;
          }
          lVar33 = *plVar4 + (ulong)uVar43 * 0x20;
          uVar43 = uVar44;
          if (*(uint *)(lVar42 + 0x250) <= uVar44) {
            uVar43 = 0;
          }
          lVar62 = *(long *)(lVar42 + 600) + (ulong)uVar43 * 0x20;
          lVar34 = *(long *)(lVar33 + 0x10) + (ulong)(1 < *(uint *)(lVar33 + 8)) * 0x270;
          *(undefined4 *)(lVar42 + 0x540) = *(undefined4 *)(lVar34 + 0xf8);
          *(undefined4 *)(lVar42 + 0x544) = *(undefined4 *)(lVar34 + 0xfc);
          lVar34 = *(long *)(lVar33 + 0x10) + (ulong)(1 < *(uint *)(lVar33 + 8)) * 0x270;
          *(undefined4 *)(lVar42 + 0x548) = *(undefined4 *)(lVar34 + 0x100);
          *(undefined4 *)(lVar42 + 0x54c) = *(undefined4 *)(lVar34 + 0x104);
          *(undefined4 *)(lVar42 + 0x550) = *(undefined4 *)(lVar34 + 0x108);
          uVar73 = *(undefined4 *)(lVar34 + 0x10c);
          *plVar58 = 0;
          *(undefined8 *)(lVar42 + 0x560) = 0;
          *(undefined8 *)(lVar42 + 0x568) = 0;
          *(undefined8 *)(lVar42 + 0x570) = 0;
          *(undefined8 *)(lVar42 + 0x598) = 0;
          *(undefined8 *)(lVar42 + 0x578) = 0;
          *(undefined8 *)(lVar42 + 0x580) = 0;
          *(undefined4 *)(lVar42 + 0x554) = uVar73;
          *(undefined8 *)(lVar42 + 0x588) = 0;
          *(undefined8 *)(lVar42 + 0x590) = 0;
          *plVar58 = *(long *)(lVar33 + 0x10) + (ulong)(1 < *(uint *)(lVar33 + 8)) * 0x270 + 0x158;
          *(ulong *)(lVar42 + 0x560) =
               *(long *)(lVar62 + 0x10) + (ulong)(1 < *(uint *)(lVar62 + 8)) * 0x270 + 0x158;
          FUN_038e4d90(param_1 + 0x108,param_2);
          lVar62 = 0x4e0;
          if (*(uint *)(lVar66 + 8) < 3) {
            lVar62 = 0;
          }
          lVar34 = 0x750;
          if (*(uint *)(lVar66 + 8) < 4) {
            lVar34 = 0;
          }
          lVar15 = 0x4e0;
          if (*(uint *)(lVar33 + 8) < 3) {
            lVar15 = 0;
          }
          lVar16 = 0x750;
          if (*(uint *)(lVar33 + 8) < 4) {
            lVar16 = 0;
          }
          if (*(uint *)(param_1 + 0x240) <= uVar41) {
            uVar41 = 0;
          }
          FUN_03a98980(param_1,param_2,param_3,lVar42 + 0x538,lVar65,
                       *(long *)(lVar66 + 0x10) + lVar62 + 0x10,
                       *(long *)(lVar66 + 0x10) + lVar34 + 0x10,
                       *(long *)(lVar33 + 0x10) + lVar15 + 0x10,
                       *(long *)(lVar33 + 0x10) + lVar16 + 0x10,0,lVar28,
                       *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)uVar41 * 0x20),0);
          iVar29 = iVar29 + 1;
          uVar41 = uVar44;
        }
        if (param_8 == (undefined4 *)0x0) {
          lVar47 = *(long *)(param_4 + 0x20);
          lVar59 = *(long *)(param_5 + 0x20);
          FUN_0390297c(&local_318,lVar47 + 8,*(undefined1 *)(lVar47 + 0xbe),
                       *(undefined2 *)(lVar47 + 0xbc));
          FUN_0390297c(&local_588,lVar59 + 8,*(undefined1 *)(lVar59 + 0xbe),
                       *(undefined2 *)(lVar59 + 0xbc));
          *(undefined4 *)(lVar42 + 0x540) = *(undefined4 *)(param_4 + 8);
          *(undefined4 *)(lVar42 + 0x544) = *(undefined4 *)(param_4 + 0xc);
          *(undefined4 *)(lVar42 + 0x548) = *(undefined4 *)(param_4 + 0x10);
          *(undefined4 *)(lVar42 + 0x54c) = *(undefined4 *)(param_4 + 0x14);
          *(undefined4 *)(lVar42 + 0x550) = *(undefined4 *)(param_4 + 0x18);
          uVar73 = *(undefined4 *)(param_4 + 0x1c);
          *plVar58 = (long)&local_318;
          *(undefined ****)(lVar42 + 0x560) = &local_588;
          *(undefined8 *)(lVar42 + 0x598) = 0;
          *(undefined8 *)(lVar42 + 0x568) = 0;
          *(undefined8 *)(lVar42 + 0x570) = 0;
          *(undefined8 *)(lVar42 + 0x578) = 0;
          *(undefined8 *)(lVar42 + 0x580) = 0;
          *(undefined4 *)(lVar42 + 0x554) = uVar73;
          *(undefined8 *)(lVar42 + 0x588) = 0;
          *(undefined8 *)(lVar42 + 0x590) = 0;
          FUN_038e4d90(param_1 + 0x17c,param_2);
          lVar47 = 0x4e0;
          if (*(uint *)(lVar66 + 8) < 3) {
            lVar47 = 0;
          }
          lVar59 = 0x750;
          if (*(uint *)(lVar66 + 8) < 4) {
            lVar59 = 0;
          }
          lVar61 = 0x4e0;
          if (*puVar5 < 3) {
            lVar61 = 0;
          }
          lVar33 = 0x750;
          if (*puVar5 < 4) {
            lVar33 = 0;
          }
          FUN_03a98980(param_1,param_2,param_3,lVar42 + 0x538,lVar65,
                       *(long *)(lVar66 + 0x10) + lVar47 + 0x10,
                       *(long *)(lVar66 + 0x10) + lVar59 + 0x10,*plVar6 + lVar61 + 0x10,
                       *plVar6 + lVar33 + 0x10,0,lVar28,**(undefined4 **)(param_1 + 0x248),0);
          ppuVar10 = (undefined **)(PTR_DAT_04bbd508 + 0x10);
          local_588 = ppuVar10;
          FUN_038fd0e0(auStack_530);
          local_318 = ppuVar10;
          FUN_038fd0e0(auStack_2c0);
          puVar67 = (undefined8 *)PTR_DAT_04bbd510;
        }
        else {
          FUN_038e4d90(lVar61,param_2);
          lVar42 = 0x4e0;
          if (*(uint *)(lVar66 + 8) < 3) {
            lVar42 = 0;
          }
          lVar47 = 0x750;
          if (*(uint *)(lVar66 + 8) < 4) {
            lVar47 = 0;
          }
          lVar59 = 0x4e0;
          if (*puVar5 < 3) {
            lVar59 = 0;
          }
          lVar61 = *plVar6 + 0x10;
          lVar33 = 0x750;
          if (*puVar5 < 4) {
            lVar33 = 0;
          }
          FUN_03a98980(param_1,param_2,param_3,param_4,lVar65,
                       *(long *)(lVar66 + 0x10) + lVar42 + 0x10,
                       *(long *)(lVar66 + 0x10) + lVar47 + 0x10,lVar61 + lVar59,
                       *plVar6 + lVar33 + 0x10,lVar61,lVar28,**(undefined4 **)(param_1 + 0x248),0);
          puVar67 = (undefined8 *)PTR_DAT_04bbd510;
        }
      }
      goto LAB_03a96788;
    }
  }
  uVar43 = uVar45 ^ 1;
  if ((int)uVar50 < 0) {
    uVar43 = 1;
  }
  if (uVar43 == 0) {
    lVar28 = *plVar4;
    uVar43 = uVar50;
    if (*puVar3 <= uVar50) {
      uVar43 = 0;
    }
    lVar66 = lVar28 + (ulong)uVar43 * 0x20;
    lVar47 = lVar47 + uVar40 * 0x270 + 0x10;
    if (uVar50 == 0) {
      FUN_038e4d90(lVar61,param_2);
      lVar28 = 0x4e0;
      if (*(uint *)(lVar66 + 8) < 3) {
        lVar28 = 0;
      }
      lVar65 = 0x750;
      if (*(uint *)(lVar66 + 8) < 4) {
        lVar65 = 0;
      }
      lVar33 = *plVar6 + 0x10;
      lVar62 = 0x4e0;
      if (*puVar5 < 3) {
        lVar62 = 0;
      }
      lVar34 = 0x750;
      if (*puVar5 < 4) {
        lVar34 = 0;
      }
      lVar62 = lVar33 + lVar62;
      if (param_8 == (undefined4 *)0x0) {
        lVar33 = 0;
      }
      FUN_03a98980(param_1,param_2,param_3,param_4,lVar47,*(long *)(lVar66 + 0x10) + lVar28 + 0x10,
                   *(long *)(lVar66 + 0x10) + lVar65 + 0x10,lVar62,*plVar6 + lVar34 + 0x10,lVar33,0,
                   **(undefined4 **)(param_1 + 0x248),0);
    }
    else {
      uVar43 = uVar41;
      if (*puVar3 <= uVar41) {
        uVar43 = 0;
      }
      FUN_038e4d90(lVar42,param_2);
      lVar28 = lVar28 + (ulong)uVar43 * 0x20;
      uVar44 = *(uint *)(lVar28 + 8);
      lVar28 = *(long *)(lVar28 + 0x10);
      uVar43 = uVar50;
      if (*(uint *)(param_1 + 0x240) <= uVar50) {
        uVar43 = 0;
      }
      lVar65 = 0x4e0;
      if (*(uint *)(lVar66 + 8) < 3) {
        lVar65 = 0;
      }
      lVar33 = 0x750;
      if (*(uint *)(lVar66 + 8) < 4) {
        lVar33 = 0;
      }
      lVar62 = 0x4e0;
      if (uVar44 < 3) {
        lVar62 = 0;
      }
      lVar34 = 0x750;
      if (uVar44 < 4) {
        lVar34 = 0;
      }
      FUN_03a98980(param_1,param_2,param_3,lVar28 + (ulong)(1 < uVar44) * 0x270 + 0xf0,lVar47,
                   *(long *)(lVar66 + 0x10) + lVar65 + 0x10,*(long *)(lVar66 + 0x10) + lVar33 + 0x10
                   ,lVar28 + lVar62 + 0x10,lVar28 + lVar34 + 0x10,0,0,
                   *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)uVar43 * 0x20),0);
      uVar44 = *puVar3;
      lVar47 = *plVar4;
      uVar43 = uVar41;
      if (uVar44 <= uVar41) {
        uVar43 = 0;
      }
      lVar28 = lVar47 + (ulong)uVar43 * 0x20;
      puVar48 = (uint *)(lVar28 + 8);
      plVar58 = (long *)(lVar28 + 0x10);
      lVar28 = *plVar58 + (ulong)(1 < *puVar48) * 0x270;
      uVar43 = uVar41;
      while (uVar43 != 0) {
        uVar22 = uVar43 - 1;
        uVar14 = uVar22;
        if (uVar44 <= uVar22) {
          uVar14 = 0;
        }
        FUN_038e4d90(lVar42,param_2);
        lVar47 = lVar47 + (ulong)uVar14 * 0x20;
        uVar44 = *(uint *)(lVar47 + 8);
        lVar47 = *(long *)(lVar47 + 0x10);
        if (*(uint *)(param_1 + 0x240) <= uVar43) {
          uVar43 = 0;
        }
        lVar66 = 0x4e0;
        if (*puVar48 < 3) {
          lVar66 = 0;
        }
        lVar65 = 0x750;
        if (*puVar48 < 4) {
          lVar65 = 0;
        }
        lVar33 = 0x4e0;
        if (uVar44 < 3) {
          lVar33 = 0;
        }
        lVar62 = 0x750;
        if (uVar44 < 4) {
          lVar62 = 0;
        }
        FUN_03a98980(param_1,param_2,param_3,lVar47 + (ulong)(1 < uVar44) * 0x270 + 0xf0,
                     lVar28 + 0x10,*plVar58 + lVar66 + 0x10,*plVar58 + lVar65 + 0x10,
                     lVar47 + lVar33 + 0x10,lVar47 + lVar62 + 0x10,0,0,
                     *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)uVar43 * 0x20),0);
        uVar44 = *puVar3;
        lVar47 = *plVar4;
        uVar43 = uVar22;
        if (uVar44 <= uVar22) {
          uVar43 = 0;
        }
        lVar28 = lVar47 + (ulong)uVar43 * 0x20;
        puVar48 = (uint *)(lVar28 + 8);
        plVar58 = (long *)(lVar28 + 0x10);
        lVar28 = *plVar58 + (ulong)(1 < *puVar48) * 0x270;
        uVar43 = uVar22;
      }
      FUN_038e4d90(lVar61,param_2);
      lVar47 = 0x4e0;
      if (*puVar48 < 3) {
        lVar47 = 0;
      }
      lVar66 = 0x750;
      if (*puVar48 < 4) {
        lVar66 = 0;
      }
      lVar65 = *plVar6 + 0x10;
      lVar33 = 0x4e0;
      if (*puVar5 < 3) {
        lVar33 = 0;
      }
      lVar62 = 0x750;
      if (*puVar5 < 4) {
        lVar62 = 0;
      }
      lVar33 = lVar65 + lVar33;
      if (param_8 == (undefined4 *)0x0) {
        lVar65 = 0;
      }
      FUN_03a98980(param_1,param_2,param_3,param_4,lVar28 + 0x10,*plVar58 + lVar47 + 0x10,
                   *plVar58 + lVar66 + 0x10,lVar33,*plVar6 + lVar62 + 0x10,lVar65,0,
                   **(undefined4 **)(param_1 + 0x248),0);
      puVar67 = (undefined8 *)PTR_DAT_04bbd510;
    }
  }
  uVar43 = uVar51 ^ 1;
  if ((int)uVar50 < 0) {
    uVar43 = 1;
  }
  if (uVar43 == 0) {
    lVar66 = lVar64 + (long)(int)uVar52 * 0x5b0;
    lVar28 = *(long *)(lVar66 + 600);
    lVar47 = lVar59 + uVar31 * 0x270 + 0x10;
    uVar43 = uVar50;
    if (*(uint *)(lVar66 + 0x250) <= uVar50) {
      uVar43 = 0;
    }
    lVar59 = lVar28 + (ulong)uVar43 * 0x20;
    if (uVar50 == 0) {
      FUN_038e4d90(lVar61,param_2);
      lVar42 = 0x4e0;
      if (*(uint *)(lVar59 + 8) < 3) {
        lVar42 = 0;
      }
      lVar61 = 0x750;
      if (*(uint *)(lVar59 + 8) < 4) {
        lVar61 = 0;
      }
      lVar28 = 0x4e0;
      if (*puVar5 < 3) {
        lVar28 = 0;
      }
      lVar66 = 0x750;
      if (*puVar5 < 4) {
        lVar66 = 0;
      }
      FUN_03a98980(param_1,param_2,param_3,param_5,lVar47,*(long *)(lVar59 + 0x10) + lVar42 + 0x10,
                   *(long *)(lVar59 + 0x10) + lVar61 + 0x10,*plVar6 + lVar28 + 0x10,
                   *plVar6 + lVar66 + 0x10,0,0,*(undefined4 *)(*(long *)(param_1 + 0x248) + 4),
                   param_8 != (undefined4 *)0x0);
    }
    else {
      uVar43 = uVar41;
      if (*(uint *)(lVar66 + 0x250) <= uVar41) {
        uVar43 = 0;
      }
      FUN_038e4d90(lVar42,param_2);
      lVar28 = lVar28 + (ulong)uVar43 * 0x20;
      uVar44 = *(uint *)(lVar28 + 8);
      lVar28 = *(long *)(lVar28 + 0x10);
      uVar43 = uVar50;
      if (*(uint *)(param_1 + 0x240) <= uVar50) {
        uVar43 = 0;
      }
      lVar65 = 0x4e0;
      if (*(uint *)(lVar59 + 8) < 3) {
        lVar65 = 0;
      }
      lVar33 = 0x750;
      if (*(uint *)(lVar59 + 8) < 4) {
        lVar33 = 0;
      }
      lVar62 = 0x4e0;
      if (uVar44 < 3) {
        lVar62 = 0;
      }
      lVar34 = 0x750;
      if (uVar44 < 4) {
        lVar34 = 0;
      }
      FUN_03a98980(param_1,param_2,param_3,lVar28 + (ulong)(1 < uVar44) * 0x270 + 0xf0,lVar47,
                   *(long *)(lVar59 + 0x10) + lVar65 + 0x10,*(long *)(lVar59 + 0x10) + lVar33 + 0x10
                   ,lVar28 + lVar62 + 0x10,lVar28 + lVar34 + 0x10,0,0,
                   *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)uVar43 * 0x20 + 4),0);
      uVar44 = *(uint *)(lVar66 + 0x250);
      lVar47 = *(long *)(lVar66 + 600);
      uVar43 = uVar41;
      if (uVar44 <= uVar41) {
        uVar43 = 0;
      }
      lVar59 = lVar47 + (ulong)uVar43 * 0x20;
      puVar48 = (uint *)(lVar59 + 8);
      plVar58 = (long *)(lVar59 + 0x10);
      lVar59 = *plVar58 + (ulong)(1 < *puVar48) * 0x270 + 0x10;
      if (uVar41 != 0) {
        do {
          uVar14 = uVar41 - 1;
          uVar43 = uVar14;
          if (uVar44 <= uVar14) {
            uVar43 = 0;
          }
          FUN_038e4d90(lVar42,param_2);
          lVar47 = lVar47 + (ulong)uVar43 * 0x20;
          uVar43 = *(uint *)(lVar47 + 8);
          lVar47 = *(long *)(lVar47 + 0x10);
          if (*(uint *)(param_1 + 0x240) <= uVar41) {
            uVar41 = 0;
          }
          lVar28 = 0x4e0;
          if (*puVar48 < 3) {
            lVar28 = 0;
          }
          lVar65 = 0x750;
          if (*puVar48 < 4) {
            lVar65 = 0;
          }
          lVar33 = 0x4e0;
          if (uVar43 < 3) {
            lVar33 = 0;
          }
          lVar62 = 0x750;
          if (uVar43 < 4) {
            lVar62 = 0;
          }
          FUN_03a98980(param_1,param_2,param_3,lVar47 + (ulong)(1 < uVar43) * 0x270 + 0xf0,lVar59,
                       *plVar58 + lVar28 + 0x10,*plVar58 + lVar65 + 0x10,lVar47 + lVar33 + 0x10,
                       lVar47 + lVar62 + 0x10,0,0,
                       *(undefined4 *)(*(long *)(param_1 + 0x248) + (ulong)uVar41 * 0x20 + 4),0);
          lVar47 = *(long *)(lVar66 + 600);
          uVar44 = *(uint *)(lVar66 + 0x250);
          uVar41 = uVar14;
          if (uVar44 <= uVar14) {
            uVar41 = 0;
          }
          lVar59 = lVar47 + (ulong)uVar41 * 0x20;
          puVar48 = (uint *)(lVar59 + 8);
          plVar58 = (long *)(lVar59 + 0x10);
          lVar59 = *plVar58 + (ulong)(1 < *puVar48) * 0x270 + 0x10;
          uVar41 = uVar14;
        } while (uVar14 != 0);
      }
      FUN_038e4d90(lVar61,param_2);
      lVar42 = 0x4e0;
      if (*puVar48 < 3) {
        lVar42 = 0;
      }
      lVar47 = 0x750;
      if (*puVar48 < 4) {
        lVar47 = 0;
      }
      lVar61 = 0x4e0;
      if (*puVar5 < 3) {
        lVar61 = 0;
      }
      lVar28 = 0x750;
      if (*puVar5 < 4) {
        lVar28 = 0;
      }
      FUN_03a98980(param_1,param_2,param_3,param_5,lVar59,*plVar58 + lVar42 + 0x10,
                   *plVar58 + lVar47 + 0x10,*plVar6 + lVar61 + 0x10,*plVar6 + lVar28 + 0x10,0,0,
                   *(undefined4 *)(*(long *)(param_1 + 0x248) + 4),param_8 != (undefined4 *)0x0);
      puVar67 = (undefined8 *)PTR_DAT_04bbd510;
    }
  }
LAB_03a96788:
  if (uVar45 != 0) {
    if (0 < (int)uVar50) {
      uVar45 = 0;
      do {
        FUN_006e9528(&local_318,"dif_expand_%d",uVar45);
        uVar45 = uVar45 + 1;
      } while (uVar50 != uVar45);
    }
    if ((int)uVar35 < (int)uVar38) {
      uVar45 = uVar50;
      do {
        FUN_006e9528(&local_318,"dif_light_%d",uVar45);
        uVar45 = uVar45 + 1;
      } while (uVar38 != uVar45);
    }
  }
  uVar51 = uVar51 ^ 1;
  if ((int)uVar50 < 1) {
    uVar51 = 1;
  }
  if (uVar51 == 0) {
    uVar45 = 0;
    do {
      FUN_006e9528(&local_318,"ref_expand_%d",uVar45);
      uVar45 = uVar45 + 1;
    } while (uVar50 != uVar45);
  }
  uVar45 = *puVar5;
  if (uVar45 != 0) {
    uVar51 = 0;
    lVar42 = *plVar6;
    do {
      lVar47 = lVar42 + (long)(int)uVar51 * 0x270;
      if (*(char *)(lVar47 + 0x268) != '\0') {
        FUN_039499cc(*puVar67,*(undefined8 *)(lVar42 + (long)(int)uVar51 * 0x270 + 8));
      }
      lVar59 = lVar42 + (long)(int)uVar51 * 0x270;
      *(undefined1 *)(lVar47 + 0x268) = 0;
      *(undefined8 *)(lVar59 + 8) = 0;
      *(undefined1 *)(lVar59 + 0x269) = 0;
      uVar51 = uVar51 + 1;
    } while (uVar45 != uVar51);
  }
  uVar45 = 0;
  lVar64 = lVar64 + (long)(int)uVar52 * 0x5b0;
  do {
    uVar52 = uVar45;
    if (*puVar3 <= uVar45) {
      uVar52 = 0;
    }
    lVar42 = *plVar4 + (ulong)uVar52 * 0x20;
    iVar29 = *(int *)(lVar42 + 8);
    if (iVar29 != 0) {
      lVar42 = *(long *)(lVar42 + 0x10);
      iVar60 = 0;
      do {
        lVar47 = lVar42 + (long)iVar60 * 0x270;
        if (*(char *)(lVar47 + 0x268) != '\0') {
          FUN_039499cc(*puVar67,*(undefined8 *)(lVar42 + (long)iVar60 * 0x270 + 8));
        }
        lVar59 = lVar42 + (long)iVar60 * 0x270;
        *(undefined1 *)(lVar47 + 0x268) = 0;
        *(undefined8 *)(lVar59 + 8) = 0;
        *(undefined1 *)(lVar59 + 0x269) = 0;
        iVar60 = iVar60 + 1;
      } while (iVar29 != iVar60);
    }
    uVar52 = uVar45;
    if (*(uint *)(lVar64 + 0x250) <= uVar45) {
      uVar52 = 0;
    }
    lVar42 = *(long *)(lVar64 + 600) + (ulong)uVar52 * 0x20;
    iVar29 = *(int *)(lVar42 + 8);
    if (iVar29 != 0) {
      lVar42 = *(long *)(lVar42 + 0x10);
      iVar60 = 0;
      do {
        lVar47 = lVar42 + (long)iVar60 * 0x270;
        if (*(char *)(lVar47 + 0x268) != '\0') {
          FUN_039499cc(*puVar67,*(undefined8 *)(lVar42 + (long)iVar60 * 0x270 + 8));
        }
        lVar59 = lVar42 + (long)iVar60 * 0x270;
        *(undefined1 *)(lVar47 + 0x268) = 0;
        *(undefined8 *)(lVar59 + 8) = 0;
        *(undefined1 *)(lVar59 + 0x269) = 0;
        iVar60 = iVar60 + 1;
      } while (iVar29 != iVar60);
    }
    uVar45 = uVar45 + 1;
  } while (uVar45 != 10);
  uVar45 = *puVar1;
  if (uVar45 != 0) {
    uVar52 = 0;
    lVar64 = *plVar7;
    do {
      lVar42 = lVar64 + (long)(int)uVar52 * 0x270;
      if (*(char *)(lVar42 + 0x268) != '\0') {
        FUN_039499cc(*puVar67,*(undefined8 *)(lVar64 + (long)(int)uVar52 * 0x270 + 8));
      }
      lVar47 = lVar64 + (long)(int)uVar52 * 0x270;
      *(undefined1 *)(lVar42 + 0x268) = 0;
      *(undefined8 *)(lVar47 + 8) = 0;
      *(undefined1 *)(lVar47 + 0x269) = 0;
      uVar52 = uVar52 + 1;
    } while (uVar45 != uVar52);
  }
  uVar45 = *puVar2;
  if (uVar45 != 0) {
    uVar52 = 0;
    lVar64 = *plVar63;
    do {
      lVar42 = lVar64 + (long)(int)uVar52 * 0x270;
      if (*(char *)(lVar42 + 0x268) != '\0') {
        FUN_039499cc(*puVar67,*(undefined8 *)(lVar64 + (long)(int)uVar52 * 0x270 + 8));
      }
      lVar47 = lVar64 + (long)(int)uVar52 * 0x270;
      *(undefined1 *)(lVar42 + 0x268) = 0;
      *(undefined8 *)(lVar47 + 8) = 0;
      *(undefined1 *)(lVar47 + 0x269) = 0;
      uVar52 = uVar52 + 1;
    } while (uVar45 != uVar52);
  }
  return;
}

