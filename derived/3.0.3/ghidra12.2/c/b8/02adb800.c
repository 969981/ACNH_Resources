
/* WARNING: Removing unreachable block (ram,0x02adcb78) */
/* WARNING: Removing unreachable block (ram,0x02adc590) */
/* WARNING: Removing unreachable block (ram,0x02adc190) */
/* WARNING: Removing unreachable block (ram,0x02adbfa0) */
/* WARNING: Removing unreachable block (ram,0x02adbc48) */
/* WARNING: Removing unreachable block (ram,0x02adbbf4) */
/* WARNING: Removing unreachable block (ram,0x02adba04) */
/* WARNING: Removing unreachable block (ram,0x02adb9fc) */
/* WARNING: Removing unreachable block (ram,0x02adba50) */
/* WARNING: Removing unreachable block (ram,0x02adbbfc) */
/* WARNING: Removing unreachable block (ram,0x02adbf98) */
/* WARNING: Removing unreachable block (ram,0x02adc188) */
/* WARNING: Removing unreachable block (ram,0x02adc588) */
/* WARNING: Removing unreachable block (ram,0x02adca28) */
/* WARNING: Removing unreachable block (ram,0x02adcbc4) */

void FUN_02adb800(long *param_1)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  ushort *puVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined *puVar29;
  uint *puVar30;
  undefined **local_7e8;
  undefined8 local_7e0;
  undefined8 *local_7d8;
  long *plStack_7d0;
  undefined4 local_7c8;
  undefined2 local_7c4;
  undefined *local_7c0;
  int local_7b8;
  undefined8 local_7b0;
  undefined **ppuStack_7a8;
  undefined ***local_7a0;
  undefined **local_790;
  char *local_788;
  undefined1 *local_780;
  undefined1 *local_778;
  ulong local_770;
  undefined *local_768;
  undefined *puStack_760;
  undefined8 local_758;
  undefined *puStack_750;
  undefined8 local_748;
  undefined *puStack_740;
  undefined *local_738;
  undefined8 uStack_730;
  undefined *local_728;
  undefined8 uStack_720;
  undefined *local_718;
  undefined *puStack_710;
  undefined8 local_708;
  undefined *puStack_700;
  undefined8 local_6f8;
  undefined *puStack_6f0;
  undefined *local_6e8;
  undefined8 uStack_6e0;
  undefined *local_6d8;
  undefined8 uStack_6d0;
  undefined *local_6c8 [8];
  undefined1 auStack_688 [1232];
  undefined *local_1b8;
  undefined *local_190;
  undefined *local_148;
  undefined *local_120;
  undefined *local_d8;
  undefined *local_b0;
  
  local_770 = local_770 & 0xffffffff00000000;
  ppuVar1 = (undefined **)(PTR_DAT_04bc4958 + 0x10);
  puVar2 = PTR_DAT_04bc4568 + 0x10;
  puVar29 = PTR_DAT_04bbc1a0 + 0x10;
  local_778 = (undefined1 *)0x0;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  local_758 = 0;
  local_788 = (char *)(ulong)*(uint *)PTR_DAT_04bb3238;
  puVar4 = PTR_DAT_04bbc5d8 + 0x10;
  puVar5 = PTR_DAT_04bb2018 + 0x10;
  local_748 = 0;
  local_708 = 0;
  local_6f8 = 0;
  uStack_6e0 = 0;
  uStack_6d0 = 0;
  uStack_730 = 0;
  uStack_720 = 0;
  local_790 = ppuVar1;
  local_780 = puVar2;
  local_768 = puVar29;
  puStack_760 = puVar3;
  puStack_750 = puVar3;
  puStack_740 = puVar4;
  local_738 = puVar5;
  local_728 = puVar5;
  local_718 = puVar29;
  puStack_710 = puVar3;
  puStack_700 = puVar3;
  puStack_6f0 = puVar29;
  local_6e8 = puVar3;
  local_6d8 = puVar3;
  FUN_02ad636c(local_6c8);
  FUN_02b19680(&local_790,0);
  puVar6 = PTR_DAT_04bc4788 + 0x10;
  local_790 = ppuVar1;
  local_780 = puVar2;
  local_6c8[0] = puVar6;
  local_1b8 = puVar4;
  local_190 = puVar29;
  local_148 = puVar4;
  local_120 = puVar29;
  local_d8 = puVar4;
  local_b0 = puVar29;
  FUN_02ad6758(auStack_688);
  puVar30 = (uint *)PTR_DAT_04bb3238;
  if ((char)param_1[5] != '\0') {
    local_778 = (undefined1 *)0x0;
    local_770 = local_770 & 0xffffffff00000000;
    local_788 = (char *)(ulong)*(uint *)PTR_DAT_04bb3238;
    local_758 = 0;
    local_748 = 0;
    uStack_730 = 0;
    uStack_720 = 0;
    local_708 = 0;
    local_6f8 = 0;
    uStack_6e0 = 0;
    uStack_6d0 = 0;
    local_790 = ppuVar1;
    local_780 = puVar2;
    local_768 = puVar29;
    puStack_760 = puVar3;
    puStack_750 = puVar3;
    puStack_740 = puVar4;
    local_738 = puVar5;
    local_728 = puVar5;
    local_718 = puVar29;
    puStack_710 = puVar3;
    puStack_700 = puVar3;
    puStack_6f0 = puVar29;
    local_6e8 = puVar3;
    local_6d8 = puVar3;
    FUN_02ad636c(local_6c8);
    FUN_02b1a3ec(&local_790,0);
    local_790 = ppuVar1;
    local_780 = puVar2;
    local_6c8[0] = puVar6;
    local_1b8 = puVar4;
    local_190 = puVar29;
    local_148 = puVar4;
    local_120 = puVar29;
    local_d8 = puVar4;
    local_b0 = puVar29;
    FUN_02ad6758(auStack_688);
  }
  puVar29 = PTR_DAT_04bb2020;
  if (0 < *param_1) {
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_788 = "EnableBuildTownOffice";
    local_790 = ppuVar1;
    uVar17 = FUN_0273f0a0(&local_790);
    if ((uVar17 & 1) != 0) {
      local_790 = (undefined **)CONCAT44(local_790._4_4_,1);
      puVar27 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
        puVar27 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
      }
      if (puVar27[1] != 0) {
        local_790 = (undefined **)(PTR_DAT_04bc43f8 + 0x10);
        local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,1);
        local_788 = (char *)CONCAT44(local_788._4_4_,DAT_05636e5c);
        if ((DAT_05636e5c != 0) && (uVar17 = FUN_02a59140(puVar27,&local_790), (uVar17 & 1) != 0))
        goto LAB_02adbb54;
      }
      FUN_02b1b5bc(4,1);
      ppuVar7 = (undefined **)(PTR_DAT_04bc4958 + 0x10);
      local_770 = local_770 & 0xffffffff00000000;
      local_788 = (char *)(ulong)*puVar30;
      puVar2 = PTR_DAT_04bc4568 + 0x10;
      local_778 = (undefined1 *)0x0;
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_760 = PTR_DAT_04bb2010 + 0x10;
      local_758 = 0;
      puVar4 = PTR_DAT_04bbc5d8 + 0x10;
      local_748 = 0;
      local_738 = PTR_DAT_04bb2018 + 0x10;
      local_708 = 0;
      uStack_6e0 = 0;
      uStack_6d0 = 0;
      local_6f8 = 0;
      uStack_730 = 0;
      uStack_720 = 0;
      local_790 = ppuVar7;
      local_780 = puVar2;
      local_768 = puVar3;
      puStack_750 = puStack_760;
      puStack_740 = puVar4;
      local_728 = local_738;
      local_718 = puVar3;
      puStack_710 = puStack_760;
      puStack_700 = puStack_760;
      puStack_6f0 = puVar3;
      local_6e8 = puStack_760;
      local_6d8 = puStack_760;
      FUN_02ad636c(local_6c8);
      FUN_02b19360(&local_790,0);
      local_6c8[0] = PTR_DAT_04bc4788 + 0x10;
      local_790 = ppuVar7;
      local_780 = puVar2;
      local_1b8 = puVar4;
      local_190 = puVar3;
      local_148 = puVar4;
      local_120 = puVar3;
      local_d8 = puVar4;
      local_b0 = puVar3;
      FUN_02ad6758(auStack_688);
    }
LAB_02adbb54:
    lVar28 = *param_1;
    local_788 = "OfficeConstruction1";
    local_790 = ppuVar1;
    iVar12 = FUN_0273ea30(&local_790);
    uVar17 = lVar28 + iVar12;
    local_788 = "EnableBuildTownOffice";
    local_790 = ppuVar1;
    uVar18 = FUN_0273f0a0(&local_790);
    if ((uVar18 & 1) != 0) {
      local_790 = (undefined **)(puVar29 + 0x10);
      local_788 = "BuiltTownOffice";
      uVar18 = FUN_0273f0a0(&local_790);
      if ((uVar18 & 1) == 0) {
        local_790 = (undefined **)(puVar29 + 0x10);
        if ((long)uVar17 < 2) {
          uVar18 = uVar17 & 0xffffffff;
        }
        else {
          uVar18 = 0;
        }
        local_788 = "OfficeConstruction1";
        FUN_0273f3c4(&local_790,uVar18);
      }
    }
    local_790 = (undefined **)CONCAT44(local_790._4_4_,1);
    puVar27 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar27 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar27[1] != 0) {
      local_790 = (undefined **)(PTR_DAT_04bc43f8 + 0x10);
      local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,1);
      local_788 = (char *)CONCAT44(local_788._4_4_,DAT_05636e5c);
      if (((DAT_05636e5c != 0) && (uVar18 = FUN_02a59140(puVar27,&local_790), (uVar18 & 1) != 0)) &&
         (uVar18 = FUN_02b60460(1), (uVar18 & 1) == 0)) {
        local_788 = "BuiltTownOffice";
        local_790 = (undefined **)(puVar29 + 0x10);
        uVar18 = FUN_0273f0a0(&local_790);
        if ((uVar18 & 1) == 0) {
          if (uVar17 == 2) {
            local_790 = (undefined **)(puVar29 + 0x10);
            local_788 = "BuiltTownOfficeToday";
            FUN_0273f3c4(&local_790,1);
            iVar12 = 1;
          }
          else {
            iVar12 = (int)uVar17 + -1;
          }
          local_788 = "CountOfficeAfterBuild";
          local_790 = (undefined **)(puVar29 + 0x10);
          FUN_0273f3c4(&local_790,iVar12);
          ppuVar1 = (undefined **)(puVar29 + 0x10);
          local_788 = "BuiltTownOffice";
          local_790 = ppuVar1;
          FUN_0273f3c4(&local_790,1);
          local_788 = "GlobalEventReady";
          local_790 = ppuVar1;
          FUN_0273f3c4(&local_790,1);
          local_788 = "EventPlazaBuilt";
          local_790 = ppuVar1;
          FUN_0273f3c4(&local_790,1);
          local_788 = "FirstPlayAfterOfficeBuiltFlag";
          local_790 = ppuVar1;
          FUN_0274e338(&local_790,1);
          lVar28 = *(long *)PTR_DAT_04bb49a0;
          local_788 = "LE_FacilityBuilt_TownOffice";
          local_790 = ppuVar1;
          uVar15 = FUN_006bd550("LE_FacilityBuilt_TownOffice",0);
          local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,uVar15);
          uVar19 = FUN_01b5b650(lVar28 + 0x238,&local_7e8);
          FUN_01b5cf20(&local_790,uVar19,0,0,0);
        }
        else {
          local_788 = "CountOfficeAfterBuild";
          local_790 = (undefined **)(puVar29 + 0x10);
          FUN_0273fd90(&local_790,(int)*param_1);
        }
      }
    }
  }
  FUN_02b1b5bc(8,1);
  plVar21 = (long *)PTR_DAT_04bb46b0;
  lVar28 = *(long *)PTR_DAT_04bb46b0;
  if (lVar28 == 0) {
LAB_02adbe10:
    lVar28 = 0;
  }
  else {
    puVar27 = *(undefined8 **)(lVar28 + 0x10);
    if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
      lVar20 = (**(code **)(*(long *)*puVar27 + 0x38))();
      lVar28 = 0;
      if (lVar20 != 0) {
        lVar28 = lVar20 + 0x70;
      }
    }
    else {
      if (puVar27 == (undefined8 *)0x0) goto LAB_02adbe10;
      lVar28 = 0;
      if ((long *)puVar27[0x26] != (long *)0x0) {
        lVar28 = (**(code **)(*(long *)puVar27[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar28 + 0x1bf260) == (long *)0x0) ||
     (puVar27 = (undefined8 *)**(long **)(lVar28 + 0x1bf260), puVar27 == (undefined8 *)0x0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = (**(code **)*puVar27)();
    uVar17 = uVar17 & 0xffffffff;
  }
  local_790 = (undefined **)(puVar29 + 0x10);
  local_788 = "fox";
  uVar18 = FUN_028d5b80(*(long *)(lVar28 + 0x1bf248) + *(long *)(lVar28 + 0x1bf240),&local_790);
  if ((((uVar17 & 1) != 0) && (*(long *)(lVar28 + 0x1bf260) != 0)) &&
     (puVar27 = *(undefined8 **)(*(long *)(lVar28 + 0x1bf260) + 8), puVar27 != (undefined8 *)0x0)) {
    (**(code **)*puVar27)();
  }
  if ((uVar18 & 1) != 0) {
    ppuVar1 = (undefined **)(PTR_DAT_04bc4958 + 0x10);
    local_770 = local_770 & 0xffffffff00000000;
    local_788 = (char *)(ulong)*puVar30;
    puVar2 = PTR_DAT_04bc4568 + 0x10;
    local_778 = (undefined1 *)0x0;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_760 = PTR_DAT_04bb2010 + 0x10;
    local_758 = 0;
    puVar4 = PTR_DAT_04bbc5d8 + 0x10;
    local_748 = 0;
    local_738 = PTR_DAT_04bb2018 + 0x10;
    local_708 = 0;
    uStack_6e0 = 0;
    uStack_6d0 = 0;
    local_6f8 = 0;
    uStack_730 = 0;
    uStack_720 = 0;
    local_790 = ppuVar1;
    local_780 = puVar2;
    local_768 = puVar3;
    puStack_750 = puStack_760;
    puStack_740 = puVar4;
    local_728 = local_738;
    local_718 = puVar3;
    puStack_710 = puStack_760;
    puStack_700 = puStack_760;
    puStack_6f0 = puVar3;
    local_6e8 = puStack_760;
    local_6d8 = puStack_760;
    FUN_02ad636c(local_6c8);
    FUN_02b1a5c0(&local_790,0);
    local_6c8[0] = PTR_DAT_04bc4788 + 0x10;
    local_790 = ppuVar1;
    local_780 = puVar2;
    local_1b8 = puVar4;
    local_190 = puVar3;
    local_148 = puVar4;
    local_120 = puVar3;
    local_d8 = puVar4;
    local_b0 = puVar3;
    FUN_02ad6758(auStack_688);
  }
  puVar3 = PTR_DAT_04bbc570;
  if (0 < *param_1) {
    local_790 = (undefined **)CONCAT44(local_790._4_4_,1);
    puVar4 = PTR_DAT_04bc43f8 + 0x10;
    ppuVar1 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
    puVar27 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar27 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    puVar8 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    ppuVar7 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
    uVar13 = 0;
    do {
      uVar17 = FUN_02b5e1b0(uVar13,0);
      if ((uVar17 & 1) == 0) {
        local_790 = (undefined **)CONCAT44(local_790._4_4_,uVar13);
        uVar16 = uVar13;
        if (9 < uVar13) {
          uVar16 = 0;
        }
        local_7b8 = (&DAT_05636e30)[(int)uVar16];
        plStack_7d0 = *(long **)(puVar3 + 0x18);
        local_7e0 = (char *)CONCAT71(local_7e0._1_7_,puVar3[8]);
        local_7e0 = (char *)CONCAT44(*(undefined4 *)(puVar3 + 0xc),(undefined4)local_7e0);
        local_7c8 = *(undefined4 *)(puVar3 + 0x20);
        local_7c4 = *(undefined2 *)(puVar3 + 0x24);
        local_7e8 = ppuVar1;
        local_7d8 = puVar8;
        local_7c0 = puVar4;
        if (local_7b8 != 0) {
          local_7a0 = &local_7e8;
          ppuStack_7a8 = &local_7c0;
          local_7b0 = &PTR_FUN_04a9b150;
          if (puVar27[1] != 0) {
            plVar21 = (long *)(*(code *)**(undefined8 **)(puVar27[1] + 0x10))();
            iVar12 = (**(code **)(*plVar21 + 0x18))();
            if (0 < iVar12) {
              iVar14 = 0;
              do {
                FUN_01360490(&local_790,puVar27[1],iVar14);
                uVar17 = (*(code *)*local_7b0)(&local_7b0,&local_790);
                if ((uVar17 & 1) != 0) break;
                bVar10 = iVar12 + -1 != iVar14;
                iVar14 = iVar14 + 1;
              } while (bVar10);
            }
          }
        }
        if (local_7e0._4_4_ != 0) {
          local_780 = (undefined1 *)0x0;
          local_788 = PTR_DAT_04bb2010 + 0x10;
          local_770 = 0;
          local_790 = ppuVar7;
          local_778 = local_788;
          FUN_02a8f7b0(&local_7e8,&local_790);
          FUN_02b5c3a0(&local_790,0x6622bd46);
        }
      }
      plVar21 = (long *)PTR_DAT_04bb46b0;
      puVar30 = (uint *)PTR_DAT_04bb3238;
      puVar29 = PTR_DAT_04bb2020;
      uVar16 = 10;
      if ((int)uVar13 < 10) {
        uVar16 = uVar13 + 1;
      }
      uVar13 = uVar16;
    } while (uVar16 != 10);
    if (0 < *param_1) {
      local_790 = (undefined **)CONCAT44(local_790._4_4_,1);
      pcVar9 = (char *)&DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
        pcVar9 = (char *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
      }
      local_7e8 = &PTR_FUN_04a9fc60;
      local_7e0 = pcVar9;
      if (*(long *)(pcVar9 + 8) != 0) {
        plVar22 = (long *)(*(code *)**(undefined8 **)(*(long *)(pcVar9 + 8) + 0x10))();
        iVar12 = (**(code **)(*plVar22 + 0x18))();
        if (0 < iVar12) {
          iVar14 = 0;
          do {
            FUN_01360490(&local_790,*(undefined8 *)(pcVar9 + 8),iVar14);
            (*(code *)*local_7e8)(&local_7e8,&local_790);
            iVar14 = iVar14 + 1;
          } while (iVar12 != iVar14);
        }
      }
      if (0 < *param_1) {
        local_790 = (undefined **)(puVar29 + 0x10);
        local_788 = "RcoHasResolvedMoveKitBug";
        uVar17 = FUN_0273f0a0(&local_790);
        if ((uVar17 & 1) == 0) {
          local_7e8 = (undefined **)0x14ee;
          FUN_0277d4ac(&local_7e8);
          if (*plVar21 != 0) {
            FUN_02705554(&local_7b0,0,1);
            uVar17 = (ulong)local_7b0._4_4_;
            if (local_7b0._4_4_ != 8) {
              iVar12 = (int)local_7b0;
              do {
                uVar18 = uVar17;
                if (7 < uVar17) {
                  uVar18 = 0xffffffff;
                }
                local_788 = "MakeVillagePlayerFlag";
                local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,(int)uVar18);
                local_790 = (undefined **)(puVar29 + 0x10);
                iVar14 = FUN_0274ce10(&local_7c0,&local_790);
                uVar13 = FUN_02678be0(&local_7c0,&local_7e8);
                if (iVar14 == 0) {
                  if (uVar13 < 0x28) goto LAB_02adc4e0;
                }
                else {
                  if (uVar13 < 0x28) {
LAB_02adc4e0:
                    local_790 = (undefined **)(puVar29 + 0x10);
                    local_788 = "RcoMoveHouseReserved";
                    FUN_0274d104(&local_7c0,&local_790,1);
                    goto LAB_02adc504;
                  }
                  uVar13 = FUN_026792b0(&local_7c0,0x82);
                  if (uVar13 < 0x28) goto LAB_02adc504;
                }
                if (uVar17 < 8) {
                  lVar28 = *plVar21;
                  if (lVar28 == 0) break;
                  (**(code **)(*(long *)**(undefined8 **)(lVar28 + 0x10) + 0x18))();
                  if ((iVar12 == 0) && ((*(byte *)(lVar28 + 0x453) & 1) != 0)) {
                    lVar28 = (**(code **)(**(long **)(*(long *)(lVar28 + 0x10) + 0x130) + 0x18))();
                  }
                  else {
                    lVar28 = (**(code **)(*(long *)**(undefined8 **)(lVar28 + 0x10) + 0x18))();
                    lVar28 = lVar28 + 0x110;
                  }
                  if (uVar17 == 7) break;
                  plVar22 = (long *)(lVar28 + uVar17 * 0x48 + 0x1e3400);
                  while ((6 < uVar17 || (plVar22[-1] == 0 && *plVar22 == 0))) {
                    uVar17 = uVar17 + 1;
                    plVar22 = plVar22 + 9;
                    if (uVar17 == 7) goto LAB_02adc27c;
                  }
                  uVar17 = (ulong)((int)uVar17 + 1);
                }
              } while (uVar17 != 8);
            }
LAB_02adc27c:
            ppuVar1 = (undefined **)(puVar29 + 0x10);
            local_788 = "RcoMoveHouseReserved";
            local_790 = ppuVar1;
            FUN_0274e338(&local_790,0);
            local_788 = "RcoMoveReservedAnyone";
            local_790 = ppuVar1;
            FUN_0273f3c4(&local_790,0);
            local_788 = "RcoMoveReservedKind";
            local_790 = ppuVar1;
            FUN_0273f3c4(&local_790,0);
            if ((*plVar21 != 0) &&
               (lVar28 = (**(code **)(*(long *)**(undefined8 **)(*plVar21 + 0x10) + 0x30))(),
               lVar28 != 0)) {
              plVar22 = (long *)(lVar28 + 0x27f538);
              lVar20 = *(long *)(lVar28 + 0x27f558);
              if (lVar20 == 0) {
                *(undefined4 *)(*(long *)(lVar28 + 0x27f540) + *plVar22) = 0xffffffff;
              }
              else {
                if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
                  uVar13 = 1;
LAB_02adc484:
                  plVar23 = *(long **)(lVar20 + 0x20);
                  if (plVar23 != (long *)0x0) {
                    local_790 = (undefined **)*plVar22;
                    local_788 = *(char **)(lVar28 + 0x27f540);
                    local_780 = &DAT_00000004;
                    (**(code **)(*plVar23 + 0x20))(plVar23,&local_790);
                  }
                }
                else {
                  uVar13 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
                  lVar20 = *(long *)(lVar28 + 0x27f558);
                  uVar13 = uVar13 ^ 1;
                  if (lVar20 != 0) goto LAB_02adc484;
                }
                *(undefined4 *)(*(long *)(lVar28 + 0x27f540) + *plVar22) = 0xffffffff;
                if ((((uVar13 & 1) == 0) && (*(long *)(lVar28 + 0x27f558) != 0)) &&
                   (puVar27 = *(undefined8 **)(*(long *)(lVar28 + 0x27f558) + 0x18),
                   puVar27 != (undefined8 *)0x0)) {
                  (**(code **)*puVar27)();
                }
              }
LAB_02adc504:
              local_790 = (undefined **)(puVar29 + 0x10);
              local_788 = "RcoHasResolvedMoveKitBug";
              FUN_0273f3c4(&local_790,1);
            }
          }
        }
        if (0 < *param_1) {
          local_788 = "BridgeBuilt";
          local_790 = (undefined **)(puVar29 + 0x10);
          uVar17 = FUN_0273f0a0(&local_790);
          local_788 = "SlopeBuilt";
          local_790 = (undefined **)(puVar29 + 0x10);
          uVar18 = FUN_0273f0a0(&local_790);
          local_7b0 = (undefined **)((ulong)local_7b0 & 0xffffffffffffff00);
          local_790 = (undefined **)CONCAT44(local_790._4_4_,1);
          pcVar9 = (char *)&DAT_05636dd8;
          if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
            pcVar9 = (char *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
          }
          local_7e8 = &PTR_FUN_04a9fcb0;
          local_7d8 = &local_7b0;
          local_7e0 = pcVar9;
          plStack_7d0 = param_1;
          if (*(long *)(pcVar9 + 8) != 0) {
            plVar22 = (long *)(*(code *)**(undefined8 **)(*(long *)(pcVar9 + 8) + 0x10))();
            iVar12 = (**(code **)(*plVar22 + 0x18))();
            if (0 < iVar12) {
              iVar14 = 0;
              do {
                FUN_01360490(&local_790,*(undefined8 *)(pcVar9 + 8),iVar14);
                uVar24 = (*(code *)*local_7e8)(&local_7e8,&local_790,iVar14);
                if ((uVar24 & 1) == 0) break;
                bVar10 = iVar12 + -1 != iVar14;
                iVar14 = iVar14 + 1;
              } while (bVar10);
            }
          }
          if (local_7b0._0_1_ != (CalendarTime)0x0) {
            local_790 = (undefined **)(puVar29 + 0x10);
            local_788 = "BuiltTownOffice";
            iVar12 = FUN_0273ea30(&local_790);
            if (iVar12 != 0) {
              local_7e8 = (undefined **)((ulong)local_7e8 & 0xffffffff00000000);
              if (*plVar21 == 0) {
LAB_02adc798:
                local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,4);
                if (*plVar21 == 0) goto LAB_02adc838;
                lVar28 = FUN_026eec4c(*plVar21,4);
                if (lVar28 != 0) {
                  local_788 = "ContributedBuildBridgeorSlope";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  uVar15 = FUN_0274b8d0(lVar28,&local_790);
                  local_788 = "ContributedTodaysCeremonyBridgeorSlope";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  FUN_0274dff0(&local_7e8,&local_790,uVar15);
                }
                local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,5);
                if (*plVar21 != 0) {
                  lVar28 = FUN_026eec4c(*plVar21,5);
                  if (lVar28 != 0) {
                    local_788 = "ContributedBuildBridgeorSlope";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    uVar15 = FUN_0274b8d0(lVar28,&local_790);
                    local_788 = "ContributedTodaysCeremonyBridgeorSlope";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    FUN_0274dff0(&local_7e8,&local_790,uVar15);
                  }
                  goto LAB_02adc838;
                }
              }
              else {
                lVar28 = FUN_026eec4c(*plVar21,0);
                if (lVar28 != 0) {
                  local_788 = "ContributedBuildBridgeorSlope";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  uVar15 = FUN_0274b8d0(lVar28,&local_790);
                  local_788 = "ContributedTodaysCeremonyBridgeorSlope";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  FUN_0274dff0(&local_7e8,&local_790,uVar15);
                }
                local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,1);
                if (*plVar21 == 0) goto LAB_02adc798;
                lVar28 = FUN_026eec4c(*plVar21,1);
                if (lVar28 != 0) {
                  local_788 = "ContributedBuildBridgeorSlope";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  uVar15 = FUN_0274b8d0(lVar28,&local_790);
                  local_788 = "ContributedTodaysCeremonyBridgeorSlope";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  FUN_0274dff0(&local_7e8,&local_790,uVar15);
                }
                local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,2);
                if (*plVar21 == 0) goto LAB_02adc798;
                lVar28 = FUN_026eec4c(*plVar21,2);
                if (lVar28 != 0) {
                  local_788 = "ContributedBuildBridgeorSlope";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  uVar15 = FUN_0274b8d0(lVar28,&local_790);
                  local_788 = "ContributedTodaysCeremonyBridgeorSlope";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  FUN_0274dff0(&local_7e8,&local_790,uVar15);
                }
                local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,3);
                if (*plVar21 != 0) {
                  lVar28 = FUN_026eec4c(*plVar21,3);
                  if (lVar28 != 0) {
                    local_788 = "ContributedBuildBridgeorSlope";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    uVar15 = FUN_0274b8d0(lVar28,&local_790);
                    local_788 = "ContributedTodaysCeremonyBridgeorSlope";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    FUN_0274dff0(&local_7e8,&local_790,uVar15);
                  }
                  goto LAB_02adc798;
                }
LAB_02adc838:
                local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,6);
                if (*plVar21 != 0) {
                  lVar28 = FUN_026eec4c(*plVar21,6);
                  if (lVar28 != 0) {
                    local_788 = "ContributedBuildBridgeorSlope";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    uVar15 = FUN_0274b8d0(lVar28,&local_790);
                    local_788 = "ContributedTodaysCeremonyBridgeorSlope";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    FUN_0274dff0(&local_7e8,&local_790,uVar15);
                  }
                  local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,7);
                  if ((*plVar21 != 0) && (lVar28 = FUN_026eec4c(*plVar21,7), lVar28 != 0)) {
                    local_788 = "ContributedBuildBridgeorSlope";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    uVar15 = FUN_0274b8d0(lVar28,&local_790);
                    local_788 = "ContributedTodaysCeremonyBridgeorSlope";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    FUN_0274dff0(&local_7e8,&local_790,uVar15);
                  }
                }
              }
              FUN_02ade1d4();
            }
          }
          local_788 = "BuiltTownOffice";
          local_790 = (undefined **)(puVar29 + 0x10);
          iVar12 = FUN_0273ea30(&local_790);
          if (iVar12 != 0) {
            local_788 = "RcoBuildBridgeSlopeStatusCounter";
            local_790 = (undefined **)(puVar29 + 0x10);
            iVar12 = FUN_0273ea30(&local_790);
            if (iVar12 == 4) {
              FUN_02ade1d4();
            }
          }
          if ((uVar17 & 1) != 0) {
            local_788 = "CountFirstBridgeAfterBuild";
            local_790 = (undefined **)(puVar29 + 0x10);
            iVar12 = FUN_0273ea30(&local_790);
            local_788 = "CountFirstBridgeAfterBuild";
            uVar13 = iVar12 - (int)*param_1;
            local_790 = (undefined **)(puVar29 + 0x10);
            FUN_0273f3c4(&local_790,uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU));
          }
          if ((uVar18 & 1) != 0) {
            local_788 = "CountFirstSlopeAfterBuild";
            local_790 = (undefined **)(puVar29 + 0x10);
            iVar12 = FUN_0273ea30(&local_790);
            local_788 = "CountFirstSlopeAfterBuild";
            uVar13 = iVar12 - (int)*param_1;
            local_790 = (undefined **)(puVar29 + 0x10);
            FUN_0273f3c4(&local_790,uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU));
          }
        }
      }
    }
  }
  local_788 = "TkkFirstLive";
  local_790 = (undefined **)(puVar29 + 0x10);
  uVar17 = FUN_0273f0a0(&local_790);
  if ((uVar17 & 1) != 0) {
    local_788 = "Museum2Built";
    local_790 = (undefined **)(puVar29 + 0x10);
    uVar17 = FUN_0273f0a0(&local_790);
    if ((uVar17 & 1) != 0) {
      lVar28 = *param_1;
      local_788 = "GrowUpAfterPatch3_0";
      local_790 = (undefined **)(puVar29 + 0x10);
      uVar17 = FUN_0273f0a0(&local_790);
      if ((uVar17 & 1) == 0) {
        local_788 = "KppTourStart";
        local_790 = (undefined **)(puVar29 + 0x10);
        bVar11 = FUN_0273f0a0(&local_790);
        if ((bVar11 & 1) == 0) {
          local_788 = "HotelConstruction";
        }
        else {
          local_788 = "HotelBuilt";
        }
        local_790 = (undefined **)(puVar29 + 0x10);
        FUN_0273f3c4(&local_790,1);
        ppuVar1 = (undefined **)(PTR_DAT_04bc4958 + 0x10);
        local_770 = local_770 & 0xffffffff00000000;
        local_788 = (char *)(ulong)*puVar30;
        puVar2 = PTR_DAT_04bc4568 + 0x10;
        local_778 = (undefined1 *)0x0;
        puVar3 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_760 = PTR_DAT_04bb2010 + 0x10;
        local_758 = 0;
        puVar4 = PTR_DAT_04bbc5d8 + 0x10;
        local_748 = 0;
        local_738 = PTR_DAT_04bb2018 + 0x10;
        local_708 = 0;
        local_6f8 = 0;
        uStack_6e0 = 0;
        uStack_6d0 = 0;
        uStack_730 = 0;
        uStack_720 = 0;
        local_790 = ppuVar1;
        local_780 = puVar2;
        local_768 = puVar3;
        puStack_750 = puStack_760;
        puStack_740 = puVar4;
        local_728 = local_738;
        local_718 = puVar3;
        puStack_710 = puStack_760;
        puStack_700 = puStack_760;
        puStack_6f0 = puVar3;
        local_6e8 = puStack_760;
        local_6d8 = puStack_760;
        FUN_02ad636c(local_6c8);
        FUN_02b1b330(&local_790,0);
        local_6c8[0] = PTR_DAT_04bc4788 + 0x10;
        local_790 = ppuVar1;
        local_780 = puVar2;
        local_1b8 = puVar4;
        local_190 = puVar3;
        local_148 = puVar4;
        local_120 = puVar3;
        local_d8 = puVar4;
        local_b0 = puVar3;
        FUN_02ad6758(auStack_688);
      }
      else if (lVar28 < 1) {
LAB_02adcc88:
        bVar11 = 0;
      }
      else {
        local_790 = (undefined **)(puVar29 + 0x10);
        local_788 = "HotelConstruction";
        uVar13 = FUN_0273f0a0(&local_790);
        puVar27 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
          puVar27 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
        }
        if (puVar27[1] == 0) {
LAB_02adcbe8:
          uVar17 = 0;
        }
        else {
          local_790 = (undefined **)(PTR_DAT_04bc43f8 + 0x10);
          local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,0xf);
          local_788 = (char *)CONCAT44(local_788._4_4_,DAT_05636e94);
          if (DAT_05636e94 == 0) goto LAB_02adcbe8;
          uVar17 = FUN_02a59140(puVar27,&local_790);
          uVar17 = uVar17 & 0xffffffff;
        }
        lVar20 = *(long *)PTR_DAT_04bb32f0;
        if (lVar20 == 0) {
          uVar16 = 0;
        }
        else {
          local_7b0 = (undefined **)param_1[2];
          local_790 = (undefined **)(puVar29 + 0x10);
          local_788 = "Fireworks";
          if ((char)((ulong)local_7b0 >> 0x20) < '\x05') {
            lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_7b0);
            local_7e8 = (undefined **)(lVar25 + -0x15180);
            local_7b0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7e8);
          }
          uVar24 = (ulong)local_7b0;
          uVar18 = (ulong)local_7b0 >> 0x30;
          local_7b0._0_6_ = CONCAT24(5,(int)local_7b0);
          local_7b0 = (undefined **)(CONCAT26((short)uVar18,(uint6)local_7b0) & 0xff00ffffffffffff);
          uVar18 = FUN_00879dd0(lVar20,&local_790,uVar24,uVar24 >> 0x10,uVar24 >> 0x18,0);
          if ((uVar18 & 1) == 0) {
            local_7b0 = (undefined **)param_1[2];
            local_790 = (undefined **)(puVar29 + 0x10);
            local_788 = "Countdown";
            if ((char)((ulong)local_7b0 >> 0x20) < '\x05') {
              lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_7b0);
              local_7e8 = (undefined **)(lVar25 + -0x15180);
              local_7b0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7e8);
            }
            uVar18 = (ulong)local_7b0;
            local_7b0._0_6_ = CONCAT24(5,(int)local_7b0);
            local_7b0._7_1_ = SUB81(uVar18,7);
            local_7b0._0_7_ = (uint7)(uint6)local_7b0;
            uVar16 = FUN_00879dd0(lVar20,&local_790,uVar18,uVar18 >> 0x10,uVar18 >> 0x18,0);
          }
          else {
            uVar16 = 1;
          }
        }
        if ((uVar17 & 1) == 0) {
          local_790 = (undefined **)(puVar29 + 0x10);
          local_788 = "HotelConstruction";
          FUN_0273f3c4(&local_790,1);
          ppuVar1 = (undefined **)(PTR_DAT_04bc4958 + 0x10);
          local_770 = local_770 & 0xffffffff00000000;
          local_788 = (char *)(ulong)*puVar30;
          puVar2 = PTR_DAT_04bc4568 + 0x10;
          local_778 = (undefined1 *)0x0;
          puVar3 = PTR_DAT_04bbc1a0 + 0x10;
          puStack_760 = PTR_DAT_04bb2010 + 0x10;
          local_758 = 0;
          puVar4 = PTR_DAT_04bbc5d8 + 0x10;
          local_748 = 0;
          local_738 = PTR_DAT_04bb2018 + 0x10;
          local_708 = 0;
          local_6f8 = 0;
          uStack_6e0 = 0;
          uStack_6d0 = 0;
          uStack_730 = 0;
          uStack_720 = 0;
          local_790 = ppuVar1;
          local_780 = puVar2;
          local_768 = puVar3;
          puStack_750 = puStack_760;
          puStack_740 = puVar4;
          local_728 = local_738;
          local_718 = puVar3;
          puStack_710 = puStack_760;
          puStack_700 = puStack_760;
          puStack_6f0 = puVar3;
          local_6e8 = puStack_760;
          local_6d8 = puStack_760;
          FUN_02ad636c(local_6c8);
          FUN_02b1b330(&local_790,0);
          local_6c8[0] = PTR_DAT_04bc4788 + 0x10;
          local_790 = ppuVar1;
          local_780 = puVar2;
          local_1b8 = puVar4;
          local_190 = puVar3;
          local_148 = puVar4;
          local_120 = puVar3;
          local_d8 = puVar4;
          local_b0 = puVar3;
          FUN_02ad6758(auStack_688);
          bVar11 = 0;
        }
        else {
          if (((uVar16 | uVar13 ^ 0xffffffff) & 1) != 0) goto LAB_02adcc88;
          local_788 = "HotelBuilt";
          local_790 = (undefined **)(puVar29 + 0x10);
          FUN_0273f3c4(&local_790,1);
          local_788 = "HotelConstruction";
          local_790 = (undefined **)(puVar29 + 0x10);
          FUN_0273f3c4(&local_790,0);
          bVar11 = *param_1 == 1;
        }
      }
      local_790 = (undefined **)(puVar29 + 0x10);
      local_788 = "HotelBuilt";
      uVar17 = FUN_0273f0a0(&local_790);
      if (((uVar17 & 1) == 0) || (lVar28 < 1)) {
        if ((bVar11 & 1) != 0) goto LAB_02adcea4;
      }
      else {
        if ((bVar11 & 1) == 0) {
          lVar28 = *param_1;
          ppuVar1 = (undefined **)(puVar29 + 0x10);
          local_788 = "HotelBuiltDaysCount";
          local_790 = ppuVar1;
          FUN_0273fd90(&local_790,(int)lVar28);
          local_788 = "HotelOpend";
          local_790 = ppuVar1;
          uVar17 = FUN_0273f0a0(&local_790);
          if ((uVar17 & 1) != 0) {
            local_788 = "HotelOpenDaysCount";
            local_790 = ppuVar1;
            FUN_0273fd90(&local_790,(int)lVar28);
          }
        }
        else {
LAB_02adcea4:
          local_788 = "HotelBuiltDay";
          local_790 = (undefined **)(puVar29 + 0x10);
          FUN_0273f3c4(&local_790,1);
          local_788 = "HotelBuiltDaysCount";
          local_790 = (undefined **)(puVar29 + 0x10);
          FUN_0273f3c4(&local_790,1);
        }
        local_7b0 = (undefined **)((ulong)local_7b0 & 0xffffffff00000000);
        if (*plVar21 == 0) {
LAB_02add0ec:
          local_7b0 = (undefined **)CONCAT44(local_7b0._4_4_,4);
          if (*plVar21 != 0) {
            lVar28 = FUN_026eec4c(*plVar21,4);
            if (lVar28 != 0) {
              local_788 = "RcoGetTvForCongratsHouse";
              local_790 = (undefined **)(puVar29 + 0x10);
              iVar12 = FUN_0274ce10(&local_7b0,&local_790);
              if (iVar12 != 0) {
                local_7e0 = "HasLookMyHouseExplain";
                local_7e8 = (undefined **)(puVar29 + 0x10);
                iVar12 = FUN_0274ce10(&local_7b0,&local_7e8);
                if (iVar12 != 0) {
                  local_788 = "ReserveHotelintroduction";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  iVar12 = FUN_0274ce10(&local_7b0,&local_790);
                  if (iVar12 == 0) {
                    local_788 = "ReserveHotelintroduction";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    FUN_0274d104(&local_7b0,&local_790,1);
                  }
                }
              }
            }
            local_7b0 = (undefined **)CONCAT44(local_7b0._4_4_,5);
            if (*plVar21 == 0) goto LAB_02add31c;
            lVar28 = FUN_026eec4c(*plVar21,5);
            if (lVar28 != 0) {
              local_788 = "RcoGetTvForCongratsHouse";
              local_790 = (undefined **)(puVar29 + 0x10);
              iVar12 = FUN_0274ce10(&local_7b0,&local_790);
              if (iVar12 != 0) {
                local_7e0 = "HasLookMyHouseExplain";
                local_7e8 = (undefined **)(puVar29 + 0x10);
                iVar12 = FUN_0274ce10(&local_7b0,&local_7e8);
                if (iVar12 != 0) {
                  local_788 = "ReserveHotelintroduction";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  iVar12 = FUN_0274ce10(&local_7b0,&local_790);
                  if (iVar12 == 0) {
                    local_788 = "ReserveHotelintroduction";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    FUN_0274d104(&local_7b0,&local_790,1);
                  }
                }
              }
            }
          }
        }
        else {
          lVar28 = FUN_026eec4c(*plVar21,0);
          if (lVar28 != 0) {
            local_788 = "RcoGetTvForCongratsHouse";
            local_790 = (undefined **)(puVar29 + 0x10);
            iVar12 = FUN_0274ce10(&local_7b0,&local_790);
            if (iVar12 != 0) {
              local_7e0 = "HasLookMyHouseExplain";
              local_7e8 = (undefined **)(puVar29 + 0x10);
              iVar12 = FUN_0274ce10(&local_7b0,&local_7e8);
              if (iVar12 != 0) {
                local_788 = "ReserveHotelintroduction";
                local_790 = (undefined **)(puVar29 + 0x10);
                iVar12 = FUN_0274ce10(&local_7b0,&local_790);
                if (iVar12 == 0) {
                  local_788 = "ReserveHotelintroduction";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  FUN_0274d104(&local_7b0,&local_790,1);
                }
              }
            }
          }
          local_7b0 = (undefined **)CONCAT44(local_7b0._4_4_,1);
          if (*plVar21 == 0) goto LAB_02add0ec;
          lVar28 = FUN_026eec4c(*plVar21,1);
          if (lVar28 != 0) {
            local_788 = "RcoGetTvForCongratsHouse";
            local_790 = (undefined **)(puVar29 + 0x10);
            iVar12 = FUN_0274ce10(&local_7b0,&local_790);
            if (iVar12 != 0) {
              local_7e0 = "HasLookMyHouseExplain";
              local_7e8 = (undefined **)(puVar29 + 0x10);
              iVar12 = FUN_0274ce10(&local_7b0,&local_7e8);
              if (iVar12 != 0) {
                local_788 = "ReserveHotelintroduction";
                local_790 = (undefined **)(puVar29 + 0x10);
                iVar12 = FUN_0274ce10(&local_7b0,&local_790);
                if (iVar12 == 0) {
                  local_788 = "ReserveHotelintroduction";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  FUN_0274d104(&local_7b0,&local_790,1);
                }
              }
            }
          }
          local_7b0 = (undefined **)CONCAT44(local_7b0._4_4_,2);
          if (*plVar21 == 0) goto LAB_02add0ec;
          lVar28 = FUN_026eec4c(*plVar21,2);
          if (lVar28 != 0) {
            local_788 = "RcoGetTvForCongratsHouse";
            local_790 = (undefined **)(puVar29 + 0x10);
            iVar12 = FUN_0274ce10(&local_7b0,&local_790);
            if (iVar12 != 0) {
              local_7e0 = "HasLookMyHouseExplain";
              local_7e8 = (undefined **)(puVar29 + 0x10);
              iVar12 = FUN_0274ce10(&local_7b0,&local_7e8);
              if (iVar12 != 0) {
                local_788 = "ReserveHotelintroduction";
                local_790 = (undefined **)(puVar29 + 0x10);
                iVar12 = FUN_0274ce10(&local_7b0,&local_790);
                if (iVar12 == 0) {
                  local_788 = "ReserveHotelintroduction";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  FUN_0274d104(&local_7b0,&local_790,1);
                }
              }
            }
          }
          local_7b0 = (undefined **)CONCAT44(local_7b0._4_4_,3);
          if (*plVar21 != 0) {
            lVar28 = FUN_026eec4c(*plVar21,3);
            if (lVar28 != 0) {
              local_788 = "RcoGetTvForCongratsHouse";
              local_790 = (undefined **)(puVar29 + 0x10);
              iVar12 = FUN_0274ce10(&local_7b0,&local_790);
              if (iVar12 != 0) {
                local_7e0 = "HasLookMyHouseExplain";
                local_7e8 = (undefined **)(puVar29 + 0x10);
                iVar12 = FUN_0274ce10(&local_7b0,&local_7e8);
                if (iVar12 != 0) {
                  local_788 = "ReserveHotelintroduction";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  iVar12 = FUN_0274ce10(&local_7b0,&local_790);
                  if (iVar12 == 0) {
                    local_788 = "ReserveHotelintroduction";
                    local_790 = (undefined **)(puVar29 + 0x10);
                    FUN_0274d104(&local_7b0,&local_790,1);
                  }
                }
              }
            }
            goto LAB_02add0ec;
          }
        }
        local_7b0 = (undefined **)CONCAT44(local_7b0._4_4_,6);
        if (*plVar21 != 0) {
          lVar28 = FUN_026eec4c(*plVar21,6);
          if (lVar28 != 0) {
            local_788 = "RcoGetTvForCongratsHouse";
            local_790 = (undefined **)(puVar29 + 0x10);
            iVar12 = FUN_0274ce10(&local_7b0,&local_790);
            if (iVar12 != 0) {
              local_7e0 = "HasLookMyHouseExplain";
              local_7e8 = (undefined **)(puVar29 + 0x10);
              iVar12 = FUN_0274ce10(&local_7b0,&local_7e8);
              if (iVar12 != 0) {
                local_788 = "ReserveHotelintroduction";
                local_790 = (undefined **)(puVar29 + 0x10);
                iVar12 = FUN_0274ce10(&local_7b0,&local_790);
                if (iVar12 == 0) {
                  local_788 = "ReserveHotelintroduction";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  FUN_0274d104(&local_7b0,&local_790,1);
                }
              }
            }
          }
          local_7b0 = (undefined **)CONCAT44(local_7b0._4_4_,7);
          if ((*plVar21 != 0) && (lVar28 = FUN_026eec4c(*plVar21,7), lVar28 != 0)) {
            local_788 = "RcoGetTvForCongratsHouse";
            local_790 = (undefined **)(puVar29 + 0x10);
            iVar12 = FUN_0274ce10(&local_7b0,&local_790);
            if (iVar12 != 0) {
              local_7e0 = "HasLookMyHouseExplain";
              local_7e8 = (undefined **)(puVar29 + 0x10);
              iVar12 = FUN_0274ce10(&local_7b0,&local_7e8);
              if (iVar12 != 0) {
                local_788 = "ReserveHotelintroduction";
                local_790 = (undefined **)(puVar29 + 0x10);
                iVar12 = FUN_0274ce10(&local_7b0,&local_790);
                if (iVar12 == 0) {
                  local_788 = "ReserveHotelintroduction";
                  local_790 = (undefined **)(puVar29 + 0x10);
                  FUN_0274d104(&local_7b0,&local_790,1);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02add31c:
  puVar29 = PTR_DAT_04bb5008;
  FUN_02b3d3a0(*(long *)PTR_DAT_04bb5008 + 0x26e8,0x6622bd46);
  FUN_02b3d230(*(long *)puVar29 + 0x26e8,0x6622bd46);
  if ((char)param_1[5] == '\0') {
    return;
  }
  lVar28 = *plVar21;
  if (lVar28 == 0) {
    return;
  }
  puVar27 = *(undefined8 **)(lVar28 + 0x10);
  if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
    lVar28 = (**(code **)(*(long *)*puVar27 + 0x38))();
    if (lVar28 == 0) {
      return;
    }
    lVar28 = lVar28 + 0x70;
  }
  else {
    if (puVar27 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar27[0x26] == (long *)0x0) {
      return;
    }
    lVar28 = (**(code **)(*(long *)puVar27[0x26] + 0x38))();
    if (lVar28 == 0) {
      return;
    }
  }
  local_7b0 = (undefined **)0x2f6c;
  FUN_0277d4ac(&local_7b0);
  FUN_01af1ae4(&local_7b0);
  puVar29 = PTR_DAT_04bb43c0;
  local_7d8 = (undefined8 *)0x0;
  local_7e8 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_7e0 = (char *)local_7b0;
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar13 = FUN_0277d6c4(&local_7e0);
  if (*(long *)puVar29 != 0) {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar20 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      lVar20 = *(long *)PTR_DAT_04bc0428;
      uVar13 = FUN_0277d6c4(&local_7b0);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if (uVar13 < *(uint *)(lVar20 + 0x1d8)) {
        lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8);
        if (lVar20 != 0) {
          local_7d8 = (undefined8 *)lVar20;
        }
      }
    }
  }
  iVar12 = FUN_01ad7260(&local_7e8);
  if ((iVar12 == 0) || (puVar26 = (ushort *)FUN_01afd600(&local_7e8), puVar26 == (ushort *)0x0)) {
    uVar13 = 0;
    lVar20 = *(long *)(lVar28 + 0x28);
  }
  else {
    uVar13 = *puVar26 & 7;
    uVar16 = FUN_01ad7260(&local_7e8);
    if (uVar16 <= uVar13) {
      uVar13 = 0;
    }
    lVar20 = *(long *)(lVar28 + 0x28);
  }
  if (lVar20 == 0) {
    uVar17 = 0;
  }
  else {
    if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      lVar20 = *(long *)(lVar28 + 0x28);
      uVar17 = uVar17 & 0xffffffff;
      if (lVar20 == 0) goto LAB_02add508;
    }
    plVar21 = *(long **)(lVar20 + 0x20);
    if (plVar21 != (long *)0x0) {
      local_790 = *(undefined ***)(lVar28 + 8);
      local_788 = *(char **)(lVar28 + 0x10);
      local_780 = &LAB_005b3c40;
      (**(code **)(*plVar21 + 0x20))(plVar21,&local_790);
    }
  }
LAB_02add508:
  local_790 = (undefined **)CONCAT44(local_790._4_4_,uVar13);
  (&LAB_00575cb0)[*(long *)(lVar28 + 0x10) + *(long *)(lVar28 + 8)] = (char)uVar13;
  if ((((uVar17 & 1) != 0) && (*(long *)(lVar28 + 0x28) != 0)) &&
     (puVar27 = *(undefined8 **)(*(long *)(lVar28 + 0x28) + 0x18), puVar27 != (undefined8 *)0x0)) {
    (**(code **)*puVar27)();
  }
  return;
}

