
byte FUN_029270d0(void)

{
  undefined *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  undefined *local_148;
  char *pcStack_140;
  undefined *local_138;
  char *pcStack_130;
  undefined *local_128;
  char *pcStack_120;
  undefined *local_118;
  char *pcStack_110;
  undefined *local_108;
  char *pcStack_100;
  undefined *local_f8;
  char *pcStack_f0;
  undefined *local_e8;
  char *pcStack_e0;
  undefined *local_d8;
  char *pcStack_d0;
  undefined *local_c8;
  char *pcStack_c0;
  undefined *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined *local_70;
  char *pcStack_68;
  byte local_44 [4];
  
  puVar5 = PTR_DAT_04bb2020;
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar9 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_02927144:
    if (*pbVar9 < 8) goto LAB_029271bc;
LAB_02927150:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_029271b4:
      pbVar9 = PTR_DAT_04bb5038;
      goto LAB_029271bc;
    }
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar10 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar9 = (byte *)(lVar10 + 0x471);
      }
    }
    local_44[0] = *pbVar9;
    if (7 < local_44[0]) goto LAB_029271b4;
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02927144;
      }
      goto LAB_02927150;
    }
LAB_029271bc:
    local_44[0] = *pbVar9;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "ReserveCommuneExpansion";
  local_70 = puVar1;
  iVar7 = FUN_0274bce0(local_44,&local_70);
  if (iVar7 != 0) {
    return 0;
  }
  pcStack_68 = "PooTalkFirstToday";
  local_70 = puVar1;
  iVar7 = FUN_0274bce0(local_44,&local_70);
  if (iVar7 != 0) {
    return 0;
  }
  pcStack_68 = "poo";
  local_70 = puVar5 + 0x10;
  uVar8 = FUN_016d1770(&local_70,0);
  if ((uVar8 & 1) != 0) {
    FUN_0252d11c(&local_98);
    pcStack_68 = "ReserveCommuneExpansion";
    local_70 = puVar5 + 0x10;
    iVar7 = FUN_0274bce0(&local_98,&local_70);
    if (iVar7 != 0) {
      local_70 = puVar5 + 0x10;
      pcStack_68 = "poo";
      FUN_016d3bec(&local_70,1);
    }
    local_70 = puVar5 + 0x10;
    local_88._0_4_ = (uint)local_88 & 0xffffff00;
    pcStack_68 = "poo";
    local_88 = (undefined *)CONCAT44(0xffffffff,(uint)local_88);
    uVar8 = FUN_016d0eb0(&local_88,&local_70,0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar8 = FUN_016d3964(&local_88);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (*(short *)PTR_DAT_04bc3a10 != 0) {
    puVar3 = (undefined8 *)PTR_DAT_04bc3a10;
  }
  local_78 = *puVar3;
  if (((uint)((ulong)local_78 >> 0x20) & 0xff) - 0x16 < 0xffffffef) {
    return 0;
  }
  uVar8 = FUN_00a8117c(&local_78);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  pcStack_68 = "PooTodayGetHairStyle";
  local_70 = puVar5 + 0x10;
  iVar7 = FUN_0274bce0(local_44,&local_70);
  if (iVar7 != 0) {
    return 1;
  }
  pcStack_68 = "CommuneSloDonation";
  local_70 = puVar5 + 0x10;
  iVar7 = FUN_0273ea30(&local_70);
  if (iVar7 == 2) {
    local_88 = puVar5 + 0x10;
    pcStack_80 = "PooGetNewHairStyle1";
    iVar7 = FUN_0274bce0(local_44,&local_88);
    if (iVar7 == 0) {
      bVar6 = false;
      goto LAB_02927540;
    }
  }
  puVar1 = puVar5 + 0x10;
  pcStack_90 = "CommuneCmlDonation";
  local_98 = puVar1;
  iVar7 = FUN_0273ea30(&local_98);
  if (iVar7 == 2) {
    pcStack_a0 = "PooGetNewHairStyle2";
    local_a8 = puVar1;
    iVar7 = FUN_0274bce0(local_44,&local_a8);
    if (iVar7 == 0) {
      bVar6 = false;
      goto LAB_02927540;
    }
  }
  pcStack_b0 = "CommuneFoxDonation";
  local_b8 = puVar1;
  iVar7 = FUN_0273ea30(&local_b8);
  if (iVar7 == 2) {
    local_c8 = puVar5 + 0x10;
    pcStack_c0 = "PooGetNewHairStyle3";
    iVar7 = FUN_0274bce0(local_44,&local_c8);
    if (iVar7 == 0) {
      bVar6 = false;
      goto LAB_02927540;
    }
  }
  puVar1 = puVar5 + 0x10;
  pcStack_d0 = "CommuneBptDonation";
  local_d8 = puVar1;
  iVar7 = FUN_0273ea30(&local_d8);
  if (iVar7 == 2) {
    pcStack_e0 = "PooGetNewHairStyle4";
    local_e8 = puVar1;
    iVar7 = FUN_0274bce0(local_44,&local_e8);
    if (iVar7 == 0) {
      bVar6 = false;
      goto LAB_02927540;
    }
  }
  pcStack_f0 = "CommuneSkkDonation";
  local_f8 = puVar1;
  iVar7 = FUN_0273ea30(&local_f8);
  if (iVar7 == 2) {
    local_108 = puVar5 + 0x10;
    pcStack_100 = "PooGetNewHairStyle5";
    iVar7 = FUN_0274bce0(local_44,&local_108);
    if (iVar7 == 0) {
      bVar6 = false;
      goto LAB_02927540;
    }
  }
  puVar1 = puVar5 + 0x10;
  pcStack_110 = "CommuneAlpDonation";
  local_118 = puVar1;
  iVar7 = FUN_0273ea30(&local_118);
  if (iVar7 == 2) {
    pcStack_120 = "PooGetNewHairStyle6";
    local_128 = puVar1;
    iVar7 = FUN_0274bce0(local_44,&local_128);
    if (iVar7 == 0) {
      bVar6 = false;
      goto LAB_02927540;
    }
  }
  pcStack_130 = "CommuneTtlDonation";
  local_138 = puVar1;
  iVar7 = FUN_0273ea30(&local_138);
  if (iVar7 == 2) {
    local_148 = puVar5 + 0x10;
    pcStack_140 = "PooGetNewHairStyle7";
    iVar7 = FUN_0274bce0(local_44,&local_148);
    bVar6 = iVar7 != 0;
  }
  else {
    bVar6 = true;
  }
LAB_02927540:
  return bVar6 ^ 1;
}

