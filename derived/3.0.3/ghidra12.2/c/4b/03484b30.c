
undefined8 FUN_03484b30(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "SeqFirstVistCustomerOngoing";
  local_30 = puVar1;
  iVar2 = FUN_02758850(&local_30);
  if (iVar2 != 0) {
    pcStack_28 = "WHEREAREN_ResortPlannerFromSmartphone";
    local_30 = puVar1;
    iVar2 = FUN_02753180(param_1,&local_30);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

