
void FUN_027ee960(long param_1,long *param_2,int *param_3)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  ulong uVar26;
  long lVar27;
  undefined *puVar28;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  byte local_7c [4];
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  long local_68;
  
  if (*(char *)((long)param_2 + 0x2e) == '\0') {
    bVar10 = false;
  }
  else {
    iVar14 = *param_3;
    iVar13 = FUN_0252d29c();
    bVar10 = iVar14 == iVar13;
  }
  FUN_02507c6c(local_7c,7,1,0,0);
  iVar14 = FUN_0252d29c();
  bVar11 = false;
  local_98 = (undefined *)CONCAT44(local_78,(undefined4)local_98);
  bVar12 = 0xff;
  if (local_7c[0] < 8) {
    bVar12 = local_7c[0];
  }
  local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar12);
  local_90 = (char *)CONCAT62(local_90._2_6_,local_74);
  if (local_7c[0] < 8) {
    iVar13 = FUN_02582fe0(&local_98);
    bVar11 = *param_3 == iVar13;
    while ((byte)local_98 < 8) {
      uVar19 = (ulong)(byte)local_98;
      do {
        uVar26 = uVar19;
        if (uVar26 == 7) goto LAB_027eea80;
        uVar18 = FUN_02507924(&local_98,&DAT_0548e169 + uVar26);
        uVar19 = uVar26 + 1;
      } while ((uVar18 & 1) == 0);
      if (7 < (byte)(&DAT_0548e169)[uVar26]) break;
      local_98 = (undefined *)CONCAT71(local_98._1_7_,(&DAT_0548e169)[uVar26]);
      iVar13 = FUN_02582fe0(&local_98);
      bVar11 = (bool)(*param_3 == iVar13 | bVar11);
    }
  }
LAB_027eea80:
  puVar1 = (ushort *)(param_1 + 0x36904);
  iVar13 = *param_3;
  local_98 = (undefined *)0x8fe;
  FUN_0277d4ac(&local_98);
  *(undefined2 *)(param_1 + 0x1fd0) = (undefined2)local_98;
  *(undefined2 *)(param_1 + 0x1fd2) = local_98._2_2_;
  *(undefined4 *)(param_1 + 0x1fd4) = local_98._4_4_;
  local_98 = (undefined *)0x8ff;
  FUN_0277d4ac(&local_98);
  *(undefined2 *)(param_1 + 0x1fd8) = (undefined2)local_98;
  *(undefined2 *)(param_1 + 0x1fda) = local_98._2_2_;
  puVar28 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 0x1fdc) = local_98._4_4_;
  puVar2 = puVar28 + 0x10;
  local_90 = "GrowUpAfterPatch1_2";
  local_98 = puVar2;
  uVar19 = FUN_0273f0a0(&local_98);
  if ((uVar19 & 1) == 0) {
    local_90 = "EarthDayFirstQuestSystem";
    local_98 = puVar2;
    FUN_0274d104(param_3,&local_98,1);
    local_90 = "EarthDayFirstQuestTalk";
    local_98 = puVar2;
    FUN_0274d104(param_3,&local_98,1);
  }
  if (*param_2 != 0) {
    bVar12 = *(byte *)(param_1 + 0x1341c);
    if ((bVar12 - 1 < 0xc) &&
       (cVar6 = *(char *)(param_1 + 0x1341d), (byte)(cVar6 - 1U) < (byte)(&DAT_0417b531)[bVar12 - 1]
       )) {
      if ((bVar12 == 2) && (cVar6 == '\x1d')) {
        uVar8 = *(ushort *)(param_2 + 2);
        if (((uVar8 & 3) == 0) &&
           ((0x28f5c28 < ((uint)uVar8 * -0x3d70a3d7 >> 2 | (uint)uVar8 * 0x40000000) ||
            ((uVar8 & 0xf) == 0)))) goto LAB_027eebe8;
        if ((*(byte *)((long)param_2 + 0x12) != 2) || (*(char *)((long)param_2 + 0x13) != '\x1c'))
        goto LAB_027eec18;
      }
      else {
LAB_027eebe8:
        if ((bVar12 != *(byte *)((long)param_2 + 0x12)) ||
           (cVar6 != *(char *)((long)param_2 + 0x13))) goto LAB_027eec18;
      }
      local_98 = puVar28 + 0x10;
      local_90 = "ReachMyBirthday";
      FUN_0279ac70(param_3,&local_98,1);
    }
  }
LAB_027eec18:
  nn::time::IsValidDate
            ((uint)*(ushort *)(param_1 + 0x3690a),(uint)*(byte *)(param_1 + 0x3690c),
             (uint)*(byte *)(param_1 + 0x3690d));
  bVar4 = bVar10;
  if (*param_2 < 1) {
    bVar4 = true;
  }
  if (!bVar4) {
    uVar15 = (int)*param_2 + (uint)*(ushort *)(param_1 + 0x1341e);
    if (0xfffe < uVar15) {
      uVar15 = 0xffffffff;
    }
    *(short *)(param_1 + 0x1341e) = (short)uVar15;
  }
  if ((bool)((iVar14 != -1 && iVar14 == iVar13) | bVar11)) {
    local_98 = puVar28 + 0x10;
    local_90 = "CalcPastDays";
    iVar14 = FUN_0274ce10(param_3,&local_98);
    if (iVar14 == 0) {
      uVar15 = nn::time::IsValidDate
                         ((uint)*puVar1,(uint)*(byte *)(param_1 + 0x36906),
                          (uint)*(byte *)(param_1 + 0x36907));
      if (!bVar10 && ((uVar15 ^ 0xffffffff) & 1) == 0) {
        local_98 = (undefined *)FUN_0272eca4(puVar1,1);
        iVar14 = FUN_00a82474(param_2 + 2,&local_98);
        if (iVar14 < 0x1e) {
          if (iVar14 == 0) goto LAB_027eede0;
        }
        else {
          local_98 = puVar28 + 0x10;
          local_90 = "PlayerHalfAsleepDemoFlag";
          FUN_0274d230(param_1 + 0xc170,&local_98,1,param_3);
        }
        puVar2 = puVar28 + 0x10;
        local_90 = "DayPlayed";
        local_98 = puVar2;
        iVar13 = FUN_02799100(param_3,&local_98);
        local_90 = "DayPlayed";
        local_98 = puVar2;
        FUN_0279ac70(param_3,&local_98,1);
        local_90 = "DayPlayed";
        local_98 = puVar2;
        iVar16 = FUN_02799100(param_3,&local_98);
        if (iVar13 != iVar16) {
          local_90 = "DayPlayed";
          local_98 = puVar2;
          uVar15 = FUN_02798980(param_3,&local_98);
          uVar20 = DAT_05335028;
          if (0xfffe < (int)uVar15) {
            uVar15 = 0xffff;
          }
          local_90 = "PE_Achievement_PlayDays";
          local_98 = puVar2;
          uVar17 = FUN_006bd550("PE_Achievement_PlayDays",0);
          local_68 = CONCAT44(local_68._4_4_,uVar17);
          uVar20 = FUN_01b5b4b0(uVar20,&local_68);
          FUN_01b66060(&local_98,uVar20,param_3,0,iVar16,
                       uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU));
        }
        if (0 < iVar14) {
          local_98 = puVar28 + 0x10;
          local_90 = "InputApproachBanCount";
          FUN_0274dc60(param_3,&local_98,0xffffffff);
        }
      }
LAB_027eede0:
      uVar19 = nn::time::IsValidDate
                         ((uint)*puVar1,(uint)*(byte *)(param_1 + 0x36906),
                          (uint)*(byte *)(param_1 + 0x36907));
      if ((uVar19 & 1) == 0) {
        uVar15 = 0;
      }
      else {
        local_98 = (undefined *)FUN_0272eca4(puVar1,1);
        uVar15 = FUN_00a82474(param_2 + 2,&local_98);
        if ((int)uVar15 < 0) {
          local_90 = "RcoMachineDailyLoginDays";
          local_98 = puVar28 + 0x10;
          FUN_0274d104(param_3,&local_98,0);
          local_90 = "RcoMachineDailyLoginCheck";
          local_98 = puVar28 + 0x10;
          FUN_0274d104(param_3,&local_98,0);
        }
        if (0xfffe < (int)uVar15) {
          uVar15 = 0xffff;
        }
        uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
      }
      local_90 = "PastDaysFromLastPlay";
      local_98 = puVar28 + 0x10;
      FUN_0274d104(param_3,&local_98,uVar15);
      uVar8 = *(ushort *)(param_2 + 2);
      bVar12 = *(byte *)((long)param_2 + 0x12);
      bVar7 = *(byte *)((long)param_2 + 0x13);
      uVar19 = nn::time::IsValidDate((uint)uVar8,(uint)bVar12,(uint)bVar7);
      if ((uVar19 & 1) != 0) {
        *puVar1 = uVar8;
        *(byte *)(param_1 + 0x36906) = bVar12;
        *(byte *)(param_1 + 0x36907) = bVar7;
      }
      local_98 = puVar28 + 0x10;
      local_90 = "CalcPastDays";
      FUN_0274d104(param_3,&local_98,1);
    }
  }
  puVar2 = PTR_DAT_04bb32f0;
  if ((((char)param_2[5] != '\0') || (*param_2 != 0)) &&
     (uVar19 = FUN_0087d754(*(undefined8 *)PTR_DAT_04bb32f0,param_3,param_2 + 2,1),
     uVar20 = DAT_05335028, (uVar19 & 1) != 0)) {
    local_98 = puVar28 + 0x10;
    local_90 = "PE_TodayIsMyBirthday";
    uVar17 = FUN_006bd550("PE_TodayIsMyBirthday",0);
    local_68 = CONCAT44(local_68._4_4_,uVar17);
    uVar20 = FUN_01b5b4b0(uVar20,&local_68);
    FUN_01b5d5c0(&local_98,uVar20,param_3,0,0);
  }
  if (*param_2 < 1) {
    bVar10 = true;
  }
  if (!bVar10) {
    puVar3 = puVar28 + 0x10;
    lVar22 = param_1 + 0xc170;
    local_90 = "PlayerMainUImenuEnable";
    local_98 = puVar3;
    iVar14 = FUN_0274bbb0(lVar22,&local_98);
    if (iVar14 != 0) {
      local_90 = "TutorialFinishAndPast1day";
      local_98 = puVar3;
      FUN_0274d230(lVar22,&local_98,1,param_3);
    }
    local_90 = "NnpcApproachNoEmoticonCount";
    local_98 = puVar3;
    FUN_0274de90(lVar22,&local_98,1,param_3);
    local_90 = "NnpcApproachNoIslandRepCount";
    local_98 = puVar3;
    FUN_0274de90(lVar22,&local_98,1,param_3);
  }
  local_90 = "MarketBuilt";
  local_98 = puVar28 + 0x10;
  uVar19 = FUN_0273f0a0(&local_98);
  if ((uVar19 & 1) != 0) {
    local_90 = "MarketBuiltMyVillage";
    local_98 = puVar28 + 0x10;
    FUN_0274d230(param_1 + 0xc170,&local_98,1,param_3);
  }
  if (*param_2 == 0) {
    if (*(char *)((long)param_2 + 0x29) != '\0' || *(char *)((long)param_2 + 0x2a) != '\0') {
      local_90 = "GstQuestStartFlag";
      local_98 = puVar28 + 0x10;
      iVar14 = FUN_0274ce10(param_3,&local_98);
      if (iVar14 != 0) {
        local_90 = "GstQuestBreakFlag";
        local_98 = puVar28 + 0x10;
        FUN_0274d104(param_3,&local_98,1);
        goto LAB_027ef070;
      }
      goto LAB_027ef080;
    }
  }
  else {
    local_98 = puVar28 + 0x10;
    local_90 = "GstQuestBreakFlag";
    FUN_0274d104(param_3,&local_98,0);
LAB_027ef070:
    local_98 = puVar28 + 0x10;
    local_90 = "GstQuestStartFlag";
    FUN_0274d104(param_3,&local_98,0);
LAB_027ef080:
    FUN_02675db0(param_3,0x89);
    local_90 = "JonnyTalkCount";
    local_98 = puVar28 + 0x10;
    FUN_0274d104(param_3,&local_98,0);
  }
  FUN_02791e40(param_1 + 0xd170,param_2,param_3);
  local_98 = puVar28 + 0x10;
  local_90 = "MainmenuCall";
  iVar14 = FUN_0274ce10(param_3,&local_98);
  if ((iVar14 == 0) && (DAT_05574040 != 0)) {
    puVar24 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar22 = (**(code **)(*(long *)*puVar24 + 0x38))();
      if (lVar22 != 0) {
        lVar22 = lVar22 + 0x70;
LAB_027ef68c:
        if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
           (puVar24 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar24 == (undefined8 *)0x0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = (**(code **)*puVar24)();
          uVar19 = uVar19 & 0xffffffff;
        }
        lVar27 = *(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8);
        bVar12 = *(long *)(lVar27 + 0x1e33b0) != 0 || *(long *)(lVar27 + 0x1e33b8) != 0;
        if (*(long *)(lVar27 + 0x1e33f8) != 0 || *(long *)(lVar27 + 0x1e3400) != 0) {
          bVar12 = bVar12 + 1;
        }
        if (*(long *)(lVar27 + 0x1e3440) != 0 || *(long *)(lVar27 + 0x1e3448) != 0) {
          bVar12 = bVar12 + 1;
        }
        if (*(long *)(lVar27 + 0x1e3488) != 0 || *(long *)(lVar27 + 0x1e3490) != 0) {
          bVar12 = bVar12 + 1;
        }
        if (*(long *)(lVar27 + 0x1e34d0) != 0 || *(long *)(lVar27 + 0x1e34d8) != 0) {
          bVar12 = bVar12 + 1;
        }
        if (*(long *)(lVar27 + 0x1e3518) != 0 || *(long *)(lVar27 + 0x1e3520) != 0) {
          bVar12 = bVar12 + 1;
        }
        if (*(long *)(lVar27 + 0x1e3560) != 0 || *(long *)(lVar27 + 0x1e3568) != 0) {
          bVar12 = bVar12 + 1;
        }
        if (*(long *)(lVar27 + 0x1e35a8) != 0 || *(long *)(lVar27 + 0x1e35b0) != 0) {
          bVar12 = bVar12 + 1;
        }
        if (1 < bVar12) {
          if (((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) &&
             (*(int *)(DAT_04cd19d8 + 0xf8) != 0)) {
            puVar24 = *(undefined8 **)(DAT_04cd19d8 + 0x100);
            lVar27 = (long)*(int *)(DAT_04cd19d8 + 0xf8) << 3;
            do {
              if (((((int *)*puVar24)[1] & 1U) == 0) && (*(int *)*puVar24 == *param_3)) {
                local_90 = "MainmenuCall";
                local_98 = puVar28 + 0x10;
                FUN_0274d104(param_3,&local_98,1);
                local_90 = "StandByGameStartPhoneCall";
                local_98 = puVar28 + 0x10;
                FUN_0274d104(param_3,&local_98,0);
                uVar20 = 0;
                goto LAB_027ef85c;
              }
              puVar24 = puVar24 + 1;
              lVar27 = lVar27 + -8;
            } while (lVar27 != 0);
          }
          local_90 = "MakeVillagePlayerFlag";
          local_98 = puVar28 + 0x10;
          iVar14 = FUN_0274ce10(param_3,&local_98);
          if (iVar14 != 0) {
            local_90 = "StandByGameStartPhoneCall";
            local_98 = puVar28 + 0x10;
            FUN_0274d104(param_3,&local_98,1);
            uVar20 = 1;
LAB_027ef85c:
            local_90 = "StandByPhoneCallSharePlay";
            local_98 = puVar28 + 0x10;
            FUN_0274d104(param_3,&local_98,uVar20);
          }
        }
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
           (puVar24 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar24 != (undefined8 *)0x0))
        {
          (**(code **)*puVar24)();
        }
      }
    }
    else if (((puVar24 != (undefined8 *)0x0) && ((long *)puVar24[0x26] != (long *)0x0)) &&
            (lVar22 = (**(code **)(*(long *)puVar24[0x26] + 0x38))(), lVar22 != 0))
    goto LAB_027ef68c;
  }
  FUN_024f3d94(param_2,param_3);
  FUN_022036d0(param_3);
  if (0 < *param_2) {
    local_98 = puVar28 + 0x10;
    local_90 = "JuneBride";
    uVar19 = FUN_0087c200(*(undefined8 *)puVar2,&local_98,param_2 + 2,1);
    if ((uVar19 & 1) != 0) {
      FUN_02203a60(param_3);
    }
  }
  FUN_02205b50(param_3);
  if (0 < *param_2) {
    puVar3 = puVar28 + 0x10;
    local_90 = "Halloween";
    local_98 = puVar3;
    uVar19 = FUN_0087c200(*(undefined8 *)puVar2,&local_98,param_2 + 2,1);
    if ((uVar19 & 1) != 0) {
      local_90 = "GetHalloweenRag";
      local_98 = puVar3;
      FUN_0274d104(param_3,&local_98,0);
      local_90 = "GetHalloweenWallPaper";
      local_98 = puVar3;
      FUN_0274d104(param_3,&local_98,0);
      local_90 = "GetHalloweenFloor";
      local_98 = puVar3;
      FUN_0274d104(param_3,&local_98,0);
      local_90 = "GetHalloweenStickRecipe";
      local_98 = puVar3;
      FUN_0274d104(param_3,&local_98,0);
      local_90 = "GetHalloweenGarland";
      local_98 = puVar3;
      FUN_0274d104(param_3,&local_98,0);
      local_90 = "GetHalloweenTableSetting";
      local_98 = puVar3;
      FUN_0274d104(param_3,&local_98,0);
      local_90 = "GetHalloweenBag";
      local_98 = puVar3;
      FUN_0274d104(param_3,&local_98,0);
    }
  }
  FUN_022094e0(param_2,param_3);
  lVar22 = *param_2;
  if (0 < lVar22) {
    puVar3 = puVar28 + 0x10;
    local_90 = "ChristmasPresentYear";
    local_98 = puVar3;
    iVar14 = FUN_0274ce10(param_3,&local_98);
    if (iVar14 != (short)param_2[3]) {
      local_70 = param_2[3];
      uVar20 = *(undefined8 *)puVar2;
      local_90 = "XmasEve";
      local_98 = puVar3;
      if ((char)(local_70 >> 0x20) < '\x05') {
        local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_68 = local_68 + -0x15180;
        local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      uVar26 = local_70;
      uVar19 = local_70 >> 0x30;
      local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
      local_70 = CONCAT26((short)uVar19,(undefined6)local_70) & 0xff00ffffffffffff;
      uVar19 = FUN_00879dd0(uVar20,&local_98,uVar26,uVar26 >> 0x10,uVar26 >> 0x18,0);
      if (((uVar19 & 1) != 0) && (uVar19 = FUN_0154e300(param_3), (uVar19 & 1) != 0)) {
        local_98 = puVar28 + 0x10;
        local_90 = "ChristmasPresentYear";
        FUN_0274d104(param_3,&local_98,(long)(short)param_2[3]);
      }
    }
    lVar22 = *param_2;
  }
  if (lVar22 == 0) {
LAB_027ef56c:
    if (*(char *)((long)param_2 + 0x2a) == '\0') goto LAB_027ef5e8;
  }
  else {
    plVar21 = (long *)FUN_02816430(param_1 + 0x11b0);
    puVar2 = PTR_DAT_04bb43c0;
    pcVar9 = (char *)*plVar21;
    local_68 = *plVar21;
    lVar27 = *(long *)PTR_DAT_04bb43c0;
    uVar15 = FUN_0277d6c4(&local_68);
    lVar22 = *(long *)puVar2;
    if (lVar22 != 0) {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
        local_98 = PTR_DAT_04bc0510 + 0x10;
        local_88 = 0;
        local_90 = pcVar9;
        uVar15 = FUN_0277d6c4(&local_90);
        if (*(long *)puVar2 != 0) {
          lVar22 = *(long *)(lVar22 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar22 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            lVar22 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(&local_68);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
            if ((uVar15 < *(uint *)(lVar22 + 0x1d8)) &&
               (((puVar23 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar15 * 8),
                 puVar23 != (uint *)0x0 && (uVar15 = *puVar23, uVar15 != 0)) &&
                (puVar23 != (uint *)(ulong)uVar15)))) {
              puVar25 = (uint *)((long)puVar23 - (long)(ulong)uVar15);
              if (((*puVar25 != 0) && (uVar15 = puVar25[1], uVar15 != 0)) &&
                 ((ulong)(ushort)puVar25[2] != 0)) {
                lVar22 = 0xc;
                if (*(char *)((long)puVar25 + 10) != '\0') {
                  lVar22 = 0x1c;
                }
                lVar22 = (long)puVar25 + lVar22 + (ulong)(ushort)puVar25[2] * 8;
                if (lVar22 != 0) {
                  uVar5 = 0;
                  if ((ulong)uVar15 != 0) {
                    uVar5 = (uint)((ulong)((long)puVar23 - lVar22) / (ulong)uVar15);
                  }
                  if (*puVar25 <= uVar5) {
                    uVar5 = 0xffffffff;
                  }
                  if ((uVar5 < DAT_05326ec0) &&
                     (*(short *)(DAT_05326ec8 + (long)(int)uVar5 * 2) == 0x35)) {
                    FUN_028166e0(param_1 + 0x11b0,PTR_DAT_04bb37e0,0,0xffffffff);
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar28 = PTR_DAT_04bb2020;
    if (*param_2 == 0) goto LAB_027ef56c;
  }
  if ((*(char *)((long)param_2 + 0x12) == '\x02') && (*(byte *)((long)param_2 + 0x13) - 1 < 0xe)) {
    lVar22 = param_2[2];
    puVar2 = puVar28 + 0x10;
    local_90 = "LastPlayValentineYear";
    local_98 = puVar2;
    iVar14 = FUN_0274ce10(param_3,&local_98);
    if (iVar14 != (short)lVar22) {
      local_90 = "ValentineLetterFlag";
      local_98 = puVar2;
      FUN_0274d104(param_3,&local_98,0);
      local_90 = "LastPlayValentineYear";
      local_98 = puVar2;
      FUN_0274d104(param_3,&local_98,(long)(short)param_2[2]);
    }
  }
LAB_027ef5e8:
  FUN_02209d10(param_3);
  FUN_021e6e40(param_3);
  if (((char)param_2[5] != '\0') || ((short)param_2[2] != (short)param_2[3])) {
    local_90 = "TtlBFirstTalkFlag";
    local_98 = puVar28 + 0x10;
    FUN_0274d104(param_3,&local_98,0);
    local_90 = "MuseumCafe_Tel_CalledThisYearXct";
    local_98 = puVar28 + 0x10;
    FUN_0274d104(param_3,&local_98,0);
  }
  return;
}

