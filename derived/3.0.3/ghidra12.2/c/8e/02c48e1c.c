
void FUN_02c48e1c(long param_1,int param_2,uint param_3,long *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_5a8;
  undefined4 *puStack_5a0;
  undefined *local_598;
  char *pcStack_590;
  undefined4 local_588;
  undefined1 local_584;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined4 local_570;
  undefined *local_568;
  undefined1 *puStack_560;
  undefined4 local_558;
  undefined1 local_554 [63];
  undefined1 local_515;
  undefined *local_510;
  undefined1 *puStack_508;
  undefined4 local_500;
  undefined1 local_4fc [63];
  undefined1 local_4bd;
  undefined1 local_4b8 [8];
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined *local_478;
  undefined2 local_470;
  undefined2 uStack_46e;
  undefined4 local_46c;
  undefined4 uStack_468;
  uint local_464;
  undefined *local_460;
  undefined8 uStack_458;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined *local_430;
  undefined1 *puStack_428;
  undefined4 local_420;
  undefined1 local_41c [63];
  undefined1 local_3dd;
  undefined *local_3d8;
  undefined1 *puStack_3d0;
  undefined4 local_3c8;
  undefined1 local_3c4 [63];
  undefined1 local_385;
  undefined8 local_380;
  undefined *local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined *local_348;
  undefined1 *local_340;
  undefined4 local_338;
  undefined1 local_334 [63];
  undefined1 local_2f5;
  undefined *local_2f0;
  undefined1 *local_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc [63];
  undefined1 local_29d;
  undefined8 local_298;
  undefined *local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined1 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined *local_260;
  undefined1 *local_258;
  undefined4 local_250;
  undefined1 local_24c [63];
  undefined1 local_20d;
  undefined *local_208;
  undefined1 *local_200;
  undefined4 local_1f8;
  undefined1 local_1f4 [63];
  undefined1 local_1b5;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [63];
  undefined1 local_145;
  undefined *local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  int local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined4 *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a5;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  int local_80;
  undefined8 local_7c;
  int local_74;
  undefined8 local_70;
  undefined1 local_68;
  
  local_e8 = PTR_DAT_04bc0a78;
  puVar4 = PTR_DAT_04bb2020;
  local_478 = (undefined *)CONCAT44(local_478._4_4_,param_2);
  lVar7 = (long)param_2;
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  lVar9 = lVar7 * 0x40;
  uStack_98 = (&DAT_0565abf8)[lVar7 * 8];
  uStack_88 = (&DAT_0565ac08)[lVar7 * 8];
  local_80 = *(int *)(&DAT_0565ac10 + lVar7 * 8);
  local_7c = *(undefined8 *)((long)&DAT_0565ac10 + lVar9 + 4);
  local_68 = (&DAT_0565ac28)[lVar9];
  local_74 = *(int *)((long)&DAT_0565ac18 + lVar9 + 4);
  local_70 = (&DAT_0565ac20)[lVar7 * 8];
  local_90 = local_a0;
  if (param_3 == 3) {
    puVar8 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x238) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)puVar8[0x43];
    iVar5 = local_74;
    uVar3 = local_448;
    if (lVar9 == 0) {
      return;
    }
  }
  else {
    if (2 < param_3) {
      return;
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x238) + (ulong)param_3 * 8 + 0x5e8);
    if (lVar9 == 0) {
      return;
    }
    lVar9 = **(long **)(lVar9 + 0x220);
    if (lVar9 == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x2ea) != '\0') {
      local_a5 = 0;
      local_b0 = 8;
      local_b8 = &local_ac;
      local_c0 = PTR_DAT_04bb3768 + 0x10;
      if (param_3 == 0) {
        if (*(int *)(param_1 + 0x244) == 10) {
          local_ac = 0x31303130;
        }
        else {
          local_ac = 0x32303130;
        }
      }
      else {
        local_ac = 0x33303130;
      }
      local_470 = 0x100;
      local_a8 = 0;
      local_46c = 0;
      uStack_468 = 0;
      puStack_428 = local_41c;
      local_464 = 0;
      local_450 = 0;
      local_44c = 0;
      local_438 = 0xffffffff;
      local_420 = 0x40;
      local_3dd = 0;
      local_41c[0] = 0;
      local_448 = 0xffffffff;
      uStack_440 = 0xffffffff00000000;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      local_3c8 = 0x40;
      local_385 = 0;
      local_3c4[0] = 0;
      puStack_3d0 = local_3c4;
      local_460 = PTR_DAT_04bb2e00 + 0x10;
      local_2e8 = local_2dc;
      local_2dc[0] = 0;
      local_340 = local_334;
      local_334[0] = 0;
      local_200 = local_1f4;
      local_1f4[0] = 0;
      local_370 = 0;
      local_368 = 0;
      local_258 = local_24c;
      local_24c[0] = 0;
      local_364 = 0;
      local_360 = 0xffffffff;
      local_358 = 0xffffffff00000000;
      local_350 = 0xffffffff;
      local_338 = 0x40;
      local_2f5 = 0;
      local_2e0 = 0x40;
      local_29d = 0;
      local_380 = 0;
      local_288 = 0;
      local_280 = 0;
      local_27c = 0;
      local_278 = 0xffffffff;
      local_270 = 0xffffffff00000000;
      local_268 = 0xffffffff;
      local_250 = 0x40;
      local_20d = 0;
      local_1f8 = 0x40;
      local_1b5 = 0;
      local_298 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_1b0 = 0;
      local_188 = 0x40;
      local_145 = 0;
      local_130 = 0x40;
      local_ed = 0;
      uStack_458 = 0;
      local_190 = local_184;
      local_184[0] = 0;
      local_138 = local_12c;
      local_12c[0] = 0;
      local_e0 = *(int *)PTR_DAT_04bc0b30;
      local_dc = 0;
      *(int *)PTR_DAT_04bc0b30 = local_e0 + 1;
      local_e8 = local_e8 + 0x10;
      local_d8 = 0;
      local_478 = PTR_DAT_04bc0bf0 + 0x10;
      local_d0 = 0;
      local_c8 = 0;
      local_430 = puVar1;
      local_3d8 = puVar1;
      local_378 = local_460;
      local_348 = puVar1;
      local_2f0 = puVar1;
      local_290 = local_460;
      local_260 = puVar1;
      local_208 = puVar1;
      local_198 = puVar1;
      local_140 = puVar1;
      if (*(char *)param_4[1] != '\0') {
        (**(code **)(*param_4 + 0x18))(param_4);
        local_584 = 0;
        local_588 = 0x20;
        puStack_560 = local_554;
        lVar7 = param_4[1];
        puStack_508 = local_4fc;
        pcStack_590 = local_4b8;
        local_580 = 0xffffffff;
        uStack_578 = 0xffffffff00000000;
        local_570 = 0xffffffff;
        local_558 = 0x40;
        local_515 = 0;
        local_554[0] = 0;
        local_500 = 0x40;
        local_4bd = 0;
        local_4fc[0] = 0;
        local_598 = PTR_DAT_04bb4e10 + 0x10;
        ppuVar2 = &local_478;
        if (&local_478 <= local_4b8 + 2) {
          ppuVar2 = (undefined **)(local_4b8 + 2);
        }
        local_4b8 = (undefined1  [8])0x0;
        uStack_4b0 = 0;
        local_4a8 = 0;
        uStack_4a0 = 0;
        local_498 = 0;
        uStack_490 = 0;
        local_488 = 0;
        uStack_480 = 0;
        local_568 = puVar1;
        local_510 = puVar1;
        memset(pcStack_590,0,(size_t)((long)ppuVar2 + (-0xe0 - (long)&local_598)));
        FUN_01c0e6b4(&local_598,lVar7,PTR_DAT_04bb2df0);
        FUN_01bae5d0(&local_e8,&local_598,0);
      }
      pcStack_590 = "STR_WherearenCastName";
      local_598 = puVar4 + 0x10;
      (**(code **)(local_c0 + 0x18))(&local_c0);
      puStack_5a0 = local_b8;
      local_5a8 = puVar4 + 0x10;
      FUN_01bea210(&local_478,lVar9,&local_598,&local_5a8);
      FUN_01bea9c8(&local_478);
      FUN_01be9eb8(&local_478);
      return;
    }
    iVar5 = (&local_80)[param_3];
    uVar3 = local_448;
  }
  if (iVar5 != 0) {
    local_448._4_4_ = (undefined4)((ulong)uVar3 >> 0x20);
    local_448._0_4_ = (uint)(uint3)uVar3;
    uStack_468 = 0x20;
    local_464 = local_464 & 0xffffff00;
    local_478 = PTR_DAT_04bb2028 + 0x10;
    local_470 = SUB82(&local_464,0);
    uStack_46e = (undefined2)((ulong)&local_464 >> 0x10);
    local_46c = (undefined4)((ulong)&local_464 >> 0x20);
    FUN_0377b4f0(&local_478,iVar5,0);
    FUN_0377b840(lVar9,&local_478,param_4);
  }
  return;
}

