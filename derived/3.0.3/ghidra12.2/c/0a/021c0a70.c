
void FUN_021c0a70(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  CalendarTime CVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  
  FUN_02199a60(param_1,param_3);
  FUN_02199a60(param_1 + 0xba0,param_3);
  FUN_02199a60(param_1 + 0x1740,param_3);
  FUN_02199a60(param_1 + 0x22e0,param_3);
  FUN_02199a60(param_1 + 0x2e80,param_3);
  FUN_02199a60(param_1 + 0x3a20,param_3);
  FUN_02199a60(param_1 + 0x45c0,param_3);
  FUN_02199a60(param_1 + 0x5160,param_3);
  FUN_02199a60(param_1 + 0x5d00,param_3);
  FUN_02199a60(param_1 + 0x68a0,param_3);
  FUN_021c1588(param_1 + 0x56010,param_2,param_3);
  FUN_021c1588(param_1 + 0x562e8,param_2,param_3);
  FUN_021c1588(param_1 + 0x565c0,param_2,param_3);
  FUN_021c1588(param_1 + 0x56898,param_2,param_3);
  FUN_021c1588(param_1 + 0x56b70,param_2,param_3);
  FUN_021c1588(param_1 + 0x56e48,param_2,param_3);
  FUN_021c1588(param_1 + 0x57120,param_2,param_3);
  FUN_021c1588(param_1 + 0x573f8,param_2,param_3);
  FUN_021c1588(param_1 + 0x576d0,param_2,param_3);
  FUN_021c1588(param_1 + 0x579a8,param_2,param_3);
  FUN_021c1588(param_1 + 0x57c80,param_2,param_3);
  FUN_021c1588(param_1 + 0x57f58,param_2,param_3);
  FUN_021c1588(param_1 + 0x58230,param_2,param_3);
  FUN_021c1588(param_1 + 0x58508,param_2,param_3);
  FUN_021c1588(param_1 + 0x587e0,param_2,param_3);
  FUN_021c1588(param_1 + 0x58ab8,param_2,param_3);
  FUN_021c1588(param_1 + 0x58d90,param_2,param_3);
  *(undefined4 *)(param_1 + 0x55df4) = 0;
  *(undefined2 *)(param_1 + 0x55e44) = 0;
  if (*param_2 != 0) {
    *(undefined2 *)(param_1 + 0x7448) = 0;
    *(undefined4 *)(param_1 + 0x7444) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x744a) = 0x101;
    *(undefined1 *)(param_1 + 0x744e) = 0;
    *(undefined4 *)(param_1 + 0x55d88) = 0;
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x55bd5) = 0;
    }
    *(undefined4 *)(param_1 + 0x55d08) = 0;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x55d2c);
  if (-1 < (int)uVar1) {
    lVar15 = param_1 + (ulong)uVar1 * 0xba0;
    if (9 < uVar1) {
      lVar15 = param_1;
    }
    if (*(char *)(lVar15 + 0xaf9) != '\0') {
      *(undefined4 *)(lVar15 + 0x4e8) = 0;
      *(undefined4 *)(lVar15 + 0x4ee) = 0x101;
      *(undefined4 *)(lVar15 + 0x898) = 0xffffffff;
      *(undefined2 *)(lVar15 + 0x4ec) = 0;
      *(undefined1 *)(lVar15 + 0x4f2) = 0;
      *(undefined1 *)(lVar15 + 0x4f4) = 0;
      *(undefined1 *)(lVar15 + 0x89c) = 0xff;
      FUN_0219be30(lVar15);
      uVar9 = (ulong)local_78 >> 0x30;
      local_98 = (undefined *)
                 (CONCAT71((int7)((ulong)local_98 >> 8),*(undefined1 *)(lVar15 + 0xaf8)) &
                 0xffff00ff);
      local_78 = (undefined *)CONCAT26((ushort)uVar9 & 0xff00,0xff0000000000);
      if (-1 < DAT_053d0d10) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&local_78,&local_98,8,0);
      }
      *(undefined4 *)(lVar15 + 0x4dc) = 0;
    }
    *(undefined4 *)(param_1 + 0x55d2c) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x55d38) = 0;
  *(undefined2 *)(param_1 + 0x55df9) = 1;
  lVar15 = DAT_04cea100;
  local_88 = *(undefined8 *)(DAT_04da6480 + 0x4060);
  if ((char)(local_88 >> 0x20) < '\x05') {
    lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
    local_78 = (undefined *)(lVar8 + -0x15180);
    local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
  }
  uVar5 = local_88;
  puVar20 = PTR_DAT_04bb2020;
  local_88._7_1_ = SUB81(uVar5,7);
  local_88._0_7_ = (uint7)CONCAT24(5,(undefined4)local_88);
  if (lVar15 != 0) {
    uVar9 = FUN_00873540(lVar15,&local_88,1,1);
    if ((uVar9 & 1) == 0) {
      local_98 = (undefined *)local_88;
      if ((char)(local_88 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
        local_78 = (undefined *)(lVar8 + -0x15180);
        uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
        local_98 = (undefined *)uVar9;
      }
      uVar13 = (ulong)local_98;
      uVar12 = (ulong)local_98 >> 0x10;
      local_98._7_1_ = SUB81(uVar13,7);
      local_98._0_7_ = (uint7)CONCAT24(5,(undefined4)local_98);
      uVar9 = FUN_0087312c(uVar9,uVar13,uVar12,uVar13 >> 0x18);
      if ((uVar9 & 1) == 0) {
        local_78 = puVar20 + 0x10;
        local_70 = "NormalLive";
        local_a8 = (undefined *)local_88;
        if ((char)(local_88 >> 0x20) < '\x05') {
          lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
          local_98 = (undefined *)(lVar8 + -0x15180);
          local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
        }
        uVar9 = (ulong)local_a8;
        local_a8._0_6_ = CONCAT24(5,(undefined4)local_a8);
        local_a8._7_1_ = SUB81(uVar9,7);
        local_a8._0_7_ = (uint7)(uint6)local_a8;
        uVar9 = FUN_00879dd0(lVar15,&local_78,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
        if ((uVar9 & 1) == 0) {
          local_98 = puVar20 + 0x10;
          pcStack_90 = "BirthdayLive";
          local_80 = local_88;
          if ((char)(local_88 >> 0x20) < '\x05') {
            lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
            local_a8 = (undefined *)(lVar8 + -0x15180);
            local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
          }
          uVar9 = local_80;
          local_80._0_6_ = CONCAT24(5,(undefined4)local_80);
          local_80._7_1_ = SUB81(uVar9,7);
          local_80._0_7_ = (uint7)(uint6)local_80;
          uVar9 = FUN_00879dd0(lVar15,&local_98,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
          if ((uVar9 & 1) == 0) {
            local_a8 = puVar20 + 0x10;
            pcStack_a0 = "TkkFirstLiveReserved";
            uVar9 = FUN_0273f0a0(&local_a8);
            if ((uVar9 & 1) == 0) goto LAB_021c0fc0;
          }
        }
      }
    }
    local_78 = puVar20 + 0x10;
    local_70 = "Easter";
    *(undefined1 *)(param_1 + 0x55df9) = 0;
    local_a8 = (undefined *)local_88;
    if ((char)(local_88 >> 0x20) < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
      local_98 = (undefined *)(lVar8 + -0x15180);
      local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
    }
    uVar9 = (ulong)local_a8;
    local_a8._0_6_ = CONCAT24(5,(undefined4)local_a8);
    local_a8._7_1_ = SUB81(uVar9,7);
    local_a8._0_7_ = (uint7)(uint6)local_a8;
    bVar6 = FUN_00879dd0(lVar15,&local_78,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
    *(byte *)(param_1 + 0x55dfa) = bVar6 & 1;
  }
LAB_021c0fc0:
  lVar15 = DAT_04cea100;
  local_78 = puVar20 + 0x10;
  uVar17 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_70 = "Easter";
  uVar18 = uVar17 >> 0x10;
  uVar19 = uVar17 >> 0x18;
  uVar9 = uVar17 & 0xffffffff;
  cVar2 = (char)(uVar17 >> 0x20);
  uVar12 = uVar19 & 0xffffffff;
  uVar13 = uVar18 & 0xffffffff;
  local_a8 = (undefined *)uVar17;
  if (cVar2 < '\x05') {
    lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
    local_98 = (undefined *)(lVar8 + -0x15180);
    uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
    uVar13 = uVar9 >> 0x10;
    uVar12 = uVar9 >> 0x18;
    local_a8 = (undefined *)uVar9;
  }
  uVar3 = (ulong)local_a8 >> 0x30;
  local_a8._0_6_ = CONCAT24(5,(undefined4)local_a8);
  local_a8 = (undefined *)(CONCAT26((short)uVar3,(uint6)local_a8) & 0xff00ffffffffffff);
  uVar9 = FUN_00879dd0(lVar15,&local_78,uVar9,uVar13,uVar12,0);
  if ((uVar9 & 1) == 0) {
    local_98 = PTR_DAT_04bb2020 + 0x10;
    pcStack_90 = "Easter";
    local_80 = uVar17;
    if (cVar2 < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
      local_a8 = (undefined *)(lVar8 - 0x15180);
      local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
      uVar17 = local_80 & 0xffffffff;
      uVar18 = local_80 >> 0x10;
      uVar19 = local_80 >> 0x18;
    }
    uVar9 = local_80 >> 0x30;
    local_80._0_6_ = CONCAT24(5,(undefined4)local_80);
    local_80 = CONCAT26((short)uVar9,(uint6)local_80) & 0xff00ffffffffffff;
    bVar6 = FUN_0087a8f0(lVar15,&local_98,uVar17 & 0xffffffff,uVar18 & 0xffffffff,
                         uVar19 & 0xffffffff,0);
    puVar20 = &DAT_048f9760;
  }
  else {
    bVar6 = 1;
    puVar20 = PTR_DAT_04bb2020;
  }
  *(undefined2 *)(param_1 + 0x55e18) = 0;
  *(byte *)(param_1 + 0x55e1a) = bVar6 & 1;
  FUN_0219f860(param_1);
  uVar9 = *(ulong *)(DAT_04da6480 + 0x4060);
  *(undefined1 *)(param_1 + 0x55e4c) = 0;
  lVar15 = *(long *)PTR_DAT_04bb32f0;
  local_88 = uVar9;
  if (lVar15 != 0) {
    local_78 = puVar20 + 0x10;
    local_70 = "XmasReady2";
    local_a8 = (undefined *)uVar9;
    if ((char)(uVar9 >> 0x20) < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
      local_98 = (undefined *)(lVar8 + -0x15180);
      local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
    }
    uVar13 = (ulong)local_a8;
    local_a8._0_6_ = CONCAT24(5,(undefined4)local_a8);
    local_a8._7_1_ = SUB81(uVar13,7);
    local_a8._0_7_ = (uint7)(uint6)local_a8;
    uVar13 = FUN_00879dd0(lVar15,&local_78,uVar13,uVar13 >> 0x10,uVar13 >> 0x18,0);
    if ((uVar13 & 1) == 0) {
      local_98 = puVar20 + 0x10;
      pcStack_90 = "XmasEve";
      puVar14 = (ulong *)(DAT_04da6480 + 0x4068);
      if (*(short *)puVar14 == 0) {
        local_80 = *(ulong *)(DAT_04da6480 + 0x4060);
        if ((char)(local_80 >> 0x20) < '\x05') {
          lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
          local_a8 = (undefined *)(lVar8 - 0x15180);
          local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
        }
        uVar13 = local_80;
        puVar14 = &local_80;
        local_80._0_6_ = CONCAT24(5,(undefined4)local_80);
        local_80._7_1_ = SUB81(uVar13,7);
        local_80._0_7_ = (uint7)(uint6)local_80;
      }
      uVar13 = *puVar14;
      uVar13 = FUN_00879dd0(lVar15,&local_98,uVar13,uVar13 >> 0x10,uVar13 >> 0x18,0);
      if ((uVar13 & 1) == 0) goto LAB_021c1448;
    }
    uVar13 = FUN_00873540(lVar15,&local_88,1,1);
    if ((uVar13 & 1) != 0) {
      FUN_00873ad0(&local_78,lVar15,&local_88,1);
      (**(code **)(local_78 + 0x18))(&local_78);
      (**(code **)(local_78 + 0x18))(&local_78);
      if (local_70 != "XmasEve") {
        if (*local_70 != 'X') goto LAB_021c1448;
        lVar15 = 0;
        do {
          if ((lVar15 == 0x80000) || (lVar8 = lVar15 + 1, local_70[lVar8] != "XmasEve"[lVar15 + 1]))
          goto LAB_021c1448;
          lVar15 = lVar15 + 1;
        } while (local_70[lVar8] != '\0');
      }
    }
    FUN_02507c6c(&local_98,1,1,0,0);
    if ((byte)local_98._0_1_ < 8) {
      local_a8 = (undefined *)CONCAT71(local_a8._1_7_,local_98._0_1_);
      local_70 = "ChristmasWreathGetYear";
      local_78 = puVar20 + 0x10;
      iVar7 = FUN_0274bce0(&local_a8,&local_78);
      while (iVar7 == (short)uVar9) {
        CVar4 = local_98._0_1_;
        uVar13 = (ulong)local_98 & 0xff;
        if ((7 < (byte)local_98._0_1_) || (uVar13 == 7)) goto LAB_021c1448;
        pbVar16 = &DAT_0548e169 + uVar13;
        uVar12 = FUN_02507924(&local_98,pbVar16);
        if ((uVar12 & 1) == 0) {
          if (uVar13 == 6) goto LAB_021c1448;
          pbVar16 = &DAT_0548e16a + uVar13;
          uVar12 = FUN_02507924(&local_98,pbVar16);
          if ((uVar12 & 1) == 0) {
            if (uVar13 == 5) goto LAB_021c1448;
            pbVar16 = &DAT_0548e16b + uVar13;
            uVar12 = FUN_02507924(&local_98,pbVar16);
            if ((uVar12 & 1) == 0) {
              if (uVar13 == 4) goto LAB_021c1448;
              pbVar16 = &DAT_0548e16c + uVar13;
              uVar12 = FUN_02507924(&local_98,pbVar16);
              if ((uVar12 & 1) == 0) {
                if (uVar13 == 3) goto LAB_021c1448;
                pbVar16 = &DAT_0548e16d + uVar13;
                uVar12 = FUN_02507924(&local_98,pbVar16);
                if ((uVar12 & 1) == 0) {
                  if (uVar13 == 2) goto LAB_021c1448;
                  pbVar16 = &DAT_0548e16e + uVar13;
                  uVar12 = FUN_02507924(&local_98,pbVar16);
                  if ((uVar12 & 1) == 0) {
                    if (uVar13 == 1) goto LAB_021c1448;
                    pbVar16 = &DAT_0548e16f + uVar13;
                    uVar12 = FUN_02507924(&local_98,pbVar16);
                    if ((uVar12 & 1) == 0) {
                      if (CVar4 == (CalendarTime)0x0) goto LAB_021c1448;
                      pbVar16 = &DAT_0548e170 + uVar13;
                      FUN_02507924(&local_98,pbVar16);
                    }
                  }
                }
              }
            }
          }
        }
        bVar6 = *pbVar16;
        if (7 < bVar6) goto LAB_021c1448;
        local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar6);
        local_a8 = (undefined *)CONCAT71(local_a8._1_7_,bVar6);
        local_70 = "ChristmasWreathGetYear";
        local_78 = puVar20 + 0x10;
        iVar7 = FUN_0274bce0(&local_a8,&local_78);
      }
      *(undefined1 *)(param_1 + 0x55e4c) = 1;
    }
  }
LAB_021c1448:
  FUN_021c08e8(param_1,1);
  if (*(int *)(param_1 + 0x7c84) == -1) goto LAB_021c1538;
  local_98 = (undefined *)CONCAT44(local_98._4_4_,*(int *)(param_1 + 0x7c84));
  lVar15 = FUN_0265c3e0();
  if (lVar15 == 0) goto LAB_021c1538;
  lVar8 = *(long *)(lVar15 + 0x28);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar15 + 0x28);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar8 == 0) goto LAB_021c14d4;
    }
    plVar10 = *(long **)(lVar8 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_78 = *(undefined **)(lVar15 + 8);
      local_70 = *(char **)(lVar15 + 0x10);
      local_68 = 0x13230;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
    }
  }
LAB_021c14d4:
  if (*(int *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x10764) == 3) {
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    FUN_021dafb0(&local_98,&local_78,0,0,0,1);
    FUN_021aebe0(param_1);
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
LAB_021c1538:
  if (((*param_2 != 0) || ((char)param_2[5] != '\0')) ||
     ((*(char *)((long)param_2 + 0x29) != '\0' ||
      ((*(char *)((long)param_2 + 0x2a) != '\0' || (*(char *)((long)param_2 + 0x2c) != '\0')))))) {
    *(undefined8 *)(param_1 + 0x55f80) = 0;
    *(undefined4 *)(param_1 + 0x55f88) = 0;
  }
  return;
}

