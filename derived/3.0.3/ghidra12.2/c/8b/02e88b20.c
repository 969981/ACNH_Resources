
void FUN_02e88b20(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *local_528;
  undefined8 *puStack_520;
  undefined4 local_518;
  undefined1 local_514;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined4 local_500;
  undefined *local_4f8;
  undefined1 *puStack_4f0;
  undefined4 local_4e8;
  undefined1 local_4e4 [63];
  undefined1 local_4a5;
  undefined *local_4a0;
  undefined1 *puStack_498;
  undefined4 local_490;
  undefined1 local_48c [63];
  undefined1 local_44d;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined6 uStack_430;
  undefined2 local_42a;
  undefined6 uStack_428;
  undefined1 auStack_422 [2];
  int local_420;
  undefined *local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  undefined *local_400;
  undefined8 uStack_3f8;
  undefined4 local_3f0;
  undefined1 local_3ec;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined *local_3d0;
  undefined1 *puStack_3c8;
  undefined4 local_3c0;
  undefined1 local_3bc [63];
  undefined1 local_37d;
  undefined *local_378;
  undefined1 *puStack_370;
  undefined4 local_368;
  undefined1 local_364 [63];
  undefined1 local_325;
  undefined8 local_320;
  undefined *local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined1 local_304;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined *local_2e8;
  undefined1 *local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4 [63];
  undefined1 local_295;
  undefined *local_290;
  undefined1 *local_288;
  undefined4 local_280;
  undefined1 local_27c [63];
  undefined1 local_23d;
  undefined8 local_238;
  undefined *local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec [63];
  undefined1 local_1ad;
  undefined *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  undefined1 local_194 [63];
  undefined1 local_155;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined1 local_cc [63];
  undefined1 local_8d;
  undefined *local_88;
  int local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_04bc4f00;
  plVar1 = (long *)(param_1 + 0x3f0);
  uVar6 = (ulong)param_2;
  plVar8 = plVar1 + param_2;
  if (7 < param_2) {
    uVar6 = 0;
    plVar8 = plVar1;
  }
  uVar5 = *(uint *)(*plVar8 + 0x2e8);
  lVar7 = *(long *)(*plVar8 + 0x2f0);
  plVar8 = *(long **)(lVar7 + (ulong)(2 < uVar5) * 0x10);
  if (plVar8 != (long *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x248);
    uVar9 = 0x3f800000;
    if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x230))) {
      lVar7 = param_1 + 0x220;
      uVar2 = uVar5 + 1 & 3;
      if (2 < uVar5) {
        uVar5 = uVar5 + 1 & 0xfffffffc;
        do {
          uVar5 = uVar5 - 4;
          lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
        } while (uVar5 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        lVar7 = *(long *)(lVar7 + 8);
      }
      if (((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x234), lVar7 != 0)) &&
         (uVar9 = 0x3f800000, *(int *)(lVar7 + 0x270) == 0x92)) {
        uVar9 = 0;
      }
    }
    local_418 = PTR_DAT_04bc4f00 + 0x10;
    local_410 = 0x14;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_418);
    (**(code **)(plVar8[3] + 0x158))(uVar9,plVar8[1]);
    uVar5 = *(uint *)(plVar1[uVar6] + 0x2e8);
    lVar7 = *(long *)(plVar1[uVar6] + 0x2f0);
  }
  plVar8 = *(long **)(lVar7 + (ulong)(1 < uVar5) * 8);
  if (plVar8 != (long *)0x0) {
    local_410 = 0x14;
    local_418 = puVar4 + 0x10;
    uVar9 = 0x3f800000;
    if (**(char **)(param_3 + 0x20) == '\0') {
      uVar9 = 0;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_418);
    (**(code **)(plVar8[3] + 0x158))(uVar9,plVar8[1]);
    uVar5 = *(uint *)(plVar1[uVar6] + 0x2e8);
    lVar7 = *(long *)(plVar1[uVar6] + 0x2f0);
  }
  plVar8 = *(long **)(lVar7 + (ulong)(4 < uVar5) * 0x20);
  if (plVar8 != (long *)0x0) {
    local_410 = 0x14;
    local_418 = puVar4 + 0x10;
    uVar9 = 0x3f800000;
    if (**(char **)(param_3 + 0x40) == '\0') {
      uVar9 = 0;
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_418);
    (**(code **)(plVar8[3] + 0x158))(uVar9,plVar8[1]);
  }
  local_88 = PTR_DAT_04bc0a78;
  uVar5 = *(uint *)(param_1 + 0x248);
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x230))) {
    lVar7 = param_1 + 0x220;
    uVar2 = uVar5 + 1 & 3;
    if (2 < uVar5) {
      uVar5 = uVar5 + 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar7 = *(long *)(lVar7 + 8);
    }
    if (((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(param_1 + 0x234), lVar7 != 0)) &&
       ((*(int *)(lVar7 + 0x270) == 0x92 && (lVar7 = **(long **)(plVar1[uVar6] + 0x2e0), lVar7 != 0)
        ))) {
      local_404 = 0;
      local_40c = 0;
      local_410 = CONCAT22(local_410._2_2_,0x100);
      local_3f0 = 0;
      puStack_3c8 = local_3bc;
      local_3ec = 0;
      local_3e8 = 0xffffffff;
      uStack_3e0 = 0xffffffff00000000;
      local_3d8 = 0xffffffff;
      local_3c0 = 0x40;
      local_37d = 0;
      local_3bc[0] = 0;
      local_4f8 = PTR_DAT_04bb2bc0 + 0x10;
      local_368 = 0x40;
      local_325 = 0;
      local_364[0] = 0;
      puStack_370 = local_364;
      local_400 = PTR_DAT_04bb2e00 + 0x10;
      local_310 = 0;
      local_288 = local_27c;
      local_27c[0] = 0;
      local_2e0 = local_2d4;
      local_2d4[0] = 0;
      local_1a0 = local_194;
      local_194[0] = 0;
      local_1f8 = local_1ec;
      local_1ec[0] = 0;
      local_308 = 0;
      local_304 = 0;
      local_300 = 0xffffffff;
      local_2f8 = 0xffffffff00000000;
      local_2f0 = 0xffffffff;
      local_2d8 = 0x40;
      local_295 = 0;
      local_280 = 0x40;
      local_23d = 0;
      local_320 = 0;
      local_228 = 0;
      local_220 = 0;
      local_21c = 0;
      local_218 = 0xffffffff;
      local_210 = 0xffffffff00000000;
      local_208 = 0xffffffff;
      local_1f0 = 0x40;
      local_1ad = 0;
      local_198 = 0x40;
      local_155 = 0;
      local_238 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_128 = 0x40;
      local_e5 = 0;
      local_d0 = 0x40;
      local_8d = 0;
      uStack_3f8 = 0;
      local_130 = local_124;
      local_124[0] = 0;
      local_d8 = local_cc;
      local_cc[0] = 0;
      local_80 = *(int *)PTR_DAT_04bc0b30;
      local_7c = 0;
      *(int *)PTR_DAT_04bc0b30 = local_80 + 1;
      local_88 = local_88 + 0x10;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_418 = PTR_DAT_04bc0bf0 + 0x10;
      puStack_520 = &local_448;
      local_500 = 0xffffffff;
      local_518 = 0x13;
      local_514 = 0;
      local_4e8 = 0x40;
      local_4a5 = 0;
      local_4e4[0] = 0;
      local_490 = 0x40;
      local_44d = 0;
      local_48c[0] = 0;
      local_510 = 0xffffffff;
      uStack_508 = 0xffffffff00000000;
      puStack_4f0 = local_4e4;
      puStack_498 = local_48c;
      local_528 = PTR_DAT_04bc0bc0 + 0x10;
      uStack_428 = 0;
      puVar3 = auStack_422;
      if (auStack_422 <= (undefined1 *)((long)&local_448 + 2U)) {
        puVar3 = (undefined1 *)((long)&local_448 + 2U);
      }
      local_438 = 0;
      uStack_430 = 0;
      local_42a = 0;
      local_448 = 0;
      uStack_440 = 0;
      local_4a0 = local_4f8;
      local_3d0 = local_4f8;
      local_378 = local_4f8;
      local_318 = local_400;
      local_2e8 = local_4f8;
      local_290 = local_4f8;
      local_230 = local_400;
      local_200 = local_4f8;
      local_1a8 = local_4f8;
      local_138 = local_4f8;
      local_e0 = local_4f8;
      memset(puStack_520,0,(ulong)(puVar3 + (-0xe1 - (long)&local_528)) & 0xfffffffffffffffc | 2);
      local_420 = 0;
      FUN_01be4af0(&local_528,**(undefined4 **)PTR_DAT_04bb3448,param_2 + 1,1,0,0);
      local_420 = param_2 + 1;
      FUN_01bea4e8(&local_418,lVar7,&local_528);
      FUN_01bea9c8(&local_418);
      FUN_01be9eb8(&local_418);
    }
  }
  return;
}

