
byte FUN_0220bd60(ulong param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint *puVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  byte local_78 [4];
  byte local_74 [4];
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bb39b0;
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_0220bde8:
    if (*pbVar14 < 8) goto LAB_0220be60;
LAB_0220bdf4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0220be58:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_0220be60;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar15 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar4 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar4 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar4 & 8) != 0) {
        pbVar14 = (byte *)(lVar15 + 0x471);
      }
    }
    local_78[0] = *pbVar14;
    if (7 < local_78[0]) goto LAB_0220be58;
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0220bde8;
      }
      goto LAB_0220bdf4;
    }
LAB_0220be60:
    local_78[0] = *pbVar14;
    if (7 < local_78[0]) {
      return 0;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "ReserveTotalTradeBonus";
  local_70 = puVar1;
  iVar7 = FUN_0274bce0(local_78,&local_70);
  pcStack_68 = "ReserveTradeRemakeBonus";
  local_70 = puVar1;
  iVar8 = FUN_0274bce0(local_78,&local_70);
  pcStack_68 = "ReserveTotalTradeBonusMultiPlay";
  local_70 = puVar1;
  iVar9 = FUN_0274bce0(local_78,&local_70);
  pcStack_68 = "ReserveTradeRemakeBonusMultiPlay";
  local_70 = puVar1;
  iVar10 = FUN_0274bce0(local_78,&local_70);
  pcStack_68 = "ReserveTradeBonusTicketNum";
  local_70 = puVar1;
  iVar11 = FUN_0274bce0(local_78,&local_70);
  bVar6 = iVar10 != 0 || iVar9 != 0;
  if ((param_1 & 1) == 0) {
    bVar6 = (iVar8 != 0 || iVar7 != 0) || (iVar10 != 0 || iVar9 != 0);
  }
  uVar13 = FUN_0220c1b0();
  pcStack_68 = "ReserveFirstTradeBonus";
  local_70 = puVar1;
  iVar12 = FUN_0274bce0(local_78,&local_70);
  pbVar14 = PTR_DAT_04bb32e0;
  if (((iVar8 == 0 && iVar7 == 0) && (iVar10 == 0 && iVar9 == 0)) || (iVar11 != 0)) {
    if (((iVar8 != 0 || iVar7 != 0) || (iVar10 != 0 || iVar9 != 0)) || (iVar11 < 1)) {
      if ((uVar13 & 1) == 0) {
        bVar3 = false;
        if (0 < iVar11) {
          bVar3 = bVar6;
        }
        return bVar3 | iVar12 != 0 & (param_2 ^ 1);
      }
      if (iVar11 < 1) {
        return 1;
      }
      if (iVar10 == 0 && iVar9 == 0) {
        return 1;
      }
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "HighPriceTradeOrderBonusItemRecipeID";
      local_70 = puVar2;
      FUN_0274bfe8(local_78,&local_70,0x4c7b);
      pcStack_68 = "HighPriceTradeOrderBonusItemLapsedDays";
      local_70 = puVar2;
      FUN_0274bfe8(local_78,&local_70,0);
      pcStack_68 = "HighPriceTradeOrderBonusTicketNum";
      local_70 = puVar2;
      FUN_0274bfe8(local_78,&local_70,0);
      return 1;
    }
    lVar15 = *(long *)puVar2;
    if (lVar15 != 0) goto LAB_0220bf70;
LAB_0220bfd4:
    if (7 < *pbVar14) {
LAB_0220bfe0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar15 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar4 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar4 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar4 & 8) != 0) {
            pbVar14 = (byte *)(lVar15 + 0x471);
          }
        }
        local_74[0] = *pbVar14;
        if (local_74[0] < 8) goto LAB_0220c060;
      }
      pbVar14 = PTR_DAT_04bb5038;
    }
  }
  else {
    lVar15 = *(long *)puVar2;
    if (lVar15 == 0) goto LAB_0220bfd4;
LAB_0220bf70:
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0220bfd4;
      }
      goto LAB_0220bfe0;
    }
  }
  local_74[0] = *pbVar14;
  if (7 < local_74[0]) {
    local_74[0] = 0xff;
  }
LAB_0220c060:
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "ReserveTradeRemakeBonus";
  local_70 = puVar2;
  FUN_0274bfe8(local_74,&local_70,0);
  pcStack_68 = "ReserveTotalTradeBonus";
  local_70 = puVar2;
  FUN_0274bfe8(local_74,&local_70,0);
  pcStack_68 = "ReserveTradeRemakeBonusMultiPlay";
  local_70 = puVar2;
  FUN_0274bfe8(local_74,&local_70,0);
  pcStack_68 = "ReserveTotalTradeBonusMultiPlay";
  local_70 = puVar2;
  FUN_0274bfe8(local_74,&local_70,0);
  pcStack_68 = "ReserveTradeBonusTicketNum";
  local_70 = puVar2;
  FUN_0274bfe8(local_74,&local_70,0);
  return 0;
}

