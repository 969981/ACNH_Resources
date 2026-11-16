
undefined1 FUN_02926a20(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  uint *puVar4;
  byte bVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  short *psVar15;
  undefined1 uVar16;
  byte *pbVar17;
  char cVar18;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  byte local_8c [4];
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  byte *local_70;
  int local_68;
  byte local_64 [15];
  undefined1 local_55;
  undefined8 local_38;
  
  local_68 = 0x10;
  local_55 = 0;
  local_78 = PTR_DAT_04bb35a0 + 0x10;
  local_70 = local_64;
  (**(code **)(*param_1 + 0x18))();
  pbVar17 = (byte *)param_1[1];
  if (local_64 != pbVar17) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar13 = 0;
    do {
      if (*(char *)(param_1[1] + lVar13) == '\0') goto LAB_02926adc;
      lVar10 = param_1[1] + lVar13;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_02926adc;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_02926adc;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_02926adc:
    iVar8 = (int)lVar13;
    if (local_68 <= (int)lVar13) {
      iVar8 = local_68 + -1;
    }
    memcpy(local_64,pbVar17,(long)iVar8);
    local_64[iVar8] = 0;
  }
  puVar2 = PTR_DAT_04bb32e8;
  local_78 = PTR_DAT_04bb2ab0 + 0x10;
  puVar14 = (undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (*(short *)PTR_DAT_04bc3a10 != 0) {
    puVar14 = (undefined8 *)PTR_DAT_04bc3a10;
  }
  local_38 = *puVar14;
  cVar18 = (char)(local_38 >> 0x20);
  if (cVar18 < '\x05') {
    lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_88 = (undefined *)(lVar13 + -0x15180);
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
  }
  uVar11 = local_38 >> 0x30;
  local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
  local_38 = CONCAT26((short)uVar11,(undefined6)local_38) & 0xff00ffffffffffff;
  cVar3 = cVar18 + '\x18';
  if ('\x04' < cVar18) {
    cVar3 = cVar18;
  }
  switch(*local_70) {
  case 0x61:
    if ((local_70[1] != 0x6c) || (local_70[2] != 0x70)) {
      if (local_70[1] != 0x6c) {
        return 3;
      }
      if (local_70[2] != 0x77) {
        return 3;
      }
    }
    pcStack_80 = "CommuneAlpDonation";
    break;
  case 0x62:
    if (local_70[1] != 0x70) {
      return 3;
    }
    if (local_70[2] != 0x74) {
      return 3;
    }
    local_88 = PTR_DAT_04bb2020 + 0x10;
    pcStack_80 = "CommuneBptDonation";
    iVar8 = FUN_0273ea30(&local_88);
    if (iVar8 < 2) {
      return 3;
    }
    goto LAB_02926da0;
  case 99:
    if (local_70[1] != 0x6d) {
      return 3;
    }
    if (local_70[2] != 0x6c) {
      return 3;
    }
    pcStack_80 = "CommuneCmlDonation";
    break;
  default:
    return 3;
  case 0x66:
    if (local_70[1] != 0x6f) {
      return 3;
    }
    if (local_70[2] != 0x78) {
      return 3;
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_80 = "CommuneFoxDonation";
    local_88 = puVar1;
    iVar8 = FUN_0273ea30(&local_88);
    if (iVar8 < 2) {
      return 3;
    }
    local_a8 = (undefined *)FUN_00a82790(*(undefined8 *)puVar2);
    pcStack_80 = "Fireworks";
    local_88 = puVar1;
    uVar11 = FUN_0087c200(*(undefined8 *)PTR_DAT_04bb32f0,&local_88,&local_a8,1);
    if ((uVar11 & 1) != 0) {
      return 2;
    }
LAB_02926da0:
    cVar18 = '\x19';
    goto LAB_02926da4;
  case 0x73:
    if ((local_70[1] == 0x6c) && (local_70[2] == 0x6f)) {
      pcStack_80 = "CommuneSloDonation";
      goto LAB_02926d34;
    }
    if (local_70[1] != 0x6b) {
      return 3;
    }
    if (local_70[2] != 0x6b) {
      return 3;
    }
    pcStack_80 = "CommuneSkkDonation";
    break;
  case 0x74:
    if (local_70[1] != 0x74) {
      return 3;
    }
    if (local_70[2] != 0x6c) {
      return 3;
    }
    pcStack_80 = "CommuneTtlDonation";
LAB_02926d34:
    local_88 = PTR_DAT_04bb2020 + 0x10;
    iVar8 = FUN_0273ea30(&local_88);
    if (iVar8 < 2) {
      return 3;
    }
    cVar18 = '\x17';
    goto LAB_02926da4;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  iVar8 = FUN_0273ea30(&local_88);
  if (iVar8 < 2) {
    return 3;
  }
  cVar18 = '\x18';
LAB_02926da4:
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 == 0) {
LAB_02926dfc:
    lVar13 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar10 != 0) {
        lVar13 = lVar10 + 0x70;
      }
    }
    else {
      if (puVar14 == (undefined8 *)0x0) goto LAB_02926dfc;
      lVar13 = 0;
      if ((long *)puVar14[0x26] != (long *)0x0) {
        lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar13 + 0x1bf260) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x1bf260), puVar14 == (undefined8 *)0x0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)*puVar14)();
    uVar11 = uVar11 & 0xffffffff;
  }
  uVar12 = FUN_028d5b80(*(long *)(lVar13 + 0x1bf248) + *(long *)(lVar13 + 0x1bf240),&local_78);
  if ((uVar12 & 1) != 0) {
    uVar16 = 2;
    goto joined_r0x029270a0;
  }
  if ((*local_70 == 0x61) &&
     (((local_70[1] == 0x6c && (local_70[2] == 0x70)) ||
      ((local_70[1] == 0x6c && (local_70[2] == 0x77)))))) {
    lVar10 = *(long *)PTR_DAT_04bb39b0;
    pbVar17 = PTR_DAT_04bb32e0;
    if (lVar10 == 0) {
LAB_02926ef0:
      if (*pbVar17 < 8) goto LAB_02926f68;
LAB_02926efc:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02926f60:
        pbVar17 = PTR_DAT_04bb5038;
        goto LAB_02926f68;
      }
      lVar10 = **(long **)PTR_DAT_04bb27d0;
      bVar5 = *(byte *)(lVar10 + 0x473);
      pbVar17 = PTR_DAT_04bb5038;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar4 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar4 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar4 & 8) != 0) {
          pbVar17 = (byte *)(lVar10 + 0x471);
        }
      }
      local_8c[0] = *pbVar17;
      bVar7 = 7 < local_8c[0];
      if (bVar7) {
        local_8c[0] = 0xff;
      }
      if (bVar7) goto LAB_02926f60;
    }
    else {
      if (*(int *)(lVar10 + 0x15c) != 0) {
        pbVar17 = (byte *)(lVar10 + 0x158);
      }
      if (7 < *pbVar17) {
        if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02926ef0;
        }
        goto LAB_02926efc;
      }
LAB_02926f68:
      local_8c[0] = *pbVar17;
      if (7 < local_8c[0]) {
        local_8c[0] = 0xff;
      }
    }
    lVar10 = *(long *)puVar2;
    psVar15 = (short *)(lVar10 + 0x4068);
    if (*psVar15 == 0) {
      local_a8 = *(undefined **)(lVar10 + 0x4060);
      if ((char)((ulong)local_a8 >> 0x20) < '\x05') {
        lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
        local_88 = (undefined *)(lVar10 + -0x15180);
        local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
      }
      uVar6 = local_a8;
      psVar15 = (short *)&local_a8;
      local_a8._7_1_ = SUB81(uVar6,7);
      local_a8._0_7_ = (uint7)CONCAT24(5,(undefined4)local_a8);
    }
    local_98 = *(undefined8 *)psVar15;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    pcStack_80 = "SpnJuneBrideTalkEventFrag";
    local_88 = puVar2;
    iVar8 = FUN_0274bce0(local_8c,&local_88);
    if (iVar8 == 0) {
      pcStack_a0 = "JuneBride";
      local_a8 = puVar2;
      uVar9 = FUN_0087c200(*(undefined8 *)PTR_DAT_04bb32f0,&local_a8,&local_98,1);
      uVar9 = uVar9 ^ 1;
    }
    else {
      uVar9 = 1;
    }
    pcStack_80 = "JuneBrideCeremonyDemoAfterNow";
    local_88 = puVar2;
    iVar8 = FUN_02743000(&local_88);
    if (((uVar9 & 1) != 0) && (iVar8 == 0)) goto LAB_02927054;
  }
  else {
LAB_02927054:
    uVar12 = FUN_016d1770(&local_78,0);
    if (((uVar12 & 1) == 0) && (uVar12 = FUN_00a8117c(&local_38), (uVar12 & 1) == 0)) {
      uVar16 = cVar18 <= cVar3;
      goto joined_r0x029270a0;
    }
  }
  uVar16 = 1;
joined_r0x029270a0:
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar13 + 0x1bf260) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x1bf260) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  return uVar16;
}

