
/* WARNING: Removing unreachable block (ram,0x02853fb0) */

void FUN_02853eb0(ulong *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined *puVar19;
  long *plVar20;
  undefined8 local_d0;
  char *local_c8;
  undefined1 local_c0;
  byte local_bf;
  undefined *local_b8;
  char *pcStack_b0;
  byte local_a8 [4];
  undefined4 local_a4;
  undefined2 local_a0;
  byte local_9c [4];
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined *local_88;
  char *local_80;
  undefined1 local_78;
  byte local_77;
  uint local_6c;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_04bb2020;
  DAT_055a345c = param_3 != (long *)0x0;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "QuestReserveStart";
  uVar11 = FUN_0273f0a0(&local_88);
  plVar20 = (long *)PTR_DAT_04bb32e8;
  puVar1 = PTR_DAT_04bb27d0;
  if ((uVar11 & 1) == 0) {
    return;
  }
  lVar16 = *(long *)PTR_DAT_04bb27d0;
  if (lVar16 == 0) {
    return;
  }
  if ((*(long *)(lVar16 + 0x10) != 0) &&
     (local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000),
     (*(uint *)(PTR_DAT_04bc1240 + 8) & 1) != 0)) {
    return;
  }
  if (1 < *(uint *)(lVar16 + 0x80)) {
    return;
  }
  lVar16 = *(long *)PTR_DAT_04bb32f0;
  local_68 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)(local_68 >> 0x20) < '\x05') {
    lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_88 = (undefined *)(lVar12 + -0x15180);
    uVar11 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
    local_68 = uVar11;
  }
  uVar15 = local_68;
  uVar17 = local_68 >> 0x30;
  uVar5 = (undefined4)local_68;
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68 = CONCAT26((short)uVar17,(undefined6)local_68) & 0xff00ffffffffffff;
  if (lVar16 == 0) {
    return;
  }
  local_d0._7_1_ = (undefined1)(uVar15 >> 0x38);
  local_d0._0_7_ = (uint7)CONCAT24(5,uVar5);
  uVar11 = FUN_0087312c(uVar11,local_68,local_68 >> 0x10,local_68 >> 0x18);
  if ((uVar11 & 1) != 0) {
    return;
  }
  lVar16 = *(long *)puVar1;
  if (((lVar16 == 0) || (*(long *)(lVar16 + 0x28) == 0)) || (*(int *)(lVar16 + 0x80) != 1)) {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
      if (0xff < (uint)(int)sVar2) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_0285407c;
    }
    local_88 = puVar4 + 0x10;
    local_80 = "TodayGlobalEventId";
    iVar9 = FUN_0273ea30(&local_88);
    if (iVar9 != 0xffff) {
      return;
    }
  }
LAB_0285407c:
  local_6c = 0;
  pcVar13 = (char *)FUN_0265afd0();
  if (pcVar13 != (char *)0x0) {
    local_78 = 1;
    local_80 = pcVar13;
    if (*(long **)(pcVar13 + 0x28) == (long *)0x0) {
      local_77 = 0;
    }
    else {
      puVar14 = (undefined8 *)**(long **)(pcVar13 + 0x28);
      local_77 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        local_77 = (**(code **)*puVar14)();
      }
    }
    local_77 = local_77 & 1;
    local_90 = *(undefined8 *)(*plVar20 + 0x4060);
    local_88 = PTR_DAT_04bb4dc8 + 0x10;
    FUN_00a80e48(&local_90);
    FUN_02507c6c(local_9c,1,1,0,0);
    uVar11 = 0;
    puVar1 = PTR_DAT_04bb4c18 + 0x10;
    puVar19 = PTR_DAT_04bc27f0;
    do {
      lVar16 = *(long *)(pcVar13 + 0x10) + *(long *)(pcVar13 + 8);
      if (uVar11 == ((long)*(char *)(lVar16 + 0x1e335d) & 0xffffffffU)) {
        bVar6 = uVar11 != ((long)*(char *)(lVar16 + 0x1e3362) & 0xffffffffU);
      }
      else {
        bVar6 = false;
      }
      pbVar18 = (byte *)(lVar16 + uVar11 * 0x13230);
      uVar17 = (ulong)*pbVar18;
      if (uVar17 < 0x23) {
        bVar8 = pbVar18[1];
        if (bVar8 <= (byte)puVar19[uVar17]) {
          if ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(bVar8 & 0x1f) & 1) != 0) {
            lVar12 = lVar16 + uVar11 * 0x13230 + 0x1267c;
            local_c8 = "MoveInCompletion";
            local_d0 = puVar4 + 0x10;
            iVar9 = FUN_02749340(lVar12,&local_d0);
            puVar19 = PTR_DAT_04bc27f0;
            if ((iVar9 != 0) && (*(char *)(lVar16 + uVar11 * 0x13230 + 0x1267a) == '\0')) {
              local_d0 = puVar4 + 0x10;
              local_c8 = "NnpcHouseBuiltToday";
              iVar9 = FUN_02749340(lVar12,&local_d0);
              if (iVar9 != 0) {
                bVar6 = true;
              }
              puVar19 = PTR_DAT_04bc27f0;
              if (!bVar6) {
                local_a4 = local_98;
                local_a0 = local_94;
                local_a8[0] = 0xff;
                if (local_9c[0] < 8) {
                  local_a8[0] = local_9c[0];
                }
                lVar16 = lVar16 + uVar11 * 0x13230 + 4;
                if (local_9c[0] < 8) {
                  bVar6 = false;
                  do {
                    uVar10 = FUN_021d7030(uVar11 & 0xffffffff,local_a8);
                    if (-1 < (int)uVar10) {
                      local_c8 = "FirstMeetGreetAtThisVillage";
                      lVar12 = lVar16 + (ulong)uVar10 * 0x5f0;
                      if (7 < uVar10) {
                        lVar12 = lVar16;
                      }
                      local_d0 = puVar4 + 0x10;
                      iVar9 = FUN_02746e10(lVar12 + 0x38,&local_d0);
                      if (iVar9 == 0) {
                        bVar7 = false;
                      }
                      else {
                        pcStack_b0 = "FirstMeetGreetAtThisVillageToday";
                        local_b8 = puVar4 + 0x10;
                        iVar9 = FUN_02746e10(lVar12 + 0x38,&local_b8);
                        bVar7 = iVar9 == 0;
                      }
                      bVar6 = (bool)(bVar7 | bVar6);
                    }
                    bVar8 = local_a8[0];
                    uVar17 = (ulong)local_a8[0];
                    if ((7 < local_a8[0]) || (uVar17 + 1 == 8)) goto LAB_028542e8;
                    pbVar18 = PTR_DAT_04bb5038 + uVar17 + 1;
                    uVar15 = FUN_02507924(local_a8,pbVar18);
                    if ((uVar15 & 1) == 0) {
                      if (uVar17 + 2 == 8) goto LAB_028542e8;
                      pbVar18 = PTR_DAT_04bb5038 + uVar17 + 2;
                      uVar15 = FUN_02507924(local_a8,pbVar18);
                      if ((uVar15 & 1) == 0) {
                        if (uVar17 + 3 == 8) goto LAB_028542e8;
                        pbVar18 = PTR_DAT_04bb5038 + uVar17 + 3;
                        uVar15 = FUN_02507924(local_a8,pbVar18);
                        if ((uVar15 & 1) == 0) {
                          if (uVar17 + 4 == 8) goto LAB_028542e8;
                          pbVar18 = PTR_DAT_04bb5038 + uVar17 + 4;
                          uVar15 = FUN_02507924(local_a8,pbVar18);
                          if ((uVar15 & 1) == 0) {
                            if (uVar17 + 5 == 8) goto LAB_028542e8;
                            pbVar18 = PTR_DAT_04bb5038 + uVar17 + 5;
                            uVar15 = FUN_02507924(local_a8,pbVar18);
                            if ((uVar15 & 1) == 0) {
                              if (uVar17 + 6 == 8) goto LAB_028542e8;
                              pbVar18 = PTR_DAT_04bb5038 + uVar17 + 6;
                              uVar15 = FUN_02507924(local_a8,pbVar18);
                              if ((uVar15 & 1) == 0) {
                                if (uVar17 + 7 == 8) goto LAB_028542e8;
                                pbVar18 = PTR_DAT_04bb5038 + uVar17 + 7;
                                uVar15 = FUN_02507924(local_a8,pbVar18);
                                if ((uVar15 & 1) == 0) {
                                  if (bVar8 == 0) goto LAB_028542e8;
                                  pbVar18 = PTR_DAT_04bb5038 + uVar17 + 8;
                                  FUN_02507924(local_a8,pbVar18);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if (7 < *pbVar18) goto LAB_028542e8;
                    local_a8[0] = *pbVar18;
                  } while( true );
                }
                bVar6 = false;
LAB_028542e8:
                puVar19 = PTR_DAT_04bc27f0;
                if ((param_3 != (long *)0x0) && (!bVar6)) {
                  iVar9 = FUN_0252d29c();
                  puVar19 = PTR_DAT_04bc27f0;
                  if ((iVar9 != -1) && (*(long *)PTR_DAT_04bb46b0 != 0)) {
                    lVar12 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,iVar9);
                    puVar19 = PTR_DAT_04bc27f0;
                    if (lVar12 != 0) {
                      local_c8 = (char *)(lVar12 + 0x17b88);
                      local_c0 = 1;
                      if (*(long **)(lVar12 + 0x17bb0) == (long *)0x0) {
                        bVar8 = 0;
                      }
                      else {
                        puVar14 = (undefined8 *)**(long **)(lVar12 + 0x17bb0);
                        bVar8 = 0;
                        if (puVar14 != (undefined8 *)0x0) {
                          bVar8 = (**(code **)*puVar14)();
                        }
                      }
                      local_bf = bVar8 & 1;
                      local_d0 = puVar1;
                      uVar10 = FUN_021d7910(uVar11 & 0xffffffff,
                                            *(long *)(lVar12 + 0x17b98) +
                                            *(long *)(lVar12 + 0x17b90));
                      FUN_02640184(&local_d0);
                      puVar19 = PTR_DAT_04bc27f0;
                      if (-1 < (int)uVar10) {
                        local_c8 = "FirstMeetGreetAtThisVillage";
                        lVar12 = lVar16 + (ulong)uVar10 * 0x5f0;
                        if (7 < uVar10) {
                          lVar12 = lVar16;
                        }
                        local_d0 = puVar4 + 0x10;
                        iVar9 = FUN_02746e10(lVar12 + 0x38,&local_d0);
                        if (iVar9 == 0) {
                          bVar6 = false;
                          puVar19 = PTR_DAT_04bc27f0;
                        }
                        else {
                          pcStack_b0 = "FirstMeetGreetAtThisVillageToday";
                          local_b8 = puVar4 + 0x10;
                          iVar9 = FUN_02746e10(lVar12 + 0x38,&local_b8);
                          bVar6 = iVar9 == 0;
                          puVar19 = PTR_DAT_04bc27f0;
                        }
                      }
                    }
                  }
                }
                PTR_DAT_04bc27f0 = puVar19;
                if (bVar6) {
                  local_6c = local_6c | 1 << (ulong)((uint)uVar11 & 0x1f);
                }
              }
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 10);
    FUN_02640184(&local_88);
    plVar20 = (long *)PTR_DAT_04bb32e8;
  }
  uVar3 = local_6c;
  FUN_021ec000(&local_6c);
  FUN_021ebc40(&local_6c,0,0,0);
  local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  uVar11 = FUN_02853278(param_1,0);
  uVar10 = 0;
  if ((uVar11 & 1) != 0) {
    uVar10 = 1 << (ulong)((uint)local_88 & 0x1f);
    if (6 < (uint)local_88) {
      uVar10 = 0;
    }
  }
  local_88._0_4_ = 1;
  uVar11 = FUN_02853278(param_1,1);
  if (((uVar11 & 1) != 0) && ((uint)local_88 < 7)) {
    uVar10 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar10;
  }
  local_88._0_4_ = 2;
  uVar11 = FUN_02853278(param_1,2);
  if (((uVar11 & 1) != 0) && ((uint)local_88 < 7)) {
    uVar10 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar10;
  }
  local_88._0_4_ = 3;
  uVar11 = FUN_02853278(param_1,3);
  if (((uVar11 & 1) != 0) && ((uint)local_88 < 7)) {
    uVar10 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar10;
  }
  local_88._0_4_ = 4;
  uVar11 = FUN_02853278(param_1,4);
  if (((uVar11 & 1) != 0) && ((uint)local_88 < 7)) {
    uVar10 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar10;
  }
  local_88._0_4_ = 5;
  uVar11 = FUN_02853278(param_1,5);
  if (((uVar11 & 1) != 0) && ((uint)local_88 < 7)) {
    uVar10 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar10;
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,6);
  uVar11 = FUN_02853278(param_1,6);
  if (((uVar11 & 1) != 0) && ((uint)local_88 < 7)) {
    uVar10 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar10;
  }
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar10);
  local_88 = *(undefined **)(*plVar20 + 0x4060);
  if ((((ulong)local_88 & 0xffff) == 0) || ((*param_1 & 0xffff) == 0)) {
    lVar16 = 0;
  }
  else {
    local_d0 = (undefined *)*param_1;
    lVar16 = FUN_00a8255c(&local_88,&local_d0);
  }
  if (param_3 == (long *)0x0) {
    if (lVar16 < 0xe10) {
      DAT_055a345c = 0;
      return;
    }
    uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar10 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = local_6c - (local_6c >> 1 & 0x55555555);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
    uVar3 = uVar3 + (uVar3 >> 8);
    if ((uVar3 + (uVar3 >> 0x10) & 0x3f) < (uVar10 + (uVar10 >> 0x10) & 0x3f) + 1 >> 1) {
      DAT_055a345c = 0;
      return;
    }
  }
  else {
    if (0 < *param_3) {
      FUN_028548e0(param_1,&local_6c,param_2,&local_b8);
    }
    FUN_02854de0(param_1,&local_6c,&local_b8);
  }
  FUN_02855280(param_1,&local_6c,&local_b8,param_3 != (long *)0x0);
  *param_1 = (ulong)local_88;
  DAT_055a345c = 0;
  return;
}

