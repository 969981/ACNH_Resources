
void FUN_033ff0f0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined **ppuVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *__src;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined *local_638;
  char *pcStack_630;
  undefined *local_628;
  undefined1 *local_620;
  undefined4 local_618;
  undefined1 local_614;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined4 local_600;
  undefined *local_5f8;
  undefined1 *puStack_5f0;
  undefined4 local_5e8;
  undefined1 local_5e4 [63];
  undefined1 local_5a5;
  undefined *local_5a0;
  undefined1 *puStack_598;
  undefined4 local_590;
  undefined1 local_58c [63];
  undefined1 local_54d;
  undefined1 local_548 [8];
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined *local_448;
  undefined *local_440;
  int local_438;
  undefined local_434 [7];
  undefined1 local_42d;
  undefined *local_428;
  undefined2 local_420;
  undefined8 local_41c;
  undefined4 local_414;
  undefined *local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined1 local_3fc;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined *local_3e0;
  undefined1 *local_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc [63];
  undefined1 local_38d;
  undefined *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  undefined1 local_374 [63];
  undefined1 local_335;
  undefined8 local_330;
  undefined *local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined1 local_314;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined *local_2f8;
  undefined1 *local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4 [63];
  undefined1 local_2a5;
  undefined *local_2a0;
  undefined1 *local_298;
  undefined4 local_290;
  undefined1 local_28c [63];
  undefined1 local_24d;
  undefined8 local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined1 local_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined *local_210;
  undefined1 *local_208;
  undefined4 local_200;
  undefined1 local_1fc [63];
  undefined1 local_1bd;
  undefined *local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4 [63];
  undefined1 local_165;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined1 local_134 [63];
  undefined1 local_f5;
  undefined *local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined1 local_dc [63];
  undefined1 local_9d;
  undefined *local_98;
  int local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined4 local_6c [3];
  
  local_98 = PTR_DAT_04bc0a78;
  puVar4 = PTR_DAT_04bb2bc0;
  if (param_1 == 0) {
    return;
  }
  local_414 = 0;
  local_420 = 0x100;
  local_41c = 0;
  local_400 = 0;
  local_3d8 = local_3cc;
  local_3fc = 0;
  local_3f8 = 0xffffffff;
  local_3f0 = 0xffffffff00000000;
  local_3e8 = 0xffffffff;
  local_3d0 = 0x40;
  local_38d = 0;
  local_3cc[0] = 0;
  local_3e0 = PTR_DAT_04bb2bc0 + 0x10;
  local_380 = local_374;
  local_378 = 0x40;
  local_335 = 0;
  local_374[0] = 0;
  local_410 = PTR_DAT_04bb2e00 + 0x10;
  local_298 = local_28c;
  local_28c[0] = 0;
  local_308 = 0xffffffff00000000;
  local_220 = 0xffffffff00000000;
  local_208 = local_1fc;
  local_1fc[0] = 0;
  local_140 = local_134;
  local_134[0] = 0;
  local_e8 = local_dc;
  local_2f0 = local_2e4;
  local_2e4[0] = 0;
  local_1b0 = local_1a4;
  local_1a4[0] = 0;
  local_408 = 0;
  local_320 = 0;
  local_318 = 0;
  local_314 = 0;
  local_310 = 0xffffffff;
  local_300 = 0xffffffff;
  local_2e8 = 0x40;
  local_2a5 = 0;
  local_290 = 0x40;
  local_24d = 0;
  local_330 = 0;
  local_238 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0xffffffff;
  local_218 = 0xffffffff;
  local_200 = 0x40;
  local_1bd = 0;
  local_1a8 = 0x40;
  local_165 = 0;
  local_248 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_138 = 0x40;
  local_f5 = 0;
  local_e0 = 0x40;
  local_9d = 0;
  local_dc[0] = 0;
  local_90 = *(int *)PTR_DAT_04bc0b30;
  local_8c = 0;
  *(int *)PTR_DAT_04bc0b30 = local_90 + 1;
  local_98 = local_98 + 0x10;
  local_88 = 0;
  plVar10 = *(long **)(param_1 + 0x48);
  local_428 = PTR_DAT_04bc0bf0 + 0x10;
  local_80 = 0;
  local_78 = 0;
  local_388 = local_3e0;
  local_328 = local_410;
  local_2f8 = local_3e0;
  local_2a0 = local_3e0;
  local_240 = local_410;
  local_210 = local_3e0;
  local_1b8 = local_3e0;
  local_148 = local_3e0;
  local_f0 = local_3e0;
  if (plVar10[1] != 0) {
    local_628 = PTR_DAT_04bc0878 + 0x10;
    local_620 = (undefined1 *)CONCAT44(local_620._4_4_,9);
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_628);
    (**(code **)(plVar10[3] + 0x5e0))(plVar10[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(param_1);
  }
  lVar11 = *(long *)PTR_DAT_04bb4130;
  if (lVar11 == 0) goto LAB_033ff69c;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = FUN_006bd550(param_2[1],0);
  local_628 = (undefined *)CONCAT44(local_628._4_4_,uVar7);
  lVar11 = FUN_0079e4d0(lVar11,&local_628);
  puVar3 = PTR_DAT_04bb2020;
  if (lVar11 == 0) goto LAB_033ff69c;
  local_42d = 0;
  local_434[0] = 0;
  local_440 = local_434;
  local_438 = 8;
  local_448 = PTR_DAT_04bb3768 + 0x10;
  local_628 = PTR_DAT_04bb2020 + 0x10;
  local_620 = &DAT_0406d3be;
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar12 = (undefined1 *)param_2[1];
  (**(code **)(local_628 + 0x18))(&local_628);
  if (puVar12 == local_620) {
LAB_033ff440:
    if (local_440 != &DAT_040a2cfa) {
      __src = &DAT_040a2cfa;
LAB_033ff4f0:
      puVar5 = local_440;
      iVar8 = 4;
      if (local_438 < 5) {
        iVar8 = local_438 + -1;
      }
      memcpy(local_440,__src,(long)iVar8);
      puVar5[iVar8] = 0;
    }
  }
  else {
    uVar9 = 0;
    bVar6 = true;
    do {
      if (*(char *)(param_2[1] + uVar9) != local_620[uVar9]) break;
      if (*(char *)(param_2[1] + uVar9) == '\0') {
        if (bVar6) goto LAB_033ff440;
        break;
      }
      bVar6 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((undefined1 *)param_2[1] != &DAT_04076980) {
      uVar9 = 0;
      bVar6 = true;
      do {
        cVar2 = ((undefined1 *)param_2[1])[uVar9];
        if (cVar2 != (&DAT_04076980)[uVar9]) break;
        if (cVar2 == '\0') {
          if (bVar6) goto LAB_033ff4d0;
          break;
        }
        bVar6 = uVar9 < 0x80000;
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x80001);
      goto LAB_033ff69c;
    }
LAB_033ff4d0:
    if (local_440 != &DAT_040f11ef) {
      __src = &DAT_040f11ef;
      goto LAB_033ff4f0;
    }
  }
  local_614 = 0;
  local_618 = 0x80;
  local_5f8 = puVar4 + 0x10;
  local_610 = 0xffffffff;
  uStack_608 = 0xffffffff00000000;
  puStack_5f0 = local_5e4;
  local_620 = local_548;
  puStack_598 = local_58c;
  local_600 = 0xffffffff;
  local_5e8 = 0x40;
  local_5a5 = 0;
  local_5e4[0] = 0;
  local_590 = 0x40;
  local_54d = 0;
  local_58c[0] = 0;
  local_628 = PTR_DAT_04bb6b38 + 0x10;
  ppuVar1 = &local_448;
  if (&local_448 <= local_548 + 2) {
    ppuVar1 = (undefined **)(local_548 + 2);
  }
  local_458 = 0;
  uStack_450 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_548 = (undefined1  [8])0x0;
  uStack_540 = 0;
  local_5a0 = local_5f8;
  memset(local_620,0,(size_t)((long)ppuVar1 + (-0xe0 - (long)&local_628)));
  local_638 = puVar3 + 0x10;
  pcStack_630 = "STR_Common";
  FUN_006f50a0(&local_628,&local_638,&local_448,0);
  FUN_01bea210(&local_428,param_1,param_3,param_4);
  local_638 = (undefined *)CONCAT44(local_638._4_4_,9);
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar8 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar9 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar9 * 4) == 0x96) goto LAB_033ff66c;
      uVar9 = uVar9 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar9);
  }
  uVar9 = 0;
LAB_033ff66c:
  local_6c[0] = (undefined4)uVar9;
  FUN_01bae480(&local_98,&local_628,0,local_6c,(ulong)local_638 & 0xffffffff);
  if ((param_5 & 1) != 0) {
    local_80 = CONCAT11(1,(undefined1)local_80);
  }
  FUN_01bea9c8(&local_428);
LAB_033ff69c:
  FUN_01be9eb8(&local_428);
  return;
}

