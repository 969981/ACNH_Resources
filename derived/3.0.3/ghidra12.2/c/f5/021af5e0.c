
void FUN_021af5e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined *puVar5;
  char cVar6;
  short sVar7;
  undefined *puVar8;
  bool bVar9;
  undefined1 uVar10;
  byte bVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  char *pcVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long *plVar23;
  undefined **ppuVar24;
  ulong uVar25;
  char cVar26;
  ulong *puVar27;
  byte bVar28;
  uint *puVar29;
  int *piVar30;
  long lVar31;
  ulong uVar32;
  undefined8 *puVar33;
  uint *puVar34;
  long *plVar35;
  ulong uVar36;
  uint local_20c;
  ulong local_200;
  undefined8 local_1f0;
  undefined *local_1e0;
  char *pcStack_1d8;
  undefined *local_1d0;
  char *pcStack_1c8;
  undefined *local_1c0;
  char *pcStack_1b8;
  undefined *local_1b0;
  char *pcStack_1a8;
  undefined *local_1a0;
  char *pcStack_198;
  undefined *local_190;
  char *pcStack_188;
  undefined *local_180;
  char *pcStack_178;
  undefined *local_170;
  char *pcStack_168;
  undefined *local_160;
  char *pcStack_158;
  undefined *local_150;
  char *pcStack_148;
  undefined *local_140;
  char *local_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 local_b0;
  byte local_af;
  undefined8 *local_a8;
  uint *local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  undefined1 auStack_69 [9];
  
  puVar5 = PTR_DAT_04bb6298;
  sVar7 = *(short *)PTR_DAT_04bb6298;
  if (sVar7 == -1) {
    return;
  }
  local_140 = (undefined *)CONCAT44(local_140._4_4_,3);
  puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
  if (0xff < (uint)(int)sVar7) {
    puVar3 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar3 >> 3 & 1) == 0) {
    return;
  }
  uVar14 = *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80);
  if (1 < uVar14) {
    return;
  }
  lVar31 = *(long *)PTR_DAT_04bb32f0;
  if (lVar31 == 0) {
LAB_021af6e8:
    puVar8 = PTR_DAT_04bb32e8;
    puVar2 = PTR_DAT_04bb2020;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_138 = "Fireworks1";
    puVar27 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    local_140 = puVar1;
    if (*(short *)puVar27 == 0) {
      local_c0 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)((ulong)local_c0 >> 0x20) < '\x05') {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
        local_a8 = (undefined8 *)(lVar19 + -0x15180);
        local_c0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
      }
      puVar27 = &local_c0;
      uVar25 = (ulong)local_c0 >> 0x30;
      local_c0._0_6_ = CONCAT24(5,(undefined4)local_c0);
      local_c0 = (undefined *)(CONCAT26((short)uVar25,(undefined6)local_c0) & 0xff00ffffffffffff);
    }
    uVar25 = *puVar27;
    uVar14 = FUN_00879dd0(lVar31,&local_140,uVar25,uVar25 >> 0x10,uVar25 >> 0x18,0);
    local_138 = "Easter";
    puVar27 = (ulong *)(*(long *)puVar8 + 0x4068);
    local_140 = puVar1;
    if (*(short *)puVar27 == 0) {
      local_c0 = *(undefined **)(*(long *)puVar8 + 0x4060);
      if ((char)((ulong)local_c0 >> 0x20) < '\x05') {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
        local_a8 = (undefined8 *)(lVar19 + -0x15180);
        local_c0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
      }
      puVar27 = &local_c0;
      uVar25 = (ulong)local_c0 >> 0x30;
      local_c0._0_6_ = CONCAT24(5,(undefined4)local_c0);
      local_c0 = (undefined *)(CONCAT26((short)uVar25,(undefined6)local_c0) & 0xff00ffffffffffff);
    }
    uVar25 = *puVar27;
    uVar15 = FUN_00879dd0(lVar31,&local_140,uVar25,uVar25 >> 0x10,uVar25 >> 0x18,0);
    puVar2 = puVar2 + 0x10;
    local_138 = "Halloween";
    puVar27 = (ulong *)(*(long *)puVar8 + 0x4068);
    local_140 = puVar2;
    if (*(short *)puVar27 == 0) {
      local_c0 = *(undefined **)(*(long *)puVar8 + 0x4060);
      if ((char)((ulong)local_c0 >> 0x20) < '\x05') {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
        local_a8 = (undefined8 *)(lVar19 + -0x15180);
        local_c0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
      }
      puVar27 = &local_c0;
      uVar25 = (ulong)local_c0 >> 0x30;
      local_c0._0_6_ = CONCAT24(5,(undefined4)local_c0);
      local_c0 = (undefined *)(CONCAT26((short)uVar25,(undefined6)local_c0) & 0xff00ffffffffffff);
    }
    uVar25 = *puVar27;
    uVar16 = FUN_00879dd0(lVar31,&local_140,uVar25,uVar25 >> 0x10,uVar25 >> 0x18,0);
    local_138 = "XmasEve";
    puVar27 = (ulong *)(*(long *)puVar8 + 0x4068);
    local_140 = puVar2;
    if (*(short *)puVar27 == 0) {
      local_c0 = *(undefined **)(*(long *)puVar8 + 0x4060);
      if ((char)((ulong)local_c0 >> 0x20) < '\x05') {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
        local_a8 = (undefined8 *)(lVar19 + -0x15180);
        local_c0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
      }
      puVar27 = &local_c0;
      uVar25 = (ulong)local_c0 >> 0x30;
      local_c0._0_6_ = CONCAT24(5,(undefined4)local_c0);
      local_c0 = (undefined *)(CONCAT26((short)uVar25,(undefined6)local_c0) & 0xff00ffffffffffff);
    }
    uVar25 = *puVar27;
    uVar17 = FUN_00879dd0(lVar31,&local_140,uVar25,uVar25 >> 0x10,uVar25 >> 0x18,0);
    if (((uVar14 | uVar15 | uVar16 | uVar17) & 1) == 0) {
      return;
    }
  }
  else if (((*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x28) == 0) || (uVar14 != 1)) &&
          (local_140 = (undefined *)CONCAT44(local_140._4_4_,0x20), (puVar3[1] & 1) == 0)) {
    local_140 = PTR_DAT_04bb2020 + 0x10;
    local_138 = "TodayGlobalEventId";
    iVar13 = FUN_0273ea30(&local_140);
    if (iVar13 != 0xffff) goto LAB_021af6e8;
  }
  iVar13 = FUN_00883634(lVar31);
  if (0 < iVar13) {
    local_140 = PTR_DAT_04bb2020 + 0x10;
    local_138 = "Fireworks1";
    puVar27 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)puVar27 == 0) {
      local_c0 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)((ulong)local_c0 >> 0x20) < '\x05') {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
        local_a8 = (undefined8 *)(lVar19 + -0x15180);
        local_c0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
      }
      puVar27 = &local_c0;
      uVar25 = (ulong)local_c0 >> 0x30;
      local_c0._0_6_ = CONCAT24(5,(undefined4)local_c0);
      local_c0 = (undefined *)(CONCAT26((short)uVar25,(undefined6)local_c0) & 0xff00ffffffffffff);
    }
    uVar25 = *puVar27;
    uVar25 = FUN_00879dd0(lVar31,&local_140,uVar25,uVar25 >> 0x10,uVar25 >> 0x18,0);
    if ((uVar25 & 1) != 0) {
      return;
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  local_140 = PTR_DAT_04bb2020 + 0x10;
  local_138 = "Halloween";
  iVar13 = FUN_008841f4(lVar31,&local_140);
  if (iVar13 == 1) {
    return;
  }
  puVar3 = (uint *)(param_1 + 0x55d2c);
  uVar14 = *puVar3;
  if (9 < uVar14) {
    local_140._0_4_ = 1;
    if ((*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) >> 1 & 1) != 0) {
      return;
    }
    FUN_025196e4(auStack_69);
    iVar13 = FUN_00a74b78(auStack_69);
    local_140 = (undefined *)CONCAT44(local_140._4_4_,iVar13);
    if (iVar13 != 0x13) {
      return;
    }
    FUN_038e7ea0(&local_7c);
    pcVar20 = (char *)FUN_0265afd0();
    uVar25 = 0xffffffff;
    if (pcVar20 == (char *)0x0) {
      local_200 = 0xffffffff;
    }
    else {
      local_130 = CONCAT71(local_130._1_7_,1);
      local_138 = pcVar20;
      if (*(long **)(pcVar20 + 0x28) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar21 = (undefined8 *)**(long **)(pcVar20 + 0x28);
        uVar10 = 0;
        if (puVar21 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar21)();
        }
      }
      local_130 = CONCAT62(local_130._2_6_,CONCAT11(uVar10,(undefined1)local_130)) &
                  0xffffffffffff01ff;
      puVar5 = PTR_DAT_04bb4dc8 + 0x10;
      cVar26 = *(char *)(*(long *)(pcVar20 + 0x10) + *(long *)(pcVar20 + 8) + 0x1e335d);
      local_140 = puVar5;
      FUN_02640184(&local_140);
      local_130 = CONCAT71(local_130._1_7_,1);
      if (*(long **)(pcVar20 + 0x28) == (long *)0x0) {
        uVar10 = 0;
        local_138 = pcVar20;
      }
      else {
        puVar21 = (undefined8 *)**(long **)(pcVar20 + 0x28);
        uVar10 = 0;
        local_138 = pcVar20;
        if (puVar21 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar21)();
        }
      }
      local_130 = CONCAT62(local_130._2_6_,CONCAT11(uVar10,(undefined1)local_130)) &
                  0xffffffffffff01ff;
      cVar6 = *(char *)(*(long *)(pcVar20 + 0x10) + *(long *)(pcVar20 + 8) + 0x1e3362);
      local_140 = puVar5;
      FUN_02640184(&local_140);
      local_200 = (long)cVar6 & 0xffffffff;
      uVar25 = (long)cVar26 & 0xffffffff;
    }
    local_20c = 0;
    local_1f0 = 0;
    uVar36 = (ulong)DAT_0540578c;
    uVar32 = 0;
    local_80 = 0;
    puVar21 = (undefined8 *)(PTR_DAT_04bb67b0 + 0x10);
    puVar5 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb6ac8 + 0x10;
    do {
      if (((*(char *)(param_1 + uVar32 * 0xba0 + 0xaf9) != '\0') && (uVar32 != uVar36)) &&
         ((*(char *)(param_1 + uVar32 * 0xba0 + 0x4e1) != '\0' &&
          ((2 < *(int *)(param_1 + uVar32 * 0xba0 + 0x4e8) - 2U &&
           (lVar31 = FUN_0265cf70(uVar32 & 0xffffffff,auStack_69), lVar31 != 0)))))) {
        uVar14 = (uint)uVar32;
        local_98 = PTR_FUN_04bb67b8;
        uStack_90 = 0;
        local_a0 = &local_84;
        iVar13 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
        local_a8 = puVar21;
        local_84 = uVar14;
        if (iVar13 != 0) {
          puVar33 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
          lVar19 = (long)iVar13 << 3;
          do {
            puVar34 = (uint *)*puVar33;
            uVar22 = (*(code *)*local_a8)(&local_a8,puVar34);
            if ((uVar22 & 1) != 0) goto LAB_021aff58;
            puVar33 = puVar33 + 1;
            lVar19 = lVar19 + -8;
          } while (lVar19 != 0);
        }
        puVar34 = (uint *)PTR_DAT_04bb3238;
LAB_021aff58:
        lVar19 = *(long *)PTR_DAT_04bb27c0;
        if (lVar19 != 0) {
          uVar15 = *puVar34;
          if ((((uVar15 == 0) ||
               (plVar35 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                                    ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar35 == (long *)0x0)) ||
              ((*(uint *)(plVar35 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar35 + 0x46) != uVar15))
          {
            plVar35 = (long *)0x0;
          }
          if (*(int *)(lVar19 + 0x288) == 1 || *(int *)(lVar19 + 0x288) == -1) {
            plVar23 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar19 = *(long *)PTR_DAT_04bb27c0;
            iVar13 = (**(code **)(*plVar23 + 0x60))();
            if (iVar13 < 0x11) {
              uVar15 = 1;
            }
            else {
              if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_021b0000;
              uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_021b0000:
            uVar15 = 0;
          }
          if (plVar35 != (long *)0x0) {
            lVar19 = plVar35[0x2a];
            if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar13 != 0)) {
              *(undefined **)PTR_DAT_04bb37d0 = puVar5;
              __cxa_guard_release(PTR_DAT_04bb37d8);
            }
            uVar22 = (**(code **)(*plVar35 + 0x20))(plVar35,PTR_DAT_04bb37d0);
            uVar16 = 0;
            if ((int)lVar19 == 1) {
              uVar16 = uVar15;
            }
            if ((((uVar22 & 1) != 0) && (uVar16 != 0)) && ((int)plVar35[0xea] == 0)) {
              local_b0 = 1;
              local_b8 = lVar31;
              if (*(long **)(lVar31 + 0x28) == (long *)0x0) {
                bVar11 = 0;
              }
              else {
                puVar33 = (undefined8 *)**(long **)(lVar31 + 0x28);
                bVar11 = 0;
                if (puVar33 != (undefined8 *)0x0) {
                  bVar11 = (**(code **)*puVar33)();
                }
              }
              local_af = bVar11 & 1;
              lVar19 = param_1 + uVar32 * 0xba0;
              local_e0 = *(undefined8 *)(lVar19 + 0x878);
              uStack_d8 = *(undefined8 *)(lVar19 + 0x880);
              local_d0 = *(undefined8 *)(lVar19 + 0x888);
              uStack_c8 = *(undefined8 *)(lVar19 + 0x890);
              local_100 = *(undefined8 *)(lVar19 + 0x858);
              uStack_f8 = *(undefined8 *)(lVar19 + 0x860);
              local_f0 = *(undefined8 *)(lVar19 + 0x868);
              uStack_e8 = *(undefined8 *)(lVar19 + 0x870);
              local_120 = *(undefined8 *)(lVar19 + 0x838);
              uStack_118 = *(undefined8 *)(lVar19 + 0x840);
              local_110 = *(undefined8 *)(lVar19 + 0x848);
              uStack_108 = *(undefined8 *)(lVar19 + 0x850);
              local_140 = *(undefined **)(lVar19 + 0x818);
              local_138 = *(char **)(lVar19 + 0x820);
              local_130 = *(ulong *)(lVar19 + 0x828);
              uStack_128 = *(undefined8 *)(lVar19 + 0x830);
              local_c0 = puVar2;
              if (*(char *)(param_1 + 0x55df9) == '\0') {
                if (*(char *)(param_1 + 0x55dfa) != '\0') {
                  local_1e0 = puVar1 + 0x10;
                  pcStack_1d8 = "EasterRecipeTalk";
                  iVar13 = FUN_021965b0(&local_140,&local_1e0);
                  if (iVar13 == 0) goto LAB_021b0164;
                  goto LAB_021b0358;
                }
LAB_021b0164:
                if (*(char *)(param_1 + 0x55e4c) != '\0') {
                  ppuVar24 = &local_150;
                  pcStack_148 = "ChristmasApproachTalk";
                  local_150 = puVar1 + 0x10;
LAB_021b0184:
                  iVar13 = FUN_021965b0(&local_140,ppuVar24);
                  if (iVar13 != 0) goto LAB_021b0358;
                }
              }
              else {
                if ((uVar32 == uVar25) && (uVar32 != local_200)) {
                  ppuVar24 = &local_150;
                  lVar31 = *(long *)(lVar31 + 0x10) + *(long *)(lVar31 + 8);
                  local_150 = puVar1 + 0x10;
                  pcStack_148 = "NextMoveOutTalk";
LAB_021b01d8:
                  iVar13 = FUN_02746e10(lVar31,ppuVar24);
                  bVar9 = iVar13 == 0;
LAB_021b01e4:
                  uVar12 = FUN_021d7160(uVar32 & 0xffffffff,auStack_69);
                  if (uVar12 < 0x28) {
                    if (!bVar9) goto LAB_021b0268;
                  }
                  else if (!bVar9) goto LAB_021b0358;
                }
                else {
                  if (uVar32 == local_200) {
                    pcStack_148 = "NextMoveOutTalk";
                    local_150 = puVar1 + 0x10;
                    iVar13 = FUN_02746e10(*(long *)(lVar31 + 0x10) + *(long *)(lVar31 + 8),
                                          &local_150);
                    if (iVar13 != 0) {
                      ppuVar24 = &local_160;
                      lVar31 = *(long *)(lVar31 + 0x10) + *(long *)(lVar31 + 8);
                      pcStack_158 = "MoveCancelTalk";
                      local_160 = puVar1 + 0x10;
                      goto LAB_021b01d8;
                    }
                    bVar9 = false;
                    goto LAB_021b01e4;
                  }
                  uVar12 = FUN_021d7160(uVar32 & 0xffffffff,auStack_69);
                  if (0x27 < uVar12) goto LAB_021b0358;
LAB_021b0268:
                  pcStack_148 = "MarketBuildingTalk";
                  local_150 = puVar1 + 0x10;
                  iVar13 = FUN_021965b0(&local_140,&local_150);
                  if (iVar13 == 0) {
                    pcStack_158 = "EmoticonGetTalk";
                    local_160 = puVar1 + 0x10;
                    iVar13 = FUN_021965b0(&local_140,&local_160);
                    if (iVar13 == 0) {
                      pcStack_168 = "IslandRepTalk";
                      local_170 = puVar1 + 0x10;
                      iVar13 = FUN_021965b0(&local_140,&local_170);
                      if (iVar13 == 0) {
                        pcStack_178 = "AppWelcomeMigrantsTalk";
                        local_180 = puVar1 + 0x10;
                        iVar13 = FUN_021965b0(&local_140,&local_180);
                        if (iVar13 == 0) {
                          pcStack_188 = "EasterRecipeTalk";
                          local_190 = puVar1 + 0x10;
                          iVar13 = FUN_021965b0(&local_140,&local_190);
                          if (iVar13 == 0) {
                            pcStack_198 = "ChristmasApproachTalk";
                            local_1a0 = puVar1 + 0x10;
                            iVar13 = FUN_021965b0(&local_140,&local_1a0);
                            if (iVar13 == 0) {
                              pcStack_1a8 = "FortuneApproach";
                              local_1b0 = puVar1 + 0x10;
                              iVar13 = FUN_021965b0(&local_140,&local_1b0);
                              if (iVar13 == 0) {
                                pcStack_1b8 = "MileTourTicketSupportTalk";
                                local_1c0 = puVar1 + 0x10;
                                iVar13 = FUN_021965b0(&local_140,&local_1c0);
                                if (iVar13 == 0) {
                                  local_1d0 = puVar1 + 0x10;
                                  pcStack_1c8 = "AppFirstTalk";
                                  ppuVar24 = &local_1d0;
                                  goto LAB_021b0184;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
LAB_021b0358:
                  local_150 = puVar1 + 0x10;
                  pcStack_148 = "LastApproachVillagerIndex";
                  uVar22 = FUN_0274bce0(auStack_69,&local_150);
                  if ((uVar32 + 1 == (uVar22 & 0xffffffff)) &&
                     (uVar22 = FUN_021ae710(param_1,auStack_69,uVar32 & 0xffffffff),
                     (uVar22 & 1) != 0)) goto LAB_021afe90;
                }
                if ((local_1f0 & 0x100000000) == 0) {
                  local_80 = 0xffffffff;
                  FUN_021ebc40(&local_80,0,1,0);
                }
                if ((local_80 >> (ulong)(uVar14 & 0x1f) & 1) != 0) {
                  local_150 = puVar1 + 0x10;
                  pcStack_148 = "AppFirstTalk";
                  iVar13 = FUN_021965b0(&local_140,&local_150);
                  if (iVar13 != 0) {
                    uVar16 = local_7c ^ local_7c << 0xb;
                    local_7c = uStack_78;
                    uStack_78 = local_74;
                    uVar15 = (int)local_1f0 + 1;
                    local_1f0 = (ulong)uVar15;
                    uVar16 = uVar16 >> 8 ^ uStack_70 >> 0x13 ^ uVar16 ^ uStack_70;
                    local_74 = uStack_70;
                    uStack_70 = uVar16;
                    if (((ulong)uVar16 * (ulong)uVar15 & 0xffffffff00000000) == 0) {
                      *puVar3 = uVar14;
                    }
                  }
                  if ((int)local_1f0 == 0) {
                    uVar15 = local_7c ^ local_7c << 0xb;
                    local_7c = uStack_78;
                    uStack_78 = local_74;
                    local_20c = local_20c + 1;
                    uVar15 = uVar15 >> 8 ^ uStack_70 >> 0x13 ^ uVar15 ^ uStack_70;
                    local_74 = uStack_70;
                    uStack_70 = uVar15;
                    if (((ulong)uVar15 * (ulong)local_20c & 0xffffffff00000000) == 0) {
                      local_1f0 = 0;
                      *puVar3 = uVar14;
                    }
                    else {
                      local_1f0 = 0;
                    }
                  }
                }
                local_1f0 = CONCAT44(1,(int)local_1f0);
              }
LAB_021afe90:
              FUN_02640184(&local_c0);
            }
          }
        }
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != 10);
    if (*puVar3 < 10) {
      lVar31 = param_1 + (ulong)*puVar3 * 0xba0;
      *(undefined1 *)(lVar31 + 0x4c8) = 0x20;
      *(undefined1 *)(lVar31 + 0x4e1) = 0;
    }
    goto LAB_021afb78;
  }
  lVar31 = param_1 + (ulong)uVar14 * 0xba0;
  pbVar4 = (byte *)(lVar31 + 0x4c8);
  if ((*(char *)(lVar31 + 0xaf9) == '\0') || (*pbVar4 < 0x20)) {
    uVar15 = uVar14;
LAB_021afadc:
    lVar31 = param_1 + (ulong)uVar15 * 0xba0;
    if (9 < uVar15) {
      lVar31 = param_1;
    }
    if (*(char *)(lVar31 + 0xaf9) != '\0') {
      *(undefined4 *)(lVar31 + 0x4e8) = 0;
      *(undefined4 *)(lVar31 + 0x4ee) = 0x101;
      *(undefined2 *)(lVar31 + 0x4ec) = 0;
      *(undefined1 *)(lVar31 + 0x4f2) = 0;
      *(undefined1 *)(lVar31 + 0x4f4) = 0;
      *(undefined4 *)(lVar31 + 0x898) = 0xffffffff;
      *(undefined1 *)(lVar31 + 0x89c) = 0xff;
      FUN_0219be30(lVar31);
      FUN_020ee34c((long)*(char *)(lVar31 + 0xaf8),0,0);
      *(undefined4 *)(lVar31 + 0x4dc) = 0;
    }
    *puVar3 = 0xffffffff;
  }
  else {
    local_140 = (undefined *)CONCAT44(local_140._4_4_,uVar14);
    lVar31 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar14 * 0x15;
    if (0x6c < uVar14) {
      lVar31 = *(long *)PTR_DAT_04bb4760;
    }
    uVar25 = FUN_020e9b90(lVar31,*(undefined2 *)puVar5);
    uVar15 = *puVar3;
    if ((uVar25 & 1) == 0) {
      if (-1 < (int)uVar15) {
        goto LAB_021afadc;
      }
    }
    else if (uVar15 < 10) goto LAB_021afb78;
  }
  bVar11 = *pbVar4;
  if (0x1f < bVar11) {
    bVar28 = bVar11 >> 1;
    if (0x1e < bVar28) {
      bVar28 = 0x1f;
    }
    *pbVar4 = bVar28;
    lVar31 = param_1 + (ulong)uVar14 * 0xba0;
    *(bool *)(lVar31 + 0x4e1) = 0x3f < bVar11;
    *(undefined4 *)(lVar31 + 0x4cc) = 0;
  }
LAB_021afb78:
  puVar5 = PTR_DAT_04bb6380;
  uVar25 = 0;
  do {
    if (((uVar25 != *puVar3) && (*(char *)(param_1 + uVar25 * 0xba0 + 0xaf9) != '\0')) &&
       (lVar31 = param_1 + uVar25 * 0xba0, *(char *)(lVar31 + 0x4e1) != '\0')) {
      pbVar4 = (byte *)(lVar31 + 0x4c8);
      *(undefined1 *)(lVar31 + 0x4e1) = 0;
      *pbVar4 = 0x20;
      lVar19 = *(long *)PTR_DAT_04bb2208;
      uVar18 = FUN_006bd550("MarketBuildingTalk",0);
      local_140 = (undefined *)CONCAT44(local_140._4_4_,uVar18);
      puVar34 = (uint *)FUN_021cb820(lVar19 + 0x660,&local_140);
      if (puVar34 == (uint *)0x0) {
LAB_021afb9c:
        bVar11 = *pbVar4 >> 1;
        if (0x1e < bVar11) {
          bVar11 = 0x1f;
        }
        bVar9 = 0x3f < *pbVar4;
      }
      else {
        pcVar20 = (char *)(param_1 + uVar25 * 0xba0 + 0x818);
        if (*puVar34 != 0) {
          cVar26 = *PTR_DAT_04bb6378;
          do {
            if (cVar26 == '\0') {
              cVar26 = '\x01';
              *PTR_DAT_04bb6378 = 1;
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar14 = *(uint *)(puVar5 + 8);
              if (-1 < (int)uVar14) {
                if (((ushort *)((ulong)uVar14 + (long)puVar34) != (ushort *)0x0) &&
                   (uVar12 = *(ushort *)((ulong)uVar14 + (long)puVar34), uVar12 < 0x80)) {
                  pcVar20 = pcVar20 + uVar12;
                }
                break;
              }
              if (uVar14 != 0xffffffff) break;
            }
            puVar29 = (uint *)(ulong)*puVar34;
            if ((*puVar34 == 0) || (puVar34 == puVar29)) break;
            lVar19 = 0xc;
            if (*(char *)((long)puVar34 + (10 - (long)puVar29)) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)puVar34 + (lVar19 - (long)puVar29);
            if (lVar19 == 0) break;
            uVar32 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar29));
            *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
            if (uVar32 == 0) break;
            piVar30 = (int *)(lVar19 + 4);
            while (piVar30[-1] != 0x54706054) {
              piVar30 = piVar30 + 2;
              uVar32 = uVar32 - 1;
              if (uVar32 == 0) goto LAB_021afd34;
            }
            iVar13 = 0;
            if (*piVar30 != -1) {
              iVar13 = *piVar30;
            }
            *(int *)(puVar5 + 8) = iVar13;
            if (*puVar34 == 0) break;
          } while( true );
        }
LAB_021afd34:
        if (*pcVar20 == '\0') goto LAB_021afb9c;
        uVar15 = (uint)*pbVar4 - (uint)(*pbVar4 >> 2);
        uVar14 = uVar15;
        if (0x1e < uVar15) {
          uVar14 = 0x1f;
        }
        bVar11 = (byte)uVar14 & ((byte)((int)uVar15 >> 0x1f) ^ 0xff);
        bVar9 = 0x1f < (int)uVar15;
      }
      *pbVar4 = bVar11;
      *(undefined1 *)(lVar31 + 0x4e1) = bVar9;
      *(undefined4 *)(param_1 + uVar25 * 0xba0 + 0x4cc) = 0;
    }
    uVar25 = uVar25 + 1;
    if (uVar25 == 10) {
      return;
    }
  } while( true );
}

