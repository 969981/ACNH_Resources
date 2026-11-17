
void FUN_02ee41b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined4 *puVar22;
  long *plVar23;
  undefined *local_440;
  undefined *local_438;
  undefined *local_430;
  undefined4 local_428;
  undefined8 local_424;
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
  undefined1 *puStack_388;
  undefined4 local_380;
  undefined1 local_37c [63];
  undefined1 local_33d;
  undefined8 local_338;
  undefined *local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined1 local_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined *local_300;
  undefined1 *puStack_2f8;
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
  undefined8 uStack_158;
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
  
  uVar14 = *(uint *)(param_1 + 0x248);
  if (1 < (int)uVar14) {
    lVar11 = *(long *)(param_1 + 0x250);
    uVar16 = 0;
    uVar14 = uVar14 - 1;
    do {
      if ((int)uVar14 <= (int)uVar16) break;
      lVar17 = *(long *)(lVar11 + (ulong)uVar16 * 8);
      uVar15 = (ulong)uVar16;
      if ((uVar14 - uVar16 & 1) == 0) {
        lVar13 = lVar17;
        uVar18 = uVar15;
      }
      else {
        uVar18 = uVar15 + 1;
        lVar13 = *(long *)(lVar11 + uVar18 * 8);
        if (*(int *)(lVar13 + 0x80) < *(int *)(lVar17 + 0x80)) {
          *(long *)(lVar11 + uVar18 * 8) = lVar17;
          *(long *)(lVar11 + uVar15 * 8) = lVar13;
          lVar13 = lVar17;
        }
      }
      uVar19 = (ulong)uVar14;
      uVar14 = uVar16;
      if (~uVar15 + uVar19 != 0) {
        plVar21 = (long *)(lVar11 + 8 + uVar18 * 8);
        do {
          lVar17 = *plVar21;
          if (*(int *)(lVar17 + 0x80) < *(int *)(lVar13 + 0x80)) {
            plVar21[-1] = lVar17;
            *plVar21 = lVar13;
            uVar14 = (uint)uVar18;
          }
          else {
            lVar13 = lVar17;
          }
          lVar17 = plVar21[1];
          if (*(int *)(lVar17 + 0x80) < *(int *)(lVar13 + 0x80)) {
            uVar14 = (uint)uVar18 + 1;
            *plVar21 = lVar17;
            plVar21[1] = lVar13;
          }
          else {
            lVar13 = lVar17;
          }
          uVar18 = uVar18 + 2;
          plVar21 = plVar21 + 2;
        } while (uVar19 != uVar18);
      }
      if ((int)uVar14 <= (int)uVar16) break;
      lVar17 = *(long *)(lVar11 + (ulong)uVar14 * 8);
      uVar18 = (ulong)uVar14;
      uVar16 = uVar14;
      do {
        lVar13 = lVar11 + uVar18 * 8;
        lVar20 = *(long *)(lVar13 + -8);
        if (*(int *)(lVar17 + 0x80) < *(int *)(lVar20 + 0x80)) {
          uVar16 = (uint)uVar18;
          *(long *)(lVar13 + -8) = lVar17;
          *(long *)(lVar11 + uVar18 * 8) = lVar20;
        }
        else {
          lVar17 = lVar20;
        }
        uVar18 = uVar18 - 1;
      } while ((long)uVar15 < (long)uVar18);
    } while (uVar16 != uVar14);
    uVar14 = *(uint *)(param_1 + 0x248);
  }
  uVar15 = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  puVar2 = PTR_DAT_04bb2e00 + 0x10;
  puVar3 = PTR_DAT_04bc0a78 + 0x10;
  puVar4 = PTR_DAT_04bc0bf0 + 0x10;
  puVar5 = PTR_DAT_04bb2020 + 0x10;
  puVar6 = PTR_DAT_04bc4e68 + 0x10;
  puVar7 = PTR_DAT_04bc4f00 + 0x10;
  puVar8 = PTR_DAT_04bc0878 + 0x10;
  do {
    lVar11 = *(long *)(*(long *)(param_1 + 0x210) + uVar15 * 8 + 0x570);
    if (lVar11 != 0) {
      if (uVar15 < uVar14) {
        if (uVar15 < *(uint *)(param_1 + 0x248)) {
          puVar22 = *(undefined4 **)(*(long *)(param_1 + 0x250) + uVar15 * 8);
        }
        else {
          puVar22 = (undefined4 *)0x0;
        }
        FUN_02ee4a20(param_1,**(undefined8 **)(lVar11 + 0x220),*puVar22,puVar22[1]);
        if (puVar22[2] == -1) {
          bVar9 = puVar22[3] != -1;
        }
        else {
          bVar9 = true;
        }
        plVar21 = *(long **)(*(long *)(lVar11 + 0x230) + (ulong)(1 < *(uint *)(lVar11 + 0x228)) * 8)
        ;
        if (plVar21 != (long *)0x0) {
          local_428 = 0x14;
          local_430 = puVar7;
          (**(code **)(*plVar21 + 0x18))(plVar21,&local_430);
          (**(code **)(plVar21[3] + 0x158))((float)bVar9,plVar21[1]);
        }
        if (bVar9) {
          uVar16 = *(uint *)(lVar11 + 0x218);
          lVar13 = *(long *)(lVar11 + 0x220);
          lVar17 = 0x18;
          if (uVar16 < 4) {
            lVar17 = 0;
          }
          lVar17 = *(long *)(lVar13 + lVar17);
          if (lVar17 != 0) {
            local_428 = CONCAT22(local_428._2_2_,0x100);
            local_424 = 0;
            local_41c = 0;
            local_408 = 0;
            local_404 = 0;
            local_3f0 = 0xffffffff;
            local_3d8 = 0x40;
            local_395 = 0;
            local_3d4[0] = 0;
            local_380 = 0x40;
            local_33d = 0;
            local_37c[0] = 0;
            local_320 = 0;
            local_31c = 0;
            local_308 = 0xffffffff;
            local_2f0 = 0x40;
            local_2ad = 0;
            local_2ec[0] = 0;
            local_298 = 0x40;
            local_255 = 0;
            local_294[0] = 0;
            local_338 = 0;
            local_240 = 0;
            local_238 = 0;
            local_234 = 0;
            local_230 = 0xffffffff;
            local_228 = 0xffffffff00000000;
            local_220 = 0xffffffff;
            local_208 = 0x40;
            local_1c5 = 0;
            local_204[0] = 0;
            local_1b0 = 0x40;
            local_16d = 0;
            local_1ac[0] = 0;
            local_250 = 0;
            local_168 = 0;
            local_140 = 0x40;
            local_fd = 0;
            local_13c[0] = 0;
            local_e8 = 0x40;
            local_a5 = 0;
            local_e4[0] = 0;
            local_400 = 0xffffffff;
            uStack_3f8 = 0xffffffff00000000;
            uStack_410 = 0;
            uStack_328 = 0;
            local_318 = 0xffffffff;
            uStack_310 = 0xffffffff00000000;
            local_160 = 0;
            uStack_158 = 0;
            local_98 = *(int *)PTR_DAT_04bc0b30;
            local_94 = 0;
            local_90 = 0;
            local_88 = 0;
            local_80 = 0;
            *(int *)PTR_DAT_04bc0b30 = local_98 + 1;
            local_438 = &DAT_04088959;
            local_440 = puVar5;
            local_430 = puVar4;
            local_418 = puVar2;
            local_3e8 = puVar1;
            puStack_3e0 = local_3d4;
            local_390 = puVar1;
            puStack_388 = local_37c;
            local_330 = puVar2;
            local_300 = puVar1;
            puStack_2f8 = local_2ec;
            local_2a8 = puVar1;
            local_2a0 = local_294;
            local_248 = puVar2;
            local_218 = puVar1;
            local_210 = local_204;
            local_1c0 = puVar1;
            local_1b8 = local_1ac;
            local_150 = puVar1;
            local_148 = local_13c;
            local_f8 = puVar1;
            local_f0 = local_e4;
            local_a0 = puVar3;
            FUN_01bea210(&local_430,lVar17,&DAT_056b3888,&local_440);
            FUN_01bea9c8(&local_430);
            FUN_01be9eb8(&local_430);
            uVar16 = *(uint *)(lVar11 + 0x218);
            lVar13 = *(long *)(lVar11 + 0x220);
          }
          FUN_02ee4a20(param_1,*(undefined8 *)(lVar13 + (ulong)(2 < uVar16) * 0x10),puVar22[2],
                       puVar22[3]);
        }
        lVar17 = *(long *)(*(long *)(lVar11 + 0x220) + (ulong)(1 < *(uint *)(lVar11 + 0x218)) * 8);
        if (lVar17 != 0) {
          local_424 = 0;
          local_428 = CONCAT22(local_428._2_2_,0x100);
          local_41c = 0;
          local_408 = 0;
          local_404 = 0;
          local_3f0 = 0xffffffff;
          local_3d8 = 0x40;
          local_395 = 0;
          local_3d4[0] = 0;
          local_400 = 0xffffffff;
          uStack_3f8 = 0xffffffff00000000;
          local_3e8 = PTR_DAT_04bb2bc0 + 0x10;
          local_380 = 0x40;
          local_33d = 0;
          local_37c[0] = 0;
          local_418 = PTR_DAT_04bb2e00 + 0x10;
          local_320 = 0;
          local_31c = 0;
          local_308 = 0xffffffff;
          local_2f0 = 0x40;
          local_2ad = 0;
          local_2ec[0] = 0;
          local_298 = 0x40;
          local_255 = 0;
          local_294[0] = 0;
          local_338 = 0;
          local_240 = 0;
          local_238 = 0;
          local_234 = 0;
          local_230 = 0xffffffff;
          local_228 = 0xffffffff00000000;
          local_220 = 0xffffffff;
          local_208 = 0x40;
          local_1c5 = 0;
          local_204[0] = 0;
          local_1b0 = 0x40;
          local_16d = 0;
          local_1ac[0] = 0;
          local_250 = 0;
          local_168 = 0;
          local_140 = 0x40;
          local_fd = 0;
          local_13c[0] = 0;
          local_e8 = 0x40;
          local_a5 = 0;
          local_e4[0] = 0;
          uStack_410 = 0;
          uStack_328 = 0;
          local_318 = 0xffffffff;
          uStack_310 = 0xffffffff00000000;
          local_160 = 0;
          uStack_158 = 0;
          local_98 = *(int *)PTR_DAT_04bc0b30;
          local_94 = 0;
          *(int *)PTR_DAT_04bc0b30 = local_98 + 1;
          local_a0 = PTR_DAT_04bc0a78 + 0x10;
          local_90 = 0;
          local_88 = 0;
          local_80 = 0;
          local_430 = PTR_DAT_04bc0bf0 + 0x10;
          puStack_3e0 = local_3d4;
          local_390 = local_3e8;
          puStack_388 = local_37c;
          local_330 = local_418;
          local_300 = local_3e8;
          puStack_2f8 = local_2ec;
          local_2a8 = local_3e8;
          local_2a0 = local_294;
          local_248 = local_418;
          local_218 = local_3e8;
          local_210 = local_204;
          local_1c0 = local_3e8;
          local_1b8 = local_1ac;
          local_150 = local_3e8;
          local_148 = local_13c;
          local_f8 = local_3e8;
          local_f0 = local_e4;
          FUN_01bea210(&local_430,lVar17,&DAT_056b3888,puVar22 + 4);
          FUN_01bea9c8(&local_430);
          FUN_01be9eb8(&local_430);
        }
        if (puVar22[0x1b] == 1) {
          plVar21 = (long *)**(undefined8 **)(lVar11 + 0x230);
          if (plVar21 != (long *)0x0) {
            plVar23 = plVar21 + 1;
LAB_02ee49c8:
            local_428 = 6;
            local_430 = puVar6;
            (**(code **)(*plVar21 + 0x18))(plVar21,&local_430);
            puVar12 = (undefined8 *)(plVar21[3] + 0x1b8);
LAB_02ee4430:
            (*(code *)*puVar12)(*plVar23);
          }
        }
        else if (puVar22[0x1b] == 2) {
          plVar21 = (long *)**(undefined8 **)(lVar11 + 0x230);
          if (plVar21 != (long *)0x0) {
            plVar23 = plVar21 + 1;
            goto LAB_02ee43fc;
          }
        }
        else {
          iVar10 = FUN_02ee2de0(*puVar22,puVar22[1]);
          plVar21 = (long *)**(undefined8 **)(lVar11 + 0x230);
          if (plVar21 != (long *)0x0) {
            plVar23 = plVar21 + 1;
            if (iVar10 != 0x1b) goto LAB_02ee49c8;
LAB_02ee43fc:
            local_430 = PTR_DAT_04bc4e68 + 0x10;
            local_428 = 7;
            (**(code **)(*plVar21 + 0x18))(plVar21,&local_430);
            puVar12 = (undefined8 *)(plVar21[3] + 0x1c0);
            goto LAB_02ee4430;
          }
        }
      }
      else {
        plVar21 = *(long **)(lVar11 + 0x220);
        lVar17 = *plVar21;
        if ((lVar17 != 0) && (plVar23 = *(long **)(lVar17 + 0x48), plVar23[1] != 0)) {
          local_430 = PTR_DAT_04bc0878 + 0x10;
          local_428 = 9;
          (**(code **)(*plVar23 + 0x18))(plVar23,&local_430);
          (**(code **)(plVar23[3] + 0x5e0))(plVar23[1],PTR_DAT_04bb2da0,0);
          FUN_03d7dd80(lVar17);
          plVar21 = *(long **)(lVar11 + 0x220);
        }
        lVar11 = plVar21[1 < *(uint *)(lVar11 + 0x218)];
        if ((lVar11 != 0) && (plVar21 = *(long **)(lVar11 + 0x48), plVar21[1] != 0)) {
          local_428 = 9;
          local_430 = puVar8;
          (**(code **)(*plVar21 + 0x18))(plVar21,&local_430);
          (**(code **)(plVar21[3] + 0x5e0))(plVar21[1],PTR_DAT_04bb2da0,0);
          FUN_03d7dd80(lVar11);
        }
      }
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == 5) {
      return;
    }
  } while( true );
}

