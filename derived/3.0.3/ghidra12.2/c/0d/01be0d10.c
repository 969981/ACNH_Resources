
void FUN_01be0d10(undefined8 param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined5 *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *local_740;
  undefined1 *puStack_738;
  undefined4 local_730;
  undefined1 local_72c;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined4 local_718;
  undefined *local_710;
  undefined1 *puStack_708;
  undefined4 local_700;
  undefined1 local_6fc [63];
  undefined1 local_6bd;
  undefined *local_6b8;
  undefined1 *puStack_6b0;
  undefined4 local_6a8;
  undefined1 local_6a4 [63];
  undefined1 local_665;
  undefined1 local_660 [8];
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined *local_5e0;
  undefined8 *puStack_5d8;
  undefined4 local_5d0;
  undefined1 local_5cc;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined4 local_5b8;
  undefined *local_5b0;
  undefined1 *puStack_5a8;
  undefined4 local_5a0;
  undefined1 local_59c [63];
  undefined1 local_55d;
  undefined *local_558;
  undefined1 *local_550;
  undefined4 local_548;
  undefined1 local_544 [63];
  undefined1 local_505;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined5 local_480;
  undefined3 uStack_47b;
  undefined5 uStack_478;
  undefined *local_470;
  undefined8 *local_468;
  undefined4 local_460;
  undefined1 local_45c;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined *local_440;
  undefined *local_438;
  undefined4 local_430;
  undefined1 local_42c [20];
  undefined8 local_418;
  undefined8 local_410;
  undefined *local_408;
  undefined1 local_3ed;
  undefined *local_3e8;
  long local_3e0;
  undefined8 local_3d8;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined *local_3a8;
  undefined1 local_395;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined *local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined *local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined *local_318;
  undefined1 auStack_310 [24];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined *local_2e8;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined *local_2b8;
  undefined4 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined1 local_274;
  undefined *local_270;
  undefined *local_268;
  undefined4 local_260;
  undefined1 local_25c;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined *local_240;
  undefined1 *local_238;
  undefined4 local_230;
  undefined1 local_22c [63];
  undefined1 local_1ed;
  undefined *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4 [63];
  undefined1 local_195;
  undefined1 local_190 [8];
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
  undefined *local_110;
  char *pcStack_108;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined *local_98;
  int local_90;
  char local_8c;
  undefined *local_88;
  undefined4 *puStack_80;
  undefined4 local_78;
  undefined4 local_6c [3];
  
  local_730 = 0x40;
  puStack_738 = local_660;
  local_72c = 0;
  local_718 = 0xffffffff;
  local_700 = 0x40;
  local_6bd = 0;
  local_728 = 0xffffffff;
  uStack_720 = 0xffffffff00000000;
  puStack_708 = local_6fc;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_6fc[0] = 0;
  local_6a8 = 0x40;
  local_665 = 0;
  local_6a4[0] = 0;
  puStack_6b0 = local_6a4;
  puVar2 = PTR_DAT_04bb6b18 + 0x10;
  ppuVar7 = &local_5e0;
  if (&local_5e0 <= local_660 + 2) {
    ppuVar7 = (undefined **)(local_660 + 2);
  }
  local_5f0 = 0;
  uStack_5e8 = 0;
  local_600 = 0;
  uStack_5f8 = 0;
  local_610 = 0;
  uStack_608 = 0;
  local_620 = 0;
  uStack_618 = 0;
  local_630 = 0;
  uStack_628 = 0;
  local_640 = 0;
  uStack_638 = 0;
  local_650 = 0;
  uStack_648 = 0;
  local_660 = (undefined1  [8])0x0;
  uStack_658 = 0;
  local_740 = puVar2;
  local_710 = puVar1;
  local_6b8 = puVar1;
  memset(puStack_738,0,(long)ppuVar7 + (-0xe0 - (long)&local_740));
  local_5d0 = 0x40;
  puStack_5a8 = local_59c;
  local_59c[0] = 0;
  puStack_5d8 = &local_500;
  local_5cc = 0;
  local_550 = local_544;
  local_544[0] = 0;
  puVar5 = &local_480;
  if (&local_480 <= (undefined5 *)((long)&local_500 + 2U)) {
    puVar5 = (undefined5 *)((long)&local_500 + 2U);
  }
  local_5b8 = 0xffffffff;
  local_5c8 = 0xffffffff;
  uStack_5c0 = 0xffffffff00000000;
  local_5a0 = 0x40;
  local_55d = 0;
  local_548 = 0x40;
  local_505 = 0;
  local_488 = 0;
  local_490 = 0;
  local_498 = 0;
  local_4a0 = 0;
  local_4a8 = 0;
  local_4b0 = 0;
  local_4b8 = 0;
  local_4c0 = 0;
  local_4c8 = 0;
  local_4d0 = 0;
  local_4d8 = 0;
  local_4e0 = 0;
  local_4e8 = 0;
  local_4f0 = 0;
  local_4f8 = 0;
  local_500 = 0;
  local_5e0 = puVar2;
  local_5b0 = puVar1;
  local_558 = puVar1;
  memset(puStack_5d8,0,(long)puVar5 + (-0xe0 - (long)&local_5e0));
  local_268 = PTR_s_NookMilage_Keyword_Modifier_04c485f0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  local_270 = puVar3;
  FUN_006d8678(&local_480,"%03d_%02d",*param_2,*(byte *)(param_2 + 1) - 1);
  FUN_006f50a0(&local_740,&local_270,&local_480,0);
  memset(&uStack_478,0,0x1e0);
  local_448 = 0;
  local_440 = (undefined *)0x0;
  local_418 = 0;
  local_410 = 0;
  local_468 = (undefined8 *)(PTR_DAT_04bb2d80 + 0x10);
  local_3e8 = (undefined *)0x0;
  local_3e0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_388 = 0;
  local_380 = 0;
  local_358 = 0;
  local_350 = 0;
  local_328 = 0;
  local_320 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_298 = 0xffffffff;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_480 = SUB85(PTR_DAT_04bc07e8 + 0x10,0);
  uStack_47b = (undefined3)((ulong)(PTR_DAT_04bc07e8 + 0x10) >> 0x28);
  local_27c = 0;
  local_274 = 0;
  local_438 = (undefined *)local_468;
  local_408 = (undefined *)local_468;
  local_3d8 = (undefined *)local_468;
  local_3a8 = (undefined *)local_468;
  local_378 = (undefined *)local_468;
  local_348 = (undefined *)local_468;
  local_318 = (undefined *)local_468;
  local_2e8 = (undefined *)local_468;
  local_2b8 = (undefined *)local_468;
  bVar8 = FUN_01ba3894(&local_480,0x55,3,&local_740);
  local_460 = 0x40;
  local_438 = local_42c;
  local_3e0 = (long)&local_3d8 + 4;
  uStack_478 = 0;
  local_468 = &local_390;
  puVar6 = auStack_310;
  if (auStack_310 <= (undefined1 *)((long)&local_390 + 2U)) {
    puVar6 = (undefined1 *)((long)&local_390 + 2U);
  }
  local_45c = 0;
  local_458 = 0xffffffff;
  local_450 = 0xffffffff00000000;
  local_448 = CONCAT44(local_448._4_4_,0xffffffff);
  local_430 = 0x40;
  local_3ed = 0;
  local_42c[0] = 0;
  local_395 = 0;
  local_3d8 = (undefined *)CONCAT35(local_3d8._5_3_,0x40);
  local_480 = 0;
  uStack_47b = 0;
  local_318 = (undefined *)0x0;
  local_320 = 0;
  local_328 = 0;
  local_330 = 0;
  local_338 = 0;
  local_340 = 0;
  local_348 = (undefined *)0x0;
  local_350 = 0;
  local_358 = 0;
  local_360 = 0;
  local_368 = 0;
  local_370 = 0;
  local_378 = (undefined *)0x0;
  local_380 = 0;
  local_388 = 0;
  local_390 = 0;
  local_470 = puVar2;
  local_440 = puVar1;
  local_3e8 = puVar1;
  memset(local_468,0,(size_t)(puVar6 + (-0xe0 - (long)&local_470)));
  bVar4 = 0;
  if (*(byte *)((long)param_2 + 7) < 3) {
    bVar4 = *(byte *)((long)param_2 + 7);
  }
  FUN_01be1e04(&local_480,param_2[2],*(undefined1 *)(param_2 + 3),bVar4,param_3);
  local_238 = local_22c;
  local_260 = 0x40;
  local_1e0 = local_1d4;
  local_268 = local_190;
  local_25c = 0;
  ppuVar7 = &local_110;
  if (&local_110 <= local_190 + 2) {
    ppuVar7 = (undefined **)(local_190 + 2);
  }
  local_258 = 0xffffffff;
  local_250 = 0xffffffff00000000;
  local_248 = 0xffffffff;
  local_230 = 0x40;
  local_1ed = 0;
  local_22c[0] = 0;
  local_1d8 = 0x40;
  local_195 = 0;
  local_1d4[0] = 0;
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
  local_190 = (undefined1  [8])0x0;
  local_270 = puVar2;
  local_240 = puVar1;
  local_1e8 = puVar1;
  memset(local_268,0,(size_t)((long)ppuVar7 + (-0xe0 - (long)&local_270)));
  pcStack_108 = "STR_Common";
  puStack_80 = (undefined4 *)&DAT_04072425;
  local_110 = puVar3;
  local_88 = puVar3;
  FUN_006f50a0(&local_270,&local_110,&local_88,0);
  local_6c[0] = 0x20;
  local_88 = PTR_DAT_04bb2de8 + 0x10;
  puStack_80 = local_6c;
  local_78 = 2;
  local_90 = *(int *)PTR_DAT_04bc0b30;
  *(int *)PTR_DAT_04bc0b30 = local_90 + 1;
  puVar1 = PTR_DAT_04bc0a88;
  local_8c = '\0';
  local_98 = PTR_DAT_04bc0a78 + 0x10;
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar9 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  puVar2 = PTR_DAT_04bc0a80;
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar11 * 4) == 0x55) goto LAB_01be124c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar11);
  }
  uVar11 = 0;
LAB_01be124c:
  local_110 = (undefined *)CONCAT44(local_110._4_4_,(int)uVar11);
  FUN_01bae480(&local_98,&local_740,0,&local_110,0);
  if (((*puVar1 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar9 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)puVar2) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar2 + 8) + uVar11 * 4) == 0x55) goto LAB_01be12a0;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar2 != uVar11);
  }
  uVar11 = 0;
LAB_01be12a0:
  local_110 = (undefined *)CONCAT44(local_110._4_4_,(int)uVar11);
  FUN_01bae480(&local_98,&local_470,0,&local_110,1);
  ppuVar7 = &local_88;
  if ((bVar8 & 1) != 0) {
    ppuVar7 = (undefined **)PTR_DAT_04bb2de0;
  }
  if (((*puVar1 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar9 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)puVar2) {
    uVar11 = 0;
    do {
      if (*(int *)(*(long *)(puVar2 + 8) + uVar11 * 4) == 0x55) goto LAB_01be130c;
      uVar11 = uVar11 + 1;
    } while (*(uint *)puVar2 != uVar11);
  }
  uVar11 = 0;
LAB_01be130c:
  local_110 = (undefined *)CONCAT44(local_110._4_4_,(int)uVar11);
  FUN_01bae480(&local_98,ppuVar7,0,&local_110,2);
  puVar1 = PTR_DAT_04bb3350;
  lVar13 = *(long *)PTR_DAT_04bc08b0;
  if (lVar13 == 0) {
    lVar12 = 1;
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar10 + 0xa8);
    *(long *)(lVar10 + 0xa8) = lVar13;
  }
  FUN_01bed9e0(&local_110,&local_98);
  FUN_006f3d64(&local_110,param_1,&local_270);
  local_110 = PTR_DAT_04bc0c00 + 0x10;
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 8))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 8))();
  }
  FUN_003532f4(&local_110);
  if (lVar12 != 1) {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar13 + 0xa8) = lVar12;
  }
  if (local_8c != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,&local_90);
  }
  return;
}

