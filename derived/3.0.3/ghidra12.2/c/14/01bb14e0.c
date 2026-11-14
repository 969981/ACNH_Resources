
void FUN_01bb14e0(undefined8 param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined5 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 local_578;
  undefined4 local_574;
  undefined *local_570;
  undefined4 *puStack_568;
  undefined4 local_560;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  byte local_548;
  undefined2 local_546;
  undefined2 local_544;
  uint local_540;
  undefined *local_538;
  undefined1 *puStack_530;
  undefined4 local_528;
  undefined1 local_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined4 local_510;
  undefined *local_508;
  undefined1 *puStack_500;
  undefined4 local_4f8;
  undefined1 local_4f4 [63];
  undefined1 local_4b5;
  undefined *local_4b0;
  undefined1 *puStack_4a8;
  undefined4 local_4a0;
  undefined1 local_49c [63];
  undefined1 local_45d;
  undefined1 local_458 [8];
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined *local_3d8;
  undefined8 *puStack_3d0;
  undefined4 local_3c8;
  undefined1 local_3c4;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined *local_3a8;
  undefined1 *puStack_3a0;
  undefined4 local_398;
  undefined1 local_394 [63];
  undefined1 local_355;
  undefined *local_350;
  undefined1 *local_348;
  undefined4 local_340;
  undefined1 local_33c [63];
  undefined1 local_2fd;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined5 local_278;
  undefined3 uStack_273;
  undefined5 uStack_270;
  undefined *local_268;
  undefined8 *local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined *local_238;
  undefined *local_230;
  undefined4 local_228;
  undefined1 local_224 [20];
  undefined8 local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined1 local_1e5;
  undefined *local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined1 local_18d;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined1 local_6c;
  
  local_548 = 0;
  puStack_500 = local_4f4;
  local_546 = 0;
  local_528 = 0x40;
  local_524 = 0;
  puStack_530 = local_458;
  local_520 = 0xffffffff;
  uStack_518 = 0xffffffff00000000;
  local_510 = 0xffffffff;
  local_4f8 = 0x40;
  local_4b5 = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_4f4[0] = 0;
  local_4a0 = 0x40;
  local_45d = 0;
  local_49c[0] = 0;
  puStack_4a8 = local_49c;
  puVar2 = PTR_DAT_04bb6b18 + 0x10;
  ppuVar7 = &local_3d8;
  if (&local_3d8 <= local_458 + 2) {
    ppuVar7 = (undefined **)(local_458 + 2);
  }
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_428 = 0;
  uStack_420 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_458 = (undefined1  [8])0x0;
  uStack_450 = 0;
  local_538 = puVar2;
  local_508 = puVar1;
  local_4b0 = puVar1;
  memset(puStack_530,0,(long)ppuVar7 + (-0xe0 - (long)&local_538));
  local_3c8 = 0x40;
  puStack_3a0 = local_394;
  local_394[0] = 0;
  puStack_3d0 = &local_2f8;
  local_3c4 = 0;
  local_348 = local_33c;
  local_33c[0] = 0;
  puVar4 = &local_278;
  if (&local_278 <= (undefined5 *)((long)&local_2f8 + 2U)) {
    puVar4 = (undefined5 *)((long)&local_2f8 + 2U);
  }
  local_3b0 = 0xffffffff;
  local_3c0 = 0xffffffff;
  uStack_3b8 = 0xffffffff00000000;
  local_398 = 0x40;
  local_355 = 0;
  local_340 = 0x40;
  local_2fd = 0;
  local_280 = 0;
  local_288 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_3d8 = puVar2;
  local_3a8 = puVar1;
  local_350 = puVar1;
  memset(puStack_3d0,0,(long)puVar4 + (-0xe0 - (long)&local_3d8));
  local_544 = *param_2;
  local_540 = (uint)*(byte *)(param_2 + 1);
  puStack_568 = *(undefined4 **)PTR_PTR_04bc0ba8;
  local_570 = PTR_DAT_04bb2020 + 0x10;
  FUN_006d8678(&local_278,"%03d_%02d",local_544,local_540 - 1);
  FUN_006f50a0(&local_538,&local_570,&local_278,0);
  memset(&uStack_270,0,0x1e0);
  local_240 = 0;
  local_238 = (undefined *)0x0;
  local_210 = 0;
  local_208 = 0;
  local_260 = (undefined8 *)(PTR_DAT_04bb2d80 + 0x10);
  local_1e0 = (undefined *)0x0;
  local_1d8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_180 = 0;
  local_178 = 0;
  local_150 = 0;
  local_148 = 0;
  local_120 = 0;
  local_118 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_278 = SUB85(PTR_DAT_04bc07e8 + 0x10,0);
  uStack_273 = (undefined3)((ulong)(PTR_DAT_04bc07e8 + 0x10) >> 0x28);
  local_74 = 0;
  local_6c = 0;
  local_230 = (undefined *)local_260;
  local_200 = (undefined *)local_260;
  local_1d0 = (undefined *)local_260;
  local_1a0 = (undefined *)local_260;
  local_170 = (undefined *)local_260;
  local_140 = (undefined *)local_260;
  local_110 = (undefined *)local_260;
  local_e0 = (undefined *)local_260;
  local_b0 = (undefined *)local_260;
  local_548 = FUN_01ba3894(&local_278,0x55,3,&local_538);
  local_258 = 0x40;
  uStack_270 = 0;
  local_548 = local_548 & 1;
  local_230 = local_224;
  local_260 = &local_188;
  local_1d8 = (long)&local_1d0 + 4;
  puVar5 = auStack_108;
  if (auStack_108 <= (undefined1 *)((long)&local_188 + 2U)) {
    puVar5 = (undefined1 *)((long)&local_188 + 2U);
  }
  local_254 = 0;
  local_250 = 0xffffffff;
  local_248 = 0xffffffff00000000;
  local_240 = CONCAT44(local_240._4_4_,0xffffffff);
  local_228 = 0x40;
  local_1e5 = 0;
  local_224[0] = 0;
  local_18d = 0;
  local_1d0 = (undefined *)CONCAT35(local_1d0._5_3_,0x40);
  local_278 = 0;
  uStack_273 = 0;
  local_110 = (undefined *)0x0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = (undefined *)0x0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = (undefined *)0x0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_268 = puVar2;
  local_238 = puVar1;
  local_1e0 = puVar1;
  memset(local_260,0,(size_t)(puVar5 + (-0xe0 - (long)&local_268)));
  bVar3 = 0;
  if (*(byte *)((long)param_2 + 7) < 3) {
    bVar3 = *(byte *)((long)param_2 + 7);
  }
  FUN_01be1e04(&local_278,param_2[2],*(undefined1 *)(param_2 + 3),bVar3,param_3);
  puVar1 = PTR_DAT_04bc0a88;
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar6 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  puVar2 = PTR_DAT_04bc0a80;
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar9 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar9 * 4) == 0x55) goto LAB_01bb18dc;
      uVar9 = uVar9 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar9);
  }
  uVar9 = 0;
LAB_01bb18dc:
  local_54c = (undefined4)uVar9;
  FUN_01bae480(param_1,&local_538,param_4,&local_54c,0);
  if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar6 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)puVar2) {
    uVar9 = 0;
    do {
      if (*(int *)(*(long *)(puVar2 + 8) + uVar9 * 4) == 0x55) goto LAB_01bb1930;
      uVar9 = uVar9 + 1;
    } while (*(uint *)puVar2 != uVar9);
  }
  uVar9 = 0;
LAB_01bb1930:
  local_550 = (undefined4)uVar9;
  FUN_01bae480(param_1,&local_268,param_4,&local_550,1);
  if (local_548 == 0) {
    puStack_568 = &local_554;
    local_554 = 0x20;
    local_570 = PTR_DAT_04bb2de8 + 0x10;
    local_560 = 2;
    if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar6 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)puVar2) {
      uVar9 = 0;
      do {
        if (*(int *)(*(long *)(puVar2 + 8) + uVar9 * 4) == 0x55) goto LAB_01bb19fc;
        uVar9 = uVar9 + 1;
      } while (*(uint *)puVar2 != uVar9);
    }
    uVar9 = 0;
LAB_01bb19fc:
    local_574 = (undefined4)uVar9;
    ppuVar7 = &local_570;
    puVar8 = &local_574;
  }
  else {
    if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar6 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    if (0 < (int)*(uint *)puVar2) {
      uVar9 = 0;
      do {
        if (*(int *)(*(long *)(puVar2 + 8) + uVar9 * 4) == 0x55) goto LAB_01bb198c;
        uVar9 = uVar9 + 1;
      } while (*(uint *)puVar2 != uVar9);
    }
    uVar9 = 0;
LAB_01bb198c:
    local_578 = (undefined4)uVar9;
    puVar8 = &local_578;
    ppuVar7 = (undefined **)PTR_DAT_04bb2de0;
  }
  FUN_01bae480(param_1,ppuVar7,param_4,puVar8,2);
  return;
}

