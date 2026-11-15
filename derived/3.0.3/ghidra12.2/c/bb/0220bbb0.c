
void FUN_0220bbb0(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  undefined *local_30;
  char *pcStack_28;
  byte local_4 [4];
  
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar5 == 0) {
LAB_0220bc20:
    if (7 < *pbVar4) {
LAB_0220bc2c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar5 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar5 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar4 = (byte *)(lVar5 + 0x471);
          }
        }
        local_4[0] = *pbVar4;
        if (local_4[0] < 8) goto LAB_0220bcac;
      }
      pbVar4 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar5 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(lVar5 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar4 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0220bc20;
      }
      goto LAB_0220bc2c;
    }
  }
  local_4[0] = *pbVar4;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_0220bcac:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "ReserveTradeRemakeBonus";
  local_30 = puVar1;
  FUN_0274bfe8(local_4,&local_30,0);
  pcStack_28 = "ReserveTotalTradeBonus";
  local_30 = puVar1;
  FUN_0274bfe8(local_4,&local_30,0);
  pcStack_28 = "ReserveTradeRemakeBonusMultiPlay";
  local_30 = puVar1;
  FUN_0274bfe8(local_4,&local_30,0);
  pcStack_28 = "ReserveTotalTradeBonusMultiPlay";
  local_30 = puVar1;
  FUN_0274bfe8(local_4,&local_30,0);
  pcStack_28 = "ReserveTradeBonusTicketNum";
  local_30 = puVar1;
  FUN_0274bfe8(local_4,&local_30,0);
  return;
}

