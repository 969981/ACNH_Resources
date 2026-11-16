
/* WARNING: Removing unreachable block (ram,0x02853514) */
/* WARNING: Removing unreachable block (ram,0x02853834) */

byte FUN_02853278(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04bb32f0;
  puVar1 = PTR_DAT_04bb32e8;
  puVar3 = PTR_DAT_04bb2020;
  switch(param_2) {
  case 0:
    bVar7 = 0;
    if ((*(char *)(param_1 + 0x37) == '\x02') || (*(long *)PTR_DAT_04bb32f0 == 0))
    goto LAB_02853770;
    local_78 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_78 >> 0x20) < '\x05') {
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_60 = (undefined *)(lVar10 + -0x15180);
      local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    }
    local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
LAB_02853328:
    local_78._0_7_ = (uint7)(uint6)local_78;
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
    local_60 = (undefined *)(lVar10 + 0x15180);
    nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    bVar7 = 1;
    goto LAB_02853770;
  case 1:
    if (*(char *)(param_1 + 0x73) == '\x02') break;
    goto LAB_0285364c;
  case 2:
    if ((*(char *)(param_1 + 0xaf) != '\x02') && (lVar10 = *(long *)PTR_DAT_04bb32f0, lVar10 != 0))
    {
      local_88 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)((ulong)local_88 >> 0x20) < '\x05') {
        lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        local_60 = (undefined *)(lVar11 + -0x15180);
        local_88 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
      }
      uVar9 = (ulong)local_88 >> 0x30;
      local_88._0_6_ = CONCAT24(5,(undefined4)local_88);
      local_88 = (undefined *)(CONCAT26((short)uVar9,(uint6)local_88) & 0xff00ffffffffffff);
      lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
      local_60 = (undefined *)(lVar11 + 0x15180);
      local_88 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
      uVar9 = FUN_00873540(lVar10,&local_88,1,1);
      if ((uVar9 & 1) == 0) {
        local_78 = local_88;
        if ((char)((ulong)local_88 >> 0x20) < '\x05') {
          lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
          local_60 = (undefined *)(lVar10 + -0x15180);
          uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
          local_78 = (undefined *)uVar9;
        }
        uVar15 = (ulong)local_78;
        uVar12 = (ulong)local_78 >> 0x10;
        local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
        local_78._7_1_ = SUB81(uVar15,7);
        local_78._0_7_ = (uint7)(uint6)local_78;
        uVar9 = FUN_0087312c(uVar9,uVar15,uVar12,uVar15 >> 0x18);
        if ((uVar9 & 1) == 0) {
          lVar10 = *(long *)PTR_DAT_04bb46b0;
          if (lVar10 == 0) {
LAB_028539c0:
            uVar17 = 0;
          }
          else {
            puVar13 = *(undefined8 **)(lVar10 + 0x10);
            if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
              lVar10 = (**(code **)(*(long *)*puVar13 + 0x38))();
              if (lVar10 == 0) goto LAB_028539c0;
              lVar10 = lVar10 + 0x70;
            }
            else if (((puVar13 == (undefined8 *)0x0) || ((long *)puVar13[0x26] == (long *)0x0)) ||
                    (lVar10 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar10 == 0))
            goto LAB_028539c0;
            if ((*(long **)(lVar10 + 0xd0) == (long *)0x0) ||
               (puVar13 = (undefined8 *)**(long **)(lVar10 + 0xd0), puVar13 == (undefined8 *)0x0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = (**(code **)*puVar13)();
              uVar9 = uVar9 & 0xffffffff;
            }
            pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            uVar15 = (ulong)*pbVar14;
            if (((uVar15 < 0x23) && (pbVar14[1] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[1] & 0x1f) & 1) != 0))
            {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0x1267c,&local_60);
              uVar17 = (uint)(iVar8 != 0);
              pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            }
            else {
              uVar17 = 0;
            }
            uVar15 = (ulong)pbVar14[0x13230];
            if (((uVar15 < 0x23) && (pbVar14[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[0x13231] & 0x1f) & 1)
                != 0)) {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0x258ac,&local_60);
              if (iVar8 != 0) {
                uVar17 = uVar17 + 1;
              }
              pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            }
            uVar15 = (ulong)pbVar14[0x26460];
            if (((uVar15 < 0x23) && (pbVar14[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[0x26461] & 0x1f) & 1)
                != 0)) {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0x38adc,&local_60);
              if (iVar8 != 0) {
                uVar17 = uVar17 + 1;
              }
              pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            }
            uVar15 = (ulong)pbVar14[0x39690];
            if (((uVar15 < 0x23) && (pbVar14[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[0x39691] & 0x1f) & 1)
                != 0)) {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0x4bd0c,&local_60);
              if (iVar8 != 0) {
                uVar17 = uVar17 + 1;
              }
              pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            }
            uVar15 = (ulong)pbVar14[0x4c8c0];
            if (((uVar15 < 0x23) && (pbVar14[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[0x4c8c1] & 0x1f) & 1)
                != 0)) {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0x5ef3c,&local_60);
              if (iVar8 != 0) {
                uVar17 = uVar17 + 1;
              }
              pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            }
            uVar15 = (ulong)pbVar14[0x5faf0];
            if (((uVar15 < 0x23) && (pbVar14[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[0x5faf1] & 0x1f) & 1)
                != 0)) {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0x7216c,&local_60);
              if (iVar8 != 0) {
                uVar17 = uVar17 + 1;
              }
              pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            }
            uVar15 = (ulong)pbVar14[0x72d20];
            if (((uVar15 < 0x23) && (pbVar14[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[0x72d21] & 0x1f) & 1)
                != 0)) {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0x8539c,&local_60);
              if (iVar8 != 0) {
                uVar17 = uVar17 + 1;
              }
              pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            }
            uVar15 = (ulong)pbVar14[0x85f50];
            if (((uVar15 < 0x23) && (pbVar14[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[0x85f51] & 0x1f) & 1)
                != 0)) {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0x985cc,&local_60);
              if (iVar8 != 0) {
                uVar17 = uVar17 + 1;
              }
              pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            }
            uVar15 = (ulong)pbVar14[0x99180];
            if (((uVar15 < 0x23) && (pbVar14[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[0x99181] & 0x1f) & 1)
                != 0)) {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0xab7fc,&local_60);
              if (iVar8 != 0) {
                uVar17 = uVar17 + 1;
              }
              pbVar14 = (byte *)(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0));
            }
            uVar15 = (ulong)pbVar14[0xac3b0];
            if (((uVar15 < 0x23) && (pbVar14[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar15])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(pbVar14[0xac3b1] & 0x1f) & 1)
                != 0)) {
              local_60 = PTR_DAT_04bb2020 + 0x10;
              pcStack_58 = "MoveInCompletion";
              iVar8 = FUN_02749340(pbVar14 + 0xbea2c,&local_60);
              if (iVar8 != 0) {
                uVar17 = uVar17 + 1;
              }
            }
            if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0xd0) != 0)) &&
               (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0xd0) + 8),
               puVar13 != (undefined8 *)0x0)) {
              (**(code **)*puVar13)();
            }
          }
          bVar7 = 4 < uVar17;
          goto LAB_02853770;
        }
      }
    }
    break;
  case 3:
    lVar10 = *(long *)PTR_DAT_04bb32f0;
    if (lVar10 != 0) {
      local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_68 >> 0x20) < '\x05') {
        lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_60 = (undefined *)(lVar11 + -0x15180);
        local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
      }
      uVar16 = local_68;
      puVar3 = PTR_DAT_04bb2020;
      uVar9 = local_68 >> 0x30;
      uVar5 = (undefined4)local_68;
      local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
      local_68 = CONCAT26((short)uVar9,(undefined6)local_68) & 0xff00ffffffffffff;
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = "NormalLive";
      local_88._0_6_ = CONCAT24(5,uVar5);
      local_88._7_1_ = (undefined1)((ulong)uVar16 >> 0x38);
      local_88._0_7_ = (uint7)(uint6)local_88;
      uVar9 = FUN_00879dd0(lVar10,&local_60,local_68,local_68 >> 0x10,local_68 >> 0x18,0);
      if ((uVar9 & 1) == 0) {
        local_78 = puVar3 + 0x10;
        pcStack_70 = "BirthdayLive";
        local_38 = local_68;
        if ((char)(local_68 >> 0x20) < '\x05') {
          lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
          local_88 = (undefined *)(lVar11 + -0x15180);
          local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
        }
        uVar9 = local_38;
        local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
        local_38._7_1_ = SUB81(uVar9,7);
        local_38._0_7_ = (uint7)(uint6)local_38;
        uVar9 = FUN_00879dd0(lVar10,&local_78,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
        if ((uVar9 & 1) == 0) {
          local_88 = puVar3 + 0x10;
          pcStack_80 = "TkkFirstLiveReserved";
          uVar9 = FUN_0273f0a0(&local_88);
          bVar7 = 0;
          if ((((uVar9 & 1) != 0) || (*(char *)(param_1 + 0xef) == '\x02')) ||
             (*(long *)puVar4 == 0)) goto LAB_02853770;
          local_78 = *(undefined **)(*(long *)puVar1 + 0x4060);
          if ((char)((ulong)local_78 >> 0x20) < '\x05') {
            lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
            local_60 = (undefined *)(lVar10 + -0x15180);
            local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
          }
          local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
          goto LAB_02853328;
        }
      }
    }
    break;
  case 4:
    cVar2 = *(char *)(param_1 + 299);
    goto joined_r0x02853648;
  case 5:
    cVar2 = *(char *)(param_1 + 0x163);
joined_r0x02853648:
    if (cVar2 != '\x02') {
LAB_0285364c:
      lVar10 = *(long *)PTR_DAT_04bb32f0;
      if (lVar10 != 0) {
        local_88 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)((ulong)local_88 >> 0x20) < '\x05') {
          lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
          local_60 = (undefined *)(lVar11 + -0x15180);
          local_88 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
        }
        uVar9 = (ulong)local_88 >> 0x30;
        local_88._0_6_ = CONCAT24(5,(undefined4)local_88);
        local_88 = (undefined *)(CONCAT26((short)uVar9,(uint6)local_88) & 0xff00ffffffffffff);
        lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        local_60 = (undefined *)(lVar11 + 0x15180);
        local_88 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
        uVar9 = FUN_00873540(lVar10,&local_88,1,1);
        bVar7 = 0;
        if ((uVar9 & 1) == 0) {
          local_78 = local_88;
          if ((char)((ulong)local_88 >> 0x20) < '\x05') {
            lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
            local_60 = (undefined *)(lVar10 + -0x15180);
            uVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
            local_78 = (undefined *)uVar9;
          }
          uVar15 = (ulong)local_78;
          uVar12 = (ulong)local_78 >> 0x10;
          local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
          local_78._7_1_ = SUB81(uVar15,7);
          local_78._0_7_ = (uint7)(uint6)local_78;
          bVar7 = FUN_0087312c(uVar9,uVar15,uVar12,uVar15 >> 0x18);
LAB_02853730:
          bVar7 = bVar7 ^ 1;
        }
        goto LAB_02853770;
      }
    }
    break;
  case 6:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "CanSetPlayerBirthdayCallNpc";
    local_60 = puVar1;
    iVar8 = FUN_02743000(&local_60);
    if ((iVar8 != 0) && (DAT_0540762c != -1)) break;
    pcStack_58 = "TkkFirstLiveEnable";
    local_60 = puVar1;
    uVar9 = FUN_0273f0a0(&local_60);
    puVar4 = PTR_DAT_04bb32f0;
    puVar1 = PTR_DAT_04bb32e8;
    bVar7 = 0;
    if (((uVar9 & 1) != 0) || (*(char *)(param_1 + 0x19b) != '\0')) goto LAB_02853770;
    uVar16 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_38 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_38 >> 0x20) < '\x05') {
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_60 = (undefined *)(lVar10 + -0x15180);
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    }
    uVar6 = local_38;
    uVar9 = local_38 >> 0x30;
    local_60 = puVar3 + 0x10;
    uVar5 = (undefined4)local_38;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar9,(uint6)local_38) & 0xff00ffffffffffff;
    pcStack_58 = "Valentine";
    local_88._0_6_ = CONCAT24(5,uVar5);
    local_88._7_1_ = (undefined1)((ulong)uVar6 >> 0x38);
    local_88._0_7_ = (uint7)(uint6)local_88;
    uVar9 = FUN_00879dd0(uVar16,&local_60,local_38,local_38 >> 0x10,local_38 >> 0x18,0);
    bVar7 = 0;
    if (((uVar9 & 1) != 0) || (*(char *)(param_1 + 0x19b) == '\x02')) goto LAB_02853770;
    lVar10 = *(long *)puVar4;
    if (lVar10 == 0) break;
    local_78 = *(undefined **)(*(long *)puVar1 + 0x4060);
    if ((char)((ulong)local_78 >> 0x20) < '\x05') {
      lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_60 = (undefined *)(lVar11 + -0x15180);
      local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    }
    uVar16 = local_78;
    local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
    local_78._7_1_ = SUB81(uVar16,7);
    local_78._0_7_ = (uint7)(uint6)local_78;
    lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
    local_60 = (undefined *)(lVar11 + 0x15180);
    local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    uVar9 = FUN_00873540(lVar10,&local_78,1,1);
    bVar7 = 0;
    if ((uVar9 & 1) != 0) goto LAB_02853770;
    local_78 = *(undefined **)(*(long *)puVar1 + 0x4060);
    if ((char)((ulong)local_78 >> 0x20) < '\x05') {
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_60 = (undefined *)(lVar10 + -0x15180);
      local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    }
    uVar16 = local_78;
    local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
    local_78._7_1_ = SUB81(uVar16,7);
    local_78._0_7_ = (uint7)(uint6)local_78;
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
    local_60 = (undefined *)(lVar10 + 0x2a300);
    local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
    bVar7 = FUN_00873540(*(undefined8 *)puVar4,&local_78,1,1);
    goto LAB_02853730;
  }
  bVar7 = 0;
LAB_02853770:
  return bVar7 & 1;
}

