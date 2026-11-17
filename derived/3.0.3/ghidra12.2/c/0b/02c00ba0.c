
long FUN_02c00ba0(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined *local_370;
  undefined8 uStack_368;
  undefined *local_360;
  char *pcStack_358;
  long *local_350;
  undefined1 local_348;
  uint local_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined *local_330;
  undefined *puStack_328;
  undefined8 local_320;
  long *local_318;
  long **local_310;
  long *local_308;
  char *local_300;
  long *local_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  undefined *local_2e0;
  long *plStack_2d8;
  char *local_2d0;
  undefined8 uStack_2c8;
  long *local_2c0;
  long *plStack_2b8;
  undefined *local_2b0;
  long *plStack_2a8;
  undefined *local_2a0;
  char *pcStack_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined *local_280;
  char *local_278;
  int local_270;
  char local_26c [255];
  undefined1 local_16d;
  undefined *local_168;
  char *local_160;
  undefined4 local_158;
  char local_154 [255];
  undefined1 local_55;
  
  lVar12 = param_2[3];
  if (lVar12 == 0) {
    pcVar14 = (char *)0x0;
  }
  else {
    pcVar14 = *(char **)(*param_2 + 0x30);
    if (pcVar14 == "LMelodyFrog") {
LAB_02c00c90:
      local_55 = 0;
      local_154[0] = '\0';
      local_158 = 0x100;
      local_160 = local_154;
      local_168 = PTR_DAT_04bb21f8 + 0x10;
      FUN_03c907b0(&local_168);
LAB_02c00c98:
      local_16d = 0;
      local_26c[0] = '\0';
      local_270 = 0x100;
      local_280 = PTR_DAT_04bb21f8 + 0x10;
      local_278 = local_26c;
      if (*(char *)(param_3 + 0x1f8) == '\0') {
        (**(code **)(local_168 + 0x18))(&local_168);
        pcVar14 = local_160;
        if (local_26c != local_160) {
          (**(code **)(local_168 + 0x18))(&local_168);
          lVar12 = 0;
          do {
            if (local_160[lVar12] == '\0') goto LAB_02c01238;
            if (local_160[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_02c01238;
            }
            if (local_160[lVar12 + 2] == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_02c01238;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_02c01238:
          iVar7 = (int)lVar12;
          if (local_270 <= (int)lVar12) {
            iVar7 = local_270 + -1;
          }
          memcpy(local_26c,pcVar14,(long)iVar7);
          local_26c[iVar7] = '\0';
        }
      }
      else {
        (**(code **)(*(long *)(param_3 + 0x18) + 0x18))((long *)(param_3 + 0x18));
        pcVar14 = local_278;
        pcVar13 = *(char **)(param_3 + 0x20);
        if (local_278 != pcVar13) {
          lVar12 = 0;
          do {
            if (pcVar13[lVar12] == '\0') goto LAB_02c01190;
            if (pcVar13[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_02c01190;
            }
            if (pcVar13[lVar12 + 2] == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_02c01190;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_02c01190:
          iVar7 = (int)lVar12;
          if (local_270 <= (int)lVar12) {
            iVar7 = local_270 + -1;
          }
          memcpy(local_278,pcVar13,(long)iVar7);
          pcVar14[iVar7] = '\0';
        }
        lVar12 = 0;
        if (param_2[3] != 0) {
          lVar12 = param_2[3] + 0xb0;
        }
        FUN_038d13f0(&local_280,&DAT_04073443,lVar12);
      }
      puVar1 = PTR_DAT_04bb2020;
      uStack_368 = *(undefined8 *)(param_1 + 0x48);
      local_370 = PTR_DAT_04bb2020 + 0x10;
      pcStack_358 = local_278;
      local_350 = (long *)0x0;
      if (param_2[3] != 0) {
        local_350 = (long *)0x0;
        if (*(long *)(*param_2 + 0xb8) != 0) {
          local_350 = (long *)(*param_2 + 0xb8);
        }
      }
      local_348 = *(undefined1 *)(param_3 + 0x1f8);
      local_344 = *(uint *)(param_1 + 0x158);
      local_340 = *(undefined8 *)(param_1 + 0x160);
      uStack_338 = *(undefined8 *)(param_1 + 0x168);
      local_360 = local_370;
      if (*local_278 == '\0') {
        if ((*PTR_DAT_04bc5500 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04bc5500);
          ppuVar17 = (undefined **)PTR_DAT_04bc54f8;
          if (iVar7 != 0) {
            *(undefined **)PTR_DAT_04bc54f8 = puVar1 + 0x10;
            *(char **)((long)ppuVar17 + 8) = "MelodyFrogBtnCtrl";
            __cxa_guard_release(PTR_DAT_04bc5500);
          }
        }
        else {
          ppuVar17 = (undefined **)PTR_DAT_04bc54f8;
        }
      }
      else {
        ppuVar17 = &local_280;
      }
      puVar3 = PTR_DAT_04bb3350;
      puVar2 = PTR_DAT_04bb2698;
      local_320 = *(undefined8 *)(param_3 + 0x50);
      local_330 = puVar1 + 0x10;
      puStack_328 = ppuVar17[1];
      lVar12 = *(long *)PTR_DAT_04bb2698;
      if (lVar12 == 0) {
        plVar9 = malloc(0x4b0);
      }
      else {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar12 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x4b0,8);
        }
      }
      FUN_030bed84(plVar9,&local_330,&local_370);
      *(undefined4 *)(plVar9 + 0x8b) = 0;
      puVar4 = PTR_DAT_04bc82e8;
      *(undefined1 *)(plVar9 + 0x8c) = 0;
      plVar9[0x8d] = 0;
      puVar5 = PTR_DAT_04bdf1d8;
      plVar9[0x94] = 0;
      *(undefined4 *)(plVar9 + 0x95) = 0;
      plVar9[0x81] = 0;
      *plVar9 = (long)(puVar4 + 0x10);
      local_308 = (long *)(puVar1 + 0x10);
      plVar9[0x82] = 0;
      plVar9[0x83] = 0;
      plVar9[0x84] = 0;
      plVar9[0x85] = 0;
      plVar9[0x8e] = (long)(puVar5 + 0x10);
      plVar9[0x86] = 0;
      plVar9[0x87] = 0;
      plVar9[0x88] = 0;
      plVar9[0x89] = 0;
      plVar9[0x8a] = 0;
      plVar9[0x8f] = 0;
      plVar9[0x90] = 0;
      plVar9[0x91] = 0;
      plVar9[0x92] = 0;
      *(undefined4 *)(plVar9 + 0x93) = 0;
      local_2b0 = PTR_DAT_04bb2120;
      local_2a0 = PTR_DAT_04bb2120;
      pcStack_298 = (char *)0x0;
      local_2c0 = (long *)(PTR_DAT_04bb3cd8 + 0x10);
      local_288 = 0;
      local_318 = (long *)((ulong)local_318 & 0xffffffffffff0000);
      local_2f0 = PTR_DAT_04bb2120;
      local_2e0 = PTR_DAT_04bb2120;
      local_310 = &local_2c0;
      local_300 = "UI_Melody";
      local_290 = 1;
      local_2d0 = "SimpleObject";
      uStack_2c8 = 0;
      local_2f8 = local_308;
      local_2e8 = local_308;
      plStack_2d8 = local_308;
      plStack_2b8 = local_308;
      plStack_2a8 = local_308;
      FUN_038387b8(plVar9 + 0x8c,&local_318);
      plVar16 = (long *)(param_3 + 0x38);
      lVar12 = *plVar16;
      plVar10 = (long *)((long)*(int *)(param_3 + 0x4c) + (long)plVar9);
      *plVar16 = (long)plVar10;
      *plVar10 = lVar12;
      plVar10[1] = (long)plVar16;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar10;
      }
      lVar12 = *(long *)puVar2;
      *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
      plVar9[6] = param_3;
      if (lVar12 == 0) {
        plVar10 = malloc(0x58);
      }
      else {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar10 = (long *)(lVar12 + 8);
        if (lVar8 != 0) {
          plVar10 = (long *)(lVar8 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)0x0;
        }
        else {
          plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x58,0xfffffff8);
        }
      }
      plVar10[2] = 0;
      plVar10[3] = (long)plVar9;
      puVar2 = PTR_DAT_04bc4e08;
      plVar10[4] = 0;
      plVar10[5] = 0;
      plVar10[9] = (long)plVar9;
      plVar10[10] = (long)plVar9;
      plVar10[8] = (long)(puVar2 + 0x10);
      *plVar10 = (long)&PTR_LAB_04aabd68;
      plVar10[1] = 0;
      plVar10[6] = 0;
      plVar10[7] = (long)&local_370;
      plVar16 = (long *)(param_3 + 0x78);
      lVar12 = *plVar16;
      plVar9 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar10);
      *plVar16 = (long)plVar9;
      *plVar9 = lVar12;
      plVar9[1] = (long)plVar16;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar9;
      }
      *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + 1;
      if ((local_344 & 1) == 0) {
        FUN_03c68fb0(plVar10);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        plVar10[6] = *(long *)(param_1 + 0x38);
      }
      if (*(char *)(param_1 + 0x171) == '\0') {
        FUN_03c684c0(plVar10,param_1 + 0x40,&local_168,0);
      }
      puVar11 = *(undefined8 **)(param_1 + 0x10);
      if (puVar11 != (undefined8 *)0x0) {
        local_300 = *(char **)(param_1 + 0x48);
        local_308 = (long *)(puVar1 + 0x10);
        local_2f0 = local_278;
        local_318 = plVar10;
        local_310 = (long **)(plVar10 + 8);
        local_2f8 = local_308;
        (**(code **)*puVar11)(puVar11,&local_318);
      }
      lVar12 = plVar10[3];
      FUN_030ff640(lVar12,plVar10,plVar10[7]);
      goto LAB_02c0196c;
    }
  }
  uVar15 = 0;
  bVar6 = true;
  do {
    if (pcVar14[uVar15] != "LMelodyFrog"[uVar15]) break;
    if (pcVar14[uVar15] == '\0') {
      if (bVar6) {
        local_55 = 0;
        local_158 = 0x100;
        local_160 = local_154;
        local_154[0] = '\0';
        local_168 = PTR_DAT_04bb21f8 + 0x10;
        if (lVar12 != 0) goto LAB_02c00c90;
        goto LAB_02c00c98;
      }
      break;
    }
    bVar6 = uVar15 < 0x80000;
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x80001);
  if (pcVar14 == "LResultWinBtn") {
LAB_02c00df4:
    local_55 = 0;
    local_158 = 0x100;
    local_160 = local_154;
    local_154[0] = '\0';
    puVar1 = PTR_DAT_04bb21f8 + 0x10;
    local_168 = puVar1;
    if (lVar12 != 0) {
      FUN_03c907b0(&local_168);
    }
    local_270 = 0x100;
    local_16d = 0;
    local_26c[0] = '\0';
    local_280 = puVar1;
    local_278 = local_26c;
    if (*(char *)(param_3 + 0x1f8) == '\0') {
      (**(code **)(local_168 + 0x18))(&local_168);
      pcVar14 = local_160;
      if (local_26c != local_160) {
        (**(code **)(local_168 + 0x18))(&local_168);
        lVar12 = 0;
        do {
          if (local_160[lVar12] == '\0') goto LAB_02c015b0;
          if (local_160[lVar12 + 1] == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_02c015b0;
          }
          if (local_160[lVar12 + 2] == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_02c015b0;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_02c015b0:
        iVar7 = (int)lVar12;
        if (local_270 <= (int)lVar12) {
          iVar7 = local_270 + -1;
        }
        memcpy(local_26c,pcVar14,(long)iVar7);
        local_26c[iVar7] = '\0';
      }
    }
    else {
      (**(code **)(*(long *)(param_3 + 0x18) + 0x18))((long *)(param_3 + 0x18));
      pcVar14 = local_278;
      pcVar13 = *(char **)(param_3 + 0x20);
      if (local_278 != pcVar13) {
        lVar12 = 0;
        do {
          if (pcVar13[lVar12] == '\0') goto LAB_02c011e4;
          if (pcVar13[lVar12 + 1] == '\0') {
            lVar12 = lVar12 + 1;
            goto LAB_02c011e4;
          }
          if (pcVar13[lVar12 + 2] == '\0') {
            lVar12 = lVar12 + 2;
            goto LAB_02c011e4;
          }
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        lVar12 = 0;
LAB_02c011e4:
        iVar7 = (int)lVar12;
        if (local_270 <= (int)lVar12) {
          iVar7 = local_270 + -1;
        }
        memcpy(local_278,pcVar13,(long)iVar7);
        pcVar14[iVar7] = '\0';
      }
      lVar12 = 0;
      if (param_2[3] != 0) {
        lVar12 = param_2[3] + 0xb0;
      }
      FUN_038d13f0(&local_280,&DAT_04073443,lVar12);
    }
    puVar1 = PTR_DAT_04bb2020;
    local_310 = *(long ***)(param_1 + 0x48);
    local_318 = (long *)(PTR_DAT_04bb2020 + 0x10);
    local_300 = local_278;
    local_2f8 = (long *)0x0;
    if (param_2[3] != 0) {
      local_2f8 = (long *)0x0;
      if (*(long *)(*param_2 + 0xb8) != 0) {
        local_2f8 = (long *)(*param_2 + 0xb8);
      }
    }
    local_2f0 = (char *)CONCAT71(local_2f0._1_7_,*(undefined1 *)(param_3 + 0x1f8));
    local_2f0 = (char *)CONCAT44(*(undefined4 *)(param_1 + 0x158),(undefined4)local_2f0);
    local_2e8 = *(long **)(param_1 + 0x160);
    local_2e0 = *(undefined **)(param_1 + 0x168);
    local_308 = local_318;
    plVar10 = (long *)FUN_02c050e8(param_3,&local_280,&local_318);
    if (*(long *)(param_1 + 0x38) != 0) {
      plVar10[6] = *(long *)(param_1 + 0x38);
    }
    if (*(char *)(param_1 + 0x171) == '\0') {
      FUN_03c684c0(plVar10,param_1 + 0x40,&local_168,0);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    if (puVar11 != (undefined8 *)0x0) {
      plStack_2b8 = plVar10 + 8;
      plStack_2a8 = *(long **)(param_1 + 0x48);
      local_2b0 = puVar1 + 0x10;
      pcStack_298 = local_278;
      local_2c0 = plVar10;
      local_2a0 = local_2b0;
      (**(code **)*puVar11)(puVar11,&local_2c0);
    }
    lVar12 = plVar10[3];
    FUN_03129600(lVar12,plVar10,plVar10[7]);
  }
  else {
    uVar15 = 0;
    bVar6 = true;
    do {
      if (pcVar14[uVar15] != "LResultWinBtn"[uVar15]) break;
      if (pcVar14[uVar15] == '\0') {
        if (bVar6) goto LAB_02c00df4;
        break;
      }
      bVar6 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
    if (pcVar14 == "LBtnListDreamIslandNameBtn") {
LAB_02c00f54:
      local_55 = 0;
      local_158 = 0x100;
      local_160 = local_154;
      local_154[0] = '\0';
      puVar1 = PTR_DAT_04bb21f8 + 0x10;
      local_168 = puVar1;
      if (lVar12 != 0) {
        FUN_03c907b0(&local_168);
      }
      local_270 = 0x100;
      local_16d = 0;
      local_26c[0] = '\0';
      local_280 = puVar1;
      local_278 = local_26c;
      if (*(char *)(param_3 + 0x1f8) == '\0') {
        (**(code **)(local_168 + 0x18))(&local_168);
        pcVar14 = local_160;
        if (local_26c != local_160) {
          (**(code **)(local_168 + 0x18))(&local_168);
          lVar12 = 0;
          do {
            if (local_160[lVar12] == '\0') goto LAB_02c01870;
            if (local_160[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_02c01870;
            }
            if (local_160[lVar12 + 2] == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_02c01870;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_02c01870:
          iVar7 = (int)lVar12;
          if (local_270 <= (int)lVar12) {
            iVar7 = local_270 + -1;
          }
          memcpy(local_26c,pcVar14,(long)iVar7);
          local_26c[iVar7] = '\0';
        }
      }
      else {
        (**(code **)(*(long *)(param_3 + 0x18) + 0x18))((long *)(param_3 + 0x18));
        pcVar14 = local_278;
        pcVar13 = *(char **)(param_3 + 0x20);
        if (local_278 != pcVar13) {
          lVar12 = 0;
          do {
            if (pcVar13[lVar12] == '\0') goto LAB_02c01710;
            if (pcVar13[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_02c01710;
            }
            if (pcVar13[lVar12 + 2] == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_02c01710;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_02c01710:
          iVar7 = (int)lVar12;
          if (local_270 <= (int)lVar12) {
            iVar7 = local_270 + -1;
          }
          memcpy(local_278,pcVar13,(long)iVar7);
          pcVar14[iVar7] = '\0';
        }
        lVar12 = 0;
        if (param_2[3] != 0) {
          lVar12 = param_2[3] + 0xb0;
        }
        FUN_038d13f0(&local_280,&DAT_04073443,lVar12);
      }
      puVar1 = PTR_DAT_04bb2020;
      local_310 = *(long ***)(param_1 + 0x48);
      local_318 = (long *)(PTR_DAT_04bb2020 + 0x10);
      local_300 = local_278;
      local_2f8 = (long *)0x0;
      if (param_2[3] != 0) {
        local_2f8 = (long *)0x0;
        if (*(long *)(*param_2 + 0xb8) != 0) {
          local_2f8 = (long *)(*param_2 + 0xb8);
        }
      }
      local_2f0 = (char *)CONCAT71(local_2f0._1_7_,*(undefined1 *)(param_3 + 0x1f8));
      local_2f0 = (char *)CONCAT44(*(undefined4 *)(param_1 + 0x158),(undefined4)local_2f0);
      local_2e8 = *(long **)(param_1 + 0x160);
      local_2e0 = *(undefined **)(param_1 + 0x168);
      local_308 = local_318;
      plVar10 = (long *)FUN_02c05388(param_3,&local_280,&local_318);
      if (*(long *)(param_1 + 0x38) != 0) {
        plVar10[6] = *(long *)(param_1 + 0x38);
      }
      if (*(char *)(param_1 + 0x171) == '\0') {
        FUN_03c684c0(plVar10,param_1 + 0x40,&local_168,0);
      }
      puVar11 = *(undefined8 **)(param_1 + 0x10);
      if (puVar11 != (undefined8 *)0x0) {
        plStack_2b8 = plVar10 + 8;
        plStack_2a8 = *(long **)(param_1 + 0x48);
        local_2b0 = puVar1 + 0x10;
        pcStack_298 = local_278;
        local_2c0 = plVar10;
        local_2a0 = local_2b0;
        (**(code **)*puVar11)(puVar11,&local_2c0);
      }
      lVar12 = plVar10[3];
      FUN_030daa30(lVar12,plVar10,plVar10[7]);
    }
    else {
      uVar15 = 0;
      bVar6 = true;
      do {
        if (pcVar14[uVar15] != "LBtnListDreamIslandNameBtn"[uVar15]) break;
        if (pcVar14[uVar15] == '\0') {
          if (bVar6) goto LAB_02c00f54;
          break;
        }
        bVar6 = uVar15 < 0x80000;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x80001);
      local_55 = 0;
      local_158 = 0x100;
      local_160 = local_154;
      local_154[0] = '\0';
      puVar1 = PTR_DAT_04bb21f8 + 0x10;
      local_168 = puVar1;
      if (lVar12 != 0) {
        FUN_03c907b0(&local_168);
      }
      local_270 = 0x100;
      local_16d = 0;
      local_26c[0] = '\0';
      local_280 = puVar1;
      local_278 = local_26c;
      if (*(char *)(param_3 + 0x1f8) == '\0') {
        (**(code **)(local_168 + 0x18))(&local_168);
        pcVar14 = local_160;
        if (local_26c != local_160) {
          (**(code **)(local_168 + 0x18))(&local_168);
          lVar12 = 0;
          do {
            if (local_160[lVar12] == '\0') goto LAB_02c01764;
            if (local_160[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_02c01764;
            }
            if (local_160[lVar12 + 2] == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_02c01764;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_02c01764:
          iVar7 = (int)lVar12;
          if (local_270 <= (int)lVar12) {
            iVar7 = local_270 + -1;
          }
          memcpy(local_26c,pcVar14,(long)iVar7);
          local_26c[iVar7] = '\0';
        }
      }
      else {
        (**(code **)(*(long *)(param_3 + 0x18) + 0x18))((long *)(param_3 + 0x18));
        pcVar14 = local_278;
        pcVar13 = *(char **)(param_3 + 0x20);
        if (local_278 != pcVar13) {
          lVar12 = 0;
          do {
            if (pcVar13[lVar12] == '\0') goto LAB_02c016bc;
            if (pcVar13[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_02c016bc;
            }
            if (pcVar13[lVar12 + 2] == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_02c016bc;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_02c016bc:
          iVar7 = (int)lVar12;
          if (local_270 <= (int)lVar12) {
            iVar7 = local_270 + -1;
          }
          memcpy(local_278,pcVar13,(long)iVar7);
          pcVar14[iVar7] = '\0';
        }
        lVar12 = 0;
        if (param_2[3] != 0) {
          lVar12 = param_2[3] + 0xb0;
        }
        FUN_038d13f0(&local_280,&DAT_04073443,lVar12);
      }
      puVar1 = PTR_DAT_04bb2020;
      local_310 = *(long ***)(param_1 + 0x48);
      local_318 = (long *)(PTR_DAT_04bb2020 + 0x10);
      local_300 = local_278;
      local_2f8 = (long *)0x0;
      if (param_2[3] != 0) {
        local_2f8 = (long *)0x0;
        if (*(long *)(*param_2 + 0xb8) != 0) {
          local_2f8 = (long *)(*param_2 + 0xb8);
        }
      }
      local_2f0 = (char *)CONCAT71(local_2f0._1_7_,*(undefined1 *)(param_3 + 0x1f8));
      local_2f0 = (char *)CONCAT44(*(undefined4 *)(param_1 + 0x158),(undefined4)local_2f0);
      local_2e8 = *(long **)(param_1 + 0x160);
      local_2e0 = *(undefined **)(param_1 + 0x168);
      local_308 = local_318;
      plVar10 = (long *)FUN_02bb2b08(param_3,&local_280,&local_318);
      if (*(long *)(param_1 + 0x38) != 0) {
        plVar10[6] = *(long *)(param_1 + 0x38);
      }
      if (*(char *)(param_1 + 0x171) == '\0') {
        FUN_03c684c0(plVar10,param_1 + 0x40,&local_168,0);
      }
      puVar11 = *(undefined8 **)(param_1 + 0x10);
      if (puVar11 != (undefined8 *)0x0) {
        plStack_2b8 = plVar10 + 8;
        plStack_2a8 = *(long **)(param_1 + 0x48);
        local_2b0 = puVar1 + 0x10;
        pcStack_298 = local_278;
        local_2c0 = plVar10;
        local_2a0 = local_2b0;
        (**(code **)*puVar11)(puVar11,&local_2c0);
      }
      lVar12 = plVar10[3];
      FUN_030bf100(lVar12,plVar10,plVar10[7]);
    }
  }
LAB_02c0196c:
  FUN_03c5d720(plVar10[3]);
  plVar10[3] = 0;
  plVar9 = (long *)((long)*(int *)(param_3 + 0x8c) + (long)plVar10);
  if (*plVar9 != 0) {
    *(long *)(*plVar9 + 8) = plVar9[1];
  }
  if ((long *)plVar9[1] != (long *)0x0) {
    *(long *)plVar9[1] = *plVar9;
  }
  *plVar9 = 0;
  plVar9[1] = 0;
  *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) + -1;
  (**(code **)(*plVar10 + 8))(plVar10);
  FUN_0385e770(param_1,lVar12);
  return lVar12;
}

