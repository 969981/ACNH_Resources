
void FUN_00880650(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  long lVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  byte *pbVar26;
  char cVar27;
  ulong uVar28;
  ushort uVar29;
  undefined *local_7fb0;
  char *pcStack_7fa8;
  undefined1 auStack_7dcc [30108];
  undefined8 local_830;
  undefined8 uStack_828;
  undefined4 local_820;
  undefined1 local_81c;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined4 local_800;
  undefined2 local_7fc;
  undefined8 local_7fa;
  undefined6 uStack_7f2;
  undefined2 local_7ec;
  undefined6 uStack_7ea;
  undefined *local_7e0;
  undefined1 *local_7d8;
  undefined4 local_7d0;
  undefined1 local_7cc [63];
  undefined1 local_78d;
  undefined *local_788;
  undefined1 *local_780;
  undefined4 local_778;
  undefined1 local_774 [63];
  undefined1 local_735;
  undefined *local_730;
  undefined1 *local_728;
  undefined4 local_720;
  undefined1 local_71c [63];
  undefined1 local_6dd;
  undefined *local_6d8;
  undefined1 *local_6d0;
  undefined4 local_6c8;
  undefined1 local_6c4 [63];
  undefined1 local_685;
  undefined **local_680;
  long local_678;
  code *local_670;
  undefined8 local_668;
  ulong local_660;
  undefined8 local_658;
  long local_650;
  undefined *local_648;
  char *local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628 [2];
  undefined8 local_618;
  undefined1 *local_610;
  undefined1 *local_608;
  undefined1 auStack_480 [704];
  undefined1 auStack_1c0 [320];
  undefined8 local_80;
  ulong local_78;
  undefined1 *local_70;
  
  lVar17 = *param_2;
  if ((char)param_2[5] != '\0' || lVar17 != 0) {
    local_640 = "Bbs_EventNotice_Birthday";
    local_648 = PTR_DAT_04bb2020 + 0x10;
    local_658 = param_2[2];
    lVar12 = param_2[3];
    local_650 = local_658;
    if (0x1e < lVar17) {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_658);
      local_7fb0 = (undefined *)(lVar17 + -0x278d00);
      lVar12 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
      lVar17 = *param_2;
    }
    local_658 = lVar12;
    if (lVar17 < 1) {
      local_658 = local_650;
    }
    else {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_658);
      local_7fb0 = (undefined *)(lVar17 + 0x15180);
      local_658 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
    }
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_658);
    lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_650);
    puVar7 = PTR_DAT_04bb46b0;
    if (lVar17 <= lVar12) {
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_650);
        uVar28 = 1;
        do {
          local_660 = local_658;
          lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_660);
          local_7fb0 = (undefined *)(lVar17 + uVar28 * 0x15180);
          local_660 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
          (**(code **)(DAT_04ce9708 + 0x18))(&DAT_04ce9708);
          bVar5 = *DAT_04ce9710;
          if (bVar5 == 0) {
            uVar10 = 0;
            uVar9 = 0;
          }
          else {
            uVar21 = 0;
            uVar10 = 0;
            pbVar26 = DAT_04ce9710;
            do {
              uVar23 = (uint)bVar5;
              iVar19 = (int)uVar21;
              uVar9 = iVar19 + 1;
              if (DAT_04ce9710[uVar9] == 0) {
                uVar23 = uVar23 * 0x16a88000 | uVar23 * -0x3361d2af >> 0x11;
LAB_008809f4:
                uVar10 = uVar23 * 0x1b873593 ^ uVar10;
                break;
              }
              uVar9 = iVar19 + 2;
              if (DAT_04ce9710[uVar9] == 0) {
                uVar23 = (uint)CONCAT11(pbVar26[1],bVar5);
LAB_008809e8:
                uVar23 = uVar23 * 0x16a88000 | uVar23 * -0x3361d2af >> 0x11;
                goto LAB_008809f4;
              }
              uVar9 = iVar19 + 3;
              if (DAT_04ce9710[uVar9] == 0) {
                uVar23 = uVar23 | (uint)pbVar26[2] << 0x10 | (uint)pbVar26[1] << 8;
                goto LAB_008809e8;
              }
              iVar4 = *(int *)pbVar26;
              uVar9 = iVar19 + 4;
              uVar21 = (ulong)uVar9;
              pbVar26 = DAT_04ce9710 + uVar21;
              uVar10 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar10;
              bVar5 = *pbVar26;
              uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
            } while (bVar5 != 0);
          }
          uVar23 = *(uint *)(param_1 + 0x1f0);
          uVar21 = (ulong)uVar23;
          uVar9 = (uVar9 ^ uVar10 ^ (uVar9 ^ uVar10) >> 0x10) * -0x7a143595;
          uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
          uVar9 = uVar9 ^ uVar9 >> 0x10;
          if (*(char *)(param_1 + 0x201) == '\0') {
            if (0 < (int)uVar23) {
              puVar13 = *(undefined8 **)(param_1 + 0x1f8);
              do {
                puVar25 = (uint *)*puVar13;
                if (uVar9 == puVar25[8]) goto LAB_00880ae8;
                puVar13 = puVar13 + 1;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
LAB_00880abc:
            uVar10 = 0xffffffff;
          }
          else {
            if (uVar23 == 0) goto LAB_00880abc;
            if ((int)uVar23 < 2) {
              lVar17 = *(long *)(param_1 + 0x1f8);
              uVar23 = 0;
            }
            else {
              iVar19 = uVar23 - 1;
              lVar17 = *(long *)(param_1 + 0x1f8);
              uVar23 = 0;
              do {
                iVar4 = iVar19 + uVar23;
                if (iVar4 < 0 != SCARRY4(iVar19,uVar23)) {
                  iVar4 = iVar4 + 1;
                }
                uVar20 = iVar4 >> 1;
                uVar10 = *(uint *)(*(long *)(lVar17 + (long)(int)uVar20 * 8) + 0x20);
                if (uVar9 == uVar10) goto joined_r0x00880af4;
                if (uVar10 < uVar9) {
                  uVar23 = uVar20 + 1;
                }
                else {
                  iVar19 = uVar20 - 1;
                }
              } while ((int)uVar23 < iVar19);
            }
            uVar10 = 0xffffffff;
            uVar20 = uVar23;
            if (uVar9 == *(uint *)(*(long *)(lVar17 + (long)(int)uVar23 * 8) + 0x20)) {
joined_r0x00880af4:
              uVar10 = uVar20;
              if (-1 < (int)uVar10) {
                puVar25 = *(uint **)(lVar17 + (ulong)uVar10 * 8);
LAB_00880ae8:
                uVar10 = *puVar25;
              }
            }
          }
          if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
            if ((((*(long *)(param_1 + 0xb8) != 0) &&
                 (puVar25 = *(uint **)(*(long *)(param_1 + 0xb8) + 8), puVar25 != (uint *)0x0)) &&
                ((*(uint *)(param_1 + 0xd0) <= uVar10 ||
                 (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)uVar10) != '\0')))) &&
               (((uVar10 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
              iVar19 = 0xc;
              if (*(char *)((long)puVar25 + 10) != '\0') {
                iVar19 = 0x1c;
              }
              puVar25 = (uint *)((ulong)(puVar25[1] * uVar10 + (uint)(ushort)puVar25[2] * 8 + iVar19
                                        ) + (long)puVar25);
              if (puVar25 != (uint *)0x0) goto LAB_00880b2c;
            }
LAB_00880c90:
            if (uVar28 == 0) {
LAB_00880cb8:
              local_6d8 = (undefined *)((ulong)local_6d8 & 0xffffffff00000000);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(0);
              if (lVar17 == 0) {
LAB_00880d84:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) != 0) goto LAB_00880d94;
                uVar9 = FUN_021eacf0(0,&local_638,1);
                uVar9 = uVar9 & 1;
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_00880d84;
LAB_00880d94:
                uVar9 = 0;
              }
              local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,1);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(1);
              if (lVar17 == 0) {
LAB_00880e78:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) == 0) {
                  uVar10 = FUN_021eacf0(1,&local_638,1);
                  uVar9 = uVar9 + (uVar10 & 1);
                }
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_00880e78;
              }
              local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,2);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(2);
              if (lVar17 == 0) {
LAB_00880f68:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) == 0) {
                  uVar10 = FUN_021eacf0(2,&local_638,1);
                  uVar9 = uVar9 + (uVar10 & 1);
                }
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_00880f68;
              }
              local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,3);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(3);
              if (lVar17 == 0) {
LAB_00881058:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) == 0) {
                  uVar10 = FUN_021eacf0(3,&local_638,1);
                  uVar9 = uVar9 + (uVar10 & 1);
                }
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_00881058;
              }
              local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,4);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(4);
              if (lVar17 == 0) {
LAB_00881148:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) == 0) {
                  uVar10 = FUN_021eacf0(4,&local_638,1);
                  uVar9 = uVar9 + (uVar10 & 1);
                }
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_00881148;
              }
              local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,5);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(5);
              if (lVar17 == 0) {
LAB_00881234:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) == 0) {
                  uVar10 = FUN_021eacf0(5,&local_638,1);
                  uVar9 = uVar9 + (uVar10 & 1);
                }
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_00881234;
              }
              local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,6);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(6);
              if (lVar17 == 0) {
LAB_00881324:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) == 0) {
                  uVar10 = FUN_021eacf0(6,&local_638,1);
                  uVar9 = uVar9 + (uVar10 & 1);
                }
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_00881324;
              }
              local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,7);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(7);
              if (lVar17 == 0) {
LAB_00881414:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) == 0) {
                  uVar10 = FUN_021eacf0(7,&local_638,1);
                  uVar9 = uVar9 + (uVar10 & 1);
                }
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_00881414;
              }
              local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,8);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(8);
              if (lVar17 == 0) {
LAB_00881504:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) == 0) {
                  uVar10 = FUN_021eacf0(8,&local_638,1);
                  uVar9 = uVar9 + (uVar10 & 1);
                }
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_00881504;
              }
              local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,9);
              local_638 = local_660;
              if ((char)(local_660 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                local_7fb0 = (undefined *)(lVar17 + -0x15180);
                local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
              }
              uVar21 = local_638;
              local_638._0_6_ = CONCAT24(5,(uint)local_638);
              local_638._7_1_ = SUB81(uVar21,7);
              local_638._0_7_ = (uint7)(uint6)local_638;
              lVar17 = FUN_0265c2a0(9);
              if (lVar17 == 0) {
LAB_008815f0:
                uVar21 = FUN_021eb720(&local_6d8);
                if ((uVar21 & 1) == 0) {
                  uVar10 = FUN_021eacf0(9,&local_638,1);
                  uVar9 = uVar9 + (uVar10 & 1);
                }
              }
              else {
                if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                   (puVar13 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar13 == (undefined8 *)0x0
                   )) {
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                }
                else {
                  uVar21 = (**(code **)*puVar13)();
                  cVar27 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                if (cVar27 != '\x02') goto LAB_008815f0;
              }
              uVar10 = 0;
              uVar23 = 0;
              bVar8 = true;
              do {
                local_638 = local_660;
                if ((char)(local_660 >> 0x20) < '\x05') {
                  lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_638);
                  local_7fb0 = (undefined *)(lVar17 + -0x15180);
                  local_638 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
                }
                uVar21 = local_638;
                lVar17 = *(long *)puVar7;
                uVar20 = (uint)local_638;
                local_638._0_6_ = CONCAT24(5,(uint)local_638);
                local_638._7_1_ = SUB81(uVar21,7);
                local_638._0_7_ = (uint7)(uint6)local_638;
                if ((lVar17 != 0) && (lVar17 = FUN_026eec4c(lVar17,uVar23), lVar17 != 0)) {
                  if (*(long **)(lVar17 + 0x18390) == (long *)0x0) {
                    uVar14 = 0;
                  }
                  else {
                    puVar13 = (undefined8 *)**(long **)(lVar17 + 0x18390);
                    uVar14 = 0;
                    if (puVar13 != (undefined8 *)0x0) {
                      uVar14 = (**(code **)*puVar13)();
                    }
                  }
                  pbVar26 = (byte *)(*(long *)(lVar17 + 0x18378) + *(long *)(lVar17 + 0x18370));
                  bVar5 = *pbVar26;
                  if ((bVar5 - 1 < 0xc) &&
                     (bVar6 = pbVar26[1], (byte)(bVar6 - 1) < (byte)(&DAT_0417b531)[bVar5 - 1])) {
                    uVar11 = uVar20 >> 0x10 & 0xff;
                    uVar24 = (uint)(uVar21 >> 0x18) & 0xff;
                    if ((bVar5 == 2 && bVar6 == 0x1d) &&
                       (((uVar21 & 3) != 0 ||
                        ((((uVar20 & 0xffff) * -0x3d70a3d7 >> 2 | uVar20 * 0x40000000) < 0x28f5c29
                         && ((uVar21 & 0xf) != 0)))))) {
                      if (((uVar14 & 1) != 0) &&
                         ((*(long *)(lVar17 + 0x18390) != 0 &&
                          (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x18390) + 8),
                          puVar13 != (undefined8 *)0x0)))) {
                        (**(code **)*puVar13)();
                      }
                      if (uVar11 == 2 && uVar24 == 0x1c) goto LAB_0088162c;
                    }
                    else {
                      if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x18390) != 0)) &&
                         (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x18390) + 8),
                         puVar13 != (undefined8 *)0x0)) {
                        (**(code **)*puVar13)();
                      }
                      if (bVar5 == uVar11 && bVar6 == uVar24) {
LAB_0088162c:
                        if (2 < (int)(uVar10 + uVar9)) break;
                        uVar10 = uVar10 + 1;
                      }
                    }
                  }
                  else if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x18390) != 0)) &&
                          (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x18390) + 8),
                          puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
                bVar8 = uVar23 < 7;
                uVar23 = uVar23 + 1;
              } while (uVar23 != 8);
              if ((0 < (int)uVar10) || (uVar9 != 0)) {
                local_670 = FUN_0087cfb0;
                local_680 = &PTR_FUN_0491e8c0;
                local_668 = 0;
                local_6c8 = 0x40;
                local_685 = 0;
                local_6c4[0] = 0;
                local_720 = 0x40;
                local_6dd = 0;
                local_71c[0] = 0;
                local_778 = 0x40;
                local_735 = 0;
                local_774[0] = 0;
                local_788 = puVar1;
                local_780 = local_774;
                local_730 = puVar1;
                local_728 = local_71c;
                local_6d8 = puVar1;
                local_6d0 = local_6c4;
                local_678 = param_1;
                if (bVar8) {
                  FUN_038d1270(&local_730,"Many_%02d_Pre",1);
                  pcVar16 = "Many_%02d_Post";
LAB_0088189c:
                  uVar23 = 1;
LAB_00881b9c:
                  FUN_038d1270(&local_6d8,pcVar16,uVar23);
                }
                else {
                  iVar19 = uVar10 + uVar9;
                  if (iVar19 == 1) {
                    pcStack_7fa8 = "BirthdayBbsVariation1";
                    local_7fb0 = puVar2;
                    uVar11 = FUN_0273ea30(&local_7fb0);
                    uVar23 = 1;
                    uVar20 = (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU) & 0x3e;
                    if ((int)uVar11 < 1) {
                      uVar20 = 0x3e;
                    }
                    uVar11 = uVar20 - (uVar20 >> 1 & 0x55555555);
                    uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
                    uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
                    uVar11 = uVar11 + (uVar11 >> 8);
                    uVar11 = uVar11 + (uVar11 >> 0x10);
                    if ((uVar11 & 0x3f) != 0) {
                      puVar25 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                      uVar23 = *puVar25 ^ *puVar25 << 0xb;
                      uVar24 = puVar25[3];
                      *puVar25 = puVar25[1];
                      puVar25[1] = puVar25[2];
                      uVar23 = uVar23 >> 8 ^ uVar24 >> 0x13 ^ uVar23 ^ uVar24;
                      puVar25[2] = uVar24;
                      puVar25[3] = uVar23;
                      if (uVar20 != 0) {
                        iVar19 = (int)((ulong)uVar23 * (ulong)(uVar11 & 0x3f) >> 0x20) + 2;
                        do {
                          iVar19 = iVar19 + -1;
                          if (iVar19 < 2) {
                            uVar23 = uVar20 - 1 & (uVar20 ^ 0xffffffff);
                            uVar23 = uVar23 - (uVar23 >> 1 & 0x55555555);
                            uVar23 = (uVar23 >> 2 & 0x33333333) + (uVar23 & 0x33333333);
                            uVar23 = uVar23 + (uVar23 >> 4) & 0xf0f0f0f;
                            uVar23 = uVar23 + (uVar23 >> 8);
                            uVar23 = uVar23 + (uVar23 >> 0x10) & 0x3f;
                            goto LAB_00881b4c;
                          }
                          uVar20 = uVar20 - 1 & uVar20;
                        } while (uVar20 != 0);
                      }
                      uVar23 = 0xffffffff;
LAB_00881b4c:
                      local_7fb0 = PTR_DAT_04bb2020 + 0x10;
                      pcStack_7fa8 = "BirthdayBbsVariation1";
                      FUN_0273f3c4(&local_7fb0,uVar23);
                    }
                    FUN_038d1270(&local_730,"1_%02d_Pre",uVar23);
                    pcVar16 = "1_%02d_Post";
                    goto LAB_00881b9c;
                  }
                  if (iVar19 == 3) {
                    FUN_038d1270(&local_730,"3_%02d_Pre",1);
                    pcVar16 = "3_%02d_Post";
                    goto LAB_0088189c;
                  }
                  if (iVar19 == 2) {
                    local_7fb0 = PTR_DAT_04bb2020 + 0x10;
                    pcStack_7fa8 = "BirthdayBbsVariation2";
                    uVar11 = FUN_0273ea30(&local_7fb0);
                    uVar23 = 1;
                    uVar20 = (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU) & 6;
                    if ((int)uVar11 < 1) {
                      uVar20 = 6;
                    }
                    uVar11 = uVar20 + ((int)(uVar20 << 0x1e) >> 0x1f);
                    uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
                    uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
                    uVar11 = uVar11 + (uVar11 >> 8);
                    uVar11 = uVar11 + (uVar11 >> 0x10);
                    if ((uVar11 & 0x3f) != 0) {
                      puVar25 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                      uVar23 = *puVar25 ^ *puVar25 << 0xb;
                      uVar24 = puVar25[3];
                      *puVar25 = puVar25[1];
                      puVar25[1] = puVar25[2];
                      uVar23 = uVar23 >> 8 ^ uVar24 >> 0x13 ^ uVar23 ^ uVar24;
                      puVar25[2] = uVar24;
                      puVar25[3] = uVar23;
                      if (uVar20 != 0) {
                        iVar19 = (int)((ulong)uVar23 * (ulong)(uVar11 & 0x3f) >> 0x20) + 2;
                        do {
                          iVar19 = iVar19 + -1;
                          if (iVar19 < 2) {
                            uVar23 = uVar20 - 1 & (uVar20 ^ 0xffffffff);
                            uVar23 = uVar23 - (uVar23 >> 1 & 0x55555555);
                            uVar23 = (uVar23 >> 2 & 0x33333333) + (uVar23 & 0x33333333);
                            uVar23 = uVar23 + (uVar23 >> 4) & 0xf0f0f0f;
                            uVar23 = uVar23 + (uVar23 >> 8);
                            uVar23 = uVar23 + (uVar23 >> 0x10) & 0x3f;
                            goto LAB_00881ac4;
                          }
                          uVar20 = uVar20 - 1 & uVar20;
                        } while (uVar20 != 0);
                      }
                      uVar23 = 0xffffffff;
LAB_00881ac4:
                      local_7fb0 = PTR_DAT_04bb2020 + 0x10;
                      pcStack_7fa8 = "BirthdayBbsVariation2";
                      FUN_0273f3c4(&local_7fb0,uVar23);
                    }
                    FUN_038d1270(&local_730,"2_%02d_Pre",uVar23);
                    pcVar16 = "2_%02d_Post";
                    goto LAB_00881b9c;
                  }
                }
                if (uVar10 == 0) {
                  pcVar16 = "Name_N%d";
LAB_00881be4:
                  FUN_038d1270(&local_788,pcVar16,uVar9);
                }
                else {
                  if (uVar9 == 0) {
                    pcVar16 = "Name_P%d";
                    uVar9 = uVar10;
                    goto LAB_00881be4;
                  }
                  FUN_038d1270(&local_788,"Name_P%dN%d",uVar10,uVar9);
                }
                local_78d = 0;
                local_7d0 = 0x40;
                local_7cc[0] = 0;
                local_7e0 = PTR_DAT_04bb2bc0 + 0x10;
                local_7d8 = local_7cc;
                FUN_038d1270(&local_7e0,&DAT_040a5999);
                memset(&local_7fb0,0,0x7780);
                local_81c = 2;
                local_830 = 0;
                uStack_828 = 0;
                local_820 = 0;
                local_808 = 0;
                local_818 = 0;
                uStack_810 = 0;
                local_800 = 0;
                local_7fc = 0xffff;
                *(ulong *)(param_1 + 0x14e8) = local_660;
                local_7fa = 0;
                uStack_7f2 = 0;
                local_7ec = 0;
                uStack_7ea = 0;
                (**(code **)(DAT_04ce9708 + 0x18))(&DAT_04ce9708);
                bVar5 = *DAT_04ce9710;
                if (bVar5 == 0) {
                  uVar10 = 0;
                  uVar9 = 0;
                }
                else {
                  uVar21 = 0;
                  uVar10 = 0;
                  pbVar26 = DAT_04ce9710;
                  do {
                    uVar23 = (uint)bVar5;
                    iVar19 = (int)uVar21;
                    uVar9 = iVar19 + 1;
                    if (DAT_04ce9710[uVar9] == 0) {
                      uVar23 = uVar23 * 0x16a88000 | uVar23 * -0x3361d2af >> 0x11;
LAB_00881d70:
                      uVar10 = uVar23 * 0x1b873593 ^ uVar10;
                      break;
                    }
                    uVar9 = iVar19 + 2;
                    if (DAT_04ce9710[uVar9] == 0) {
                      uVar23 = (uint)CONCAT11(pbVar26[1],bVar5);
LAB_00881d64:
                      uVar23 = uVar23 * 0x16a88000 | uVar23 * -0x3361d2af >> 0x11;
                      goto LAB_00881d70;
                    }
                    uVar9 = iVar19 + 3;
                    if (DAT_04ce9710[uVar9] == 0) {
                      uVar23 = uVar23 | (uint)pbVar26[2] << 0x10 | (uint)pbVar26[1] << 8;
                      goto LAB_00881d64;
                    }
                    iVar4 = *(int *)pbVar26;
                    uVar9 = iVar19 + 4;
                    uVar21 = (ulong)uVar9;
                    pbVar26 = DAT_04ce9710 + uVar21;
                    uVar10 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593
                             ^ uVar10;
                    bVar5 = *pbVar26;
                    uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
                  } while (bVar5 != 0);
                }
                uVar23 = *(uint *)(param_1 + 0x1f0);
                uVar21 = (ulong)uVar23;
                uVar9 = (uVar9 ^ uVar10 ^ (uVar9 ^ uVar10) >> 0x10) * -0x7a143595;
                uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
                uVar9 = uVar9 ^ uVar9 >> 0x10;
                if (*(char *)(param_1 + 0x201) == '\0') {
                  if (0 < (int)uVar23) {
                    puVar13 = *(undefined8 **)(param_1 + 0x1f8);
                    do {
                      puVar25 = (uint *)*puVar13;
                      if (uVar9 == puVar25[8]) goto LAB_00881e68;
                      puVar13 = puVar13 + 1;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
LAB_00881e3c:
                  uVar10 = 0xffffffff;
                }
                else {
                  if (uVar23 == 0) goto LAB_00881e3c;
                  if ((int)uVar23 < 2) {
                    lVar17 = *(long *)(param_1 + 0x1f8);
                    uVar23 = 0;
                  }
                  else {
                    iVar19 = uVar23 - 1;
                    lVar17 = *(long *)(param_1 + 0x1f8);
                    uVar23 = 0;
                    do {
                      iVar4 = iVar19 + uVar23;
                      if (iVar4 < 0 != SCARRY4(iVar19,uVar23)) {
                        iVar4 = iVar4 + 1;
                      }
                      uVar20 = iVar4 >> 1;
                      uVar10 = *(uint *)(*(long *)(lVar17 + (long)(int)uVar20 * 8) + 0x20);
                      if (uVar9 == uVar10) goto joined_r0x00881e74;
                      if (uVar10 < uVar9) {
                        uVar23 = uVar20 + 1;
                      }
                      else {
                        iVar19 = uVar20 - 1;
                      }
                    } while ((int)uVar23 < iVar19);
                  }
                  uVar10 = 0xffffffff;
                  uVar20 = uVar23;
                  if (uVar9 == *(uint *)(*(long *)(lVar17 + (long)(int)uVar23 * 8) + 0x20)) {
joined_r0x00881e74:
                    uVar10 = uVar20;
                    if (-1 < (int)uVar10) {
                      puVar25 = *(uint **)(lVar17 + (ulong)uVar10 * 8);
LAB_00881e68:
                      uVar10 = *puVar25;
                    }
                  }
                }
                if ((int)*(uint *)(param_1 + 0x1c8) < 1) {
                  if (((*(long *)(param_1 + 0xb8) != 0) &&
                      (puVar25 = *(uint **)(*(long *)(param_1 + 0xb8) + 8), puVar25 != (uint *)0x0))
                     && (((*(uint *)(param_1 + 0xd0) <= uVar10 ||
                          (*(char *)(*(long *)(param_1 + 0xd8) + (long)(int)uVar10) != '\0')) &&
                         (((uVar10 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))))
                     ) {
                    iVar19 = 0xc;
                    if (*(char *)((long)puVar25 + 10) != '\0') {
                      iVar19 = 0x1c;
                    }
                    puVar25 = (uint *)((ulong)(puVar25[1] * uVar10 + (uint)(ushort)puVar25[2] * 8 +
                                              iVar19) + (long)puVar25);
                    goto LAB_00881ea8;
                  }
LAB_00882010:
                  uVar29 = 0;
                }
                else {
                  if (*(uint *)(param_1 + 0x1c8) <= uVar10) goto LAB_00882010;
                  if (*(uint *)(param_1 + 0x1b8) <= uVar10) {
                    uVar10 = 0;
                  }
                  puVar25 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)uVar10 * 8);
LAB_00881ea8:
                  if (puVar25 == (uint *)0x0) goto LAB_00882010;
                  if (*puVar25 != 0) {
                    cVar27 = *PTR_DAT_04bb3248;
                    do {
                      if (cVar27 == '\0') {
                        cVar27 = '\x01';
                        *PTR_DAT_04bb3248 = 1;
                        memset(PTR_DAT_04bb3250,0xff,0x288);
                      }
                      else {
                        uVar9 = *(uint *)(PTR_DAT_04bb3250 + 0x3c);
                        if (-1 < (int)uVar9) {
                          if (((byte *)((ulong)uVar9 + (long)puVar25) != (byte *)0x0) &&
                             (bVar5 = *(byte *)((ulong)uVar9 + (long)puVar25),
                             uVar29 = (ushort)bVar5, bVar5 < 7)) goto LAB_00882038;
                          break;
                        }
                        if (uVar9 != 0xffffffff) break;
                      }
                      puVar18 = (uint *)(ulong)*puVar25;
                      uVar29 = 0;
                      if ((*puVar25 == 0) || (puVar25 == puVar18)) goto LAB_00882038;
                      lVar17 = 0xc;
                      if (*(char *)((long)puVar25 + (10 - (long)puVar18)) != '\0') {
                        lVar17 = 0x1c;
                      }
                      lVar17 = (long)puVar25 + (lVar17 - (long)puVar18);
                      if (lVar17 == 0) break;
                      uVar21 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar18));
                      *(undefined4 *)(PTR_DAT_04bb3250 + 0x3c) = 0xfffffffe;
                      if (uVar21 == 0) break;
                      piVar22 = (int *)(lVar17 + 4);
                      while (piVar22[-1] != -0x3147e501) {
                        piVar22 = piVar22 + 2;
                        uVar21 = uVar21 - 1;
                        if (uVar21 == 0) goto LAB_00882030;
                      }
                      iVar19 = 0;
                      if (*piVar22 != -1) {
                        iVar19 = *piVar22;
                      }
                      *(int *)(PTR_DAT_04bb3250 + 0x3c) = iVar19;
                      if (*puVar25 == 0) break;
                    } while( true );
                  }
LAB_00882030:
                  uVar29 = 0;
                }
LAB_00882038:
                memset(&local_7fb0,0,0x77d0);
                lVar17 = local_658;
                local_81c = 2;
                local_7fa = 0;
                uStack_7f2 = 0;
                local_7ec = 0;
                uStack_7ea = 0;
                local_830 = 0;
                uStack_828 = 0;
                local_820 = 0;
                local_808 = 0;
                local_818 = 0;
                uStack_810 = 0;
                local_800 = 0;
                local_7fc = 0xffff;
                uVar21 = nn::time::IsValidDate
                                   ((uint)(ushort)local_658,(uint)local_658._2_1_,
                                    (uint)local_658._3_1_);
                if ((uVar21 & 1) != 0) {
                  local_7fb0._0_4_ = (undefined4)lVar17;
                }
                local_7fa = CONCAT62(local_7fa._2_6_,uVar29);
                FUN_01bdde78(&local_638);
                (*(code *)*local_680)(&local_680,local_628);
                local_618 = 0;
                local_80 = 0;
                local_610 = auStack_480;
                local_608 = auStack_1c0;
                local_78 = (ulong)&local_7fb0 | 4;
                local_70 = auStack_7dcc;
                FUN_01bdda98(&local_638,&local_648,&local_730,&local_788,&local_6d8,&local_7e0);
                lVar17 = *(long *)puVar7;
                if (lVar17 == 0) {
LAB_00882184:
                  lVar17 = 0;
                }
                else {
                  puVar13 = *(undefined8 **)(lVar17 + 0x10);
                  if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
                    lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
                    lVar17 = 0;
                    if (lVar12 != 0) {
                      lVar17 = lVar12 + 0x70;
                    }
                  }
                  else {
                    if (puVar13 == (undefined8 *)0x0) goto LAB_00882184;
                    lVar17 = 0;
                    if ((long *)puVar13[0x26] != (long *)0x0) {
                      lVar17 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
                    }
                  }
                }
                plVar3 = (long *)(lVar17 + 0x1c27a0);
                lVar12 = *(long *)(lVar17 + 0x1c27c0);
                if (lVar12 == 0) {
                  FUN_026d4f58(*(long *)(lVar17 + 0x1c27a8) + *plVar3,&local_7fb0);
                }
                else {
                  if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
                    uVar21 = 0;
                    plVar15 = *(long **)(lVar12 + 0x20);
joined_r0x00882230:
                    if (plVar15 != (long *)0x0) {
                      local_638 = *plVar3;
                      local_630 = *(undefined8 *)(lVar17 + 0x1c27a8);
                      local_628[0] = 0xe0ae8;
                      (**(code **)(*plVar15 + 0x20))(plVar15,&local_638);
                    }
                  }
                  else {
                    uVar21 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
                    uVar21 = uVar21 & 0xffffffff;
                    if (*(long *)(lVar17 + 0x1c27c0) != 0) {
                      plVar15 = *(long **)(*(long *)(lVar17 + 0x1c27c0) + 0x20);
                      goto joined_r0x00882230;
                    }
                  }
                  FUN_026d4f58(*(long *)(lVar17 + 0x1c27a8) + *plVar3,&local_7fb0);
                  if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x1c27c0) != 0)) &&
                     (puVar13 = *(undefined8 **)(*(long *)(lVar17 + 0x1c27c0) + 0x18),
                     puVar13 != (undefined8 *)0x0)) {
                    (**(code **)*puVar13)();
                  }
                }
              }
            }
          }
          else {
            if (*(uint *)(param_1 + 0x1c8) <= uVar10) goto LAB_00880c90;
            if (*(uint *)(param_1 + 0x1b8) <= uVar10) {
              uVar10 = 0;
            }
            puVar25 = *(uint **)(*(long *)(param_1 + 0x1c0) + (ulong)uVar10 * 8);
            if (puVar25 == (uint *)0x0) goto LAB_00880c90;
LAB_00880b2c:
            if (*puVar25 == 0) goto LAB_00880c90;
            cVar27 = *PTR_DAT_04bb3248;
LAB_00880b40:
            if (cVar27 == '\0') {
              cVar27 = '\x01';
              *PTR_DAT_04bb3248 = 1;
              memset(PTR_DAT_04bb3250,0xff,0x288);
LAB_00880b84:
              puVar18 = (uint *)(ulong)*puVar25;
              uVar21 = 0;
              if ((*puVar25 == 0) || (puVar25 == puVar18)) goto LAB_00880cb0;
              lVar17 = 0xc;
              if (*(char *)((long)puVar25 + (10 - (long)puVar18)) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar25 + (lVar17 - (long)puVar18);
              if (lVar17 == 0) goto LAB_00880c90;
              uVar14 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar18));
              *(undefined4 *)(PTR_DAT_04bb3250 + 0x30) = 0xfffffffe;
              uVar21 = 0;
              if (uVar14 == 0) goto LAB_00880cb0;
              piVar22 = (int *)(lVar17 + 4);
              while (piVar22[-1] != -0x6ad30cd2) {
                piVar22 = piVar22 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  uVar21 = 0;
                  goto LAB_00880cb0;
                }
              }
              uVar21 = 0;
              iVar19 = 0;
              if (*piVar22 != -1) {
                iVar19 = *piVar22;
              }
              *(int *)(PTR_DAT_04bb3250 + 0x30) = iVar19;
              if (*puVar25 == 0) goto LAB_00880cb0;
              goto LAB_00880b40;
            }
            uVar9 = *(uint *)(PTR_DAT_04bb3250 + 0x30);
            if ((int)uVar9 < 0) {
              if (uVar9 != 0xffffffff) goto LAB_00880c90;
              goto LAB_00880b84;
            }
            uVar21 = 0;
            if ((byte *)((ulong)uVar9 + (long)puVar25) != (byte *)0x0) {
              uVar21 = (ulong)*(byte *)((ulong)uVar9 + (long)puVar25);
            }
LAB_00880cb0:
            if (uVar28 == uVar21) goto LAB_00880cb8;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 != 0x1f);
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_658);
        local_7fb0 = (undefined *)(lVar17 + 0x15180);
        local_658 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7fb0);
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_658);
        lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_650);
      } while (lVar17 <= lVar12);
    }
  }
  return;
}

