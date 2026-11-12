
void FUN_007f4fe0(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  char cVar12;
  long lVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  int iVar17;
  ulong uVar18;
  undefined1 auStack_1c22 [2];
  undefined *local_1c20;
  undefined1 *puStack_1c18;
  undefined *local_1c10;
  char *pcStack_1c08;
  undefined8 local_1c00;
  undefined1 *local_1bf8;
  undefined4 local_1bf0;
  undefined1 local_1bec [31];
  undefined1 local_1bcd;
  undefined1 auStack_1bc2 [2];
  uint local_1bc0;
  int iStack_1bbc;
  undefined8 *local_1bb8;
  undefined8 *local_1bb0;
  ushort local_51c [2];
  undefined *local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined *local_500;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined *local_4d0;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined *local_4a0;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined *local_470;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined *local_440;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined *local_410;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined *local_3e0;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined *local_3b0;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined *local_380;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined *local_350;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined2 local_314;
  undefined *local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined4 local_2e4;
  undefined **local_2e0;
  undefined1 *local_2d8;
  undefined4 local_2d0;
  undefined1 local_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined *local_2b0;
  undefined1 *local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c [63];
  undefined1 local_25d;
  undefined *local_258;
  undefined1 *local_250;
  undefined4 local_248;
  undefined1 local_244 [63];
  undefined1 local_205;
  undefined1 local_200 [8];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined **local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined *local_190;
  undefined1 *local_188;
  undefined4 local_180;
  undefined1 local_17c [63];
  undefined1 local_13d;
  undefined *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  uint local_6c;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar8 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))(),
     lVar8 != 0)) {
    plVar1 = (long *)(lVar8 + 0x27c898);
    if ((*(long *)(lVar8 + 0x27c8b8) == 0) ||
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x27c8b8) + 0x10), puVar9 == (undefined8 *)0x0))
    {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar9)();
      uVar10 = uVar10 & 0xffffffff;
    }
    FUN_0080d968(&local_1bc0);
    lVar13 = 0;
    do {
      if ((*(long *)(lVar8 + 0x27c8b8) != 0) &&
         (plVar11 = *(long **)(*(long *)(lVar8 + 0x27c8b8) + 0x20), plVar11 != (long *)0x0)) {
        local_518 = (undefined *)*plVar1;
        local_510 = *(undefined8 *)(lVar8 + 0x27c8a0);
        uStack_508 = 200;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_518);
      }
      puVar9 = local_1bb0;
      if ((int)local_1bc0 < iStack_1bbc) {
        if (local_1bb0 != (undefined8 *)0x0) {
          local_1bb0 = (undefined8 *)*local_1bb0;
        }
        *(undefined1 *)puVar9 = *(undefined1 *)(*(long *)(lVar8 + 0x27c8a0) + *plVar1 + lVar13);
        if ((int)local_1bc0 < iStack_1bbc) {
          local_1bb8[(int)local_1bc0] = puVar9;
          local_1bc0 = local_1bc0 + 1;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 100);
    FUN_0080dc70(&local_1bc0);
    iVar17 = local_1bc0 * 0x1000000 + -0x1000000;
    if (0 < iVar17) {
      iVar7 = 0;
      lVar13 = 1;
      cVar12 = *(char *)*local_1bb8;
LAB_007f5150:
      puVar9 = local_1bb8 + lVar13;
      if (cVar12 != *(char *)*puVar9) goto code_r0x007f5160;
      lVar13 = 0;
      do {
        if ((*(long *)(lVar8 + 0x27c8b8) != 0) &&
           (plVar11 = *(long **)(*(long *)(lVar8 + 0x27c8b8) + 0x20), plVar11 != (long *)0x0)) {
          local_518 = (undefined *)*plVar1;
          local_510 = *(undefined8 *)(lVar8 + 0x27c8a0);
          uStack_508 = 200;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_518);
        }
        *(char *)(*(long *)(lVar8 + 0x27c8a0) + *plVar1 + lVar13) = (char)lVar13;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 100);
    }
LAB_007f5174:
    FUN_0080d968(&local_1bc0);
    lVar13 = 100;
    do {
      if ((*(long *)(lVar8 + 0x27c8b8) != 0) &&
         (plVar11 = *(long **)(*(long *)(lVar8 + 0x27c8b8) + 0x20), plVar11 != (long *)0x0)) {
        local_518 = (undefined *)*plVar1;
        local_510 = *(undefined8 *)(lVar8 + 0x27c8a0);
        uStack_508 = 200;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_518);
      }
      puVar9 = local_1bb0;
      if ((int)local_1bc0 < iStack_1bbc) {
        if (local_1bb0 != (undefined8 *)0x0) {
          local_1bb0 = (undefined8 *)*local_1bb0;
        }
        *(undefined1 *)puVar9 = *(undefined1 *)(*(long *)(lVar8 + 0x27c8a0) + *plVar1 + lVar13);
        if ((int)local_1bc0 < iStack_1bbc) {
          local_1bb8[(int)local_1bc0] = puVar9;
          local_1bc0 = local_1bc0 + 1;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 200);
    FUN_0080dc70(&local_1bc0);
    iVar17 = local_1bc0 * 0x1000000 + -0x1000000;
    if (0 < iVar17) {
      iVar7 = 0;
      lVar13 = 1;
      cVar12 = *(char *)*local_1bb8;
LAB_007f5260:
      puVar9 = local_1bb8 + lVar13;
      if (cVar12 != *(char *)*puVar9) goto code_r0x007f5270;
      lVar13 = 0;
      do {
        if ((*(long *)(lVar8 + 0x27c8b8) != 0) &&
           (plVar11 = *(long **)(*(long *)(lVar8 + 0x27c8b8) + 0x20), plVar11 != (long *)0x0)) {
          local_518 = (undefined *)*plVar1;
          local_510 = *(undefined8 *)(lVar8 + 0x27c8a0);
          uStack_508 = 200;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_518);
        }
        *(char *)(*(long *)(lVar8 + 0x27c8a0) + *plVar1 + lVar13 + 100) = (char)lVar13;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 100);
    }
LAB_007f5284:
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x27c8b8) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x27c8b8) + 0x18), puVar9 != (undefined8 *)0x0))
    {
      (**(code **)*puVar9)();
    }
    local_1ac = 0;
    local_1b8 = local_e0;
    local_1b0 = 0x20;
    local_1a8 = 0xffffffff;
    local_1a0 = 0xffffffff00000000;
    local_a0 = DAT_04ccaca0;
    local_98 = DAT_04ccaca8;
    local_198 = 0xffffffff;
    local_13d = 0;
    local_17c[0] = 0;
    local_90 = DAT_04ccacb0;
    local_88 = DAT_04ccacb8;
    local_84 = DAT_04ccacbc;
    local_7c = DAT_04ccacc4;
    local_74 = DAT_04ccaccc;
    local_6c = DAT_04ccacd4;
    if (1 < DAT_04ccacd4) {
      local_6c = 0;
    }
    local_188 = local_17c;
    local_180 = 0x40;
    local_128 = 0x40;
    local_e5 = 0;
    local_124[0] = 0;
    local_1c0 = &PTR_LAB_049173e0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = (undefined1  [8])0x0;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    local_130 = local_124;
    puVar9 = &local_a0;
    if (&local_a0 <= local_e0 + 2) {
      puVar9 = (undefined8 *)(local_e0 + 2);
    }
    local_190 = puVar2;
    local_138 = puVar2;
    memset(local_1b8,0,(size_t)((long)puVar9 + (-0xe0 - (long)&local_1c0)));
    local_2d0 = 0x20;
    local_2cc = 0;
    local_2a8 = local_29c;
    local_2d8 = local_200;
    local_2c8 = 0xffffffff;
    local_250 = local_244;
    pppuVar4 = &local_1c0;
    if (&local_1c0 <= local_200 + 2) {
      pppuVar4 = (undefined ***)(local_200 + 2);
    }
    local_2c0 = 0xffffffff00000000;
    local_2b8 = 0xffffffff;
    local_2a0 = 0x40;
    local_25d = 0;
    local_29c[0] = 0;
    local_248 = 0x40;
    local_205 = 0;
    local_244[0] = 0;
    local_2e0 = &PTR_LAB_049173e0;
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = 0;
    local_1f0 = 0;
    local_1f8 = 0;
    local_200 = (undefined1  [8])0x0;
    local_2b0 = puVar2;
    local_258 = puVar2;
    memset(local_2d8,0,(size_t)((long)pppuVar4 + (-0xe0 - (long)&local_2e0)));
    memset(&local_510,0,0x1e0);
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_500 = PTR_DAT_04bb2d80 + 0x10;
    iVar17 = 0x32;
    local_518 = PTR_DAT_04bb2d58 + 0x10;
    local_450 = 0;
    uStack_448 = 0;
    local_310 = PTR_DAT_04bb2e08 + 0x10;
    local_420 = 0;
    uStack_418 = 0;
    local_330 = 0xffffffff;
    local_2e8 = 1;
    local_318 = 0;
    local_308 = 0;
    local_300 = 0;
    local_2f8 = 0;
    local_2f0 = 0;
    local_2e4 = 0;
    local_314 = 0;
    local_3f0 = 0;
    uStack_3e8 = 0;
    local_3c0 = 0;
    uStack_3b8 = 0;
    local_390 = 0;
    uStack_388 = 0;
    local_360 = 0;
    uStack_358 = 0;
    local_328 = 0;
    uStack_320 = 0;
    puVar2 = PTR_DAT_04bb2028 + 0x10;
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    local_4d0 = local_500;
    local_4a0 = local_500;
    local_470 = local_500;
    local_440 = local_500;
    local_410 = local_500;
    local_3e0 = local_500;
    local_3b0 = local_500;
    local_380 = local_500;
    local_350 = local_500;
    do {
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
        uVar10 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar10 * 4) == 0) goto LAB_007f55d8;
          uVar10 = uVar10 + 1;
        } while (*(uint *)PTR_DAT_04bb3120 != uVar10);
      }
      uVar10 = 0;
LAB_007f55d8:
      local_51c[0] = 0;
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar14 = (uint)uVar10;
      if (*(uint *)PTR_DAT_04bb3120 <= uVar14) {
        uVar14 = 0;
      }
      local_51c[0] = (ushort)iVar17 |
                     (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar14 * 4) <<
                             0xb);
      FUN_007ef010(auStack_1bc2,local_51c);
      FUN_007e4920(&local_1bc0,auStack_1bc2);
      if ((((local_1bc0 & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170) &&
          (local_1bb0 != (undefined8 *)0x0 || local_1bb8 != (undefined8 *)0x0)) &&
         (iVar7 = FUN_007e7930(&local_1bc0), iVar7 == -0x5eb449)) {
        FUN_007e6230(&local_1c00,&local_1bc0);
        if ((int)local_1c00 == 0) {
          FUN_007e80d0(&local_1bc0);
          uVar10 = 0;
          puVar15 = PTR_DAT_04bb4cd0 + 0x4c;
          do {
            FUN_007e70d0(&local_1bc0,0,uVar10 & 0xffffffff,puVar15[-0x1f]);
            FUN_007e70d0(&local_1bc0,1,uVar10 & 0xffffffff,puVar15[-0x1e]);
            FUN_007e70d0(&local_1bc0,2,uVar10 & 0xffffffff,puVar15[-0x1d]);
            FUN_007e70d0(&local_1bc0,3,uVar10 & 0xffffffff,puVar15[-0x1c]);
            FUN_007e70d0(&local_1bc0,4,uVar10 & 0xffffffff,puVar15[-0x1b]);
            FUN_007e70d0(&local_1bc0,5,uVar10 & 0xffffffff,puVar15[-0x1a]);
            FUN_007e70d0(&local_1bc0,6,uVar10 & 0xffffffff,puVar15[-0x19]);
            FUN_007e70d0(&local_1bc0,7,uVar10 & 0xffffffff,puVar15[-0x18]);
            FUN_007e70d0(&local_1bc0,8,uVar10 & 0xffffffff,puVar15[-0x17]);
            FUN_007e70d0(&local_1bc0,9,uVar10 & 0xffffffff,puVar15[-0x16]);
            FUN_007e70d0(&local_1bc0,10,uVar10 & 0xffffffff,puVar15[-0x15]);
            FUN_007e70d0(&local_1bc0,0xb,uVar10 & 0xffffffff,puVar15[-0x14]);
            FUN_007e70d0(&local_1bc0,0xc,uVar10 & 0xffffffff,puVar15[-0x13]);
            FUN_007e70d0(&local_1bc0,0xd,uVar10 & 0xffffffff,puVar15[-0x12]);
            FUN_007e70d0(&local_1bc0,0xe,uVar10 & 0xffffffff,puVar15[-0x11]);
            FUN_007e70d0(&local_1bc0,0xf,uVar10 & 0xffffffff,puVar15[-0x10]);
            FUN_007e70d0(&local_1bc0,0x10,uVar10 & 0xffffffff,puVar15[-0xf]);
            FUN_007e70d0(&local_1bc0,0x11,uVar10 & 0xffffffff,puVar15[-0xe]);
            FUN_007e70d0(&local_1bc0,0x12,uVar10 & 0xffffffff,puVar15[-0xd]);
            FUN_007e70d0(&local_1bc0,0x13,uVar10 & 0xffffffff,puVar15[-0xc]);
            FUN_007e70d0(&local_1bc0,0x14,uVar10 & 0xffffffff,puVar15[-0xb]);
            FUN_007e70d0(&local_1bc0,0x15,uVar10 & 0xffffffff,puVar15[-10]);
            FUN_007e70d0(&local_1bc0,0x16,uVar10 & 0xffffffff,puVar15[-9]);
            FUN_007e70d0(&local_1bc0,0x17,uVar10 & 0xffffffff,puVar15[-8]);
            FUN_007e70d0(&local_1bc0,0x18,uVar10 & 0xffffffff,puVar15[-7]);
            FUN_007e70d0(&local_1bc0,0x19,uVar10 & 0xffffffff,puVar15[-6]);
            FUN_007e70d0(&local_1bc0,0x1a,uVar10 & 0xffffffff,puVar15[-5]);
            FUN_007e70d0(&local_1bc0,0x1b,uVar10 & 0xffffffff,puVar15[-4]);
            FUN_007e70d0(&local_1bc0,0x1c,uVar10 & 0xffffffff,puVar15[-3]);
            FUN_007e70d0(&local_1bc0,0x1d,uVar10 & 0xffffffff,puVar15[-2]);
            FUN_007e70d0(&local_1bc0,0x1e,uVar10 & 0xffffffff,puVar15[-1]);
            FUN_007e70d0(&local_1bc0,0x1f,uVar10 & 0xffffffff,*puVar15);
            uVar10 = uVar10 + 1;
            puVar15 = puVar15 + 0x20;
          } while (uVar10 != 0x20);
          local_1c00._0_4_ = 0xe52d2dff;
          FUN_007e7690(&local_1bc0,0,&local_1c00);
          local_1c00._0_4_ = 0xe5772dff;
          FUN_007e7690(&local_1bc0,1,&local_1c00);
          local_1c00._0_4_ = 0xe5e51eff;
          FUN_007e7690(&local_1bc0,2,&local_1c00);
          local_1c00._0_4_ = 0x77e52dff;
          FUN_007e7690(&local_1bc0,3,&local_1c00);
          local_1c00._0_4_ = 0x1b8b1bff;
          FUN_007e7690(&local_1bc0,4,&local_1c00);
          local_1c00._0_4_ = 0x39b7d6ff;
          FUN_007e7690(&local_1bc0,5,&local_1c00);
          local_1c00._0_4_ = 0x2a91d6ff;
          FUN_007e7690(&local_1bc0,6,&local_1c00);
          local_1c00._0_4_ = 0x3d3de5ff;
          FUN_007e7690(&local_1bc0,7,&local_1c00);
          local_1c00._0_4_ = 0x894ce5ff;
          FUN_007e7690(&local_1bc0,8,&local_1c00);
          local_1c00._0_4_ = 0xe55bc9ff;
          FUN_007e7690(&local_1bc0,9,&local_1c00);
          local_1c00._0_4_ = 0xe5a898ff;
          FUN_007e7690(&local_1bc0,10,&local_1c00);
          local_1c00._0_4_ = 0x8b5041ff;
          FUN_007e7690(&local_1bc0,0xb,&local_1c00);
          local_1c00._0_4_ = 0xe5e5e5ff;
          FUN_007e7690(&local_1bc0,0xc,&local_1c00);
          local_1c00._0_4_ = 0x6e6e6eff;
          FUN_007e7690(&local_1bc0,0xd,&local_1c00);
          local_1c00 = (undefined *)CONCAT44(local_1c00._4_4_,0x141414ff);
          FUN_007e7690(&local_1bc0,0xe,&local_1c00);
          local_1bf0 = 0x20;
          local_1bcd = 0;
          local_1bec[0] = 0;
          local_1c00 = puVar2;
          local_1bf8 = local_1bec;
          FUN_038d1270(&local_1c00,&DAT_0405bf91,iVar17 + 1);
          pcStack_1c08 = "STR_MydesignDefaultName";
          local_1c10 = puVar3;
          (**(code **)(local_1c00 + 0x18))(&local_1c00);
          puStack_1c18 = local_1bf8;
          local_1c20 = puVar3;
          FUN_006f50a0(&local_1c0,&local_1c10,&local_1c20,0);
          FUN_006f2100(&local_518,&local_2e0,&local_1c0);
          FUN_007e5fd0(&local_1bc0,&local_2e0);
          FUN_007e64e0(&local_1bc0,&local_a0);
          FUN_007e7b10(&local_1bc0);
        }
      }
      puVar5 = PTR_DAT_04bb4d30;
      iVar17 = iVar17 + 1;
    } while (iVar17 != 100);
    iVar17 = 0x32;
    puVar2 = PTR_DAT_04bb2028 + 0x10;
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    do {
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
        uVar10 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar10 * 4) == 1) goto LAB_007f5c8c;
          uVar10 = uVar10 + 1;
        } while (*(uint *)PTR_DAT_04bb3120 != uVar10);
      }
      uVar10 = 0;
LAB_007f5c8c:
      local_51c[0] = 0;
      if (((*PTR_DAT_04bb3128 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar7 != 0)) {
        FUN_00706e58(PTR_DAT_04bb3120);
        __cxa_guard_release(PTR_DAT_04bb3128);
      }
      uVar14 = (uint)uVar10;
      if (*(uint *)PTR_DAT_04bb3120 <= uVar14) {
        uVar14 = 0;
      }
      local_51c[0] = (ushort)iVar17 |
                     (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar14 * 4) <<
                             0xb);
      FUN_007ef010(auStack_1c22,local_51c);
      FUN_007e4920(&local_1bc0,auStack_1c22);
      if ((((local_1bc0 & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170) &&
          (local_1bb0 != (undefined8 *)0x0 || local_1bb8 != (undefined8 *)0x0)) &&
         (iVar7 = FUN_007e7930(&local_1bc0), iVar7 == -0x30e07be3)) {
        FUN_007e6230(&local_1c00,&local_1bc0);
        if ((int)local_1c00 == 0) {
          FUN_007e80d0(&local_1bc0);
          uVar10 = 0;
          puVar16 = puVar5 + 0x31;
          do {
            uVar18 = 0;
            do {
              FUN_007e70d0(&local_1bc0,uVar18 & 0xffffffff,uVar10 & 0xffffffff,puVar16[uVar18]);
              puVar6 = local_1c00;
              uVar18 = uVar18 + 1;
            } while (uVar18 != 0x40);
            uVar10 = uVar10 + 1;
            puVar16 = puVar16 + 0x40;
          } while (uVar10 != 0x40);
          local_1c00._0_2_ = CONCAT11(puVar5[6],0xff);
          local_1c00._4_4_ = SUB84(puVar6,4);
          local_1c00._0_4_ = CONCAT13(puVar5[4],CONCAT12(puVar5[5],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,0,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[9],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[7],CONCAT12(puVar5[8],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,1,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0xc],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[10],CONCAT12(puVar5[0xb],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,2,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0xf],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0xd],CONCAT12(puVar5[0xe],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,3,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x12],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x10],CONCAT12(puVar5[0x11],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,4,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x15],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x13],CONCAT12(puVar5[0x14],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,5,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x18],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x16],CONCAT12(puVar5[0x17],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,6,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x1b],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x19],CONCAT12(puVar5[0x1a],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,7,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x1e],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x1c],CONCAT12(puVar5[0x1d],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,8,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x21],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x1f],CONCAT12(puVar5[0x20],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,9,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x24],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x22],CONCAT12(puVar5[0x23],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,10,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x27],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x25],CONCAT12(puVar5[0x26],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,0xb,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x2a],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x28],CONCAT12(puVar5[0x29],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,0xc,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x2d],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x2b],CONCAT12(puVar5[0x2c],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,0xd,&local_1c00);
          local_1c00._0_2_ = CONCAT11(puVar5[0x30],0xff);
          local_1c00._0_4_ = CONCAT13(puVar5[0x2e],CONCAT12(puVar5[0x2f],(undefined2)local_1c00));
          FUN_007e7690(&local_1bc0,0xe,&local_1c00);
          local_1bcd = 0;
          local_1bf0 = 0x20;
          local_1bec[0] = 0;
          local_1c00 = puVar2;
          local_1bf8 = local_1bec;
          FUN_038d1270(&local_1c00,&DAT_0405bf91,iVar17 + 0x65);
          pcStack_1c08 = "STR_MydesignDefaultName";
          local_1c10 = puVar3;
          (**(code **)(local_1c00 + 0x18))(&local_1c00);
          puStack_1c18 = local_1bf8;
          local_1c20 = puVar3;
          FUN_006f50a0(&local_1c0,&local_1c10,&local_1c20,0);
          FUN_006f2100(&local_518,&local_2e0,&local_1c0);
          FUN_007e5fd0(&local_1bc0,&local_2e0);
          FUN_007e64e0(&local_1bc0,&local_a0);
          FUN_007e7b10(&local_1bc0);
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != 100);
  }
  return;
code_r0x007f5160:
  iVar7 = iVar7 + 0x1000000;
  lVar13 = lVar13 + 1;
  cVar12 = *(char *)*puVar9;
  if (iVar17 <= iVar7) goto LAB_007f5174;
  goto LAB_007f5150;
code_r0x007f5270:
  iVar7 = iVar7 + 0x1000000;
  lVar13 = lVar13 + 1;
  cVar12 = *(char *)*puVar9;
  if (iVar17 <= iVar7) goto LAB_007f5284;
  goto LAB_007f5260;
}

