
bool FUN_036e4924(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  byte local_44 [4];
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "SeqFirstVistCustomerOngoing";
  local_30 = puVar1;
  iVar3 = FUN_02758850(&local_30);
  if (iVar3 != 0) {
    pcStack_38 = "SeqFirstVisitCustomerArrivalTalk";
    local_40 = puVar1;
    iVar3 = FUN_02758850(&local_40);
    if (iVar3 == 0) {
      return true;
    }
  }
  FUN_0252d11c(local_44);
  if (7 < local_44[0]) {
    return false;
  }
  pcStack_28 = "WHEREAREN_CustomerTalkReserve_Garden";
  local_30 = puVar2 + 0x10;
  iVar3 = FUN_02753180(local_44,&local_30);
  if (iVar3 == 0) {
    pcStack_38 = "WHEREAREN_MncTalkReserve_Garden";
    local_40 = puVar2 + 0x10;
    iVar3 = FUN_02753180(local_44,&local_40);
    return iVar3 != 0;
  }
  return true;
}

