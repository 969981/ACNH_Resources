
undefined1  [16] FUN_03771fd0(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  lVar3 = *(long *)PTR_DAT_04bb27f8;
  if (lVar3 != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "SeqFirstVistCustomerOngoing";
    local_30 = puVar1;
    iVar2 = FUN_02758850(&local_30);
    if (iVar2 != 0) {
      pcStack_38 = "SeqFirstVisitCustomerArrivalTalk";
      local_40 = puVar1;
      iVar2 = FUN_02758850(&local_40);
      if (iVar2 == 0) goto LAB_0377205c;
    }
    FUN_036e4924(lVar3);
  }
LAB_0377205c:
  return ZEXT816(0);
}

