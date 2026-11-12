
/* WARNING: Type propagation algorithm not settling */

void FUN_00be0e20(long *param_1,byte *param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  uint uVar4;
  short sVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  void *pvVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  uint *puVar30;
  long lVar31;
  long *plVar32;
  undefined8 uVar33;
  ushort *puVar34;
  int *piVar35;
  ushort uVar36;
  undefined4 uVar37;
  long lVar38;
  byte bVar39;
  undefined1 uVar40;
  uint *puVar41;
  char cVar42;
  short *psVar43;
  uint local_f9c;
  uint local_f98;
  uint local_f94;
  uint uStack_f90;
  byte local_f8c [4];
  undefined8 local_f88;
  undefined8 local_f80;
  uint *local_f78;
  uint local_82c;
  uint local_828;
  uint local_824;
  int local_820;
  byte local_818 [4];
  byte local_814 [4];
  byte local_810 [4];
  byte local_80c [4];
  undefined *local_808;
  undefined1 auStack_800 [1876];
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  uint local_6c;
  
  puVar7 = PTR_DAT_04bbfe60;
  local_808 = PTR_DAT_04bbfe60 + 0x10;
  local_94 = param_3;
  memset(auStack_800,0,0x754);
  uVar16 = nn::os::GetSystemTick();
  local_ac = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
  local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
  pvVar26 = (void *)FUN_01a451fc(&local_808);
  memset(pvVar26,0,0x754);
  iVar19 = DAT_05407640;
  switch(local_94) {
  case 0:
    local_80c[0] = *param_2;
    if (7 < local_80c[0]) {
      local_80c[0] = 0xff;
    }
    lVar27 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_80c,1);
    if (lVar27 != 0) {
      lVar31 = lVar27 + 0x194b0;
      if (*(long *)(lVar27 + 0x194b8) == 0) {
        lVar31 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      plVar32 = (long *)(lVar31 + 0x2a270);
      if ((*(long **)(lVar31 + 0x2a290) == (long *)0x0) ||
         (puVar28 = (undefined8 *)**(long **)(lVar31 + 0x2a290), puVar28 == (undefined8 *)0x0)) {
        FUN_028257c4(param_1,*(long *)(lVar31 + 0x2a278) + *plVar32);
        return;
      }
      uVar29 = (**(code **)*puVar28)();
      FUN_028257c4(param_1,*(long *)(lVar31 + 0x2a278) + *plVar32);
joined_r0x00be1c14:
      if ((uVar29 & 1) == 0) {
        return;
      }
      if (plVar32[4] == 0) {
        return;
      }
      puVar28 = *(undefined8 **)(plVar32[4] + 8);
      if (puVar28 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar28)();
      return;
    }
    uVar37 = 0x88;
    break;
  case 1:
    uVar37 = 0x8b;
    goto LAB_00be1c3c;
  case 2:
    uVar37 = 0x8a;
    goto LAB_00be1c3c;
  case 3:
    local_f88 = (undefined **)0xe08;
    FUN_0277d4ac(&local_f88);
    FUN_0277dedc(&local_f88);
    lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
    uVar16 = FUN_0277d6c4(&local_f88);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar31) = *(uint *)(lVar27 + lVar31) | 1 << (ulong)(uVar16 & 0x1f);
    }
    local_f88 = (undefined **)0xe09;
    FUN_0277d4ac(&local_f88);
    FUN_0277dedc(&local_f88);
    lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
    uVar16 = FUN_0277d6c4(&local_f88);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar31) = *(uint *)(lVar27 + lVar31) | 1 << (ulong)(uVar16 & 0x1f);
    }
    local_f88 = (undefined **)0xe07;
    FUN_0277d4ac(&local_f88);
    FUN_0277dedc(&local_f88);
    lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
    uVar16 = FUN_0277d6c4(&local_f88);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar31) = *(uint *)(lVar27 + lVar31) | 1 << (ulong)(uVar16 & 0x1f);
    }
    local_f88 = (undefined **)0xe0a;
    FUN_0277d4ac(&local_f88);
    FUN_0277dedc(&local_f88);
    lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
    uVar16 = FUN_0277d6c4(&local_f88);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar31) = *(uint *)(lVar27 + lVar31) | 1 << (ulong)(uVar16 & 0x1f);
    }
    local_f88 = (undefined **)0x12c0;
    FUN_0277d4ac(&local_f88);
    FUN_0277dedc(&local_f88);
    lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
    uVar16 = FUN_0277d6c4(&local_f88);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar31) = *(uint *)(lVar27 + lVar31) | 1 << (ulong)(uVar16 & 0x1f);
    }
    local_f88 = (undefined **)0x119e;
    FUN_0277d4ac(&local_f88);
    FUN_0277dedc(&local_f88);
    lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
    uVar16 = FUN_0277d6c4(&local_f88);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar31) = *(uint *)(lVar27 + lVar31) | 1 << (ulong)(uVar16 & 0x1f);
    }
    local_f88 = (undefined **)0x1479;
    FUN_0277d4ac(&local_f88);
    FUN_0277dedc(&local_f88);
    lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
    uVar16 = FUN_0277d6c4(&local_f88);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar31) = *(uint *)(lVar27 + lVar31) | 1 << (ulong)(uVar16 & 0x1f);
    }
    local_f88 = (undefined **)0x146a;
    goto LAB_00be1254;
  case 4:
    *param_1 = 0xadb;
    FUN_0277d4ac(param_1);
    puVar7 = PTR_DAT_04bb43c0;
    local_f78 = (uint *)0x0;
    local_f88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_f80 = (char *)*param_1;
    lVar27 = *(long *)PTR_DAT_04bb43c0;
    uVar16 = FUN_0277d6c4(&local_f80);
    if (*(long *)puVar7 != 0) {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
        lVar27 = *(long *)PTR_DAT_04bc0428;
        uVar16 = FUN_0277d6c4(param_1);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if (uVar16 < *(uint *)(lVar27 + 0x1d8)) {
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8);
          if (uVar29 != 0) {
            local_f78 = (uint *)uVar29;
          }
        }
      }
    }
    uVar29 = FUN_01af0020(&local_f88);
    if ((uVar29 & 1) == 0) {
      return;
    }
    iVar19 = iVar19 + -1;
LAB_00be138c:
    FUN_01af3780(&local_90,param_1,iVar19);
    goto LAB_00be1390;
  case 5:
    if ((param_4 != 0) && (*(int *)(param_4 + 0x500) == 0)) {
      local_f9c = FUN_021d6f50(*(undefined4 *)(param_4 + 0x508),param_2);
      if (local_f9c - 5 < 2) {
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_f80 = "GetBirthdayTable";
        local_f88 = ppuVar2;
        iVar19 = FUN_0274bce0(param_2,&local_f88);
        local_f80 = "GetBirthdayHat";
        local_f88 = ppuVar2;
        iVar20 = FUN_0274bce0(param_2,&local_f88);
        bVar10 = iVar20 != 0;
        local_f80 = "GetBirthdayBoard";
        local_f88 = ppuVar2;
        iVar21 = FUN_0274bce0(param_2,&local_f88);
        bVar11 = iVar21 != 0;
        local_f80 = "GetBirthdayCandle";
        local_f88 = ppuVar2;
        iVar21 = FUN_0274bce0(param_2,&local_f88);
        local_f80 = "GetBirthdaySunglasses";
        local_f88 = ppuVar2;
        iVar22 = FUN_0274bce0(param_2,&local_f88);
        bVar9 = iVar22 != 0;
        local_f80 = "GetBirthdayCake";
        local_f88 = ppuVar2;
        iVar22 = FUN_0274bce0(param_2,&local_f88);
        bVar12 = iVar22 != 0;
        local_f80 = "GetBirthdayFloorParty";
        local_f88 = ppuVar2;
        iVar22 = FUN_0274bce0(param_2,&local_f88);
        bVar13 = iVar22 != 0;
        local_f80 = "GetBirthdayWallParty";
        local_f88 = ppuVar2;
        iVar22 = FUN_0274bce0(param_2,&local_f88);
        bVar14 = iVar22 != 0;
        if (iVar19 == 0) {
          local_f88 = (undefined **)0xe09;
          FUN_0277d4ac(&local_f88);
          FUN_01a45058(&local_808,&local_f88);
        }
        if (iVar21 == 0) {
LAB_00be3640:
          local_f88 = (undefined **)0xe07;
          FUN_0277d4ac(&local_f88);
          FUN_01a45058(&local_808,&local_f88);
          if (!bVar10) {
LAB_00be3660:
            local_f88 = (undefined **)0x12c0;
            FUN_0277d4ac(&local_f88);
            FUN_01a45058(&local_808,&local_f88);
          }
        }
        else if (iVar20 == 0) goto LAB_00be3660;
        if (bVar11) {
          if (bVar9) goto LAB_00be3688;
LAB_00be3748:
          local_f88 = (undefined **)0x119e;
          FUN_0277d4ac(&local_f88);
          FUN_01a45058(&local_808,&local_f88);
          if (bVar12) goto LAB_00be368c;
LAB_00be3768:
          local_f88 = (undefined **)0xe08;
          FUN_0277d4ac(&local_f88);
          FUN_01a45058(&local_808,&local_f88);
          if (bVar13) goto LAB_00be3694;
LAB_00be378c:
          local_f88 = (undefined **)0x1479;
          FUN_0277d4ac(&local_f88);
          FUN_01a45058(&local_808,&local_f88);
          if (bVar14) goto LAB_00be36b8;
        }
        else {
          local_f88 = (undefined **)0xe0a;
          FUN_0277d4ac(&local_f88);
          FUN_01a45058(&local_808,&local_f88);
          if (!bVar9) goto LAB_00be3748;
LAB_00be3688:
          if (!bVar12) goto LAB_00be3768;
LAB_00be368c:
          if (!bVar13) goto LAB_00be378c;
LAB_00be3694:
          if (bVar14) goto LAB_00be36b8;
        }
        local_f88 = (undefined **)0x146a;
        FUN_0277d4ac(&local_f88);
        FUN_01a45058(&local_808,&local_f88);
      }
      else if (local_f9c - 3 < 2) {
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_f80 = "GetBirthdayCandle";
        local_f88 = ppuVar2;
        iVar19 = FUN_0274bce0(param_2,&local_f88);
        local_f80 = "GetBirthdaySunglasses";
        local_f88 = ppuVar2;
        iVar20 = FUN_0274bce0(param_2,&local_f88);
        bVar9 = iVar20 != 0;
        if (iVar19 == 0) {
          bVar13 = true;
          bVar14 = true;
          bVar12 = true;
          bVar11 = true;
          bVar10 = true;
          goto LAB_00be3640;
        }
        if (iVar20 != 0) goto LAB_00be36b8;
        bVar12 = true;
        bVar13 = true;
        bVar14 = true;
        goto LAB_00be3748;
      }
LAB_00be36b8:
      iVar19 = FUN_00bab1f0(&local_808);
      if (iVar19 == 0) {
        FUN_02845d90(&local_808,1,*(undefined4 *)(param_4 + 0x508),param_2,0);
      }
      FUN_0258ff54(&local_f88,param_2,1);
      local_90 = (undefined **)((ulong)local_90._4_4_ << 0x20);
      local_88 = (uint *)0xfffe;
      FUN_0277d4ac(&local_88);
      local_90 = (undefined **)CONCAT44(*(undefined4 *)(param_4 + 0x508),(undefined4)local_90);
      FUN_0259009c(&local_f88,&local_90);
      FUN_0258ffc0(&local_f88);
    }
    goto LAB_00be245c;
  case 6:
    lVar27 = *(long *)PTR_DAT_04bb38d0;
    *(undefined2 *)param_1 = *(undefined2 *)(lVar27 + 4);
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(lVar27 + 6);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar27 + 7);
    *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar27 + 8);
    return;
  case 7:
    ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_f80 = "SzaCountDownHatColorMatch";
    local_f88 = ppuVar2;
    FUN_027533a8(param_2,&local_f88,1);
    local_f80 = (char *)&local_90;
    local_90 = (undefined **)CONCAT44(local_90._4_4_,0x8c);
    local_f88 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_808,&local_f88);
    bVar39 = *param_2;
    if (7 < bVar39) {
      bVar39 = 0xff;
    }
    local_f88 = (undefined **)CONCAT71(local_f88._1_7_,bVar39);
    lVar27 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_f88,1);
    if (lVar27 != 0) {
      if ((*(long **)(lVar27 + 0x178) == (long *)0x0) ||
         (puVar28 = (undefined8 *)**(long **)(lVar27 + 0x178), puVar28 == (undefined8 *)0x0)) {
        uVar29 = 0;
      }
      else {
        uVar29 = (**(code **)*puVar28)();
        uVar29 = uVar29 & 0xffffffff;
      }
      plVar32 = (long *)FUN_02814e30(*(long *)(lVar27 + 0x160) + *(long *)(lVar27 + 0x158));
      local_90 = (undefined **)*plVar32;
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar27 + 0x178) != 0)) &&
         (puVar28 = *(undefined8 **)(*(long *)(lVar27 + 0x178) + 8), puVar28 != (undefined8 *)0x0))
      {
        (**(code **)*puVar28)();
      }
      puVar7 = PTR_DAT_04bb43c0;
      lVar31 = *(long *)PTR_DAT_04bb43c0;
      uVar16 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar7 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          FUN_01ad5d04(&local_f88,&local_90);
          iVar19 = FUN_01ad9fd0(&local_f88);
          if (iVar19 != 9) {
            iVar19 = FUN_01ad9fd0(&local_f88);
            if (iVar19 != 10) goto LAB_00be2404;
          }
          uVar16 = FUN_01ae3210(&local_f88);
          local_f9c = uVar16;
          if (uVar16 < 8) goto LAB_00be275c;
        }
      }
LAB_00be2404:
      if ((*(long **)(lVar27 + 0x178) == (long *)0x0) ||
         (puVar28 = (undefined8 *)**(long **)(lVar27 + 0x178), puVar28 == (undefined8 *)0x0)) {
        uVar29 = 0;
      }
      else {
        uVar29 = (**(code **)*puVar28)();
        uVar29 = uVar29 & 0xffffffff;
      }
      puVar30 = (uint *)FUN_028152a0(*(long *)(lVar27 + 0x160) + *(long *)(lVar27 + 0x158));
      local_f9c = *puVar30;
      local_f98 = puVar30[1];
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar27 + 0x178) != 0)) &&
         (puVar28 = *(undefined8 **)(*(long *)(lVar27 + 0x178) + 8), puVar28 != (undefined8 *)0x0))
      {
        (**(code **)*puVar28)();
      }
      lVar27 = *(long *)puVar7;
      uVar16 = FUN_0277d6c4(&local_f9c);
      if (*(long *)puVar7 != 0) {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          FUN_01ad5d04(&local_f88,&local_f9c);
          iVar19 = FUN_01ad9fd0(&local_f88);
          if (iVar19 == 0xd) {
            uVar16 = FUN_01ae3210(&local_f88);
            local_6c = uVar16;
            if (uVar16 < 8) {
LAB_00be275c:
              *(undefined2 *)((long)param_1 + 2) = 0;
              uVar6 = *(undefined2 *)(&DAT_04102070 + (long)(int)uVar16 * 2);
              *(undefined4 *)((long)param_1 + 4) = 0;
              *(undefined2 *)param_1 = uVar6;
              FUN_0277d4ac(param_1);
              return;
            }
          }
        }
      }
    }
    local_f80 = "SzaCountDownHatColorMatch";
    local_f88 = ppuVar2;
    FUN_027533a8(param_2,&local_f88,0);
    goto LAB_00be245c;
  case 8:
    local_810[0] = *param_2;
    if (7 < local_810[0]) {
      local_810[0] = 0xff;
    }
    lVar27 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_810,1);
    if (lVar27 == 0) goto LAB_00be245c;
    lVar31 = lVar27 + 0x194b0;
    if (*(long *)(lVar27 + 0x194b8) == 0) {
      lVar31 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if (*(long **)(lVar31 + 0x2a290) == (long *)0x0) {
      uVar29 = 0;
    }
    else {
      puVar28 = (undefined8 *)**(long **)(lVar31 + 0x2a290);
      uVar29 = 0;
      if (puVar28 != (undefined8 *)0x0) {
        uVar29 = (**(code **)*puVar28)();
      }
    }
    local_f88 = *(undefined ***)(*(long *)(lVar31 + 0x2a278) + *(long *)(lVar31 + 0x2a270) + 0x5c);
    if ((((uVar29 & 1) != 0) && (*(long *)(lVar31 + 0x2a290) != 0)) &&
       (puVar28 = *(undefined8 **)(*(long *)(lVar31 + 0x2a290) + 8), puVar28 != (undefined8 *)0x0))
    {
      (**(code **)*puVar28)();
    }
    goto LAB_00be1260;
  case 9:
    local_814[0] = *param_2;
    if (7 < local_814[0]) {
      local_814[0] = 0xff;
    }
    lVar27 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_814,1);
    if (lVar27 != 0) {
      lVar31 = lVar27 + 0x194b0;
      lVar38 = lVar31;
      if (*(long *)(lVar27 + 0x194b8) == 0) {
        lVar38 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if (*(long **)(lVar38 + 0x2a290) == (long *)0x0) {
        uVar29 = 0;
      }
      else {
        puVar28 = (undefined8 *)**(long **)(lVar38 + 0x2a290);
        uVar29 = 0;
        if (puVar28 != (undefined8 *)0x0) {
          uVar29 = (**(code **)*puVar28)();
        }
      }
      local_90 = *(undefined ***)(*(long *)(lVar38 + 0x2a278) + *(long *)(lVar38 + 0x2a270) + 100);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar38 + 0x2a290) != 0)) &&
         (puVar28 = *(undefined8 **)(*(long *)(lVar38 + 0x2a290) + 8), puVar28 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar28)();
      }
      if (*(long *)(lVar27 + 0x194b8) == 0) {
        lVar31 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      lVar27 = *(long *)(lVar31 + 0x2a290);
      if (lVar27 == 0) {
        uVar29 = 0;
      }
      else {
        if (*(undefined8 **)(lVar27 + 0x10) == (undefined8 *)0x0) {
          uVar29 = 0;
        }
        else {
          uVar29 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
          lVar27 = *(long *)(lVar31 + 0x2a290);
          uVar29 = uVar29 & 0xffffffff;
          if (lVar27 == 0) goto LAB_00be3214;
        }
        plVar32 = *(long **)(lVar27 + 0x20);
        if (plVar32 != (long *)0x0) {
          local_f88 = *(undefined ***)(lVar31 + 0x2a270);
          local_f80 = *(char **)(lVar31 + 0x2a278);
          local_f78 = (uint *)0x90;
          (**(code **)(*plVar32 + 0x20))(plVar32,&local_f88);
        }
      }
LAB_00be3214:
      lVar27 = *(long *)(lVar31 + 0x2a278) + *(long *)(lVar31 + 0x2a270);
      *(ulong *)(lVar27 + 0x48) =
           1L << ((ulong)*(uint *)(lVar27 + 0x50) & 0x3f) | *(ulong *)(lVar27 + 0x48);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar31 + 0x2a290) != 0)) &&
         (puVar28 = *(undefined8 **)(*(long *)(lVar31 + 0x2a290) + 0x18),
         puVar28 != (undefined8 *)0x0)) {
        (**(code **)*puVar28)();
      }
      FUN_0277dedc(&local_90);
      lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
      uVar16 = FUN_0277d6c4(&local_90);
      if ((uVar16 >> 3 & 0x1fff) < 0x753) {
        lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
        *(uint *)(lVar27 + lVar31) = *(uint *)(lVar27 + lVar31) | 1 << (ulong)(uVar16 & 0x1f);
      }
      local_818[0] = *param_2;
      if (7 < local_818[0]) {
        local_818[0] = 0xff;
      }
      uVar29 = FUN_02669430(local_818);
      if ((uVar29 & 1) != 0) {
        lVar27 = FUN_0264d580();
        if (lVar27 != 0) {
          local_f78 = (uint *)((ulong)local_f78 & 0xffffffffffffff00);
          local_f80 = (char *)(lVar27 + 0x1a0d78);
          if (*(long *)(lVar27 + 0x1a0da0) == 0) {
            uVar15 = 0;
          }
          else {
            puVar28 = *(undefined8 **)(*(long *)(lVar27 + 0x1a0da0) + 0x10);
            uVar15 = 0;
            if (puVar28 != (undefined8 *)0x0) {
              uVar15 = (**(code **)*puVar28)();
            }
          }
          local_f78 = (uint *)(CONCAT62(local_f78._2_6_,CONCAT11(uVar15,local_f78._0_1_)) &
                              0xffffffffffff01ff);
          local_f88 = (undefined **)(PTR_DAT_04bb6eb0 + 0x10);
          lVar27 = FUN_00be3988(&local_f88);
          FUN_02779e74(lVar27 + 0xb58,&local_90,0);
          FUN_02640184(&local_f88);
        }
      }
    }
    goto LAB_00be245c;
  case 10:
    uVar37 = 0x84;
    break;
  case 0xb:
    local_f88 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_f80 = "AlwJuneBrideDayCount";
    uVar16 = FUN_0274bce0(param_2,&local_f88);
    puVar1 = PTR_DAT_04bb57d8;
    puVar7 = PTR_DAT_04bb57d0;
    if ((((int)uVar16 < 8) && (local_f9c = uVar16, uVar16 != 0)) && (uVar16 != 7)) {
      lVar27 = *(long *)PTR_DAT_04bb32f0;
      if (*(int *)(lVar27 + 0x1070) != 0) {
        puVar28 = *(undefined8 **)(lVar27 + 0x1078);
        puVar3 = puVar28 + *(int *)(lVar27 + 0x1070);
        cVar42 = *PTR_DAT_04bb57d0;
        uVar17 = *(uint *)(lVar27 + 0x1048);
        do {
          uVar18 = *(uint *)*puVar28;
          if ((int)uVar17 < 1) {
            if (*(long *)(lVar27 + 0xf38) == 0) {
              puVar30 = (uint *)0x0;
            }
            else {
              puVar30 = *(uint **)(*(long *)(lVar27 + 0xf38) + 8);
              if (puVar30 == (uint *)0x0) {
                puVar30 = (uint *)0x0;
              }
              else if ((uVar18 < *(uint *)(lVar27 + 0xf50)) &&
                      (*(char *)(*(long *)(lVar27 + 0xf58) + (long)(int)uVar18) == '\0')) {
                puVar30 = (uint *)0x0;
              }
              else if (uVar18 < *puVar30) {
                if (puVar30[1] == 0) {
                  puVar30 = (uint *)0x0;
                }
                else if ((ushort)puVar30[2] == 0) {
                  puVar30 = (uint *)0x0;
                }
                else {
                  iVar19 = 0xc;
                  if (*(char *)((long)puVar30 + 10) != '\0') {
                    iVar19 = 0x1c;
                  }
                  puVar30 = (uint *)((ulong)(puVar30[1] * uVar18 + (uint)(ushort)puVar30[2] * 8 +
                                            iVar19) + (long)puVar30);
                }
              }
              else {
                puVar30 = (uint *)0x0;
              }
            }
          }
          else if (uVar18 < uVar17) {
            if (*(uint *)(lVar27 + 0x1038) <= uVar18) {
              uVar18 = 0;
            }
            puVar30 = *(uint **)(*(long *)(lVar27 + 0x1040) + (ulong)uVar18 * 8);
          }
          else {
            puVar30 = (uint *)0x0;
          }
          while (uVar18 = *puVar30, uVar18 != 0) {
            if (cVar42 == '\0') {
              cVar42 = '\x01';
              *(undefined8 *)puVar1 = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
              *puVar7 = 1;
              uVar18 = *puVar30;
            }
            else {
              uVar4 = *(uint *)(puVar1 + 0xc);
              if (-1 < (int)uVar4) {
                local_6c = 0;
                if (((byte *)((ulong)uVar4 + (long)puVar30) == (byte *)0x0) ||
                   (bVar39 = *(byte *)((ulong)uVar4 + (long)puVar30), local_6c = (uint)bVar39,
                   bVar39 < 8)) goto LAB_00be1800;
                break;
              }
              if (uVar4 != 0xffffffff) break;
            }
            puVar41 = (uint *)(ulong)uVar18;
            if ((puVar41 == (uint *)0x0) || (puVar30 == puVar41)) break;
            lVar31 = 0xc;
            if (*(char *)((long)puVar30 + (10 - (long)puVar41)) != '\0') {
              lVar31 = 0x1c;
            }
            lVar31 = (long)puVar30 + (lVar31 - (long)puVar41);
            if (lVar31 == 0) break;
            uVar29 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar41));
            *(undefined4 *)(puVar1 + 0xc) = 0xfffffffe;
            if (uVar29 == 0) break;
            piVar35 = (int *)(lVar31 + 4);
            while (piVar35[-1] != 0x7c226372) {
              piVar35 = piVar35 + 2;
              uVar29 = uVar29 - 1;
              if (uVar29 == 0) goto LAB_00be17fc;
            }
            iVar19 = 0;
            if (*piVar35 != -1) {
              iVar19 = *piVar35;
            }
            *(int *)(puVar1 + 0xc) = iVar19;
          }
LAB_00be17fc:
          local_6c = 0;
LAB_00be1800:
          if (local_6c == uVar16) {
            uVar33 = FUN_0089c9c8(lVar27 + 0xe88,uVar16 - 1);
            puVar34 = (ushort *)FUN_0088bf00(uVar33,1,0x60836eaa,0);
            if (puVar34 == (ushort *)0x0) {
              uVar36 = 0xfffe;
            }
            else {
              uVar36 = *puVar34;
            }
            local_f88 = (undefined **)(ulong)uVar36;
            FUN_0277d4ac(&local_f88);
            puVar34 = (ushort *)FUN_0088bf00(uVar33,2,0x657550b3,0);
            if (puVar34 == (ushort *)0x0) {
              uVar36 = 0xfffe;
            }
            else {
              uVar36 = *puVar34;
            }
            local_90 = (undefined **)(ulong)uVar36;
            FUN_0277d4ac(&local_90);
            uVar29 = FUN_0264a1e0(param_2,&local_f88);
            if (((uVar29 & 1) == 0) || (uVar29 = FUN_0264a1e0(param_2,&local_90), (uVar29 & 1) != 0)
               ) {
LAB_00be3848:
              puVar28 = &local_f88;
            }
            else {
              puVar28 = &local_90;
              uVar29 = FUN_0277d9a8(&local_90);
              if ((uVar29 & 1) == 0) goto LAB_00be3848;
            }
            local_f80._0_4_ = *(undefined4 *)puVar28;
            local_f80._4_4_ = *(undefined4 *)((long)puVar28 + 4);
            goto LAB_00be33c4;
          }
          puVar28 = puVar28 + 1;
        } while (puVar28 != puVar3);
      }
    }
    goto LAB_00be245c;
  case 0xc:
    local_f88 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_f80 = "SeoFirstFlag";
    iVar19 = FUN_0274bce0(param_2,&local_f88);
    if (iVar19 == 0) {
      uVar37 = 0xbe;
      break;
    }
    local_90._0_4_ = 0xbe;
    local_f88 = &PTR_FUN_049ff4e8;
    local_f80 = (char *)&local_90;
    FUN_008a1ba0(&local_808,&local_f88);
    local_90 = (undefined **)CONCAT44(local_90._4_4_,0x90);
    local_f88 = &PTR_FUN_049ff4e8;
    local_f80 = (char *)&local_90;
    FUN_008a1ba0(&local_808,&local_f88);
    local_f88 = (undefined **)0x32a8;
    FUN_0277d4ac(&local_f88);
    lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
    uVar16 = FUN_0277d6c4(&local_f88);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar31) =
           *(uint *)(lVar27 + lVar31) & (1 << (ulong)(uVar16 & 0x1f) ^ 0xffffffffU);
    }
    lVar31 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar27 = 0;
    uVar16 = 0;
    do {
      puVar30 = (uint *)(lVar31 + lVar27);
      lVar27 = lVar27 + 4;
      uVar17 = *puVar30 - (*puVar30 >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
      uVar17 = uVar17 + (uVar17 >> 8);
      uVar16 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + uVar16;
    } while (lVar27 != 0x754);
    local_f88 = (undefined **)(puVar7 + 0x10);
    memset(&local_f80,0,0x754);
    uVar17 = nn::os::GetSystemTick();
    local_82c = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 1;
    local_828 = (local_82c ^ local_82c >> 0x1e) * 0x6c078965 + 2;
    local_824 = (local_828 ^ local_828 >> 0x1e) * 0x6c078965 + 3;
    local_820 = (local_824 ^ local_824 >> 0x1e) * 0x6c078965 + 4;
    memcpy(&local_f80,auStack_800,0x754);
    puVar7 = PTR_DAT_04bb43c0;
    if (uVar16 != 0) {
      uVar17 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      do {
        uVar17 = uVar17 + 1;
        FUN_00889f80(&local_f9c,&local_f88,uVar17);
        lVar27 = *(long *)puVar7;
        uVar18 = FUN_0277d6c4(&local_f9c);
        lVar31 = *(long *)puVar7;
        if (lVar31 != 0) {
          lVar27 = *(long *)(lVar27 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar27 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            local_80 = 0;
            local_88 = (uint *)CONCAT44(local_f98,local_f9c);
            local_90 = (undefined **)puVar1;
            uVar18 = FUN_0277d6c4(&local_88);
            if (*(long *)puVar7 != 0) {
              lVar27 = *(long *)(lVar31 + 0x57e58);
              uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
              if ((uVar18 < *(uint *)(lVar27 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                lVar27 = *(long *)PTR_DAT_04bc0428;
                uVar18 = FUN_0277d6c4(&local_f9c);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                if (uVar18 < *(uint *)(lVar27 + 0x1d8)) {
                  lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar18 * 8);
                  if (lVar27 != 0) {
                    local_80 = lVar27;
                  }
                }
              }
            }
            uVar29 = FUN_01ae6420(&local_90);
            if ((uVar29 & 1) == 0) {
              uVar29 = FUN_0264a1e0(param_2,&local_f9c);
            }
            else {
              uVar29 = FUN_0261f280(*(undefined8 *)PTR_DAT_04bb46f0,&local_f9c,param_2);
            }
            if ((uVar29 & 1) != 0) {
              lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
              uVar18 = FUN_0277d6c4(&local_f9c);
              if ((uVar18 >> 3 & 0x1fff) < 0x753) {
                lVar31 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
                *(uint *)(lVar27 + lVar31) =
                     *(uint *)(lVar27 + lVar31) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
              }
            }
          }
        }
      } while (uVar17 < uVar16);
    }
    lVar31 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar27 = 0;
    uVar16 = 0;
    do {
      puVar30 = (uint *)(lVar31 + lVar27);
      lVar27 = lVar27 + 4;
      uVar17 = *puVar30 - (*puVar30 >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
      uVar17 = uVar17 + (uVar17 >> 8);
      uVar16 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + uVar16;
    } while (lVar27 != 0x754);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        uVar17 = uVar17 + 1;
        FUN_00889f80(&local_90,&local_808,uVar17);
        FUN_0277d6c4(&local_90);
      } while (uVar17 < uVar16);
    }
    lVar31 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar27 = 0;
    iVar19 = 0;
    do {
      puVar30 = (uint *)(lVar31 + lVar27);
      lVar27 = lVar27 + 4;
      uVar16 = *puVar30 - (*puVar30 >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      iVar19 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + iVar19;
    } while (lVar27 != 0x754);
    if (iVar19 == 0) {
      puVar30 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar16 = *puVar30 ^ *puVar30 << 0xb;
      uVar17 = puVar30[3];
      *puVar30 = puVar30[1];
      puVar30[1] = puVar30[2];
      uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
      puVar30[2] = uVar17;
      puVar30[3] = uVar16;
      if ((uint)((ulong)uVar16 * 100 >> 0x20) < 0x14) {
        local_f9c = 0x90;
        local_90 = &PTR_FUN_049ff4e8;
        local_88 = &local_f9c;
        FUN_008a1ba0(&local_808,&local_90);
        local_90 = (undefined **)0x32a8;
        FUN_0277d4ac(&local_90);
        FUN_01a44ff8(&local_808,&local_90);
      }
      else {
        local_90 = (undefined **)0x32a8;
        FUN_0277d4ac(&local_90);
        FUN_01a45058(&local_808,&local_90);
      }
    }
    goto LAB_00be245c;
  case 0xd:
    local_f8c[0] = *param_2;
    if (7 < local_f8c[0]) {
      local_f8c[0] = 0xff;
    }
    lVar27 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_f8c,1);
    if (lVar27 != 0) {
      lVar31 = lVar27 + 0x194b0;
      if (*(long *)(lVar27 + 0x194b8) == 0) {
        lVar31 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      plVar32 = (long *)(lVar31 + 0x2a270);
      if ((*(long **)(lVar31 + 0x2a290) == (long *)0x0) ||
         (puVar28 = (undefined8 *)**(long **)(lVar31 + 0x2a290), puVar28 == (undefined8 *)0x0)) {
        FUN_02825968(param_1,*(long *)(lVar31 + 0x2a278) + *plVar32);
        return;
      }
      uVar29 = (**(code **)*puVar28)();
      FUN_02825968(param_1,*(long *)(lVar31 + 0x2a278) + *plVar32);
      goto joined_r0x00be1c14;
    }
    uVar37 = 0x89;
    break;
  case 0xe:
    uVar37 = 0x8d;
LAB_00be1c3c:
    local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar37);
LAB_00be2020:
    local_f80 = (char *)&local_90;
    local_f88 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_808,&local_f88);
    puVar30 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar16 = *puVar30 ^ *puVar30 << 0xb;
    uVar18 = puVar30[3];
    *puVar30 = puVar30[1];
    puVar30[1] = puVar30[2];
    uVar17 = uVar16 ^ uVar18;
    uVar16 = uVar16 >> 8 ^ uVar18 >> 0x13 ^ uVar17;
    puVar30[2] = uVar18;
    puVar30[3] = uVar16;
    local_f9c = (uVar16 ^ uVar17 >> 0x1e) * 0x6c078965 + 1;
    local_f98 = (local_f9c ^ local_f9c >> 0x1e) * 0x6c078965 + 2;
    local_f94 = (local_f98 ^ local_f98 >> 0x1e) * 0x6c078965 + 3;
    uStack_f90 = (local_f94 ^ local_f94 >> 0x1e) * 0x6c078965 + 4;
    *param_1 = 0xfffe;
    FUN_0277d4ac(param_1);
    if ((((*param_2 < 8) && (uVar16 = FUN_02582d8c(param_2,1), uVar16 < 8)) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar16 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar16 * 0x13f0 + 0x13d6) != '\0')) {
      bVar39 = *param_2;
      if (7 < bVar39) {
        bVar39 = 0xff;
      }
      local_f88 = (undefined **)CONCAT71(local_f88._1_7_,bVar39);
      lVar27 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_f88,1);
      if (lVar27 != 0) {
        lVar31 = lVar27 + 0x194b0;
        if (*(long *)(lVar27 + 0x194b8) == 0) {
          lVar31 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if ((*(long **)(lVar31 + 0x1090) == (long *)0x0) ||
           (puVar28 = (undefined8 *)**(long **)(lVar31 + 0x1090), puVar28 == (undefined8 *)0x0)) {
          uVar29 = 0;
        }
        else {
          uVar29 = (**(code **)*puVar28)();
          uVar29 = uVar29 & 0xffffffff;
        }
        FUN_01a4d290(&local_f88,&local_f9c,&local_808,
                     *(long *)(lVar31 + 0x1078) + *(long *)(lVar31 + 0x1070),0,0,PTR_FUN_04bb67e0,0)
        ;
        *(undefined4 *)param_1 = (undefined4)local_f88;
        *(undefined4 *)((long)param_1 + 4) = local_f88._4_4_;
        if ((((uVar29 & 1) != 0) && (*(long *)(lVar31 + 0x1090) != 0)) &&
           (puVar28 = *(undefined8 **)(*(long *)(lVar31 + 0x1090) + 8), puVar28 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar28)();
        }
      }
    }
    sVar5 = (short)*param_1;
    if (sVar5 == -2) {
      lVar31 = (**(code **)(local_808 + 0x20))(&local_808);
      lVar27 = 0;
      iVar19 = 0;
      do {
        puVar30 = (uint *)(lVar31 + lVar27);
        lVar27 = lVar27 + 4;
        uVar16 = *puVar30 - (*puVar30 >> 1 & 0x55555555);
        uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
        uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
        uVar16 = uVar16 + (uVar16 >> 8);
        iVar19 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + iVar19;
      } while (lVar27 != 0x754);
      if (iVar19 == 0) goto LAB_00be29b0;
      lVar31 = (**(code **)(local_808 + 0x20))(&local_808);
      lVar27 = 0;
      uVar16 = 0;
      do {
        puVar30 = (uint *)(lVar31 + lVar27);
        lVar27 = lVar27 + 4;
        uVar17 = *puVar30 - (*puVar30 >> 1 & 0x55555555);
        uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
        uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
        uVar17 = uVar17 + (uVar17 >> 8);
        uVar16 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + uVar16;
      } while (lVar27 != 0x754);
      goto LAB_00be258c;
    }
    goto LAB_00be29d8;
  case 0xf:
    local_90._0_4_ = 0x69;
    local_f88 = &PTR_FUN_049ff4e8;
    local_f80 = (char *)&local_90;
    FUN_008a1ba0(&local_808,&local_f88);
    local_90._0_4_ = 0x6a;
    local_f88 = &PTR_FUN_049ff4e8;
    local_f80 = (char *)&local_90;
    FUN_008a1ba0(&local_808,&local_f88);
    local_90 = (undefined **)CONCAT44(local_90._4_4_,0x6b);
    local_f88 = &PTR_FUN_049ff4e8;
    local_f80 = (char *)&local_90;
    FUN_008a1ba0(&local_808,&local_f88);
    uVar37 = 0x6c;
    goto LAB_00be2018;
  case 0x10:
    uVar37 = 0x69;
    break;
  case 0x11:
    uVar37 = 0x6a;
    break;
  case 0x12:
    uVar37 = 0x6b;
    break;
  case 0x13:
    ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_f80 = "GetHalloweenRag";
    local_f88 = ppuVar2;
    iVar19 = FUN_0274bce0(param_2,&local_f88);
    local_f80 = "GetHalloweenWallPaper";
    local_f88 = ppuVar2;
    iVar20 = FUN_0274bce0(param_2,&local_f88);
    local_f80 = "GetHalloweenFloor";
    local_f88 = ppuVar2;
    iVar21 = FUN_0274bce0(param_2,&local_f88);
    local_f80 = "GetHalloweenStickRecipe";
    local_f88 = ppuVar2;
    iVar22 = FUN_0274bce0(param_2,&local_f88);
    local_f80 = "GetHalloweenGarland";
    local_f88 = ppuVar2;
    iVar23 = FUN_0274bce0(param_2,&local_f88);
    local_f80 = "GetHalloweenTableSetting";
    local_f88 = ppuVar2;
    iVar24 = FUN_0274bce0(param_2,&local_f88);
    local_f80 = "GetHalloweenBag";
    local_f88 = ppuVar2;
    iVar25 = FUN_0274bce0(param_2,&local_f88);
    if (iVar19 == 0) {
      local_f88 = (undefined **)0x1d79;
      FUN_0277d4ac(&local_f88);
      FUN_01a45058(&local_808,&local_f88);
    }
    if (iVar20 == 0) {
      local_f88 = (undefined **)0x33a8;
      FUN_0277d4ac(&local_f88);
      FUN_01a45058(&local_808,&local_f88);
    }
    if (iVar21 == 0) {
      local_f88 = (undefined **)0x33a9;
      FUN_0277d4ac(&local_f88);
      FUN_01a45058(&local_808,&local_f88);
    }
    if (iVar22 == 0) {
      local_f88 = (undefined **)0x33b5;
      FUN_0277d4ac(&local_f88);
      FUN_01a45058(&local_808,&local_f88);
    }
    if (iVar23 == 0) {
      local_f88 = (undefined **)0x33a6;
      FUN_0277d4ac(&local_f88);
      FUN_01a45058(&local_808,&local_f88);
    }
    if (iVar24 == 0) {
      local_f88 = (undefined **)0x33a7;
      FUN_0277d4ac(&local_f88);
      FUN_01a45058(&local_808,&local_f88);
    }
    if (iVar25 == 0) {
      local_f88 = (undefined **)0x32d7;
      FUN_0277d4ac(&local_f88);
      FUN_01a45058(&local_808,&local_f88);
    }
    lVar31 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar27 = 0;
    iVar19 = 0;
    do {
      puVar30 = (uint *)(lVar31 + lVar27);
      lVar27 = lVar27 + 4;
      uVar16 = *puVar30 - (*puVar30 >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      iVar19 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + iVar19;
    } while (lVar27 != 0x754);
    if (iVar19 == 0) {
      puVar30 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar16 = *puVar30 ^ *puVar30 << 0xb;
      uVar17 = puVar30[3];
      *puVar30 = puVar30[1];
      puVar30[1] = puVar30[2];
      uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
      puVar30[2] = uVar17;
      puVar30[3] = uVar16;
      uVar16 = (uint)((ulong)uVar16 * 100 >> 0x20);
      if (uVar16 < 7) {
        local_f88 = (undefined **)0x33a6;
      }
      else {
        if (0xd < uVar16) {
          *param_1 = 0xfffe;
          FUN_0277d4ac(param_1);
          if (uVar16 < 0x18) {
            local_f88 = (undefined **)0x11af;
          }
          else if (uVar16 < 0x22) {
            local_f88 = (undefined **)0x11ae;
          }
          else if (uVar16 < 0x2c) {
            local_f88 = (undefined **)0x11b0;
          }
          else {
            local_f88 = (undefined **)0x11ad;
          }
          FUN_0277d4ac(&local_f88);
          *(undefined4 *)param_1 = (undefined4)local_f88;
          *(undefined4 *)((long)param_1 + 4) = local_f88._4_4_;
          uVar29 = FUN_0277d9a8(param_1);
          if ((uVar29 & 1) != 0) {
            FUN_01ad5d04(&local_f88,param_1);
            uVar29 = FUN_01af0020(&local_f88);
            if ((uVar29 & 1) == 0) {
              return;
            }
            iVar19 = 4;
            goto LAB_00be138c;
          }
          goto LAB_00be245c;
        }
        local_f88 = (undefined **)0x33a7;
      }
      FUN_0277d4ac(&local_f88);
      FUN_01a45058(&local_808,&local_f88);
    }
    goto LAB_00be245c;
  case 0x14:
    uVar37 = 0x6c;
    break;
  case 0x15:
    local_90 = (undefined **)0x165f;
    FUN_0277d4ac(&local_90);
    puVar7 = PTR_DAT_04bb43c0;
    local_f78 = (uint *)0x0;
    local_f88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_f80 = (char *)local_90;
    lVar27 = *(long *)PTR_DAT_04bb43c0;
    uVar16 = FUN_0277d6c4(&local_f80);
    if (*(long *)puVar7 != 0) {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
        lVar27 = *(long *)PTR_DAT_04bc0428;
        uVar16 = FUN_0277d6c4(&local_90);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if (uVar16 < *(uint *)(lVar27 + 0x1d8)) {
          puVar30 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8);
          if (puVar30 != (uint *)0x0) {
            local_f78 = puVar30;
          }
        }
      }
    }
    uVar16 = nn::os::GetSystemTick();
    uVar17 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
    uVar16 = uVar17 ^ uVar17 * 0x800;
    uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
    uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
    uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
    iVar19 = (int)((ulong)(uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17) * 10 >> 0x20) + 1;
    goto LAB_00be1fcc;
  case 0x16:
    local_90._0_4_ = 0x6d;
    local_f88 = &PTR_FUN_049ff4e8;
    local_f80 = (char *)&local_90;
    FUN_008a1ba0(&local_808,&local_f88);
    local_90 = (undefined **)CONCAT44(local_90._4_4_,0x6e);
    local_f88 = &PTR_FUN_049ff4e8;
    local_f80 = (char *)&local_90;
    FUN_008a1ba0(&local_808,&local_f88);
    uVar37 = 0x6f;
LAB_00be2018:
    local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar37);
    goto LAB_00be2020;
  case 0x17:
    uVar37 = 0x6d;
    break;
  case 0x18:
    uVar37 = 0x6e;
    break;
  case 0x19:
    uVar37 = 0x6f;
    break;
  default:
    local_f88 = (undefined **)0x508;
LAB_00be1254:
    FUN_0277d4ac(&local_f88);
LAB_00be1260:
    FUN_0277dedc(&local_f88);
    lVar27 = (**(code **)(local_808 + 0x18))(&local_808);
    uVar16 = FUN_0277d6c4(&local_f88);
    if ((uVar16 >> 3 & 0x1fff) < 0x753) {
      lVar31 = (ulong)((uVar16 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar31) = *(uint *)(lVar27 + lVar31) | 1 << (ulong)(uVar16 & 0x1f);
    }
    goto LAB_00be245c;
  }
  local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar37);
  local_f80 = (char *)&local_90;
  local_f88 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_808,&local_f88);
LAB_00be245c:
  puVar30 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar16 = *puVar30 ^ *puVar30 << 0xb;
  uVar18 = puVar30[3];
  *puVar30 = puVar30[1];
  puVar30[1] = puVar30[2];
  uVar17 = uVar16 ^ uVar18;
  uVar16 = uVar16 >> 8 ^ uVar18 >> 0x13 ^ uVar17;
  puVar30[2] = uVar18;
  puVar30[3] = uVar16;
  local_f9c = (uVar16 ^ uVar17 >> 0x1e) * 0x6c078965 + 1;
  local_f98 = (local_f9c ^ local_f9c >> 0x1e) * 0x6c078965 + 2;
  local_f94 = (local_f98 ^ local_f98 >> 0x1e) * 0x6c078965 + 3;
  uStack_f90 = (local_f94 ^ local_f94 >> 0x1e) * 0x6c078965 + 4;
  *param_1 = 0xfffe;
  FUN_0277d4ac(param_1);
  lVar31 = (**(code **)(local_808 + 0x20))(&local_808);
  lVar27 = 0;
  iVar19 = 0;
  do {
    puVar30 = (uint *)(lVar31 + lVar27);
    lVar27 = lVar27 + 4;
    uVar16 = *puVar30 - (*puVar30 >> 1 & 0x55555555);
    uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
    uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
    uVar16 = uVar16 + (uVar16 >> 8);
    iVar19 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + iVar19;
  } while (lVar27 != 0x754);
  if (iVar19 == 0) {
LAB_00be29b0:
    uVar15 = PTR_DAT_04bb37e0[2];
    uVar40 = PTR_DAT_04bb37e0[3];
    psVar43 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    lVar31 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar27 = 0;
    uVar16 = 0;
    do {
      puVar30 = (uint *)(lVar31 + lVar27);
      lVar27 = lVar27 + 4;
      uVar17 = *puVar30 - (*puVar30 >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
      uVar17 = uVar17 + (uVar17 >> 8);
      uVar16 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + uVar16;
    } while (lVar27 != 0x754);
LAB_00be258c:
    uVar17 = local_f9c ^ local_f9c << 0xb;
    local_f9c = local_f98;
    local_f98 = local_f94;
    uVar17 = uVar17 >> 8 ^ uStack_f90 >> 0x13 ^ uVar17 ^ uStack_f90;
    local_f94 = uStack_f90;
    uStack_f90 = uVar17;
    FUN_00889f80(&local_f88,&local_808,(int)((ulong)uVar17 * (ulong)uVar16 >> 0x20) + 1);
    FUN_01a4c66c(&local_f9c,&local_f88);
    psVar43 = (short *)&local_f88;
    uVar15 = local_f88._2_1_;
    uVar40 = local_f88._3_1_;
  }
  sVar5 = *psVar43;
  *(undefined1 *)((long)param_1 + 2) = uVar15;
  *(undefined1 *)((long)param_1 + 3) = uVar40;
  uVar37 = *(undefined4 *)(psVar43 + 2);
  *(short *)param_1 = sVar5;
  *(undefined4 *)((long)param_1 + 4) = uVar37;
LAB_00be29d8:
  puVar1 = PTR_DAT_04bc0510;
  puVar7 = PTR_DAT_04bb43c0;
  switch(local_94) {
  case 3:
  case 5:
    iVar19 = FUN_0277d6c4(param_1);
    if ((((iVar19 != 0xe09) && (iVar19 = FUN_0277d6c4(param_1), iVar19 != 0xe07)) &&
        (iVar19 = FUN_0277d6c4(param_1), iVar19 != 0xe0a)) &&
       (iVar19 = FUN_0277d6c4(param_1), iVar19 != 0xe08)) {
      iVar19 = FUN_0277d6c4(param_1);
      if (iVar19 == 0x12c0) {
        pvVar26 = (void *)(**(code **)(local_808 + 0x18))(&local_808);
        memset(pvVar26,0,0x754);
        local_f88 = (undefined **)0x12c0;
        FUN_0277d4ac(&local_f88);
        FUN_01a45058(&local_808,&local_f88);
        local_f88 = (undefined **)0x2b17;
        FUN_0277d4ac(&local_f88);
        FUN_01a45058(&local_808,&local_f88);
        local_f88 = (undefined **)0x2b18;
      }
      else {
        iVar19 = FUN_0277d6c4(param_1);
        if (iVar19 != 0x119e) {
          return;
        }
        pvVar26 = (void *)(**(code **)(local_808 + 0x18))(&local_808);
        memset(pvVar26,0,0x754);
        local_f88 = (undefined **)0x119e;
        FUN_0277d4ac(&local_f88);
        FUN_01a45058(&local_808,&local_f88);
        local_f88 = (undefined **)0x2bd1;
        FUN_0277d4ac(&local_f88);
        FUN_01a45058(&local_808,&local_f88);
        local_f88 = (undefined **)0x2bd2;
        FUN_0277d4ac(&local_f88);
        FUN_01a45058(&local_808,&local_f88);
        local_f88 = (undefined **)0x2bd3;
      }
      FUN_0277d4ac(&local_f88);
      FUN_01a45058(&local_808,&local_f88);
      FUN_01a4ca70(&local_f88,&local_f9c,&local_808,0,PTR_FUN_04bb67e0,0);
      goto LAB_00be33c0;
    }
    puVar7 = PTR_DAT_04bb43c0;
    local_f78 = (uint *)0x0;
    local_f88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_f80 = (char *)*param_1;
    lVar27 = *(long *)PTR_DAT_04bb43c0;
    uVar16 = FUN_0277d6c4(&local_f80);
    if (*(long *)puVar7 != 0) {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
        lVar27 = *(long *)PTR_DAT_04bc0428;
        uVar16 = FUN_0277d6c4(param_1);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if (uVar16 < *(uint *)(lVar27 + 0x1d8)) {
          lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8);
          if (lVar27 != 0) {
            local_f78 = (uint *)lVar27;
          }
        }
      }
    }
    iVar19 = FUN_01ad7260(&local_f88);
    if ((iVar19 != 0) && (puVar34 = (ushort *)FUN_01afd600(&local_f88), puVar34 != (ushort *)0x0)) {
      *puVar34 = *puVar34 & 0xfff8;
    }
    *(undefined4 *)param_1 = (undefined4)local_f80;
    *(undefined4 *)((long)param_1 + 4) = local_f80._4_4_;
    uVar29 = FUN_0264ccd0(param_2,param_1);
    if ((uVar29 & 1) == 0) {
      return;
    }
    iVar19 = FUN_01ad7260(&local_f88);
    if (iVar19 == 0) {
      return;
    }
    puVar30 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar29 = FUN_01ad7260(&local_f88);
    uVar17 = puVar30[3];
    uVar16 = *puVar30 ^ *puVar30 << 0xb;
    *puVar30 = puVar30[1];
    puVar30[1] = puVar30[2];
    uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
    puVar30[2] = uVar17;
    puVar30[3] = uVar16;
    iVar19 = FUN_01ad7260(&local_f88);
    if (iVar19 != 0) {
      lVar27 = (ulong)uVar16 * (uVar29 & 0xffffffff);
      iVar19 = (int)((ulong)lVar27 >> 0x20);
      if (((iVar19 == 0) || (iVar20 = FUN_01ad7260(&local_f88), iVar19 < iVar20)) &&
         (puVar34 = (ushort *)FUN_01afd600(&local_f88), puVar34 != (ushort *)0x0)) {
        *puVar34 = *puVar34 & 0xfff8 | (ushort)((ulong)lVar27 >> 0x20) & 7;
      }
    }
    goto LAB_00be2f5c;
  default:
    goto switchD_00be29fc_caseD_4;
  case 0xc:
    lVar31 = *(long *)PTR_DAT_04bb43c0;
    uVar16 = FUN_0277d6c4(param_1);
    lVar27 = *(long *)puVar7;
    if (lVar27 == 0) {
      return;
    }
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if (*(uint *)(lVar31 + 0x1d8) <= uVar16) {
      return;
    }
    if (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) == 0) {
      return;
    }
    local_f78 = (uint *)0x0;
    local_f80 = (char *)*param_1;
    local_f88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    uVar16 = FUN_0277d6c4(&local_f80);
    if (*(long *)puVar7 == 0) {
LAB_00be3198:
      local_6c = 0;
    }
    else {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((*(uint *)(lVar27 + 0x1d8) <= uVar16) ||
         (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) == 0)) goto LAB_00be3198;
      lVar27 = *(long *)PTR_DAT_04bc0428;
      uVar16 = FUN_0277d6c4(param_1);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((*(uint *)(lVar27 + 0x1d8) <= uVar16) ||
         (puVar30 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8),
         puVar30 == (uint *)0x0)) goto LAB_00be3198;
      local_6c = 0;
      uVar16 = *puVar30;
      if ((uVar16 != 0) && (puVar30 != (uint *)(ulong)uVar16)) {
        puVar41 = (uint *)((long)puVar30 - (long)(ulong)uVar16);
        local_6c = 0;
        if (*puVar41 != 0) {
          uVar16 = puVar41[1];
          if ((uVar16 != 0) && ((ulong)(ushort)puVar41[2] != 0)) {
            lVar27 = 0xc;
            if (*(char *)((long)puVar41 + 10) != '\0') {
              lVar27 = 0x1c;
            }
            lVar27 = (long)puVar41 + lVar27 + (ulong)(ushort)puVar41[2] * 8;
            if (lVar27 != 0) {
              uVar17 = 0;
              if ((ulong)uVar16 != 0) {
                uVar17 = (uint)((ulong)((long)puVar30 - lVar27) / (ulong)uVar16);
              }
              if (*puVar41 <= uVar17) {
                uVar17 = 0xffffffff;
              }
              if ((uVar17 < *(uint *)PTR_DAT_04bc0068) &&
                 (uVar36 = *(ushort *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar17 * 2),
                 local_6c = (uint)uVar36, uVar36 < 0x13e)) goto LAB_00be31a0;
            }
          }
          local_6c = 0;
        }
      }
    }
LAB_00be31a0:
    if (local_6c != 0xbe) {
      return;
    }
    local_90 = (undefined **)0xfffe;
    FUN_0277d4ac(&local_90);
    uVar29 = FUN_026219b0(*(undefined8 *)PTR_DAT_04bb46f0,&local_90,param_1);
    if ((uVar29 & 1) == 0) {
      return;
    }
LAB_00be1390:
    local_f80._0_4_ = (undefined4)local_90;
    local_f80._4_4_ = local_90._4_4_;
    break;
  case 0xf:
  case 0x10:
  case 0x11:
    local_f78 = (uint *)0x0;
    local_f80._0_4_ = CONCAT22(*(undefined2 *)((long)param_1 + 2),sVar5);
    local_f88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_f80 = (char *)CONCAT44(*(undefined4 *)((long)param_1 + 4),(undefined4)local_f80);
    lVar27 = *(long *)PTR_DAT_04bb43c0;
    uVar16 = FUN_0277d6c4(&local_f80);
    if (*(long *)puVar7 == 0) {
      return;
    }
    lVar27 = *(long *)(lVar27 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if (*(uint *)(lVar27 + 0x1d8) <= uVar16) {
      return;
    }
    if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) == 0) {
      return;
    }
    lVar27 = *(long *)PTR_DAT_04bc0428;
    uVar16 = FUN_0277d6c4(param_1);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if (*(uint *)(lVar27 + 0x1d8) <= uVar16) {
      return;
    }
    local_f78 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8);
    if (local_f78 == (uint *)0x0) {
      return;
    }
    uVar16 = *local_f78;
    if (uVar16 == 0) {
      return;
    }
    if (local_f78 == (uint *)(ulong)uVar16) {
      return;
    }
    puVar30 = (uint *)((long)local_f78 - (long)(ulong)uVar16);
    if (*puVar30 == 0) {
      return;
    }
    uVar16 = puVar30[1];
    if (uVar16 == 0) {
      return;
    }
    if ((ulong)(ushort)puVar30[2] == 0) {
      return;
    }
    lVar27 = 0xc;
    if (*(char *)((long)puVar30 + 10) != '\0') {
      lVar27 = 0x1c;
    }
    lVar27 = (long)puVar30 + lVar27 + (ulong)(ushort)puVar30[2] * 8;
    if (lVar27 == 0) {
      return;
    }
    uVar17 = 0;
    if ((ulong)uVar16 != 0) {
      uVar17 = (uint)((ulong)((long)local_f78 - lVar27) / (ulong)uVar16);
    }
    if (*puVar30 <= uVar17) {
      uVar17 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bc00c8 <= uVar17) {
      return;
    }
    if (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2) != 0x31) {
      return;
    }
    iVar19 = 5;
LAB_00be1fcc:
    FUN_01af2bc0(&local_f88,iVar19);
LAB_00be2f5c:
    break;
  case 0x13:
    local_f88 = (undefined **)0xfffe;
    FUN_0277d4ac(&local_f88);
    iVar19 = FUN_0277d6c4(param_1);
    if (iVar19 != 0x33b5) {
      return;
    }
    uVar29 = FUN_026219b0(*(undefined8 *)PTR_DAT_04bb46f0,&local_f88,param_1);
    if ((uVar29 & 1) == 0) {
      return;
    }
LAB_00be33c0:
    local_f80._0_4_ = (undefined4)local_f88;
    local_f80._4_4_ = local_f88._4_4_;
    break;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    local_f78 = (uint *)0x0;
    local_f80._0_4_ = CONCAT22(*(undefined2 *)((long)param_1 + 2),sVar5);
    local_f88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_f80 = (char *)CONCAT44(*(undefined4 *)((long)param_1 + 4),(undefined4)local_f80);
    lVar27 = *(long *)PTR_DAT_04bb43c0;
    uVar16 = FUN_0277d6c4(&local_f80);
    puVar8 = PTR_DAT_04bc0428;
    if (*(long *)puVar7 == 0) {
      return;
    }
    lVar27 = *(long *)(lVar27 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if (*(uint *)(lVar27 + 0x1d8) <= uVar16) {
      return;
    }
    if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) == 0) {
      return;
    }
    lVar27 = *(long *)PTR_DAT_04bc0428;
    uVar16 = FUN_0277d6c4(param_1);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if (*(uint *)(lVar27 + 0x1d8) <= uVar16) {
      return;
    }
    local_f78 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8);
    if (local_f78 == (uint *)0x0) {
      return;
    }
    uVar16 = *local_f78;
    if (uVar16 == 0) {
      return;
    }
    if (local_f78 == (uint *)(ulong)uVar16) {
      return;
    }
    puVar30 = (uint *)((long)local_f78 - (long)(ulong)uVar16);
    if (*puVar30 == 0) {
      return;
    }
    uVar16 = puVar30[1];
    if (uVar16 == 0) {
      return;
    }
    if ((ulong)(ushort)puVar30[2] == 0) {
      return;
    }
    lVar27 = 0xc;
    if (*(char *)((long)puVar30 + 10) != '\0') {
      lVar27 = 0x1c;
    }
    lVar27 = (long)puVar30 + lVar27 + (ulong)(ushort)puVar30[2] * 8;
    if (lVar27 == 0) {
      return;
    }
    uVar17 = 0;
    if ((ulong)uVar16 != 0) {
      uVar17 = (uint)((ulong)((long)local_f78 - lVar27) / (ulong)uVar16);
    }
    if (*puVar30 <= uVar17) {
      uVar17 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bc0068 <= uVar17) {
      return;
    }
    if (*(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar17 * 2) != 0x6f) {
      return;
    }
    iVar19 = FUN_01ad7260(&local_f88);
    if (iVar19 == 0) {
      return;
    }
    local_88 = (uint *)*param_1;
    local_90 = (undefined **)(puVar1 + 0x10);
    lVar27 = *(long *)puVar7;
    local_80 = 0;
    uVar16 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar7 != 0) {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
        lVar27 = *(long *)puVar8;
        uVar16 = FUN_0277d6c4(param_1);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if (uVar16 < *(uint *)(lVar27 + 0x1d8)) {
          lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8);
          if (lVar27 != 0) {
            local_80 = lVar27;
          }
        }
      }
    }
    puVar30 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar29 = FUN_01ad7260(&local_90);
    uVar17 = puVar30[3];
    uVar16 = *puVar30 ^ *puVar30 << 0xb;
    *puVar30 = puVar30[1];
    puVar30[1] = puVar30[2];
    uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
    puVar30[2] = uVar17;
    puVar30[3] = uVar16;
    iVar19 = FUN_01ad7260(&local_90);
    if (iVar19 != 0) {
      lVar27 = (ulong)uVar16 * (uVar29 & 0xffffffff);
      iVar19 = (int)((ulong)lVar27 >> 0x20);
      if (((iVar19 == 0) || (iVar20 = FUN_01ad7260(&local_90), iVar19 < iVar20)) &&
         (puVar34 = (ushort *)FUN_01afd600(&local_90), puVar34 != (ushort *)0x0)) {
        *puVar34 = *puVar34 & 0xfff8 | (ushort)((ulong)lVar27 >> 0x20) & 7;
      }
    }
    local_f80._0_4_ = (undefined4)local_88;
    local_f80._4_4_ = local_88._4_4_;
  }
LAB_00be33c4:
  *(undefined4 *)param_1 = (undefined4)local_f80;
  *(undefined4 *)((long)param_1 + 4) = local_f80._4_4_;
switchD_00be29fc_caseD_4:
  return;
}

