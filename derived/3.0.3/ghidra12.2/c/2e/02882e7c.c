
void FUN_02882e7c(undefined2 *param_1)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  void *pvVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  undefined *puVar20;
  undefined *local_7d8;
  char *local_7d0;
  undefined8 uStack_7c8;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  lVar16 = *(long *)PTR_DAT_04bb46b0;
  if (lVar16 == 0) {
    return;
  }
  puVar17 = *(undefined8 **)(lVar16 + 0x10);
  if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
    lVar16 = (**(code **)(*(long *)*puVar17 + 0x38))();
    if (lVar16 == 0) {
      return;
    }
    lVar16 = lVar16 + 0x70;
  }
  else {
    if (puVar17 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar17[0x26] == (long *)0x0) {
      return;
    }
    lVar16 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
    if (lVar16 == 0) {
      return;
    }
  }
  plVar1 = (long *)(lVar16 + 0xe75f0);
  if ((*(long **)(lVar16 + 0xe7610) == (long *)0x0) ||
     (puVar17 = (undefined8 *)**(long **)(lVar16 + 0xe7610), puVar17 == (undefined8 *)0x0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)*puVar17)();
    uVar12 = uVar12 & 0xffffffff;
  }
  puVar8 = PTR_DAT_04bb2020;
  local_7d8 = PTR_DAT_04bb2020 + 0x10;
  local_7d0 = "HotelFurnitureIntroductionDoneAnyone";
  iVar10 = FUN_0273ec70(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8);
  plVar18 = *(long **)(lVar16 + 0xe7610);
  if ((uVar12 & 1) == 0) {
LAB_02882f7c:
    if (iVar10 == 0) {
LAB_028831f8:
      if (plVar18 != (long *)0x0) {
LAB_028831fc:
        if ((undefined8 *)*plVar18 != (undefined8 *)0x0) {
          uVar13 = (*(code *)**(undefined8 **)*plVar18)();
          uVar13 = uVar13 & 0xffffffff;
          goto LAB_0288321c;
        }
      }
    }
    else {
      if ((plVar18 == (long *)0x0) || ((undefined8 *)*plVar18 == (undefined8 *)0x0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = (*(code *)**(undefined8 **)*plVar18)();
        uVar12 = uVar12 & 0xffffffff;
      }
LAB_02882fb4:
      local_7d8 = puVar8 + 0x10;
      local_7d0 = "HotelIsLotItemEditTutorialAfterDay";
      iVar10 = FUN_0273ec70(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8);
      plVar18 = *(long **)(lVar16 + 0xe7610);
      if ((uVar12 & 1) == 0) {
LAB_02882ffc:
        if (iVar10 != 0) goto LAB_028831f8;
        if (plVar18 == (long *)0x0) {
          uVar12 = 0;
        }
        else {
          if ((undefined8 *)plVar18[2] == (undefined8 *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (*(code *)**(undefined8 **)plVar18[2])();
            plVar18 = *(long **)(lVar16 + 0xe7610);
            uVar12 = uVar12 & 0xffffffff;
            if (plVar18 == (long *)0x0) goto LAB_02883070;
          }
          plVar18 = (long *)plVar18[4];
          if (plVar18 != (long *)0x0) {
            local_7d8 = (undefined *)*plVar1;
            local_7d0 = *(char **)(lVar16 + 0xe75f8);
            uStack_7c8 = 0x800;
            (**(code **)(*plVar18 + 0x20))(plVar18,&local_7d8);
          }
        }
      }
      else {
        if (plVar18 != (long *)0x0) {
          if ((undefined8 *)plVar18[1] != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)plVar18[1])();
            plVar18 = *(long **)(lVar16 + 0xe7610);
          }
          goto LAB_02882ffc;
        }
        uVar12 = 0;
        uVar13 = 0;
        if (iVar10 != 0) goto LAB_0288321c;
      }
LAB_02883070:
      local_7d8 = puVar8 + 0x10;
      local_7d0 = "HotelShopUnlockItemFromOnlyMode";
      FUN_0273f520(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8,1);
      lVar19 = *(long *)(lVar16 + 0xe7610);
      if ((uVar12 & 1) == 0) {
LAB_028830b0:
        if (lVar19 != 0) goto LAB_028830b4;
LAB_028830d8:
        uVar12 = 0;
      }
      else {
        if (lVar19 == 0) goto LAB_028830d8;
        if (*(undefined8 **)(lVar19 + 0x18) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar19 + 0x18))();
          lVar19 = *(long *)(lVar16 + 0xe7610);
          goto LAB_028830b0;
        }
LAB_028830b4:
        if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
          lVar19 = *(long *)(lVar16 + 0xe7610);
          uVar12 = uVar12 & 0xffffffff;
          if (lVar19 == 0) goto LAB_02883110;
        }
        plVar18 = *(long **)(lVar19 + 0x20);
        if (plVar18 != (long *)0x0) {
          local_7d8 = (undefined *)*plVar1;
          local_7d0 = *(char **)(lVar16 + 0xe75f8);
          uStack_7c8 = 0x800;
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_7d8);
        }
      }
LAB_02883110:
      local_7d8 = puVar8 + 0x10;
      local_7d0 = "HotelShopUnlockNewItemFromNeedLot";
      FUN_0273f520(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8,0);
      lVar19 = *(long *)(lVar16 + 0xe7610);
      if ((uVar12 & 1) == 0) {
LAB_02883158:
        if (lVar19 != 0) goto LAB_0288315c;
LAB_02883180:
        uVar12 = 0;
      }
      else {
        if (lVar19 == 0) goto LAB_02883180;
        if (*(undefined8 **)(lVar19 + 0x18) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar19 + 0x18))();
          lVar19 = *(long *)(lVar16 + 0xe7610);
          goto LAB_02883158;
        }
LAB_0288315c:
        if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
          lVar19 = *(long *)(lVar16 + 0xe7610);
          uVar12 = uVar12 & 0xffffffff;
          if (lVar19 == 0) goto LAB_028831b8;
        }
        plVar18 = *(long **)(lVar19 + 0x20);
        if (plVar18 != (long *)0x0) {
          local_7d8 = (undefined *)*plVar1;
          local_7d0 = *(char **)(lVar16 + 0xe75f8);
          uStack_7c8 = 0x800;
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_7d8);
        }
      }
LAB_028831b8:
      local_7d8 = puVar8 + 0x10;
      local_7d0 = "HotelIsLotItemEditTutorialAfterDay";
      FUN_0273f520(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8,1);
      plVar18 = *(long **)(lVar16 + 0xe7610);
      if ((uVar12 & 1) == 0) goto LAB_028831f8;
      if (plVar18 != (long *)0x0) {
        if ((undefined8 *)plVar18[3] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar18[3])();
          plVar18 = *(long **)(lVar16 + 0xe7610);
          goto LAB_028831f8;
        }
        goto LAB_028831fc;
      }
    }
    uVar13 = 0;
  }
  else {
    if (plVar18 != (long *)0x0) {
      if ((undefined8 *)plVar18[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar18[1])();
        plVar18 = *(long **)(lVar16 + 0xe7610);
      }
      goto LAB_02882f7c;
    }
    uVar12 = 0;
    uVar13 = 0;
    if (iVar10 != 0) goto LAB_02882fb4;
  }
LAB_0288321c:
  local_7d8 = puVar8 + 0x10;
  local_7d0 = "HotelShopUnlockItemFromOnlyMode";
  iVar10 = FUN_0273ec70(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8);
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar16 + 0xe7610) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xe7610) + 8), puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
  if (iVar10 == 0) {
    return;
  }
  if ((*(long **)(lVar16 + 0xe7610) == (long *)0x0) ||
     (puVar17 = (undefined8 *)**(long **)(lVar16 + 0xe7610), puVar17 == (undefined8 *)0x0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)*puVar17)();
    uVar12 = uVar12 & 0xffffffff;
  }
  local_7d8 = puVar8 + 0x10;
  local_7d0 = "HotelShopUnlockNewItemFromNeedLot";
  iVar10 = FUN_0273ec70(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8);
  puVar9 = PTR_DAT_04bb43c0;
  puVar8 = PTR_DAT_04bb37e0;
  plVar18 = *(long **)(lVar16 + 0xe7610);
  if ((uVar12 & 1) == 0) {
LAB_02883300:
    puVar20 = PTR_DAT_04bb2020;
    if (iVar10 != 0) {
      if (plVar18 == (long *)0x0) goto LAB_02883344;
      if ((undefined8 *)plVar18[2] == (undefined8 *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (*(code *)**(undefined8 **)plVar18[2])();
        plVar18 = *(long **)(lVar16 + 0xe7610);
        uVar12 = uVar12 & 0xffffffff;
        if (plVar18 == (long *)0x0) goto LAB_0288337c;
      }
      plVar18 = (long *)plVar18[4];
      if (plVar18 != (long *)0x0) {
        local_7d8 = (undefined *)*plVar1;
        local_7d0 = *(char **)(lVar16 + 0xe75f8);
        uStack_7c8 = 0x800;
        (**(code **)(*plVar18 + 0x20))(plVar18,&local_7d8);
      }
LAB_0288337c:
      local_7d8 = PTR_DAT_04bb2020 + 0x10;
      local_7d0 = "HotelShopUnlockNewItemFromNeedLot";
      FUN_0273f520(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8,0);
      if ((((uVar12 & 1) != 0) && (*(long *)(lVar16 + 0xe7610) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xe7610) + 0x18),
         puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
      local_7d8 = PTR_DAT_04bbfe60 + 0x10;
      memset(&local_7d0,0,0x754);
      uVar11 = nn::os::GetSystemTick();
      local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
      local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
      pvVar14 = (void *)(**(code **)(local_7d8 + 0x18))(&local_7d8);
      memset(pvVar14,0,0x754);
      lVar19 = *(long *)puVar9;
      uVar11 = FUN_0277d6c4(param_1);
      if (*(long *)puVar9 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          FUN_0277dedc(param_1);
          lVar19 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
          uVar11 = FUN_0277d6c4(param_1);
          if ((uVar11 >> 3 & 0x1fff) < 0x753) {
            lVar7 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
            *(uint *)(lVar19 + lVar7) = *(uint *)(lVar19 + lVar7) | 1 << (ulong)(uVar11 & 0x1f);
          }
        }
      }
      lVar19 = *(long *)puVar9;
      puVar2 = param_1 + 4;
      uVar11 = FUN_0277d6c4(puVar2);
      puVar20 = PTR_DAT_04bb2020;
      uVar15 = extraout_x1;
      if (*(long *)puVar9 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          FUN_0277dedc(puVar2);
          lVar19 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
          uVar11 = FUN_0277d6c4(puVar2);
          uVar15 = extraout_x1_00;
          if ((uVar11 >> 3 & 0x1fff) < 0x753) {
            lVar7 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
            *(uint *)(lVar19 + lVar7) = *(uint *)(lVar19 + lVar7) | 1 << (ulong)(uVar11 & 0x1f);
          }
        }
      }
      uVar6 = *(undefined2 *)puVar8;
      *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
      *param_1 = uVar6;
      param_1[4] = uVar6;
      param_1[8] = uVar6;
      uVar4 = puVar8[2];
      param_1[0xc] = uVar6;
      param_1[0x10] = uVar6;
      param_1[0x14] = uVar6;
      param_1[0x18] = uVar6;
      param_1[0x1c] = uVar6;
      param_1[0x20] = uVar6;
      param_1[0x24] = uVar6;
      param_1[0x28] = uVar6;
      param_1[0x2c] = uVar6;
      param_1[0x30] = uVar6;
      param_1[0x34] = uVar6;
      *(undefined1 *)(param_1 + 1) = uVar4;
      uVar5 = puVar8[3];
      *(undefined1 *)(param_1 + 5) = uVar4;
      *(undefined1 *)(param_1 + 9) = uVar4;
      *(undefined1 *)(param_1 + 0xd) = uVar4;
      *(undefined1 *)(param_1 + 0x11) = uVar4;
      *(undefined1 *)(param_1 + 0x15) = uVar4;
      *(undefined1 *)(param_1 + 0x19) = uVar4;
      *(undefined1 *)(param_1 + 0x1d) = uVar4;
      *(undefined1 *)(param_1 + 0x21) = uVar4;
      *(undefined1 *)(param_1 + 0x25) = uVar4;
      *(undefined1 *)(param_1 + 0x29) = uVar4;
      *(undefined1 *)(param_1 + 0x2d) = uVar4;
      *(undefined1 *)(param_1 + 0x31) = uVar4;
      *(undefined1 *)(param_1 + 0x35) = uVar4;
      *(undefined1 *)((long)param_1 + 3) = uVar5;
      uVar3 = *(undefined4 *)(puVar8 + 4);
      *(undefined1 *)((long)param_1 + 0xb) = uVar5;
      *(undefined1 *)((long)param_1 + 0x13) = uVar5;
      *(undefined1 *)((long)param_1 + 0x1b) = uVar5;
      *(undefined1 *)((long)param_1 + 0x23) = uVar5;
      *(undefined1 *)((long)param_1 + 0x2b) = uVar5;
      *(undefined1 *)((long)param_1 + 0x33) = uVar5;
      *(undefined1 *)((long)param_1 + 0x3b) = uVar5;
      *(undefined1 *)((long)param_1 + 0x43) = uVar5;
      *(undefined1 *)((long)param_1 + 0x4b) = uVar5;
      *(undefined1 *)((long)param_1 + 0x53) = uVar5;
      *(undefined1 *)((long)param_1 + 0x5b) = uVar5;
      *(undefined1 *)((long)param_1 + 99) = uVar5;
      *(undefined1 *)((long)param_1 + 0x6b) = uVar5;
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(undefined4 *)(param_1 + 6) = uVar3;
      *(undefined4 *)(param_1 + 10) = uVar3;
      *(undefined4 *)(param_1 + 0xe) = uVar3;
      *(undefined4 *)(param_1 + 0x12) = uVar3;
      *(undefined4 *)(param_1 + 0x16) = uVar3;
      *(undefined4 *)(param_1 + 0x1a) = uVar3;
      *(undefined4 *)(param_1 + 0x1e) = uVar3;
      *(undefined4 *)(param_1 + 0x22) = uVar3;
      *(undefined4 *)(param_1 + 0x26) = uVar3;
      *(undefined4 *)(param_1 + 0x2a) = uVar3;
      *(undefined4 *)(param_1 + 0x2e) = uVar3;
      *(undefined4 *)(param_1 + 0x32) = uVar3;
      *(undefined4 *)(param_1 + 0x36) = uVar3;
      *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x3c) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x57) = 0;
      FUN_02880620(param_1,uVar15,&local_7d8);
      plVar18 = *(long **)(lVar16 + 0xe7610);
    }
    if ((plVar18 == (long *)0x0) || ((undefined8 *)*plVar18 == (undefined8 *)0x0))
    goto LAB_028836c0;
    uVar11 = (*(code *)**(undefined8 **)*plVar18)();
    uVar11 = uVar11 ^ 1;
  }
  else {
    if (plVar18 != (long *)0x0) {
      if ((undefined8 *)plVar18[1] != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)plVar18[1])();
        plVar18 = *(long **)(lVar16 + 0xe7610);
      }
      goto LAB_02883300;
    }
    if (iVar10 != 0) {
LAB_02883344:
      uVar12 = 0;
      goto LAB_0288337c;
    }
    puVar20 = PTR_DAT_04bb2020;
LAB_028836c0:
    uVar11 = 1;
  }
  local_7d8 = puVar20 + 0x10;
  local_7d0 = "HotelSideTripPlayerTodayAnyone";
  iVar10 = FUN_0273ec70(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8);
  if ((((uVar11 & 1) == 0) && (*(long *)(lVar16 + 0xe7610) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xe7610) + 8), puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
  if (iVar10 == 0) {
    return;
  }
  lVar19 = *(long *)(lVar16 + 0xe7610);
  if (lVar19 == 0) {
    uVar12 = 0;
  }
  else {
    if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      lVar19 = *(long *)(lVar16 + 0xe7610);
      uVar12 = uVar12 & 0xffffffff;
      if (lVar19 == 0) goto LAB_02883770;
    }
    plVar18 = *(long **)(lVar19 + 0x20);
    if (plVar18 != (long *)0x0) {
      local_7d8 = (undefined *)*plVar1;
      local_7d0 = *(char **)(lVar16 + 0xe75f8);
      uStack_7c8 = 0x800;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_7d8);
    }
  }
LAB_02883770:
  local_7d8 = puVar20 + 0x10;
  local_7d0 = "HotelShopUnlockItemFromOnlyMode";
  FUN_0273f520(*(long *)(lVar16 + 0xe75f8) + *plVar1,&local_7d8,0);
  if ((((uVar12 & 1) != 0) && (*(long *)(lVar16 + 0xe7610) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar16 + 0xe7610) + 0x18), puVar17 != (undefined8 *)0x0))
  {
    (**(code **)*puVar17)();
  }
  local_7d8 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_7d0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar14 = (void *)FUN_01a451fc(&local_7d8);
  memset(pvVar14,0,0x754);
  lVar16 = *(long *)puVar9;
  uVar11 = FUN_0277d6c4(param_1);
  if (*(long *)puVar9 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      FUN_0277dedc(param_1);
      lVar16 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
      uVar11 = FUN_0277d6c4(param_1);
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar16 + lVar19) = *(uint *)(lVar16 + lVar19) | 1 << (ulong)(uVar11 & 0x1f);
      }
    }
  }
  lVar16 = *(long *)puVar9;
  puVar2 = param_1 + 4;
  uVar11 = FUN_0277d6c4(puVar2);
  uVar15 = extraout_x1_01;
  if (*(long *)puVar9 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      FUN_0277dedc(puVar2);
      lVar16 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
      uVar11 = FUN_0277d6c4(puVar2);
      uVar15 = extraout_x1_02;
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar19 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar16 + lVar19) = *(uint *)(lVar16 + lVar19) | 1 << (ulong)(uVar11 & 0x1f);
      }
    }
  }
  uVar6 = *(undefined2 *)puVar8;
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
  *param_1 = uVar6;
  param_1[4] = uVar6;
  param_1[8] = uVar6;
  uVar4 = puVar8[2];
  param_1[0xc] = uVar6;
  param_1[0x10] = uVar6;
  param_1[0x14] = uVar6;
  param_1[0x18] = uVar6;
  param_1[0x1c] = uVar6;
  param_1[0x20] = uVar6;
  param_1[0x24] = uVar6;
  param_1[0x28] = uVar6;
  param_1[0x2c] = uVar6;
  param_1[0x30] = uVar6;
  param_1[0x34] = uVar6;
  *(undefined1 *)(param_1 + 1) = uVar4;
  uVar5 = puVar8[3];
  *(undefined1 *)(param_1 + 5) = uVar4;
  *(undefined1 *)(param_1 + 9) = uVar4;
  *(undefined1 *)(param_1 + 0xd) = uVar4;
  *(undefined1 *)(param_1 + 0x11) = uVar4;
  *(undefined1 *)(param_1 + 0x15) = uVar4;
  *(undefined1 *)(param_1 + 0x19) = uVar4;
  *(undefined1 *)(param_1 + 0x1d) = uVar4;
  *(undefined1 *)(param_1 + 0x21) = uVar4;
  *(undefined1 *)(param_1 + 0x25) = uVar4;
  *(undefined1 *)(param_1 + 0x29) = uVar4;
  *(undefined1 *)(param_1 + 0x2d) = uVar4;
  *(undefined1 *)(param_1 + 0x31) = uVar4;
  *(undefined1 *)(param_1 + 0x35) = uVar4;
  *(undefined1 *)((long)param_1 + 3) = uVar5;
  uVar3 = *(undefined4 *)(puVar8 + 4);
  *(undefined1 *)((long)param_1 + 0xb) = uVar5;
  *(undefined1 *)((long)param_1 + 0x13) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x23) = uVar5;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x33) = uVar5;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x43) = uVar5;
  *(undefined1 *)((long)param_1 + 0x4b) = uVar5;
  *(undefined1 *)((long)param_1 + 0x53) = uVar5;
  *(undefined1 *)((long)param_1 + 0x5b) = uVar5;
  *(undefined1 *)((long)param_1 + 99) = uVar5;
  *(undefined1 *)((long)param_1 + 0x6b) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)(param_1 + 10) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar3;
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  *(undefined4 *)(param_1 + 0x16) = uVar3;
  *(undefined4 *)(param_1 + 0x1a) = uVar3;
  *(undefined4 *)(param_1 + 0x1e) = uVar3;
  *(undefined4 *)(param_1 + 0x22) = uVar3;
  *(undefined4 *)(param_1 + 0x26) = uVar3;
  *(undefined4 *)(param_1 + 0x2a) = uVar3;
  *(undefined4 *)(param_1 + 0x2e) = uVar3;
  *(undefined4 *)(param_1 + 0x32) = uVar3;
  *(undefined4 *)(param_1 + 0x36) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x57) = 0;
  FUN_02880620(param_1,uVar15,&local_7d8);
  return;
}

