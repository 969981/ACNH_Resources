
/* WARNING: Removing unreachable block (ram,0x028d60a4) */

byte FUN_028d5b80(ulong param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  char cVar9;
  short *psVar10;
  int *piVar11;
  char *pcVar12;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined *local_48;
  char *local_40;
  uint local_24;
  
  pcVar8 = *(char **)(param_2 + 8);
  cVar9 = *pcVar8;
  uVar6 = param_1;
  if (cVar9 == 'f') {
    if ((pcVar8[1] == 'o') && (pcVar8[2] == 'x')) {
      local_48 = PTR_DAT_04bb2020 + 0x10;
      local_40 = "FoxPreVisitToday";
      uVar6 = FUN_0273f0a0(&local_48);
      if ((uVar6 & 1) != 0) {
LAB_028d6080:
        bVar4 = 1;
        goto LAB_028d6084;
      }
      pcVar8 = *(char **)(param_2 + 8);
      cVar9 = *pcVar8;
      goto LAB_028d5bec;
    }
    cVar9 = 'f';
LAB_028d5edc:
    if (cVar9 == 'g') {
      if (pcVar8[1] != 's') {
        cVar9 = 'g';
        goto LAB_028d5f74;
      }
      if (pcVar8[2] == 't') {
        bVar4 = FUN_028d63bc(param_1);
        goto LAB_028d6084;
      }
    }
    else if (cVar9 == 'p') {
      if ((pcVar8[1] == 'y') && (pcVar8[2] == 'n')) {
        bVar4 = FUN_028d65dc();
        goto LAB_028d6084;
      }
      if ((pcVar8[1] == 'k') && (pcVar8[2] == 'n')) {
        bVar4 = FUN_028d670c();
        goto LAB_028d6084;
      }
      if ((pcVar8[1] == 'c') && (pcVar8[2] == 'k')) {
        bVar4 = FUN_028d6a0c();
        goto LAB_028d6084;
      }
    }
    else {
LAB_028d5f74:
      if (((cVar9 == 'r') && (pcVar8[1] == 'e')) && (pcVar8[2] == 'i')) {
        bVar4 = FUN_028d690c();
        goto LAB_028d6084;
      }
    }
  }
  else {
LAB_028d5bec:
    puVar3 = PTR_DAT_04bb32e8;
    if (cVar9 == 't') {
      if ((pcVar8[1] == 'k') && (pcVar8[2] == 'k')) {
        psVar10 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
        if (*psVar10 == 0) {
          local_58 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if ((char)((ulong)local_58 >> 0x20) < '\x05') {
            lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
            local_48 = (undefined *)(lVar7 + -0x15180);
            uVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
            local_58 = (undefined *)uVar6;
          }
          psVar10 = (short *)&local_58;
          uVar2 = (ulong)local_58 >> 0x30;
          local_58._0_6_ = CONCAT24(5,(int)local_58);
          local_58 = (undefined *)(CONCAT26((short)uVar2,(undefined6)local_58) & 0xff00ffffffffffff)
          ;
        }
        local_48 = *(undefined **)psVar10;
        iVar5 = FUN_028d4550(uVar6,&local_48);
        bVar4 = iVar5 != 0;
        goto LAB_028d6084;
      }
      if ((pcVar8[1] == 'u') && (pcVar8[2] == 'k')) {
        bVar4 = FUN_028d680c();
        goto LAB_028d6084;
      }
    }
    else if (cVar9 == 's') {
      if ((pcVar8[1] == 'p') && (pcVar8[2] == 'n')) {
        psVar10 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
        if (*psVar10 == 0) {
          local_58 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if ((char)((ulong)local_58 >> 0x20) < '\x05') {
            lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
            local_48 = (undefined *)(lVar7 + -0x15180);
            uVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
            local_58 = (undefined *)uVar6;
          }
          psVar10 = (short *)&local_58;
          uVar2 = (ulong)local_58 >> 0x30;
          local_58._0_6_ = CONCAT24(5,(int)local_58);
          local_58 = (undefined *)(CONCAT26((short)uVar2,(undefined6)local_58) & 0xff00ffffffffffff)
          ;
        }
        local_48 = *(undefined **)psVar10;
        iVar5 = FUN_028d4550(uVar6,&local_48);
        local_48 = (undefined *)CONCAT44(local_48._4_4_,iVar5);
        if (((iVar5 == 0) &&
            (((lVar7 = *(long *)PTR_DAT_04bb27d0, lVar7 == 0 || (*(long *)(lVar7 + 0x28) == 0)) ||
             (*(int *)(lVar7 + 0x80) != 1)))) &&
           (uVar6 = FUN_008827e0(*(undefined8 *)PTR_DAT_04bb32f0), (uVar6 & 1) == 0)) {
          local_48 = PTR_DAT_04bb2020 + 0x10;
          local_40 = "SpnVisitMainField";
          bVar4 = FUN_0273f0a0(&local_48);
          goto LAB_028d6084;
        }
LAB_028d5e98:
        bVar4 = 0;
        goto LAB_028d6084;
      }
    }
    else {
      if (cVar9 == 'o') {
        if (pcVar8[1] == 'w') {
          if (pcVar8[2] != 's') {
            cVar9 = 'o';
            goto LAB_028d5edc;
          }
          psVar10 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
          if (*psVar10 == 0) {
            local_58 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
            if ((char)((ulong)local_58 >> 0x20) < '\x05') {
              lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
              local_48 = (undefined *)(lVar7 + -0x15180);
              uVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
              local_58 = (undefined *)uVar6;
            }
            psVar10 = (short *)&local_58;
            uVar2 = (ulong)local_58 >> 0x30;
            local_58._0_6_ = CONCAT24(5,(int)local_58);
            local_58 = (undefined *)
                       (CONCAT26((short)uVar2,(undefined6)local_58) & 0xff00ffffffffffff);
          }
          local_48 = *(undefined **)psVar10;
          iVar5 = FUN_028d4550(uVar6,&local_48);
          local_48 = (undefined *)CONCAT44(local_48._4_4_,iVar5);
          if ((iVar5 == 0) &&
             (((lVar7 = *(long *)PTR_DAT_04bb27d0, lVar7 == 0 || (*(long *)(lVar7 + 0x28) == 0)) ||
              (*(int *)(lVar7 + 0x80) != 1)))) {
            piVar11 = (int *)(*(long *)puVar3 + 0x4068);
            if (*(short *)piVar11 == 0) {
              local_58 = *(undefined **)(*(long *)puVar3 + 0x4060);
              if ((char)((ulong)local_58 >> 0x20) < '\x05') {
                lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
                local_48 = (undefined *)(lVar7 + -0x15180);
                local_58 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
              }
              piVar11 = (int *)&local_58;
              uVar6 = (ulong)local_58 >> 0x30;
              local_58._0_6_ = CONCAT24(5,(int)local_58);
              local_58 = (undefined *)
                         (CONCAT26((short)uVar6,(undefined6)local_58) & 0xff00ffffffffffff);
            }
            iVar5 = *piVar11;
            iVar1 = *(int *)(param_1 + 0x74);
            iVar5 = nn::time::GetDayOfWeek((int)(short)iVar5,(iVar5 << 8) >> 0x18,iVar5 >> 0x18);
            bVar4 = iVar1 == iVar5;
            goto LAB_028d6084;
          }
          goto LAB_028d5e98;
        }
        cVar9 = 'o';
      }
      if (cVar9 != 'b') goto LAB_028d5edc;
      if ((pcVar8[1] == 'o') && (pcVar8[2] == 'c')) {
        bVar4 = FUN_028d4428();
        goto LAB_028d6084;
      }
    }
  }
  cVar9 = *DAT_055b5370;
  if (cVar9 != '\0') {
    pcVar12 = DAT_055b5370;
    do {
      pcVar12 = pcVar12 + 1;
      if (*pcVar8 != cVar9) {
        local_24 = FUN_028d6b0c(param_1);
        if (local_24 < 0xc) {
          puStack_50 = (undefined8 *)(&PTR_DAT_04a92640)[local_24];
        }
        else {
          puStack_50 = &DAT_0407ebb1;
        }
        local_58 = PTR_DAT_04bb2020 + 0x10;
        FUN_00cf7f30(&local_48,&local_58);
        cVar9 = *local_40;
        if (cVar9 == '\0') goto LAB_028d6080;
        pcVar8 = *(char **)(param_2 + 8);
        goto LAB_028d6064;
      }
      cVar9 = *pcVar12;
      pcVar8 = pcVar8 + 1;
    } while (cVar9 != '\0');
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "IsVisitNpcTidyToday";
  iVar5 = FUN_0273ea30(&local_48);
  bVar4 = iVar5 == 1;
LAB_028d6084:
  return bVar4 & 1;
  while( true ) {
    cVar9 = *local_40;
    pcVar8 = pcVar8 + 1;
    if (cVar9 == '\0') break;
LAB_028d6064:
    local_40 = local_40 + 1;
    bVar4 = *pcVar8 == cVar9;
    if (!(bool)bVar4) break;
  }
  goto LAB_028d6084;
}

