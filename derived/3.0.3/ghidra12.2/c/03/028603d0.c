
/* WARNING: Removing unreachable block (ram,0x02860684) */
/* WARNING: Removing unreachable block (ram,0x02860540) */
/* WARNING: Removing unreachable block (ram,0x028606cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028603d0(uint *param_1,uint *param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  void *__s;
  uint *puVar23;
  short *psVar24;
  long lVar25;
  uint *puVar26;
  int iVar27;
  uint local_78ac;
  undefined *local_78a0;
  char *pcStack_7898;
  undefined8 local_7890;
  char *pcStack_7888;
  undefined **local_7880;
  char *local_7878 [234];
  uint local_7124;
  uint local_7120;
  uint local_711c;
  int local_7118;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_ca;
  undefined6 uStack_c2;
  undefined2 local_bc;
  undefined6 uStack_ba;
  undefined8 local_b0;
  char *local_a8;
  undefined1 local_a0;
  byte local_9f;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  puVar9 = PTR_DAT_04bb2020;
  if (*(long *)param_2 != 0) {
    local_7880 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_7878[0] = "ShopItemSet";
    FUN_0273f3c4(&local_7880,1);
  }
  puVar26 = param_2 + 4;
  local_90 = *(undefined8 *)puVar26;
  FUN_00a81090(&local_90);
  local_98 = *(undefined8 *)(param_2 + 6);
  FUN_00a81090(&local_98);
  puVar10 = PTR_DAT_04bb46b0;
  lVar17 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))();
  lVar22 = 0;
  if (lVar17 != 0) {
    lVar22 = lVar17 + 0x276cb0;
  }
  if ((((*(long **)(lVar22 + 0x178) != (long *)0x0) &&
       (puVar18 = (undefined8 *)**(long **)(lVar22 + 0x178), puVar18 != (undefined8 *)0x0)) &&
      (uVar19 = (**(code **)*puVar18)(), (uVar19 & 1) != 0)) &&
     ((*(long *)(lVar22 + 0x178) != 0 &&
      (puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x178) + 8), puVar18 != (undefined8 *)0x0)))) {
    (**(code **)*puVar18)();
  }
  if (*(long *)param_2 < 1) {
    bVar8 = false;
    goto LAB_02860c80;
  }
  uVar16 = *param_1;
  if (3 < uVar16) {
    uVar16 = 0;
  }
  local_7880 = (undefined **)CONCAT44(local_7880._4_4_,uVar16);
  switch(uVar16) {
  case 0:
    bVar8 = true;
    *param_1 = 2;
    goto LAB_02860c68;
  case 1:
    local_7880 = (undefined **)CONCAT44(local_7880._4_4_,1);
    puVar18 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar18 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar18[1] != 0) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      local_7880 = (undefined **)(PTR_DAT_04bc43f8 + 0x10);
      local_7878[0] = (char *)CONCAT44(local_7878[0]._4_4_,DAT_05636e58);
      if ((DAT_05636e58 != 0) && (uVar19 = FUN_02a59140(puVar18,&local_7880), (uVar19 & 1) != 0)) {
        *param_1 = 2;
        lVar22 = *(long *)param_2;
        if (lVar22 == 1) {
          local_7880 = (undefined **)(puVar9 + 0x10);
          local_7878[0] = "MarketOpen1stDay1";
          FUN_0273f3c4(&local_7880);
          lVar22 = *(long *)param_2;
        }
        ppuVar1 = (undefined **)(puVar9 + 0x10);
        local_7878[0] = "CountMarket1AfterBuild";
        local_7880 = ppuVar1;
        FUN_0273f3c4(&local_7880,lVar22);
        local_7878[0] = "MarketBuilt";
        bVar8 = true;
        local_7880 = ppuVar1;
        FUN_0273f3c4(&local_7880,1);
        local_7878[0] = "FirstPlayAfterShopBuiltFlag";
        local_7880 = ppuVar1;
        FUN_0274e338(&local_7880,1);
        lVar22 = *(long *)PTR_DAT_04bb49a0;
        local_7878[0] = "LE_FacilityBuilt_Market";
        local_7880 = ppuVar1;
        uVar15 = FUN_006bd550("LE_FacilityBuilt_Market",0);
        local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar15);
        uVar21 = FUN_01b5b650(lVar22 + 0x238,&local_88);
        FUN_01b5cf20(&local_7880,uVar21,0,0,0);
        goto LAB_02860c68;
      }
    }
    break;
  case 2:
    ppuVar1 = (undefined **)(puVar9 + 0x10);
    local_7878[0] = "CountMarket1AfterBuild";
    local_7880 = ppuVar1;
    FUN_0273fd90(&local_7880);
    local_7878[0] = "MarketRemodelingFlag2";
    local_7880 = ppuVar1;
    uVar19 = FUN_0273f0a0(&local_7880);
    if ((uVar19 & 1) == 0) {
      local_7878[0] = "MarketConstruction2";
      local_7880 = ppuVar1;
      iVar12 = FUN_0273ea30(&local_7880);
      if (iVar12 < 1) {
        if (*(long *)puVar10 == 0) {
          lVar22 = 0;
        }
        else {
          lVar17 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar10 + 0x10) + 0x38))();
          lVar22 = 0;
          if (lVar17 != 0) {
            lVar22 = lVar17 + 0x276cb0;
          }
        }
        if ((*(long **)(lVar22 + 0x178) == (long *)0x0) ||
           (puVar18 = (undefined8 *)**(long **)(lVar22 + 0x178), puVar18 == (undefined8 *)0x0)) {
          local_78ac = 0;
        }
        else {
          local_78ac = (**(code **)*puVar18)();
        }
        iVar12 = *(int *)(*(long *)(lVar22 + 0x160) + *(long *)(lVar22 + 0x158));
        if (*(long *)puVar10 == 0) {
          lVar17 = 0;
        }
        else {
          lVar25 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar10 + 0x10) + 0x38))();
          lVar17 = 0;
          if (lVar25 != 0) {
            lVar17 = lVar25 + 0x276cb0;
          }
        }
        if ((*(long **)(lVar17 + 0x178) == (long *)0x0) ||
           (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x178), puVar18 == (undefined8 *)0x0)) {
          iVar27 = *(int *)(*(long *)(lVar17 + 0x160) + *(long *)(lVar17 + 0x158) + 4);
        }
        else {
          uVar19 = (**(code **)*puVar18)();
          iVar27 = *(int *)(*(long *)(lVar17 + 0x160) + *(long *)(lVar17 + 0x158) + 4);
          if ((((uVar19 & 1) != 0) && (*(long *)(lVar17 + 0x178) != 0)) &&
             (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x178) + 8),
             puVar18 != (undefined8 *)0x0)) {
            (**(code **)*puVar18)();
          }
        }
        if ((((local_78ac & 1) != 0) && (*(long *)(lVar22 + 0x178) != 0)) &&
           (puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x178) + 8), puVar18 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar18)();
        }
        local_7878[0] = "CountMarket1AfterBuild";
        local_7880 = (undefined **)(puVar9 + 0x10);
        iVar13 = FUN_0273ea30(&local_7880);
        if (0x1e < iVar13) {
          local_80 = (uint *)0x40c6146;
          local_88 = (undefined **)(puVar9 + 0x10);
          uVar19 = FUN_0273f0a0(&local_88);
          bVar8 = false;
          if (((uint)(iVar27 + iVar12) >> 6 < 0xc35) || ((uVar19 & 1) != 0)) goto LAB_02860c68;
          _DAT_055a59b8 = *(undefined8 *)puVar26;
          FUN_00a80e9c(&DAT_055a59b8,1);
          local_78 = &LAB_0286037c;
          uStack_70 = 0;
          local_88 = &PTR_LAB_04a91e60;
          local_80 = param_1;
          lVar22 = FUN_0264d580();
          local_a0 = 0;
          local_a8 = (char *)(lVar22 + 0x1c2798);
          if (*(long *)(lVar22 + 0x1c27c0) == 0) {
            local_9f = 0;
          }
          else {
            puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x1c27c0) + 0x10);
            local_9f = 0;
            if (puVar18 != (undefined8 *)0x0) {
              local_9f = (**(code **)*puVar18)();
            }
          }
          local_9f = local_9f & 1;
          local_b0 = (undefined **)(PTR_DAT_04bb5388 + 0x10);
          memset(&local_7880,0,0x7780);
          local_f0 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_d0 = 0;
          local_ec = 2;
          local_e8 = 0;
          local_cc = 0xffff;
          local_e0 = 0;
          local_d8 = 0;
          local_ca = 0;
          uStack_c2 = 0;
          local_bc = 0;
          uStack_ba = 0;
          pcStack_7888 = "Bbs_Information";
          local_7890 = puVar9 + 0x10;
          FUN_026d2dec(&local_7880,&local_7890,0x33,5,puVar26,&local_88);
          uVar21 = FUN_028615d0(&local_b0);
          FUN_026d4f58(uVar21,&local_7880);
          pcStack_7898 = "MarketRemodelingFlag2";
          local_78a0 = puVar9 + 0x10;
          FUN_0273f3c4(&local_78a0,1);
          FUN_02640184(&local_b0);
        }
        break;
      }
    }
    else {
      local_7878[0] = "MarketRemodelingFlag2";
      local_7880 = ppuVar1;
      FUN_0273f3c4(&local_7880,0);
    }
    lVar17 = *(long *)param_2;
    local_7878[0] = "MarketConstruction2";
    lVar22 = -lVar17;
    if (-1 < lVar17) {
      lVar22 = lVar17;
    }
    local_7880 = (undefined **)(puVar9 + 0x10);
    iVar12 = FUN_0273ea30(&local_7880);
    uVar19 = lVar22 + iVar12;
    if ((long)uVar19 < 2) {
      local_7878[0] = "MarketConstruction2";
      uVar19 = uVar19 & 0xffffffff;
      goto LAB_0286067c;
    }
    *param_1 = 3;
    local_7878[0] = "Market2Built";
    local_7880 = (undefined **)(puVar9 + 0x10);
    FUN_0273f3c4(&local_7880,1);
    if (uVar19 == 2) {
      local_7880 = (undefined **)(puVar9 + 0x10);
      local_7878[0] = "MarketOpen1stDay2";
      FUN_0273f3c4(&local_7880,1);
      iVar12 = 1;
    }
    else {
      iVar12 = (int)uVar19 + -1;
    }
    local_7878[0] = "CountMarket2AfterBuild";
    local_7880 = (undefined **)(puVar9 + 0x10);
    FUN_0273f3c4(&local_7880,iVar12);
    local_7878[0] = "MarketConstruction2";
    local_7880 = (undefined **)(puVar9 + 0x10);
    FUN_0273f3c4(&local_7880,0);
    local_7878[0] = "FirstPlayAfterShopBuilt2Flag";
    local_7880 = (undefined **)(puVar9 + 0x10);
    FUN_0274e338(&local_7880,1);
    lVar22 = *(long *)puVar10;
    if (lVar22 == 0) {
LAB_02860880:
      lVar22 = 0;
    }
    else {
      puVar18 = *(undefined8 **)(lVar22 + 0x10);
      if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
        lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
        lVar22 = 0;
        if (lVar17 != 0) {
          lVar22 = lVar17 + 0x70;
        }
      }
      else {
        if (puVar18 == (undefined8 *)0x0) goto LAB_02860880;
        lVar22 = 0;
        if ((long *)puVar18[0x26] != (long *)0x0) {
          lVar22 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
        }
      }
    }
    if ((*(long *)(lVar22 + 0x1c27c0) == 0) ||
       (puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x1c27c0) + 0x10),
       puVar18 == (undefined8 *)0x0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (**(code **)*puVar18)();
      uVar19 = uVar19 & 0xffffffff;
    }
    memset(&local_7880,0,0x7780);
    local_f0 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_d0 = 0;
    local_ec = 2;
    local_e8 = 0;
    local_cc = 0xffff;
    local_e0 = 0;
    local_d8 = 0;
    local_ca = 0;
    uStack_c2 = 0;
    local_bc = 0;
    uStack_ba = 0;
    local_a8 = "Bbs_Information";
    local_b0 = (undefined **)(puVar9 + 0x10);
    FUN_026d2dec(&local_7880,&local_b0,0x34,5,puVar26,0);
    if ((*(long *)(lVar22 + 0x1c27c0) != 0) &&
       (plVar20 = *(long **)(*(long *)(lVar22 + 0x1c27c0) + 0x20), plVar20 != (long *)0x0)) {
      local_88 = *(undefined ***)(lVar22 + 0x1c27a0);
      local_80 = *(uint **)(lVar22 + 0x1c27a8);
      local_78 = (undefined1 *)0xe0ae8;
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_88);
    }
    FUN_026d4f58(*(long *)(lVar22 + 0x1c27a8) + *(long *)(lVar22 + 0x1c27a0),&local_7880);
    lVar17 = *(long *)PTR_DAT_04bb49a0;
    local_80 = (uint *)0x406348c;
    local_88 = (undefined **)(puVar9 + 0x10);
    uVar15 = FUN_006bd550("LE_FacilityBuilt_Market2",0);
    local_7890 = (undefined *)CONCAT44(local_7890._4_4_,uVar15);
    uVar21 = FUN_01b5b650(lVar17 + 0x238,&local_7890);
    FUN_01b5cf20(&local_88,uVar21,0,0,0);
    if ((((uVar19 & 1) != 0) && (*(long *)(lVar22 + 0x1c27c0) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x1c27c0) + 0x18),
       puVar18 != (undefined8 *)0x0)) {
      (**(code **)*puVar18)();
    }
    bVar8 = true;
    goto LAB_02860c68;
  case 3:
    local_7880 = (undefined **)(puVar9 + 0x10);
    local_7878[0] = "Market2Built";
    FUN_0273f3c4(&local_7880,1);
    uVar19 = (ulong)*param_2;
    local_7878[0] = "CountMarket2AfterBuild";
LAB_0286067c:
    local_7880 = (undefined **)(puVar9 + 0x10);
    FUN_0273fd90(&local_7880,uVar19);
  }
  bVar8 = false;
LAB_02860c68:
  if (0 < *(long *)param_2) {
    FUN_0289abe0(param_1 + 0xb,param_2);
  }
LAB_02860c80:
  FUN_0286b420(param_1 + 0xced,param_2);
  if ((bVar8) || ((char)param_2[10] != '\0')) {
LAB_02860cc8:
    FUN_028624b0(param_1 + 1,param_2);
    FUN_028b0618(param_1 + 0x546,param_2);
    FUN_0288f5a0(param_1 + 0xb,param_2);
  }
  else {
    lVar22 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
    if ((lVar17 < lVar22) ||
       (lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90), lVar17 != lVar22))
    goto LAB_02860cc8;
  }
  if ((char)param_2[10] == '\0') {
    lVar22 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
    if ((lVar17 < lVar22) ||
       (lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90), lVar17 != lVar22))
    goto LAB_02860d44;
    local_7880 = (undefined **)(puVar9 + 0x10);
    local_7878[0] = "GrowUpAfterPatch3_0";
    uVar19 = FUN_0273f0a0(&local_7880);
    if ((uVar19 & 1) == 0) goto LAB_02860d44;
  }
  else {
LAB_02860d44:
    FUN_02880310(param_1 + 0xdce,param_2);
  }
  FUN_028883e4(param_1 + 0xb50,param_2);
  bVar2 = false;
  if ((char)param_2[10] == '\0') {
    bVar2 = (bool)(bVar8 ^ 1);
  }
  if ((!bVar2) || (*(long *)param_2 != 0)) {
    FUN_028949e0(param_1 + 0xb,param_2);
    FUN_02889630(param_1 + 0x502,param_2);
    FUN_0286a500(param_1 + 0xb61,param_2);
    FUN_02877160(param_1 + 0xc42,param_2);
    FUN_0286e480(param_1 + 0xc82,param_2);
    if ((char)param_2[10] == '\0') goto LAB_02860dd4;
LAB_02860e1c:
    FUN_02882e7c(param_1 + 0xdce,param_2);
  }
  else {
LAB_02860dd4:
    lVar22 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
    if ((lVar17 < lVar22) ||
       (lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90), lVar17 != lVar22))
    goto LAB_02860e1c;
    local_7880 = (undefined **)(puVar9 + 0x10);
    local_7878[0] = "GrowUpAfterPatch3_0";
    uVar19 = FUN_0273f0a0(&local_7880);
    if ((uVar19 & 1) == 0) goto LAB_02860e1c;
  }
  local_7878[0] = "GrowUpAfterPatch1_2";
  local_7880 = (undefined **)(puVar9 + 0x10);
  uVar19 = FUN_0273f0a0(&local_7880);
  if ((uVar19 & 1) == 0) {
    FUN_0286e480(param_1 + 0xc82,param_2);
  }
  local_7878[0] = "GrowUpAfterPatch1_2";
  local_7880 = (undefined **)(puVar9 + 0x10);
  uVar19 = FUN_0273f0a0(&local_7880);
  if ((uVar19 & 1) == 0) {
    FUN_02877160(param_1 + 0xc42,param_2);
  }
  FUN_028b07c8(param_1 + 0x546,param_2);
  FUN_0289a730(param_1 + 0xb,param_2);
  FUN_0287ab10(param_1 + 0xc42,param_2);
  if (((char)param_2[10] == '\0') && (*(long *)param_2 == 0)) goto LAB_02860f94;
  lVar22 = *(long *)puVar10;
  if (lVar22 == 0) {
LAB_02860f0c:
    lVar22 = 0;
  }
  else {
    puVar18 = *(undefined8 **)(lVar22 + 0x10);
    if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
      lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
      lVar22 = 0;
      if (lVar17 != 0) {
        lVar22 = lVar17 + 0x70;
      }
    }
    else {
      if (puVar18 == (undefined8 *)0x0) goto LAB_02860f0c;
      lVar22 = 0;
      if ((long *)puVar18[0x26] != (long *)0x0) {
        lVar22 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar22 + 0xe7290) == (long *)0x0) ||
     (puVar18 = (undefined8 *)**(long **)(lVar22 + 0xe7290), puVar18 == (undefined8 *)0x0)) {
    uVar16 = *(uint *)(*(long *)(lVar22 + 0xe7278) + *(long *)(lVar22 + 0xe7270));
  }
  else {
    uVar19 = (**(code **)*puVar18)();
    uVar16 = *(uint *)(*(long *)(lVar22 + 0xe7278) + *(long *)(lVar22 + 0xe7270));
    if ((((uVar19 & 1) != 0) && (*(long *)(lVar22 + 0xe7290) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0xe7290) + 8), puVar18 != (undefined8 *)0x0))
    {
      (**(code **)*puVar18)();
    }
  }
  uVar16 = uVar16 + (uint)(ushort)param_2[4] * 2 & 6 | uVar16 & 1;
  local_7880 = (undefined **)CONCAT44(local_7880._4_4_,uVar16);
  *(char *)(param_1 + 0xc21) = (char)uVar16;
  puVar9 = PTR_DAT_04bb37e0;
  if (((char)param_2[10] != '\0') || (*(long *)param_2 != 0)) {
    uVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
    puVar26 = param_1 + 0xc22;
    *(undefined2 *)puVar26 = uVar7;
    uVar5 = puVar9[2];
    *(undefined1 *)((long)param_1 + 0x308a) = uVar5;
    uVar6 = puVar9[3];
    *(undefined1 *)((long)param_1 + 0x308b) = uVar6;
    uVar16 = *(uint *)(puVar9 + 4);
    *(undefined2 *)(param_1 + 0xc24) = uVar7;
    *(undefined1 *)((long)param_1 + 0x3092) = uVar5;
    *(undefined1 *)((long)param_1 + 0x3093) = uVar6;
    *(undefined2 *)(param_1 + 0xc26) = uVar7;
    *(undefined1 *)((long)param_1 + 0x309a) = uVar5;
    *(undefined1 *)((long)param_1 + 0x309b) = uVar6;
    *(undefined2 *)(param_1 + 0xc28) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30a2) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30a3) = uVar6;
    *(undefined2 *)(param_1 + 0xc2a) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30aa) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30ab) = uVar6;
    *(undefined2 *)(param_1 + 0xc2c) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30b2) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30b3) = uVar6;
    *(undefined2 *)(param_1 + 0xc2e) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30ba) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30bb) = uVar6;
    *(undefined2 *)(param_1 + 0xc30) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30c2) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30c3) = uVar6;
    *(undefined2 *)(param_1 + 0xc32) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30ca) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30cb) = uVar6;
    *(undefined2 *)(param_1 + 0xc34) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30d2) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30d3) = uVar6;
    *(undefined2 *)(param_1 + 0xc36) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30da) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30db) = uVar6;
    *(undefined2 *)(param_1 + 0xc38) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30e2) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30e3) = uVar6;
    *(undefined2 *)(param_1 + 0xc3a) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30ea) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30eb) = uVar6;
    *(undefined2 *)(param_1 + 0xc3c) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30f2) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30f3) = uVar6;
    *(undefined2 *)(param_1 + 0xc3e) = uVar7;
    *(undefined1 *)((long)param_1 + 0x30fa) = uVar5;
    *(undefined1 *)((long)param_1 + 0x30fb) = uVar6;
    *(undefined2 *)(param_1 + 0xc40) = uVar7;
    *(undefined1 *)((long)param_1 + 0x3102) = uVar5;
    param_1[0xc23] = uVar16;
    param_1[0xc25] = uVar16;
    param_1[0xc27] = uVar16;
    param_1[0xc29] = uVar16;
    param_1[0xc2b] = uVar16;
    param_1[0xc2d] = uVar16;
    param_1[0xc2f] = uVar16;
    param_1[0xc31] = uVar16;
    param_1[0xc33] = uVar16;
    param_1[0xc35] = uVar16;
    param_1[0xc37] = uVar16;
    param_1[0xc39] = uVar16;
    param_1[0xc3b] = uVar16;
    param_1[0xc3d] = uVar16;
    param_1[0xc3f] = uVar16;
    local_7880 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    *(undefined1 *)((long)param_1 + 0x3103) = uVar6;
    param_1[0xc41] = uVar16;
    memset(local_7878,0,0x754);
    uVar16 = nn::os::GetSystemTick();
    local_7124 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
    local_7120 = (local_7124 ^ local_7124 >> 0x1e) * 0x6c078965 + 2;
    local_711c = (local_7120 ^ local_7120 >> 0x1e) * 0x6c078965 + 3;
    local_7118 = (local_711c ^ local_711c >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_7880);
    memset(__s,0,0x754);
    local_80 = (uint *)&local_b0;
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,0xb3);
    local_88 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_7880,&local_88);
    uVar16 = 0;
    iVar12 = 2;
    do {
      psVar24 = (short *)((long)puVar26 + ((long)((ulong)uVar16 << 0x20) >> 0x1d));
      if (*psVar24 == -2) {
        if (iVar12 < 1) break;
        lVar17 = (*(code *)local_7880[4])(&local_7880);
        lVar22 = 0;
        iVar27 = 0;
        do {
          puVar23 = (uint *)(lVar17 + lVar22);
          lVar22 = lVar22 + 4;
          uVar14 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
          uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
          uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
          uVar14 = uVar14 + (uVar14 >> 8);
          iVar27 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar27;
        } while (lVar22 != 0x754);
        if (iVar27 == 0) break;
        puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar14 = *puVar23 ^ *puVar23 << 0xb;
        uVar4 = puVar23[3];
        *puVar23 = puVar23[1];
        puVar23[1] = puVar23[2];
        uVar3 = uVar14 ^ uVar4;
        uVar14 = uVar14 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
        puVar23[2] = uVar4;
        puVar23[3] = uVar14;
        uVar14 = (uVar14 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
        uVar3 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
        local_88 = (undefined **)CONCAT44(uVar3,uVar14);
        uVar14 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
        local_80 = (uint *)CONCAT44((uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4,uVar14);
        lVar17 = (*(code *)local_7880[4])(&local_7880);
        lVar22 = 0;
        iVar27 = 0;
        do {
          puVar23 = (uint *)(lVar17 + lVar22);
          lVar22 = lVar22 + 4;
          uVar14 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
          uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
          uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
          uVar14 = uVar14 + (uVar14 >> 8);
          iVar27 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar27;
        } while (lVar22 != 0x754);
        if (iVar27 == 0) {
          local_b0 = *(undefined ***)PTR_DAT_04bb37e0;
        }
        else {
          lVar17 = (*(code *)local_7880[4])(&local_7880);
          lVar22 = 0;
          uVar14 = 0;
          do {
            puVar23 = (uint *)(lVar17 + lVar22);
            lVar22 = lVar22 + 4;
            uVar3 = *puVar23 - (*puVar23 >> 1 & 0x55555555);
            uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
            uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
            uVar3 = uVar3 + (uVar3 >> 8);
            uVar14 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar14;
          } while (lVar22 != 0x754);
          uVar3 = (uint)local_88 ^ (uint)local_88 << 0xb;
          local_88 = (undefined **)CONCAT44((undefined4)local_80,local_88._4_4_);
          uVar3 = uVar3 >> 8 ^ local_80._4_4_ >> 0x13 ^ uVar3 ^ local_80._4_4_;
          local_80 = (uint *)CONCAT44(uVar3,local_80._4_4_);
          FUN_00889f80(&local_b0,&local_7880,(int)((ulong)uVar3 * (ulong)uVar14 >> 0x20) + 1);
          FUN_01a4c66c(&local_88,&local_b0);
        }
        local_7890 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_7890);
        uVar19 = FUN_026219b0(*(undefined8 *)PTR_DAT_04bb46f0,&local_7890,&local_b0);
        if ((uVar19 & 1) != 0) {
          lVar22 = (*(code *)local_7880[3])(&local_7880);
          uVar14 = FUN_0277d6c4(&local_b0);
          if ((uVar14 >> 3 & 0x1fff) < 0x753) {
            lVar17 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
            *(uint *)(lVar22 + lVar17) =
                 *(uint *)(lVar22 + lVar17) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
          }
          *psVar24 = (short)local_7890;
          *(undefined2 *)((long)puVar26 + (long)(int)uVar16 * 8 + 2) = local_7890._2_2_;
          puVar26[(long)(int)uVar16 * 2 + 1] = local_7890._4_4_;
          iVar12 = iVar12 + -1;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x10);
  }
LAB_02860f94:
  FUN_012c7a38(&local_7880);
  puVar10 = PTR_DAT_04bb32f0;
  FUN_00887f80(*(undefined8 *)PTR_DAT_04bb32f0,&local_7880,1);
  puVar11 = PTR_DAT_04bb43c0;
  puVar9 = PTR_DAT_04bb32e8;
  uVar16 = 0;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  do {
    lVar17 = (long)local_7878 + ((long)((ulong)uVar16 << 0x20) >> 0x1d) + -8;
    uVar14 = FUN_0277d6c4(lVar17);
    lVar25 = *(long *)puVar11;
    if (lVar25 != 0) {
      lVar22 = *(long *)(lVar22 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar22 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        uVar15 = FUN_0088aaf0(*(undefined8 *)puVar10,lVar17,0);
        local_88._0_4_ = uVar15;
        local_88._0_4_ = FUN_0088aaf0(*(undefined8 *)puVar10,lVar17,1);
        local_88._0_4_ = FUN_0088aaf0(*(undefined8 *)puVar10,lVar17,2);
        local_88._0_4_ = FUN_0088aaf0(*(undefined8 *)puVar10,lVar17,3);
        uVar15 = FUN_0088aaf0(*(undefined8 *)puVar10,lVar17,4);
        local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar15);
        psVar24 = (short *)(*(long *)puVar9 + 0x4068);
        if (*psVar24 == 0) {
          local_b0 = *(undefined ***)(*(long *)puVar9 + 0x4060);
          if ((char)((ulong)local_b0 >> 0x20) < '\x05') {
            lVar22 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
            local_88 = (undefined **)(lVar22 + -0x15180);
            local_b0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          uVar19 = (ulong)local_b0 >> 0x30;
          local_b0._0_6_ = CONCAT24(5,(uint)local_b0);
          local_b0 = (undefined **)
                     (CONCAT26((short)uVar19,(undefined6)local_b0) & 0xff00ffffffffffff);
          psVar24 = (short *)&local_b0;
        }
        FUN_0088b820(*(undefined8 *)puVar10,lVar17,*(undefined8 *)psVar24);
        FUN_0088baf0(*(undefined8 *)puVar10,lVar17);
        lVar25 = *(long *)puVar11;
      }
    }
    uVar16 = uVar16 + 1;
    lVar22 = lVar25;
  } while (uVar16 != 0x40);
  return;
}

