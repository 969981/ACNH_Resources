
void FUN_02e311a0(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *local_530;
  undefined1 *puStack_528;
  undefined *local_520;
  undefined8 *puStack_518;
  undefined4 local_510;
  undefined1 local_50c;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined *local_4f0;
  undefined1 *puStack_4e8;
  undefined4 local_4e0;
  undefined1 local_4dc [63];
  undefined1 local_49d;
  undefined *local_498;
  undefined1 *puStack_490;
  undefined4 local_488;
  undefined1 local_484 [63];
  undefined1 local_445;
  undefined8 local_440;
  undefined6 uStack_438;
  undefined2 local_432;
  undefined6 uStack_430;
  undefined1 auStack_42a [2];
  undefined *local_428;
  undefined2 local_420;
  undefined2 uStack_41e;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  undefined *local_410;
  undefined8 uStack_408;
  undefined4 local_400;
  undefined1 local_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined *local_3e0;
  undefined1 *puStack_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc [63];
  undefined1 local_38d;
  undefined *local_388;
  undefined1 *puStack_380;
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
  undefined *local_70;
  char *local_68;
  
  puVar3 = PTR_DAT_04bc4e60;
  puVar1 = PTR_DAT_04bb2bc0;
  if (*(int *)(param_1 + 0x370) == 2) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_420 = 0x3d6d;
    uStack_41e = 0x40f;
    local_41c = 0;
    local_428 = puVar1;
    FUN_02e32418(param_1,1,&local_428);
    local_420 = 0x6534;
    uStack_41e = 0x40c;
    local_41c = 0;
    local_428 = puVar1;
    FUN_02e32418(param_1,0,&local_428);
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x370) != 1) goto LAB_02e3161c;
    local_414 = 0;
    local_420 = 0x100;
    local_41c = 0;
    uStack_418 = 0;
    local_400 = 0;
    puStack_3d8 = local_3cc;
    local_3fc = 0;
    local_3f8 = 0xffffffff;
    uStack_3f0 = 0xffffffff00000000;
    local_3e8 = 0xffffffff;
    local_3d0 = 0x40;
    local_38d = 0;
    local_3e0 = PTR_DAT_04bb2bc0 + 0x10;
    local_3cc[0] = 0;
    local_378 = 0x40;
    local_335 = 0;
    local_374[0] = 0;
    puStack_380 = local_374;
    local_410 = PTR_DAT_04bb2e00 + 0x10;
    local_308 = 0xffffffff00000000;
    local_298 = local_28c;
    local_28c[0] = 0;
    local_2f0 = local_2e4;
    local_2e4[0] = 0;
    local_220 = 0xffffffff00000000;
    local_134[0] = 0;
    local_208 = local_1fc;
    local_1fc[0] = 0;
    local_1b0 = local_1a4;
    local_1a4[0] = 0;
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
    uStack_408 = 0;
    local_140 = local_134;
    local_e8 = local_dc;
    local_dc[0] = 0;
    local_90 = *(int *)PTR_DAT_04bc0b30;
    local_8c = 0;
    *(int *)PTR_DAT_04bc0b30 = local_90 + 1;
    local_98 = PTR_DAT_04bc0a78 + 0x10;
    local_428 = PTR_DAT_04bc0bf0 + 0x10;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    puVar9 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
    local_388 = local_3e0;
    local_328 = local_410;
    local_2f8 = local_3e0;
    local_2a0 = local_3e0;
    local_240 = local_410;
    local_210 = local_3e0;
    local_1b8 = local_3e0;
    local_148 = local_3e0;
    local_f0 = local_3e0;
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar9 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58), (uVar6 & 1) != 0)) {
      local_50c = 0;
      local_510 = 0xb;
      local_508 = 0xffffffff;
      uStack_500 = 0xffffffff00000000;
      puStack_4e8 = local_4dc;
      local_4f0 = puVar1 + 0x10;
      puStack_518 = &local_440;
      local_4f8 = 0xffffffff;
      local_4e0 = 0x40;
      local_49d = 0;
      local_4dc[0] = 0;
      local_488 = 0x40;
      local_445 = 0;
      local_484[0] = 0;
      puStack_490 = local_484;
      uStack_430 = 0;
      local_520 = PTR_DAT_04bb5128 + 0x10;
      puVar2 = auStack_42a;
      if (auStack_42a <= (undefined1 *)((long)&local_440 + 2U)) {
        puVar2 = (undefined1 *)((long)&local_440 + 2U);
      }
      local_440 = 0;
      uStack_438 = 0;
      local_432 = 0;
      local_498 = local_4f0;
      memset(puStack_518,0,(ulong)(puVar2 + (-0xe1 - (long)&local_520)) & 0xfffffffffffffffc | 2);
      FUN_01c11758(&local_520,param_1 + 0x1f8);
      puVar1 = PTR_DAT_04bb2020;
      plVar8 = (long *)puVar9[0x43];
      lVar10 = *plVar8;
      if (lVar10 != 0) {
        plVar8 = *(long **)(lVar10 + 0x48);
        if (plVar8[1] != 0) {
          local_70 = PTR_DAT_04bc0878 + 0x10;
          local_68 = (char *)CONCAT44(local_68._4_4_,9);
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
          (**(code **)(plVar8[3] + 0x5e0))(plVar8[1],PTR_DAT_04bb2da0,0);
          FUN_03d7dd80(lVar10);
        }
        local_530 = puVar1 + 0x10;
        local_68 = "FesStaffCredit";
        puStack_528 = &DAT_040867f5;
        local_70 = local_530;
        FUN_01bea210(&local_428,lVar10,&local_70,&local_530);
        if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar5 != 0)) {
          FUN_01bb25c8(PTR_DAT_04bc0a80);
          __cxa_guard_release(PTR_DAT_04bc0a88);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
          uVar6 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar6 * 4) == 0x73) goto LAB_02e3154c;
            uVar6 = uVar6 + 1;
          } while (*(uint *)PTR_DAT_04bc0a80 != uVar6);
        }
        uVar6 = 0;
LAB_02e3154c:
        local_70 = (undefined *)CONCAT44(local_70._4_4_,(int)uVar6);
        FUN_01bae480(&local_98,&local_520,0,&local_70,0);
        FUN_01bea9c8(&local_428);
        plVar8 = (long *)puVar9[0x43];
      }
      lVar10 = plVar8[1 < *(uint *)(puVar9 + 0x42)];
      if (lVar10 != 0) {
        local_70 = puVar1 + 0x10;
        local_68 = "CoordinatorGrade";
        uVar4 = FUN_02758850(&local_70);
        puVar7 = (undefined4 *)(**(code **)(local_520 + 0x48))(&local_520);
        FUN_03466b08(&local_70,lVar10,uVar4,*puVar7);
      }
    }
    FUN_01be9eb8(&local_428);
  }
  uVar4 = 0x3f800000;
LAB_02e3161c:
  puVar9 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar9 != (undefined8 *)0x0) &&
      (uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58), (uVar6 & 1) != 0)) &&
     (plVar8 = *(long **)(puVar9[0x45] + (ulong)(2 < *(uint *)(puVar9 + 0x44)) * 0x10),
     plVar8 != (long *)0x0)) {
    local_428 = PTR_DAT_04bc4f00 + 0x10;
    local_420 = 0x14;
    uStack_41e = 0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_428);
    (**(code **)(plVar8[3] + 0x158))(uVar4,plVar8[1]);
  }
  return;
}

