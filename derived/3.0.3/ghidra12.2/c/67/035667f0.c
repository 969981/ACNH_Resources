
void FUN_035667f0(byte *param_1,int param_2,int param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 *__src;
  uint *puVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  undefined *puVar15;
  undefined *local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined1 *local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined *local_4a8;
  long local_4a0;
  undefined8 local_498;
  undefined1 *puStack_490;
  undefined4 local_488;
  undefined1 local_484 [47];
  undefined1 local_455;
  undefined *local_450;
  long lStack_448;
  undefined8 local_440;
  undefined1 *puStack_438;
  undefined4 local_430;
  undefined1 local_42c [47];
  undefined1 local_3fd;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [8];
  undefined6 uStack_3e0;
  undefined2 uStack_3da;
  undefined6 local_3d8;
  undefined2 uStack_3d2;
  ulong local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined *local_2e8;
  undefined8 *puStack_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4 [63];
  undefined1 local_265;
  undefined *local_260;
  undefined1 *local_258;
  undefined4 local_250;
  undefined1 local_24c [63];
  undefined1 local_20d;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
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
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  byte local_108 [8];
  undefined *local_100;
  undefined1 *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  int local_b8;
  undefined1 auStack_b4 [63];
  undefined1 local_75;
  undefined4 local_6c [3];
  
  local_b8 = 0x40;
  local_75 = 0;
  local_c8 = PTR_DAT_04bb2f70 + 0x10;
  local_c0 = auStack_b4;
  (**(code **)(*param_5 + 0x18))(param_5);
  puVar13 = (undefined1 *)param_5[1];
  if (auStack_b4 != puVar13) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar8 = 0;
    do {
      if (*(char *)(param_5[1] + lVar8) == '\0') goto LAB_035668c0;
      lVar11 = param_5[1] + lVar8;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_035668c0;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_035668c0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_035668c0:
    iVar7 = (int)lVar8;
    if (local_b8 <= (int)lVar8) {
      iVar7 = local_b8 + -1;
    }
    memcpy(auStack_b4,puVar13,(long)iVar7);
    auStack_b4[iVar7] = 0;
  }
  puVar13 = local_c0;
  puVar15 = PTR_DAT_04bb2bc0;
  local_c8 = PTR_DAT_04bb2bc0 + 0x10;
  if (param_2 < 2) goto LAB_03566a24;
  if (param_3 < 2) {
    plVar10 = param_5 + 5;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    __src = (undefined1 *)param_5[6];
    if (puVar13 == __src) goto LAB_03566a24;
    (**(code **)(param_5[5] + 0x18))(plVar10);
    lVar8 = 0;
    do {
      if (*(char *)(param_5[6] + lVar8) == '\0') goto LAB_035669fc;
      lVar11 = param_5[6] + lVar8;
      if (*(char *)(lVar11 + 1) == '\0') goto LAB_035669f0;
      if (*(char *)(lVar11 + 2) == '\0') goto LAB_035669f8;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  else {
    plVar10 = param_5 + 10;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    __src = (undefined1 *)param_5[0xb];
    if (puVar13 == __src) goto LAB_03566a24;
    (**(code **)(param_5[10] + 0x18))(plVar10);
    lVar8 = 0;
    do {
      if (*(char *)(param_5[0xb] + lVar8) == '\0') goto LAB_035669fc;
      lVar11 = param_5[0xb] + lVar8;
      if (*(char *)(lVar11 + 1) == '\0') goto LAB_035669f0;
      if (*(char *)(lVar11 + 2) == '\0') goto LAB_035669f8;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  lVar8 = 0;
LAB_035669fc:
  iVar7 = (int)lVar8;
  if (local_b8 <= (int)lVar8) {
    iVar7 = local_b8 + -1;
  }
  memcpy(puVar13,__src,(long)iVar7);
  puVar13[iVar7] = 0;
LAB_03566a24:
  puVar5 = PTR_DAT_04bb6538;
  puVar1 = PTR_DAT_04bb43c0;
  local_d4 = 0;
  local_108[0] = *param_1;
  local_100 = PTR_DAT_04bb2020 + 0x10;
  local_e8 = PTR_DAT_04bb2120;
  uStack_e0 = 0;
  if (7 < local_108[0]) {
    local_108[0] = 0xff;
  }
  local_f8 = local_c0;
  local_d8 = 0x10100;
  local_d0 = 0;
  lVar11 = *(long *)PTR_DAT_04bb6538;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  puStack_f0 = local_100;
  uVar6 = FUN_0277d6c4(param_4);
  puVar12 = (uint *)PTR_DAT_04bc0a80;
  pbVar14 = PTR_DAT_04bc0a88;
  if (*(long *)puVar1 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_4d0 = (undefined8 *)((ulong)local_4d0._4_4_ << 0x20);
      local_4b8._4_4_ = local_4b8._4_4_ & 0xffffff00;
      local_4b0 = 0xffffffff;
      local_4a8 = (undefined *)0xffffffff00000000;
      puStack_490 = local_484;
      puVar15 = puVar15 + 0x10;
      local_4a0 = CONCAT44(local_4a0._4_4_,0xffffffff);
      local_4d8 = PTR_DAT_04bc0ce0 + 0x10;
      local_4b8 = CONCAT44(local_4b8._4_4_,0x80);
      puStack_438 = local_42c;
      local_4c0 = local_3e8;
      local_488 = 0x40;
      lStack_448._0_4_ = (uint)(uint3)lStack_448;
      local_484[0] = 0;
      local_430 = 0x40;
      uStack_3f0._0_4_ = (uint)(uint3)uStack_3f0;
      local_42c[0] = 0;
      puVar1 = PTR_DAT_04bb6b38 + 0x10;
      ppuVar2 = &local_2e8;
      if (&local_2e8 <= local_3e8 + 2) {
        ppuVar2 = (undefined **)(local_3e8 + 2);
      }
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_308 = 0;
      uStack_300 = 0;
      local_318 = 0;
      uStack_310 = 0;
      local_328 = 0;
      uStack_320 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3d8 = 0;
      uStack_3d2 = 0;
      local_3d0 = 0;
      local_3e8 = (undefined1  [8])0x0;
      uStack_3e0 = 0;
      uStack_3da = 0;
      local_4c8 = puVar1;
      local_498 = puVar15;
      local_440 = puVar15;
      memset(local_4c0,0,(long)ppuVar2 + (-0xe0 - (long)&local_4c8));
      pbVar14 = PTR_DAT_04bc0a88;
      local_2d4 = 0;
      local_2d8 = 0x80;
      puStack_2e0 = &local_208;
      local_2c8 = 0xffffffff00000000;
      local_2b0 = local_2a4;
      local_2a4[0] = 0;
      local_2d0 = 0xffffffff;
      local_258 = local_24c;
      local_24c[0] = 0;
      pbVar3 = local_108;
      if (local_108 <= (byte *)((long)&local_208 + 2U)) {
        pbVar3 = (byte *)((long)&local_208 + 2U);
      }
      local_2c0 = 0xffffffff;
      local_2a8 = 0x40;
      local_265 = 0;
      local_250 = 0x40;
      local_20d = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      local_168 = 0;
      local_170 = 0;
      local_178 = 0;
      local_180 = 0;
      local_188 = 0;
      local_190 = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_1b0 = 0;
      local_1b8 = 0;
      local_1c0 = 0;
      local_1c8 = 0;
      local_1d0 = 0;
      local_1d8 = 0;
      local_1e0 = 0;
      local_1e8 = 0;
      local_1f0 = 0;
      local_1f8 = 0;
      local_200 = 0;
      local_208 = 0;
      local_2e8 = puVar1;
      local_2b8 = puVar15;
      local_260 = puVar15;
      memset(puStack_2e0,0,(size_t)(pbVar3 + (-0xe0 - (long)&local_2e8)));
      FUN_01c0bafc(&local_4d8,param_4,PTR_DAT_04bb2df0);
      if (((*pbVar14 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
        FUN_01bb25c8(PTR_DAT_04bc0a80);
        __cxa_guard_release(PTR_DAT_04bc0a88);
      }
      puVar12 = (uint *)PTR_DAT_04bc0a80;
      puVar15 = PTR_DAT_04bb2bc0;
      if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
        uVar9 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar9 * 4) == 0x7d) goto LAB_03566d2c;
          uVar9 = uVar9 + 1;
        } while (*(uint *)PTR_DAT_04bc0a80 != uVar9);
      }
      uVar9 = 0;
LAB_03566d2c:
      local_6c[0] = (undefined4)uVar9;
      FUN_01baf140(lVar11 + 0x260,&local_4d8,0,local_6c,0);
    }
  }
  uVar9 = (ulong)local_4c8 >> 0x20;
  local_4c8 = (undefined *)CONCAT44((uint)uVar9 & 0xffffff00,0x13);
  local_4a0 = (long)&local_498 + 4;
  local_4a8 = puVar15 + 0x10;
  local_4c0 = (undefined1 *)0xffffffff;
  local_4b8 = 0xffffffff00000000;
  local_4d0 = &local_3f8;
  lStack_448 = (long)&local_440 + 4;
  local_4b0 = CONCAT44(local_4b0._4_4_,0xffffffff);
  local_455 = 0;
  local_498 = (undefined *)CONCAT35(local_498._5_3_,0x40);
  local_3fd = 0;
  local_440 = (undefined *)CONCAT35(local_440._5_3_,0x40);
  local_4d8 = PTR_DAT_04bc0bc0 + 0x10;
  local_3d8 = 0;
  puVar4 = &uStack_3d2;
  if (&uStack_3d2 <= (undefined2 *)((long)&local_3f8 + 2U)) {
    puVar4 = (undefined2 *)((long)&local_3f8 + 2U);
  }
  local_3e8 = (undefined1  [8])0x0;
  uStack_3e0 = 0;
  uStack_3da = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_450 = local_4a8;
  memset(local_4d0,0,(long)puVar4 + (-0xe1 - (long)&local_4d8) & 0xfffffffffffffffcU | 2);
  local_3d0 = local_3d0 & 0xffffffff00000000;
  FUN_01be4af0(&local_4d8,**(undefined4 **)PTR_DAT_04bb3448,param_2,10,0,0);
  local_3d0 = CONCAT44(local_3d0._4_4_,param_2);
  if (((*pbVar14 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar7 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*puVar12) {
    uVar9 = 0;
    do {
      if (*(int *)(*(long *)(puVar12 + 2) + uVar9 * 4) == 0x5a) goto LAB_03566e4c;
      uVar9 = uVar9 + 1;
    } while (*puVar12 != uVar9);
  }
  uVar9 = 0;
LAB_03566e4c:
  local_6c[0] = (undefined4)uVar9;
  FUN_01bafc20(lVar11 + 0x260,&local_4d8,1,local_6c,0);
  FUN_02dfa190(*(undefined8 *)puVar5,local_108);
  plVar10 = *(long **)puVar5;
  if (4 < (int)plVar10[0x15] - 3U) {
    if ((int)plVar10[0x15] == 5 || (int)plVar10[0x15] == 2) {
      FUN_0386b170(plVar10[0x13],plVar10);
      *(undefined1 *)((long)plVar10 + 0x165) = 1;
      return;
    }
    if (6 < *(uint *)(plVar10 + 0x15) ||
        (1 << (ulong)(*(uint *)(plVar10 + 0x15) & 0x1f) & 0x58U) == 0) {
      return;
    }
  }
  (**(code **)(*plVar10 + 0xa8))(plVar10);
  return;
LAB_035669f0:
  lVar8 = lVar8 + 1;
  goto LAB_035669fc;
LAB_035669f8:
  lVar8 = lVar8 + 2;
  goto LAB_035669fc;
}

