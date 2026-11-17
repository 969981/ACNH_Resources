
bool FUN_02fbb3e4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined **ppuVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  float *pfVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 local_598;
  undefined *local_590;
  undefined1 *local_588;
  undefined4 local_580;
  undefined1 local_57c;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined4 local_568;
  undefined *local_560;
  undefined1 *puStack_558;
  undefined4 local_550;
  undefined1 local_54c [63];
  undefined1 local_50d;
  undefined *local_508;
  undefined1 *puStack_500;
  undefined4 local_4f8;
  undefined1 local_4f4 [63];
  undefined1 local_4b5;
  undefined1 local_4b0 [8];
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined *local_430;
  undefined2 local_428;
  undefined2 uStack_426;
  undefined4 local_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined *local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined1 local_404;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined4 local_3f0;
  undefined *local_3e8;
  undefined1 *puStack_3e0;
  undefined4 local_3d8;
  undefined1 local_3d4 [63];
  undefined1 local_395;
  undefined *local_390;
  undefined1 *local_388;
  undefined4 local_380;
  undefined1 local_37c [63];
  undefined1 local_33d;
  undefined8 local_338;
  undefined *local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined1 local_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined *local_300;
  undefined1 *local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec [63];
  undefined1 local_2ad;
  undefined *local_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  undefined1 local_294 [63];
  undefined1 local_255;
  undefined8 local_250;
  undefined *local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined1 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  undefined1 local_204 [63];
  undefined1 local_1c5;
  undefined *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined1 local_13c [63];
  undefined1 local_fd;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [63];
  undefined1 local_a5;
  undefined *local_a0;
  int local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_80;
  
  puVar23 = PTR_DAT_04bb27c0;
  if (*(char *)(*(long *)PTR_DAT_04bb38d0 + 0xb4) != '\0') {
    return false;
  }
  if (0 < **(int **)(*(long *)PTR_DAT_04bb46c0 + 0x10)) {
    return false;
  }
  if (param_2 != 0) {
    if (*(uint *)(param_1 + 0x218) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x238) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 600) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x278) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x298) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x2b8) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x2d8) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x2f8) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x318) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x338) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x358) == param_2) {
      return false;
    }
    if (*(uint *)(param_1 + 0x378) == param_2) {
      return false;
    }
  }
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  if (lVar17 == 0) {
    bVar5 = *PTR_DAT_04bb32e0;
LAB_02fbb530:
    uVar14 = (uint)bVar5;
    if (uVar14 < 8) goto LAB_02fbb5a4;
LAB_02fbb538:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar17 = **(long **)PTR_DAT_04bb27d0;
      bVar5 = *(byte *)(lVar17 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar13 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar13 = (uint *)(lVar17 + 0x48);
        }
        if ((*puVar13 & 8) != 0) {
          pbVar15 = (byte *)(lVar17 + 0x471);
        }
      }
      uVar14 = (uint)*pbVar15;
      if (uVar14 < 8) goto LAB_02fbb5a4;
    }
    uVar14 = (uint)(byte)*PTR_DAT_04bb5038;
    if (uVar14 < 8) goto LAB_02fbb5a4;
LAB_02fbb5b8:
    puVar13 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    pbVar15 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar17 + 0x158);
    }
    uVar14 = (uint)*pbVar15;
    if (7 < *pbVar15) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar5 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02fbb530;
      }
      goto LAB_02fbb538;
    }
LAB_02fbb5a4:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_02fbb5b8;
    puVar13 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)uVar14 * 4 + 0xde8);
  }
  if (*puVar13 == param_2) {
    uVar14 = 0;
    if (*(int *)(param_1 + 0x218) != 0) {
      if (*(int *)(param_1 + 0x238) == 0) {
        uVar14 = 1;
      }
      else if (*(int *)(param_1 + 600) == 0) {
        uVar14 = 2;
      }
      else if (*(int *)(param_1 + 0x278) == 0) {
        uVar14 = 3;
      }
      else if (*(int *)(param_1 + 0x298) == 0) {
        uVar14 = 4;
      }
      else if (*(int *)(param_1 + 0x2b8) == 0) {
        uVar14 = 5;
      }
      else if (*(int *)(param_1 + 0x2d8) == 0) {
        uVar14 = 6;
      }
      else if (*(int *)(param_1 + 0x2f8) == 0) {
        uVar14 = 7;
      }
      else if (*(int *)(param_1 + 0x318) == 0) {
        uVar14 = 8;
      }
      else if (*(int *)(param_1 + 0x338) == 0) {
        uVar14 = 9;
      }
      else if (*(int *)(param_1 + 0x358) == 0) {
        uVar14 = 10;
      }
      else {
        if (*(int *)(param_1 + 0x378) != 0) {
          return false;
        }
        uVar14 = 0xb;
      }
    }
    bVar2 = true;
  }
  else {
    if (*(int *)(param_1 + 0x378) == 0) {
      uVar14 = 0xb;
    }
    else if (*(int *)(param_1 + 0x358) == 0) {
      uVar14 = 10;
    }
    else if (*(int *)(param_1 + 0x338) == 0) {
      uVar14 = 9;
    }
    else if (*(int *)(param_1 + 0x318) == 0) {
      uVar14 = 8;
    }
    else if (*(int *)(param_1 + 0x2f8) == 0) {
      uVar14 = 7;
    }
    else if (*(int *)(param_1 + 0x2d8) == 0) {
      uVar14 = 6;
    }
    else if (*(int *)(param_1 + 0x2b8) == 0) {
      uVar14 = 5;
    }
    else if (*(int *)(param_1 + 0x298) == 0) {
      uVar14 = 4;
    }
    else if (*(int *)(param_1 + 0x278) == 0) {
      uVar14 = 3;
    }
    else if (*(int *)(param_1 + 600) == 0) {
      uVar14 = 2;
    }
    else if (*(int *)(param_1 + 0x238) == 0) {
      uVar14 = 1;
    }
    else {
      if (*(int *)(param_1 + 0x218) != 0) {
        return false;
      }
      uVar14 = 0;
    }
    bVar2 = false;
  }
  lVar17 = *(long *)PTR_DAT_04bb27c0;
  uVar12 = 0;
  if (lVar17 != 0) {
    if ((((param_2 == 0) ||
         (plVar22 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                              (ulong)(param_2 >> 0x14) * 8), plVar22 == (long *)0x0)) ||
        ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar22 + 0x46) != param_2)) {
      plVar22 = (long *)0x0;
    }
    if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar17 = *(long *)puVar23;
      iVar7 = (**(code **)(*plVar8 + 0x60))();
      if (iVar7 < 0x11) {
        uVar19 = 1;
        uVar12 = 1;
      }
      else {
        uVar12 = *(uint *)(lVar17 + 0x5e8);
        if (4 < uVar12) goto LAB_02fbb850;
        uVar19 = 0x1aU >> (ulong)(uVar12 & 0x1f) & 1;
        uVar12 = (uint)(0x101000100 >> (((ulong)uVar12 & 7) << 3)) & 1;
      }
    }
    else {
LAB_02fbb850:
      uVar19 = 0;
      uVar12 = 0;
    }
    if (plVar22 != (long *)0x0) {
      lVar17 = plVar22[0x2a];
      bVar6 = (int)lVar17 == 1;
      if (((*PTR_DAT_04bb3760 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3760);
      }
      uVar9 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb3758);
      if ((uVar9 & 1) == 0) {
        uVar12 = 0;
        goto LAB_02fbbbc0;
      }
      uVar19 = uVar19 ^ 1;
      if ((int)lVar17 != 1) {
        uVar19 = 1;
      }
      if (uVar19 != 0) {
        return false;
      }
      plVar22 = (long *)(param_1 + 0x210 + (ulong)uVar14 * 0x20);
      lVar17 = *plVar22;
      puVar13 = (uint *)(plVar22 + 1);
      *puVar13 = param_2;
      puVar23 = PTR_DAT_04bc0a78;
      lVar21 = **(long **)(lVar17 + 0x220);
      if (lVar21 == 0) {
        plVar8 = (long *)PTR_DAT_04bb27c0;
        puVar23 = PTR_DAT_04bc0878;
      }
      else {
        local_41c = 0;
        local_424 = 0;
        uStack_420 = 0;
        local_428 = 0x100;
        local_408 = 0;
        puStack_3e0 = local_3d4;
        local_404 = 0;
        local_3f0 = 0xffffffff;
        local_3d8 = 0x40;
        local_395 = 0;
        local_3d4[0] = 0;
        local_400 = 0xffffffff;
        uStack_3f8 = 0xffffffff00000000;
        puVar1 = PTR_DAT_04bb2bc0 + 0x10;
        local_380 = 0x40;
        local_33d = 0;
        local_37c[0] = 0;
        local_388 = local_37c;
        local_418 = PTR_DAT_04bb2e00 + 0x10;
        local_328 = 0;
        local_2a0 = local_294;
        local_294[0] = 0;
        local_2f8 = local_2ec;
        local_2ec[0] = 0;
        local_1b8 = local_1ac;
        local_1ac[0] = 0;
        local_210 = local_204;
        local_204[0] = 0;
        local_320 = 0;
        local_31c = 0;
        local_318 = 0xffffffff;
        local_310 = 0xffffffff00000000;
        local_308 = 0xffffffff;
        local_2f0 = 0x40;
        local_2ad = 0;
        local_298 = 0x40;
        local_255 = 0;
        local_338 = 0;
        local_240 = 0;
        local_238 = 0;
        local_234 = 0;
        local_230 = 0xffffffff;
        local_228 = 0xffffffff00000000;
        local_220 = 0xffffffff;
        local_208 = 0x40;
        local_1c5 = 0;
        local_1b0 = 0x40;
        local_16d = 0;
        local_250 = 0;
        local_158 = 0;
        local_160 = 0;
        local_168 = 0;
        local_140 = 0x40;
        local_fd = 0;
        local_e8 = 0x40;
        local_a5 = 0;
        uStack_410 = 0;
        local_148 = local_13c;
        local_13c[0] = 0;
        local_f0 = local_e4;
        local_e4[0] = 0;
        local_98 = *(int *)PTR_DAT_04bc0b30;
        local_94 = 0;
        *(int *)PTR_DAT_04bc0b30 = local_98 + 1;
        local_a0 = puVar23 + 0x10;
        local_90 = 0;
        local_430 = PTR_DAT_04bc0bf0 + 0x10;
        local_88 = 0;
        local_80 = 0;
        plVar8 = *(long **)(lVar21 + 0x48);
        local_3e8 = puVar1;
        local_390 = puVar1;
        local_330 = local_418;
        local_300 = puVar1;
        local_2a8 = puVar1;
        local_248 = local_418;
        local_218 = puVar1;
        local_1c0 = puVar1;
        local_150 = puVar1;
        local_f8 = puVar1;
        if (plVar8[1] != 0) {
          local_598 = PTR_DAT_04bc0878 + 0x10;
          local_590 = (undefined *)CONCAT44(local_590._4_4_,9);
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_598);
          (**(code **)(plVar8[3] + 0x5e0))(plVar8[1],PTR_DAT_04bb2da0,0);
          FUN_03d7dd80(lVar21);
        }
        local_580 = 0x40;
        puStack_558 = local_54c;
        local_588 = local_4b0;
        local_57c = 0;
        puStack_500 = local_4f4;
        local_568 = 0xffffffff;
        local_550 = 0x40;
        local_50d = 0;
        local_54c[0] = 0;
        local_4f8 = 0x40;
        local_4b5 = 0;
        local_4f4[0] = 0;
        local_578 = 0xffffffff;
        uStack_570 = 0xffffffff00000000;
        local_590 = PTR_DAT_04bb6b18 + 0x10;
        local_598 = (undefined *)0x0;
        ppuVar3 = &local_430;
        if (&local_430 <= local_4b0 + 2) {
          ppuVar3 = (undefined **)(local_4b0 + 2);
        }
        local_440 = 0;
        uStack_438 = 0;
        local_450 = 0;
        uStack_448 = 0;
        local_460 = 0;
        uStack_458 = 0;
        local_470 = 0;
        uStack_468 = 0;
        local_480 = 0;
        uStack_478 = 0;
        local_490 = 0;
        uStack_488 = 0;
        local_4a0 = 0;
        uStack_498 = 0;
        local_4b0 = (undefined1  [8])0x0;
        uStack_4a8 = 0;
        local_560 = puVar1;
        local_508 = puVar1;
        memset(local_588,0,(long)ppuVar3 + (-0xe0 - (long)&local_590));
        FUN_01b98884(&local_598,puVar13);
        if (local_598 == (undefined *)0x0) {
          FUN_006f50a0(&local_590,param_3,param_4,0);
        }
        else {
          FUN_01b98a70(&local_598,param_3,param_4,lVar21);
        }
        puVar23 = PTR_DAT_04bc0878;
        plVar8 = (long *)PTR_DAT_04bb27c0;
        FUN_01bea4e8(&local_430,lVar21,&local_590);
        FUN_01bea9c8(&local_430);
        FUN_01be9eb8(&local_430);
        lVar17 = *plVar22;
      }
      uVar14 = *(uint *)(lVar17 + 0x208);
      lVar21 = *(long *)(lVar17 + 0x210);
      plVar20 = *(long **)(lVar21 + (ulong)(2 < uVar14) * 0x10);
      if (plVar20 != (long *)0x0) {
        local_430 = puVar23 + 0x10;
        local_428 = 0x15;
        uStack_426 = 0;
        (**(code **)(*plVar20 + 0x18))(plVar20,&local_430);
        (**(code **)(plVar20[3] + 0x640))(plVar20[1]);
        lVar17 = *plVar22;
        uVar14 = *(uint *)(lVar17 + 0x208);
        lVar21 = *(long *)(lVar17 + 0x210);
      }
      lVar4 = 0x18;
      if (uVar14 < 4) {
        lVar4 = 0;
      }
      plVar20 = *(long **)(lVar21 + lVar4);
      if (plVar20 != (long *)0x0) {
        local_430 = puVar23 + 0x10;
        local_428 = 0x15;
        uStack_426 = 0;
        (**(code **)(*plVar20 + 0x18))(plVar20,&local_430);
        (**(code **)(plVar20[3] + 0x640))(plVar20[1]);
        lVar17 = *plVar22;
      }
      puVar16 = *(undefined8 **)(lVar17 + 0x230);
      plVar20 = (long *)*puVar16;
      if (plVar20 != (long *)0x0) {
        local_430 = PTR_DAT_04bc4e68 + 0x10;
        if (bVar2) {
          local_428 = 7;
          uStack_426 = 0;
          (**(code **)(*plVar20 + 0x18))(plVar20,&local_430);
          puVar16 = (undefined8 *)(plVar20[3] + 0x1c0);
        }
        else {
          local_428 = 6;
          uStack_426 = 0;
          (**(code **)(*plVar20 + 0x18))(plVar20,&local_430);
          puVar16 = (undefined8 *)(plVar20[3] + 0x1b8);
        }
        (*(code *)*puVar16)(plVar20[1]);
        lVar17 = *plVar22;
        puVar16 = *(undefined8 **)(lVar17 + 0x230);
      }
      plVar20 = (long *)puVar16[(ulong)(2 < *(uint *)(lVar17 + 0x228)) * 2];
      if (plVar20 == (long *)0x0) goto LAB_02fbbdf0;
      if (bVar2) {
LAB_02fbbdb0:
        local_430 = PTR_DAT_04bc4f00 + 0x10;
        local_428 = 0x14;
        uStack_426 = 0;
        (**(code **)(*plVar20 + 0x18))(plVar20,&local_430);
        lVar17 = plVar20[3];
        uVar24 = 0;
      }
      else {
        local_430 = PTR_DAT_04bb2020 + 0x10;
        local_428 = 0xc2bb;
        uStack_426 = 0x406;
        local_424 = 0;
        iVar7 = FUN_0273ea30(&local_430);
        if (iVar7 != 0) goto LAB_02fbbdb0;
        lVar17 = *plVar8;
        if (lVar17 == 0) goto LAB_02fbbdf0;
        uVar14 = *puVar13;
        if (((uVar14 == 0) ||
            (plVar18 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                                 ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
           (((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar18 + 0x46) != uVar14)))) {
          plVar18 = (long *)0x0;
        }
        if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
          plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar17 = *plVar8;
          iVar7 = (**(code **)(*plVar10 + 0x60))();
          if (iVar7 < 0x11) {
            uVar14 = 1;
          }
          else {
            if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_02fbbef8;
            uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_02fbbef8:
          uVar14 = 0;
        }
        if (plVar18 == (long *)0x0) goto LAB_02fbbdf0;
        lVar17 = plVar18[0x2a];
        if (((*PTR_DAT_04bb3760 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3760);
        }
        uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb3758);
        uVar12 = 0;
        if ((int)lVar17 == 1) {
          uVar12 = uVar14;
        }
        if ((((uVar9 & 1) == 0) || (uVar12 == 0)) ||
           (plVar8 = (long *)plVar18[0xc], plVar8 == (long *)0x0)) goto LAB_02fbbdf0;
        if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37b8);
        }
        uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb37b0);
        if ((uVar9 & 1) == 0) goto LAB_02fbbdf0;
        if ((plVar8[0x22a] != 0) && (uVar9 = FUN_016ff8c0(plVar8,0xb,&local_598), (uVar9 & 1) != 0))
        {
          local_598 = (undefined *)CONCAT44(local_598._4_4_ + 10.0,(undefined4)local_598);
        }
        plVar8 = *(long **)(*plVar22 + 0x1d0);
        local_598 = (undefined *)CONCAT44(local_598._4_4_ + -5.0,(undefined4)local_598);
        if (plVar8 == (long *)0x0) {
          uVar24 = 0;
        }
        else {
          FUN_033fb470(plVar8,&local_598);
          local_430 = PTR_DAT_04bc0cb8 + 0x10;
          local_428 = 8;
          uStack_426 = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_430);
          pfVar11 = (float *)(**(code **)(plVar8[3] + 0xa0))(plVar8[1]);
          uVar24 = 0x3f800000;
          if (pfVar11[1] < 300.0) {
            uVar24 = 0x40400000;
          }
          uVar25 = 0x40000000;
          if (pfVar11[1] < 300.0) {
            uVar25 = 0x40800000;
          }
          if (0.0 <= *pfVar11) {
            uVar24 = uVar25;
          }
        }
        local_430 = PTR_DAT_04bc4f00 + 0x10;
        local_428 = 0x14;
        uStack_426 = 0;
        (**(code **)(*plVar20 + 0x18))(plVar20,&local_430);
        lVar17 = plVar20[3];
      }
      (**(code **)(lVar17 + 0x158))(uVar24,plVar20[1]);
LAB_02fbbdf0:
      lVar17 = *plVar22;
      plVar8 = *(long **)(lVar17 + 0x1b0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x50))();
        plVar8 = *(long **)(lVar17 + 0x1b0);
        (**(code **)(*plVar8 + 0x20))(plVar8,0);
        plVar20 = (long *)*plVar22;
        plVar8 = (long *)plVar20[0x36];
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          (**(code **)(*plVar20 + 0xa8))(plVar20);
        }
      }
      *(undefined1 *)((long)plVar22 + 0x1c) = 0;
      *(undefined4 *)(plVar22 + 3) = 0;
      *(undefined4 *)((long)plVar22 + 0xc) = 1;
      return true;
    }
  }
  bVar6 = false;
LAB_02fbbbc0:
  bVar2 = false;
  if (uVar12 != 0) {
    bVar2 = bVar6;
  }
  return bVar2;
}

