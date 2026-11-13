
undefined8 FUN_010d294c(undefined4 param_1)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  short *psVar10;
  undefined8 local_58;
  char *pcStack_50;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  undefined8 local_18;
  
  psVar10 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar10 == 0) {
    local_58 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_58 >> 0x20) < '\x05') {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_48 = (undefined *)(lVar6 + -0x15180);
      local_58 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    psVar10 = (short *)&local_58;
    uVar7 = (ulong)local_58 >> 0x30;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58 = (undefined *)(CONCAT26((short)uVar7,(undefined6)local_58) & 0xff00ffffffffffff);
  }
  puVar4 = PTR_DAT_04bb2020;
  local_18 = *(undefined8 *)psVar10;
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_010d2a20:
    if (*pbVar9 < 8) goto LAB_010d2a98;
LAB_010d2a2c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_010d2a90:
      pbVar9 = PTR_DAT_04bb5038;
      goto LAB_010d2a98;
    }
    lVar6 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar6 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar9 = (byte *)(lVar6 + 0x471);
      }
    }
    local_34[0] = *pbVar9;
    if (7 < local_34[0]) goto LAB_010d2a90;
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_010d2a20;
      }
      goto LAB_010d2a2c;
    }
LAB_010d2a98:
    local_34[0] = *pbVar9;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "JuneBride";
  local_48 = puVar1;
  uVar7 = FUN_0087c200(*(undefined8 *)PTR_DAT_04bb32f0,&local_48,&local_18,1);
  if ((uVar7 & 1) != 0) {
    pcStack_50 = "SpnJuneBrideTalkEventFrag";
    local_58 = puVar1;
    uVar8 = FUN_0274bce0(local_34,&local_58);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
  }
  pcStack_40 = "JuneBrideCeremonyDemoAfterNow";
  local_48 = puVar4 + 0x10;
  iVar5 = FUN_02743000(&local_48);
  if (iVar5 == 0) {
    pcStack_40 = "ReserveCommuneExpansion";
    local_48 = puVar4 + 0x10;
    iVar5 = FUN_0274bce0(local_34,&local_48);
    if (iVar5 == 0) {
      switch(param_1) {
      case 0:
        pcStack_40 = "slo";
        local_48 = puVar4 + 0x10;
        iVar5 = FUN_02926a20(&local_48);
        local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar5);
        if (iVar5 != 0) {
          return 0;
        }
        pcStack_40 = "ReserveCommuneSloOpenEvent";
        local_48 = puVar4 + 0x10;
        uVar7 = FUN_0273f0a0(&local_48);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        pcStack_50 = "DoneCommuneSloOpenEvent";
        break;
      case 1:
        pcStack_40 = "cml";
        local_48 = puVar4 + 0x10;
        iVar5 = FUN_02926a20(&local_48);
        local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar5);
        if (iVar5 != 0) {
          return 0;
        }
        pcStack_40 = "ReserveCommuneCmlOpenEvent";
        local_48 = puVar4 + 0x10;
        uVar7 = FUN_0273f0a0(&local_48);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        pcStack_50 = "DoneCommuneCmlOpenEvent";
        break;
      case 2:
        pcStack_40 = "fox";
        local_48 = puVar4 + 0x10;
        iVar5 = FUN_02926a20(&local_48);
        local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar5);
        if (iVar5 != 0) {
          return 0;
        }
        pcStack_40 = "ReserveCommuneFoxOpenEvent";
        local_48 = puVar4 + 0x10;
        uVar7 = FUN_0273f0a0(&local_48);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        pcStack_50 = "DoneCommuneFoxOpenEvent";
        break;
      case 3:
        pcStack_40 = "bpt";
        local_48 = puVar4 + 0x10;
        iVar5 = FUN_02926a20(&local_48);
        local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar5);
        if (iVar5 != 0) {
          return 0;
        }
        pcStack_40 = "ReserveCommuneBptOpenEvent";
        local_48 = puVar4 + 0x10;
        uVar7 = FUN_0273f0a0(&local_48);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        pcStack_50 = "DoneCommuneBptOpenEvent";
        break;
      case 4:
        pcStack_40 = "skk";
        local_48 = puVar4 + 0x10;
        iVar5 = FUN_02926a20(&local_48);
        local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar5);
        if (iVar5 != 0) {
          return 0;
        }
        pcStack_40 = "ReserveCommuneSkkOpenEvent";
        local_48 = puVar4 + 0x10;
        uVar7 = FUN_0273f0a0(&local_48);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        pcStack_50 = "DoneCommuneSkkOpenEvent";
        break;
      case 5:
        pcStack_40 = "alp";
        local_48 = puVar4 + 0x10;
        iVar5 = FUN_02926a20(&local_48);
        local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar5);
        if (iVar5 != 0) {
          return 0;
        }
        pcStack_40 = "ReserveCommuneAlpOpenEvent";
        local_48 = puVar4 + 0x10;
        uVar7 = FUN_0273f0a0(&local_48);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        pcStack_50 = "DoneCommuneAlpOpenEvent";
        break;
      case 6:
        pcStack_40 = "ttl";
        local_48 = puVar4 + 0x10;
        iVar5 = FUN_02926a20(&local_48);
        local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar5);
        if (iVar5 != 0) {
          return 0;
        }
        pcStack_40 = "ReserveCommuneTtlOpenEvent";
        local_48 = puVar4 + 0x10;
        uVar7 = FUN_0273f0a0(&local_48);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        pcStack_50 = "DoneCommuneTtlOpenEvent";
        break;
      default:
        goto switchD_010d2b74_default;
      }
      local_58 = puVar4 + 0x10;
      iVar5 = FUN_0274bce0(local_34,&local_58);
      if (iVar5 == 0) {
        return 1;
      }
    }
  }
switchD_010d2b74_default:
  return 0;
}

