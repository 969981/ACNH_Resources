
void FUN_030a0740(long param_1,uint param_2)

{
  uint *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  short *psVar16;
  byte bVar17;
  int iVar18;
  undefined *local_530;
  undefined8 *local_528;
  undefined8 local_520;
  undefined *local_518;
  undefined8 local_510;
  long local_508;
  undefined8 local_500;
  long local_4f8;
  undefined8 local_4f0;
  undefined1 *puStack_4e8;
  undefined4 local_4e0;
  undefined1 local_4dc [47];
  undefined1 local_4ad;
  undefined1 *local_4a8;
  long lStack_4a0;
  undefined8 local_498;
  undefined1 *puStack_490;
  undefined4 local_488;
  undefined1 local_484 [47];
  undefined1 local_455;
  undefined8 local_450;
  uint uStack_448;
  undefined2 uStack_444;
  undefined2 uStack_442;
  undefined1 local_440 [6];
  undefined2 uStack_43a;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
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
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined **local_340;
  undefined8 *puStack_338;
  undefined4 local_330;
  undefined1 local_32c;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined *local_310;
  undefined1 *local_308;
  undefined4 local_300;
  undefined1 local_2fc [63];
  undefined1 local_2bd;
  undefined *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4 [63];
  undefined1 local_265;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
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
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined2 local_c8;
  undefined *local_c0 [4];
  int local_9c;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  bVar17 = *(byte *)(param_1 + 0x1f8);
  puVar1 = (uint *)(param_1 + 0x574f4);
  *puVar1 = param_2;
  puVar8 = PTR_DAT_04bb43c0;
  plVar2 = (long *)(param_1 + 0x1c330);
  if ((param_2 < 9) && ((1 << (ulong)(param_2 & 0x1f) & 0x181U) != 0)) goto LAB_030a0798;
  lVar15 = *(long *)(*(long *)(param_1 + 0x220) + 0x590);
  if ((lVar15 == 0) ||
     ((lVar12 = *(long *)(lVar15 + 0x220), lVar12 == 0 ||
      (*(int *)(lVar12 + 0x10) == 0 || *(int *)(lVar12 + 0x10) <= *(int *)(lVar15 + 0x440))))) {
    psVar16 = &DAT_05586008;
  }
  else {
    psVar16 = *(short **)(*(long *)(lVar12 + 0x18) + (long)*(int *)(lVar15 + 0x440) * 8);
  }
  local_160 = *(undefined4 *)psVar16;
  local_15c = *(undefined4 *)(psVar16 + 2);
  if (*psVar16 != -2) {
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(&local_160);
    if (*(long *)puVar8 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_528 = (undefined8 *)((ulong)local_528 & 0xffffffff00000000);
        uVar13 = (ulong)local_510 >> 0x20;
        local_510 = (undefined1 *)CONCAT44((uint)uVar13 & 0xffffff00,0x80);
        local_508 = 0xffffffff;
        local_500 = &DAT_ffffffff00000000;
        puStack_4e8 = local_4dc;
        local_530 = PTR_DAT_04bc0ce0 + 0x10;
        local_4f8 = CONCAT44(local_4f8._4_4_,0xffffffff);
        local_518 = local_440;
        local_4e0 = 0x40;
        lStack_4a0._0_4_ = (uint)(uint3)lStack_4a0;
        local_4dc[0] = 0;
        puVar3 = PTR_DAT_04bb2bc0 + 0x10;
        puStack_490 = local_484;
        local_488 = 0x40;
        uStack_448 = uStack_448 & 0xffffff;
        local_484[0] = 0;
        local_350 = 0;
        uStack_348 = 0;
        pppuVar4 = &local_340;
        if (&local_340 <= local_440 + 2) {
          pppuVar4 = (undefined ***)(local_440 + 2);
        }
        local_520 = &PTR_LAB_04938188;
        local_360 = 0;
        uStack_358 = 0;
        local_370 = 0;
        uStack_368 = 0;
        local_380 = 0;
        uStack_378 = 0;
        local_390 = 0;
        uStack_388 = 0;
        local_3a0 = 0;
        uStack_398 = 0;
        local_3b0 = 0;
        uStack_3a8 = 0;
        local_3c0 = 0;
        uStack_3b8 = 0;
        local_3d0 = 0;
        uStack_3c8 = 0;
        local_3e0 = 0;
        uStack_3d8 = 0;
        local_3f0 = 0;
        uStack_3e8 = 0;
        local_400 = 0;
        uStack_3f8 = 0;
        local_410 = 0;
        uStack_408 = 0;
        local_420 = 0;
        uStack_418 = 0;
        local_430 = 0;
        uStack_428 = 0;
        local_440 = (undefined1  [6])0x0;
        uStack_43a = 0;
        uStack_438 = 0;
        local_4f0 = puVar3;
        local_498 = puVar3;
        memset(local_518,0,(long)pppuVar4 + (-0xe0 - (long)&local_520));
        local_32c = 0;
        local_330 = 0x80;
        puStack_338 = &local_260;
        local_320 = 0xffffffff00000000;
        local_308 = local_2fc;
        local_2fc[0] = 0;
        local_300 = 0x40;
        local_2b0 = local_2a4;
        local_2a4[0] = 0;
        local_2a8 = 0x40;
        puVar5 = &local_160;
        if (&local_160 <= (undefined4 *)((long)&local_260 + 2U)) {
          puVar5 = (undefined4 *)((long)&local_260 + 2U);
        }
        local_328 = 0xffffffff;
        local_318 = 0xffffffff;
        local_2bd = 0;
        local_265 = 0;
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
        local_210 = 0;
        local_218 = 0;
        local_220 = 0;
        local_228 = 0;
        local_230 = 0;
        local_238 = 0;
        local_240 = 0;
        local_248 = 0;
        local_250 = 0;
        local_258 = 0;
        local_260 = 0;
        local_340 = &PTR_LAB_04938188;
        local_310 = puVar3;
        local_2b8 = puVar3;
        memset(puStack_338,0,(long)puVar5 + (-0xe0 - (long)&local_340));
        FUN_01c0bafc(&local_530,&local_160,PTR_DAT_04bb2df0);
        lVar15 = *(long *)puVar8;
        local_148 = 0;
        local_158 = PTR_DAT_04bc0510 + 0x10;
        local_150 = CONCAT44(local_15c,local_160);
        uVar10 = FUN_0277d6c4(&local_150);
        if (*(long *)puVar8 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(&local_160);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
              lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8);
              if (lVar15 != 0) {
                local_148 = lVar15;
              }
            }
          }
        }
        iVar11 = FUN_01aed730(&local_158);
        uVar13 = (ulong)(long)(iVar11 * 0x5a) / 100;
        iVar11 = (int)uVar13;
        if (iVar11 < 1000) {
          iVar7 = (iVar11 / 10) * 10;
          iVar18 = iVar7 + 10;
          if (iVar11 % 10 < 5) {
            iVar18 = iVar7;
          }
        }
        else {
          iVar14 = (int)((uVar13 & 0xffffffff) / 100);
          iVar7 = iVar14 * 100;
          iVar18 = iVar7 + 100;
          if ((uint)(iVar11 + iVar14 * -100) < 0x32) {
            iVar18 = iVar7;
          }
        }
        lVar15 = *plVar2;
        if (((DAT_0533a3c0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar11 != 0)) {
          FUN_01bb25c8(&DAT_0533a3b0);
          __cxa_guard_release(&DAT_0533a3c0);
        }
        if (0 < (int)DAT_0533a3b0) {
          uVar13 = 0;
          do {
            if (*(int *)(DAT_0533a3b8 + uVar13 * 4) == 0x7d) goto LAB_030a0c80;
            uVar13 = uVar13 + 1;
          } while (DAT_0533a3b0 != uVar13);
        }
        uVar13 = 0;
LAB_030a0c80:
        local_c0[0] = (undefined *)CONCAT44(local_c0[0]._4_4_,(int)uVar13);
        FUN_01baf140(lVar15 + 0x260,&local_530,0,local_c0,0);
        FUN_01bafd70(*plVar2 + 0x260,iVar18,0);
      }
    }
  }
  param_2 = *puVar1;
  if (param_2 != 4) goto LAB_030a0798;
  if (DAT_05739190 == 0) {
    lVar15 = 0;
    if (cRam0000000000000078 != '\0') goto LAB_030a0cd4;
LAB_030a0cfc:
    bVar9 = 1;
  }
  else {
    lVar15 = *(long *)(DAT_05739190 + 0x28);
    if (*(char *)(lVar15 + 0x78) == '\0') goto LAB_030a0cfc;
LAB_030a0cd4:
    bVar9 = (**(code **)(*(long *)(lVar15 + 0x70) + 0x18))((long *)(lVar15 + 0x70));
    *(undefined1 *)(lVar15 + 0x78) = 0;
  }
  *(byte *)(lVar15 + 0x79) = bVar9 & 1;
  uVar13 = (ulong)local_520 >> 0x20;
  local_520 = (undefined **)CONCAT44((uint)uVar13 & 0xffffff00,0xb);
  local_518 = (undefined *)0xffffffff;
  local_510 = (undefined1 *)0xffffffff00000000;
  local_4f8 = (long)&local_4f0 + 4;
  local_528 = &local_450;
  local_158 = (undefined *)CONCAT44(local_158._4_4_,*(undefined4 *)(lVar15 + 0x80));
  local_508 = CONCAT44(local_508._4_4_,0xffffffff);
  local_4ad = 0;
  local_4f0 = (undefined *)CONCAT35(local_4f0._5_3_,0x40);
  local_500 = PTR_DAT_04bb2bc0 + 0x10;
  local_455 = 0;
  local_498 = (undefined *)CONCAT35(local_498._5_3_,0x40);
  lStack_4a0 = (long)&local_498 + 4;
  local_530 = PTR_DAT_04bb5128 + 0x10;
  local_450 = 0;
  uStack_448 = 0;
  uStack_444 = 0;
  uStack_442 = 0;
  local_440 = (undefined1  [6])0x0;
  puVar6 = &uStack_43a;
  if (&uStack_43a <= (undefined2 *)((long)&local_450 + 2U)) {
    puVar6 = (undefined2 *)((long)&local_450 + 2U);
  }
  local_4a8 = local_500;
  memset(local_528,0,(long)puVar6 + (-0xe1 - (long)&local_530) & 0xfffffffffffffffcU | 2);
  FUN_01c11a38(&local_530,&local_158);
  lVar15 = *plVar2;
  if (((DAT_0533a3c0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar11 != 0)) {
    FUN_01bb25c8(&DAT_0533a3b0);
    __cxa_guard_release(&DAT_0533a3c0);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar13 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar13 * 4) == 0x73) goto LAB_030a0e0c;
      uVar13 = uVar13 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar13);
  }
  uVar13 = 0;
LAB_030a0e0c:
  local_158 = (undefined *)CONCAT44(local_158._4_4_,(int)uVar13);
  FUN_01bae480(lVar15 + 0x260,&local_530,0,&local_158,0);
  puVar8 = PTR_DAT_04bb43c0;
  local_70 = 0;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_78 = local_160;
  uStack_74 = local_15c;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar8 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(&local_160);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8);
        if (lVar15 != 0) {
          local_70 = lVar15;
        }
      }
    }
  }
  FUN_025d6bd4(local_c0,param_1 + 0x1f8);
  local_158 = (undefined *)0x0;
  local_150 = 0;
  FUN_00bdc3cc(&local_148);
  local_c8 = 0;
  local_158 = (undefined *)CONCAT44(local_158._4_4_,0x10);
  local_148 = CONCAT44(local_15c,local_160);
  iVar11 = FUN_01aed730(&local_80);
  uVar13 = (ulong)(long)(iVar11 * 0x5a) / 100;
  iVar11 = (int)uVar13;
  if (iVar11 < 1000) {
    iVar7 = (iVar11 / 10) * 10;
    iVar18 = iVar7 + 10;
    if (iVar11 % 10 < 5) {
      iVar18 = iVar7;
    }
  }
  else {
    iVar14 = (int)((uVar13 & 0xffffffff) / 100);
    iVar7 = iVar14 * 100;
    iVar18 = iVar7 + 100;
    if ((uint)(iVar11 + iVar14 * -100) < 0x32) {
      iVar18 = iVar7;
    }
  }
  local_158 = (undefined *)CONCAT44(iVar18,(undefined4)local_158);
  local_150 = CONCAT44(1,(undefined4)local_150);
  FUN_025d74cc(local_c0,&local_158);
  local_c0[0] = PTR_DAT_04bc3410 + 0x10;
  iVar11 = FUN_025d79cc(local_c0);
  if (iVar11 == -1) {
LAB_030a0fe8:
    if (local_9c == 0) {
      local_9c = 1;
    }
  }
  else {
    iVar11 = (**(code **)(local_c0[0] + 0x20))(local_c0);
    local_158 = (undefined *)CONCAT44(local_158._4_4_,iVar11);
    if (0xc < iVar11) goto LAB_030a0fe8;
  }
  FUN_02601530(local_c0);
  param_2 = *puVar1;
LAB_030a0798:
  local_508 = param_1 + 0x574d0;
  uVar10 = param_2;
  if (8 < param_2) {
    uVar10 = 0;
  }
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  local_530 = (undefined *)CONCAT71(local_530._1_7_,bVar17);
  local_520 = (undefined **)(&DAT_056e6e18)[(long)(int)uVar10 * 2];
  local_528 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
  local_510 = &DAT_0419b684;
  uVar13 = (ulong)local_500 >> 0x20;
  local_4f8 = CONCAT44(local_4f8._4_4_,1);
  local_500._0_4_ = CONCAT13(param_2 != 1,0x10101);
  local_500 = (undefined1 *)(CONCAT44((int)uVar13,(undefined4)local_500) & 0xffff0000ffffffff);
  local_518 = (undefined *)local_528;
  FUN_02dfa190(*plVar2,&local_530);
  (**(code **)(*(long *)*plVar2 + 0xa8))();
  return;
}

