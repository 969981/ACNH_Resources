
undefined8 FUN_02172fc0(undefined8 param_1,uint *param_2,long *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  char cVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  short *psVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  byte bVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 local_b8;
  char *local_b0;
  undefined *local_a8;
  char *local_a0;
  int local_98;
  char local_94 [7];
  undefined1 local_8d;
  undefined8 local_88;
  char *local_80;
  undefined1 local_78;
  byte local_77;
  uint local_6c;
  undefined8 local_68;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar10 = FUN_006bd550(param_3[1],0);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar10);
  lVar14 = FUN_0079e4d0(param_1,&local_a8);
  if (lVar14 == 0) {
    return 0;
  }
  local_8d = 0;
  local_98 = 8;
  local_94[0] = '\0';
  local_a8 = PTR_DAT_04bb3768 + 0x10;
  local_a0 = local_94;
  (**(code **)(*param_3 + 0x18))(param_3);
  if (local_94 != (char *)param_3[1]) {
    iVar11 = 3;
    if (local_98 < 4) {
      iVar11 = local_98 + -1;
    }
    memcpy(local_94,(char *)param_3[1],(long)iVar11);
    local_94[iVar11] = '\0';
  }
  puVar2 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "rco";
  (**(code **)(local_a8 + 0x18))(&local_a8);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  pcVar7 = local_a0;
  (**(code **)(local_88 + 0x18))(&local_88);
  puVar5 = PTR_DAT_04bb32e8;
  if (pcVar7 == local_80) {
LAB_02173124:
    iVar11 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
    if (iVar11 == -0x6d41fcf3) {
      sVar4 = *(short *)PTR_DAT_04bbdeb0;
      if (sVar4 != -1) {
        local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x19 & 1) != 0) goto LAB_0217326c;
      }
    }
    else {
      sVar4 = *(short *)PTR_DAT_04bb6298;
      if (sVar4 != -1) {
        local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x19 & 1) != 0) {
LAB_0217326c:
          local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
          uVar22 = FUN_03772080();
          uVar12 = 2;
          if ((uVar22 & 1) != 0) {
            uVar12 = 3;
          }
          goto LAB_02173ef4;
        }
      }
      if (iVar11 == -0x78855454) {
        uVar12 = 0x39;
        goto LAB_02173ef4;
      }
    }
    lVar14 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0);
    psVar18 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*psVar18 == 0) {
      local_b8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)((ulong)local_b8 >> 0x20) < '\x05') {
        lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
        local_88 = (undefined *)(lVar16 + -0x15180);
        local_b8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
      }
      uVar22 = (ulong)local_b8 >> 0x30;
      local_b8._0_6_ = CONCAT24(5,(undefined4)local_b8);
      local_b8 = (undefined *)(CONCAT26((short)uVar22,(undefined6)local_b8) & 0xff00ffffffffffff);
      psVar18 = (short *)&local_b8;
    }
    local_88 = *(undefined **)psVar18;
    local_b8._4_4_ = (undefined4)((ulong)local_88 >> 0x20);
    local_b8._0_2_ = (short)local_88;
    local_b8._0_4_ = CONCAT22(0x1303,(short)local_b8);
    local_68._0_4_ = CONCAT22(0x130a,(short)local_b8);
    local_68 = CONCAT44(local_b8._4_4_,(undefined4)local_68);
    lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
    lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
    if (lVar15 < lVar16) {
      uVar12 = 0xffffffff;
    }
    else {
      lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
      uVar12 = (uint)(lVar15 != lVar16);
    }
    lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
    lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    if (lVar16 <= lVar15) {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    }
    bVar8 = ((int)uVar12 < 0 && lVar16 <= lVar15) ==
            (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1);
    if (iVar11 == 0x526b4f86 || lVar14 != 0) {
      uVar12 = 2;
      if (bVar8) {
        uVar12 = 3;
      }
    }
    else {
      uVar27 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_88 = puVar2 + 0x10;
      local_80 = "Countdown";
      puVar23 = (ulong *)(*(long *)puVar5 + 0x4068);
      if (*(short *)puVar23 == 0) {
        local_68 = *(ulong *)(*(long *)puVar5 + 0x4060);
        if ((char)(local_68 >> 0x20) < '\x05') {
          lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          local_b8 = (undefined *)(lVar14 + -0x15180);
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
        }
        puVar23 = &local_68;
        uVar22 = local_68 >> 0x30;
        local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
        local_68 = CONCAT26((short)uVar22,(undefined6)local_68) & 0xff00ffffffffffff;
      }
      uVar22 = *puVar23;
      uVar22 = FUN_00879dd0(uVar27,&local_88,uVar22,uVar22 >> 0x10,uVar22 >> 0x18,0);
      uVar17 = 2;
      if (bVar8) {
        uVar17 = 3;
      }
      uVar12 = 7;
      if ((uVar22 & 1) == 0) {
        uVar12 = uVar17;
      }
    }
    goto LAB_02173ef4;
  }
  uVar22 = 0;
  bVar8 = true;
  do {
    if (local_a0[uVar22] != local_80[uVar22]) break;
    if (local_a0[uVar22] == '\0') {
      if (bVar8) goto LAB_02173124;
      break;
    }
    bVar8 = uVar22 < 0x80000;
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x80001);
  local_88 = puVar2 + 0x10;
  local_80 = "sza";
  (**(code **)(local_a8 + 0x18))(&local_a8);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  pcVar7 = local_a0;
  (**(code **)(local_88 + 0x18))(&local_88);
  if (pcVar7 == local_80) {
LAB_02173494:
    iVar11 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
    if (iVar11 == -0x6d41fcf3) {
      sVar4 = *(short *)PTR_DAT_04bbdeb0;
      if (sVar4 != -1) {
        local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x19 & 1) != 0) goto LAB_02173730;
      }
      if (*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) != 0) {
LAB_021739cc:
        psVar18 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
        if (*psVar18 == 0) {
          local_b8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if ((char)((ulong)local_b8 >> 0x20) < '\x05') {
            lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
            local_88 = (undefined *)(lVar14 + -0x15180);
            local_b8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          psVar18 = (short *)&local_b8;
          uVar22 = (ulong)local_b8 >> 0x30;
          local_b8._0_6_ = CONCAT24(5,(undefined4)local_b8);
          local_b8 = (undefined *)
                     (CONCAT26((short)uVar22,(undefined6)local_b8) & 0xff00ffffffffffff);
        }
        local_88 = *(undefined **)psVar18;
        local_b8._4_4_ = (undefined4)((ulong)local_88 >> 0x20);
        local_b8._0_2_ = (short)local_88;
        local_b8._0_4_ = CONCAT22(0x1303,(short)local_b8);
        local_68._0_4_ = CONCAT22(0x130a,(short)local_b8);
        local_68 = CONCAT44(local_b8._4_4_,(undefined4)local_68);
        lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
        if (lVar16 < lVar14) {
          uVar12 = 0xffffffff;
        }
        else {
          lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
          uVar12 = (uint)(lVar16 != lVar14);
        }
        lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        if (lVar14 <= lVar16) {
          nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        }
        uVar12 = (uint)(((int)uVar12 < 0 && lVar14 <= lVar16) !=
                       (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1));
        goto LAB_02173ef4;
      }
LAB_0217351c:
      bVar8 = false;
    }
    else {
      sVar4 = *(short *)PTR_DAT_04bb6298;
      if (sVar4 != -1) {
        local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x19 & 1) != 0) {
LAB_02173730:
          local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
          uVar12 = FUN_03772080();
          uVar12 = uVar12 & 1;
          goto LAB_02173ef4;
        }
      }
      if (iVar11 == -0x78855454) {
        uVar12 = 0x3a;
        goto LAB_02173ef4;
      }
      if (*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) != 0) goto LAB_021739cc;
      if (iVar11 != 0x756a8ab7) goto LAB_0217351c;
      lVar14 = *(long *)PTR_DAT_04bb39b0;
      pbVar20 = PTR_DAT_04bb32e0;
      if (lVar14 == 0) {
LAB_0217421c:
        if (*pbVar20 < 8) goto LAB_02174294;
LAB_02174228:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0217428c:
          pbVar20 = PTR_DAT_04bb5038;
          goto LAB_02174294;
        }
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar21 = *(byte *)(lVar14 + 0x473);
        pbVar20 = PTR_DAT_04bb5038;
        if ((long)(char)bVar21 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
          if (7 < bVar21) {
            puVar1 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar20 = (byte *)(lVar14 + 0x471);
          }
        }
        bVar21 = *pbVar20;
        bVar8 = 7 < bVar21;
        if (bVar8) {
          bVar21 = 0xff;
        }
        local_b8 = (undefined *)CONCAT71(local_b8._1_7_,bVar21);
        if (bVar8) goto LAB_0217428c;
      }
      else {
        if (*(int *)(lVar14 + 0x15c) != 0) {
          pbVar20 = (byte *)(lVar14 + 0x158);
        }
        if (7 < *pbVar20) {
          if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_0217421c;
          }
          goto LAB_02174228;
        }
LAB_02174294:
        bVar21 = *pbVar20;
        if (7 < bVar21) {
          bVar21 = 0xff;
        }
        local_b8 = (undefined *)CONCAT71(local_b8._1_7_,bVar21);
      }
      local_88 = puVar2 + 0x10;
      local_80 = "TownNewsHeard1st";
      iVar11 = FUN_0274bce0(&local_b8,&local_88);
      bVar8 = iVar11 == 0;
    }
    puVar28 = PTR_DAT_04bb32f0;
    puVar5 = PTR_DAT_04bb32e8;
    uVar27 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_88 = puVar2 + 0x10;
    local_80 = "Countdown";
    puVar23 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)puVar23 == 0) {
      local_68 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_68 >> 0x20) < '\x05') {
        lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_b8 = (undefined *)(lVar14 + -0x15180);
        local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
      }
      puVar23 = &local_68;
      uVar22 = local_68 >> 0x30;
      local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
      local_68 = CONCAT26((short)uVar22,(undefined6)local_68) & 0xff00ffffffffffff;
    }
    uVar22 = *puVar23;
    uVar22 = FUN_00879dd0(uVar27,&local_88,uVar22,uVar22 >> 0x10,uVar22 >> 0x18,0);
    psVar18 = (short *)(*(long *)puVar5 + 0x4068);
    if (*psVar18 == 0) {
      local_b8 = *(undefined **)(*(long *)puVar5 + 0x4060);
      if ((char)((ulong)local_b8 >> 0x20) < '\x05') {
        lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
        local_88 = (undefined *)(lVar14 + -0x15180);
        local_b8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
      }
      psVar18 = (short *)&local_b8;
      uVar24 = (ulong)local_b8 >> 0x30;
      local_b8._0_6_ = CONCAT24(5,(undefined4)local_b8);
      local_b8 = (undefined *)(CONCAT26((short)uVar24,(undefined6)local_b8) & 0xff00ffffffffffff);
    }
    local_88 = *(undefined **)psVar18;
    local_b8._4_4_ = (undefined4)((ulong)local_88 >> 0x20);
    local_b8._0_2_ = (short)local_88;
    local_b8._0_4_ = CONCAT22(0x1303,(short)local_b8);
    local_68._0_4_ = CONCAT22(0x130a,(short)local_b8);
    local_68 = CONCAT44(local_b8._4_4_,(undefined4)local_68);
    lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
    lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
    if (lVar16 < lVar14) {
      uVar12 = 0xffffffff;
    }
    else {
      lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
      uVar12 = (uint)(lVar16 != lVar14);
    }
    lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
    lVar16 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    if (lVar14 <= lVar16) {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    }
    if ((uVar22 & 1) == 0) {
      uVar17 = (uint)(((int)uVar12 < 0 && lVar14 <= lVar16) !=
                     (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1));
      iVar11 = FUN_00883634(*(undefined8 *)puVar28);
      if ((bVar8) || (iVar11 < 0)) {
        uVar12 = uVar17 ^ 1;
      }
      else {
        uVar12 = 0x25;
        if (uVar17 == 0) {
          uVar12 = 0x26;
        }
      }
    }
    else {
      uVar12 = 6;
    }
    goto LAB_02173ef4;
  }
  uVar22 = 0;
  bVar8 = true;
  do {
    if (local_a0[uVar22] != local_80[uVar22]) break;
    if (local_a0[uVar22] == '\0') {
      if (bVar8) goto LAB_02173494;
      break;
    }
    bVar8 = uVar22 < 0x80000;
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x80001);
  local_88 = puVar2 + 0x10;
  local_80 = "rcm";
  (**(code **)(local_a8 + 0x18))(&local_a8);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  pcVar7 = local_a0;
  (**(code **)(local_88 + 0x18))(&local_88);
  if (pcVar7 != local_80) {
    uVar22 = 0;
    bVar8 = true;
    do {
      if (local_a0[uVar22] != local_80[uVar22]) break;
      if (local_a0[uVar22] == '\0') {
        if (bVar8) goto LAB_02173800;
        break;
      }
      bVar8 = uVar22 < 0x80000;
      uVar22 = uVar22 + 1;
    } while (uVar22 != 0x80001);
    local_b8 = puVar2 + 0x10;
    local_b0 = "rct";
    (**(code **)(local_a8 + 0x18))(&local_a8);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    pcVar7 = local_a0;
    (**(code **)(local_b8 + 0x18))(&local_b8);
    if (pcVar7 != local_b0) {
      if (*local_a0 != *local_b0) {
LAB_02173928:
        local_88 = puVar2 + 0x10;
        local_80 = "fox";
        (**(code **)(local_a8 + 0x18))(&local_a8);
        (**(code **)(local_a8 + 0x18))(&local_a8);
        pcVar7 = local_a0;
        (**(code **)(local_88 + 0x18))(&local_88);
        if (pcVar7 == local_80) {
LAB_02174020:
          uVar12 = FUN_02172270();
          *param_2 = uVar12;
          return 1;
        }
        uVar22 = 0;
        bVar8 = true;
        do {
          if (local_a0[uVar22] != local_80[uVar22]) break;
          if (local_a0[uVar22] == '\0') {
            if (bVar8) goto LAB_02174020;
            break;
          }
          bVar8 = uVar22 < 0x80000;
          uVar22 = uVar22 + 1;
        } while (uVar22 != 0x80001);
        (**(code **)(*param_3 + 0x18))(param_3);
        (**(code **)(*param_3 + 0x18))(param_3);
        if ((undefined1 *)param_3[1] == &DAT_0406d3be) {
LAB_02174100:
          local_88 = (undefined *)CONCAT44(local_88._4_4_,3);
          uVar22 = FUN_0290cbcc(&local_88);
          if ((uVar22 & 1) == 0) {
            return 0;
          }
          bVar21 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
          if (bVar21 < 5) {
            iVar11 = 5;
          }
          else if (bVar21 < 8) {
            iVar11 = 0;
          }
          else if (bVar21 < 0xc) {
            iVar11 = 1;
          }
          else if (bVar21 < 0x10) {
            iVar11 = 2;
          }
          else {
            iVar11 = 3;
            if (0x12 < bVar21) {
              iVar11 = 4;
            }
          }
          if (iVar11 == 4) {
            return 0;
          }
          if (iVar11 == 5) {
            return 0;
          }
          uVar12 = 0x38;
        }
        else {
          uVar22 = 0;
          bVar8 = true;
          do {
            cVar3 = ((undefined1 *)param_3[1])[uVar22];
            if (cVar3 != (&DAT_0406d3be)[uVar22]) break;
            if (cVar3 == '\0') {
              if (bVar8) goto LAB_02174100;
              break;
            }
            bVar8 = uVar22 < 0x80000;
            uVar22 = uVar22 + 1;
          } while (uVar22 != 0x80001);
          local_80 = "ttlA";
          local_88 = puVar2 + 0x10;
          uVar22 = FUN_00710cb0(param_3,&local_88);
          if ((uVar22 & 1) == 0) {
            local_80 = "otg";
            local_88 = puVar2 + 0x10;
            uVar22 = FUN_00710cb0(&local_a8,&local_88);
            if ((uVar22 & 1) != 0) {
              uVar12 = FUN_021724e0();
              *param_2 = uVar12;
              return 1;
            }
            local_80 = "mnc";
            local_88 = puVar2 + 0x10;
            uVar22 = FUN_00710cb0(&local_a8,&local_88);
            if ((uVar22 & 1) != 0) {
              uVar12 = FUN_02172960();
              *param_2 = uVar12;
              return 1;
            }
            local_80 = "man";
            local_88 = puVar2 + 0x10;
            uVar22 = FUN_00710cb0(&local_a8,&local_88);
            if ((uVar22 & 1) != 0) {
              uVar12 = FUN_02172c90();
              *param_2 = uVar12;
              return 1;
            }
            local_88 = puVar2 + 0x10;
            local_80 = "mol";
            uVar22 = FUN_00710cb0(&local_a8,&local_88);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            local_88 = (undefined *)CONCAT44(local_88._4_4_,3);
            uVar22 = FUN_0290cbcc(&local_88);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            uVar12 = 0x40;
          }
          else {
            if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8) {
              return 0;
            }
            uVar22 = FUN_010d294c(6);
            if ((uVar22 & 1) != 0) {
              return 0;
            }
            uVar12 = 0x3c;
          }
        }
        goto LAB_02173ef4;
      }
      if (*local_a0 != '\0') {
        lVar14 = 0;
        do {
          if ((lVar14 == 0x80000) || (local_a0[lVar14 + 1] != local_b0[lVar14 + 1]))
          goto LAB_02173928;
          if (local_a0[lVar14 + 1] == '\0') break;
          lVar16 = lVar14 + 2;
          if (local_a0[lVar16] != local_b0[lVar14 + 2]) goto LAB_02173928;
          lVar14 = lVar14 + 2;
        } while (local_a0[lVar16] != '\0');
      }
    }
  }
LAB_02173800:
  puVar5 = PTR_DAT_04bc3a80;
  puVar2 = PTR_DAT_04bb6298;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6d41fcf3) {
    sVar4 = *(short *)PTR_DAT_04bbdeb0;
    if (sVar4 != -1) {
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) != 0) goto LAB_021738c0;
    }
  }
  else {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) != 0) {
LAB_021738c0:
        local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
        uVar22 = FUN_03772080();
        uVar12 = 8;
        if ((uVar22 & 1) != 0) {
          uVar12 = 9;
        }
        goto LAB_02173ef4;
      }
    }
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x78855454) {
      uVar12 = 0x3b;
      goto LAB_02173ef4;
    }
  }
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  if (lVar14 == 0) {
LAB_02173af8:
    lVar14 = 0;
  }
  else {
    puVar19 = *(undefined8 **)(lVar14 + 0x10);
    if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
      lVar16 = (**(code **)(*(long *)*puVar19 + 0x38))();
      lVar14 = 0;
      if (lVar16 != 0) {
        lVar14 = lVar16 + 0x70;
      }
    }
    else {
      if (puVar19 == (undefined8 *)0x0) goto LAB_02173af8;
      lVar14 = 0;
      if ((long *)puVar19[0x26] != (long *)0x0) {
        lVar14 = (**(code **)(*(long *)puVar19[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(lVar14 + 0x1a0b70) == (long *)0x0) {
    uVar22 = 0;
  }
  else {
    puVar19 = (undefined8 *)**(long **)(lVar14 + 0x1a0b70);
    uVar22 = 0;
    if (puVar19 != (undefined8 *)0x0) {
      uVar22 = (**(code **)*puVar19)();
    }
  }
  local_6c = *(uint *)(*(long *)(lVar14 + 0x1a0b58) + *(long *)(lVar14 + 0x1a0b50));
  if (3 < local_6c) {
    local_6c = 0;
  }
  if ((((uVar22 & 1) != 0) && (*(long *)(lVar14 + 0x1a0b70) != 0)) &&
     (puVar19 = *(undefined8 **)(*(long *)(lVar14 + 0x1a0b70) + 8), puVar19 != (undefined8 *)0x0)) {
    (**(code **)*puVar19)();
  }
  puVar28 = PTR_DAT_04bb2720;
  sVar4 = *(short *)puVar2;
  if (sVar4 == -1) {
    uVar12 = 0;
    uVar17 = 0;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar12 = *puVar1 & 1;
    local_88 = (undefined *)CONCAT44((int)((ulong)local_88 >> 0x20),4);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar17 = *puVar1 >> 4 & 1;
  }
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
LAB_02173c54:
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar11 = FUN_006bd550(*puVar19,0);
      lVar14 = *(long *)puVar28;
      if ((iVar11 != 0x758f7eaf) || (lVar14 == 0)) goto LAB_02173c54;
      iVar11 = 0;
      if (*(long *)(lVar14 + 0x330) != 0) {
        iVar11 = *(int *)(*(long *)(lVar14 + 0x330) + 0x244);
      }
    }
  }
  puVar6 = PTR_DAT_04bbe4b0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0x10) == iVar11) {
    bVar8 = true;
    if (lVar14 != 0) goto LAB_02173ce4;
LAB_02173d40:
    iVar11 = 0;
    uVar26 = (uint)(*(int *)(puVar6 + 0x88) == 0);
  }
  else {
    if (lVar14 == 0) {
LAB_02173cd0:
      iVar11 = 0;
    }
    else {
      iVar11 = 0;
      if (*(long *)(lVar14 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar11 = FUN_006bd550(*puVar19,0);
        lVar14 = *(long *)puVar28;
        if ((iVar11 != 0x758f7eaf) || (lVar14 == 0)) goto LAB_02173cd0;
        iVar11 = 0;
        if (*(long *)(lVar14 + 0x330) != 0) {
          iVar11 = *(int *)(*(long *)(lVar14 + 0x330) + 0x244);
        }
      }
    }
    bVar8 = *(int *)(puVar6 + 0xc) == iVar11;
    if (lVar14 == 0) goto LAB_02173d40;
LAB_02173ce4:
    iVar11 = 0;
    if (*(long *)(lVar14 + 0x330) == 0) {
LAB_02173d30:
      bVar9 = *(int *)(puVar6 + 0x88) == iVar11;
LAB_02173df8:
      uVar26 = (uint)bVar9;
      if (*(long *)(lVar14 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar11 = FUN_006bd550(*puVar19,0);
        if (iVar11 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar28 != 0) {
            lVar14 = *(long *)(*(long *)puVar28 + 0x330);
            iVar11 = 0;
            if (lVar14 != 0) {
              iVar11 = *(int *)(lVar14 + 0x244);
            }
          }
          goto LAB_02173e4c;
        }
      }
      iVar11 = 0;
    }
    else {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar11 = FUN_006bd550(*puVar19,0);
      lVar14 = *(long *)puVar28;
      if (iVar11 == 0x758f7eaf) {
        if (lVar14 == 0) goto LAB_02173d40;
        iVar11 = 0;
        if (*(long *)(lVar14 + 0x330) != 0) {
          iVar11 = *(int *)(*(long *)(lVar14 + 0x330) + 0x244);
        }
        goto LAB_02173d30;
      }
      bVar9 = *(int *)(puVar6 + 0x88) == 0;
      uVar26 = (uint)bVar9;
      iVar11 = 0;
      if (lVar14 != 0) goto LAB_02173df8;
    }
  }
LAB_02173e4c:
  puVar28 = PTR_DAT_04bb2020;
  sVar4 = *(short *)puVar2;
  if (sVar4 == -1) {
    uVar25 = 0;
  }
  else {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,0x21);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    uVar25 = *(uint *)(puVar2 + 4) >> 1 & 1;
  }
  if (*(int *)(PTR_DAT_04bc3a78 + 0x38) == 0x3ee08254 && *(int *)(puVar5 + 0x38) == -0x6d41fcf3) {
    uVar25 = 1;
  }
  if (*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) != 0) {
    uVar12 = 0xd;
    if (local_6c != 3) {
      uVar12 = 4;
    }
    goto LAB_02173ef4;
  }
  if (uVar12 == 0) {
    (**(code **)(local_a8 + 0x18))(&local_a8);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    puVar28 = PTR_DAT_04bb2020;
    if (local_a0 == "rct") {
      uVar17 = 1;
    }
    else {
      if (*local_a0 != 'r') goto LAB_02174330;
      uVar22 = 0;
      do {
        uVar24 = uVar22;
        uVar22 = uVar24;
        if (uVar24 == 0x80000) goto LAB_021742d4;
        if (local_a0[uVar24 + 1] != (&DAT_040dedda)[uVar24]) {
          uVar22 = 0;
          goto LAB_021742d4;
        }
        uVar22 = uVar24 + 1;
      } while (local_a0[uVar24 + 1] != '\0');
      uVar22 = 1;
LAB_021742d4:
      uVar17 = (uint)(uVar24 < 0x80000) & (uint)uVar22;
    }
LAB_02174334:
    local_88 = puVar28 + 0x10;
    local_80 = "CalendarEventStop";
    iVar11 = FUN_02743000(&local_88);
    if (iVar11 != 0) {
      local_6c = 0;
    }
    if (local_6c != 2) {
      if (local_6c != 3) {
        local_88 = (undefined *)FUN_00a82790(*(undefined8 *)PTR_DAT_04bb32e8);
        local_b8._4_4_ = (undefined4)((ulong)local_88 >> 0x20);
        local_b8._0_2_ = (short)local_88;
        local_b8._0_4_ = CONCAT22(0x1303,(short)local_b8);
        local_68._0_4_ = CONCAT22(0x130a,(short)local_b8);
        local_68 = CONCAT44(local_b8._4_4_,(undefined4)local_68);
        iVar11 = FUN_00a81374(&local_88,&local_b8);
        iVar13 = FUN_00a81374(&local_88,&local_68);
        uVar12 = 10;
        if (uVar17 == 0) {
          uVar12 = 8;
        }
        uVar26 = 0xb;
        if (uVar17 == 0) {
          uVar26 = 9;
        }
        if ((iVar11 < 0 && -1 < iVar13) == (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1)) {
          uVar12 = uVar26;
        }
        goto LAB_02173ef4;
      }
LAB_02174368:
      uVar12 = 0xd;
      goto LAB_02173ef4;
    }
  }
  else {
    if (bVar8) {
      uVar12 = 8;
      goto LAB_02173ef4;
    }
    uVar12 = 0;
    if (*(int *)(puVar6 + 0xc0) != iVar11) {
      uVar12 = uVar25 ^ 1;
    }
    if (uVar12 != 0) {
      if ((uVar17 | uVar26) == 1) {
        if (local_6c == 2) goto LAB_02174370;
        if (local_6c == 3) goto LAB_02174368;
      }
LAB_02174330:
      uVar17 = 0;
      goto LAB_02174334;
    }
    lVar14 = FUN_0264d510();
    local_80 = (char *)(lVar14 + 0x1a3d60);
    local_78 = 1;
    if (*(long **)(lVar14 + 0x1a3d88) == (long *)0x0) {
      local_77 = 0;
    }
    else {
      puVar19 = (undefined8 *)**(long **)(lVar14 + 0x1a3d88);
      local_77 = 0;
      if (puVar19 != (undefined8 *)0x0) {
        local_77 = (**(code **)*puVar19)();
      }
    }
    local_77 = local_77 & 1;
    local_88 = PTR_DAT_04bb64c0 + 0x10;
    uVar22 = FUN_028b4438(*(long *)(lVar14 + 0x1a3d70) + *(long *)(lVar14 + 0x1a3d68));
    FUN_02640184(&local_88);
    if ((uVar22 & 1) == 0) {
      uVar22 = FUN_02172140();
      uVar12 = 8;
      if ((uVar22 & 1) == 0) {
        uVar12 = 9;
      }
      goto LAB_02173ef4;
    }
    if (local_6c != 2) {
      if (local_6c != 3) goto LAB_02174330;
      goto LAB_02174368;
    }
  }
LAB_02174370:
  uVar12 = 4;
LAB_02173ef4:
  *param_2 = uVar12;
  return 1;
}

