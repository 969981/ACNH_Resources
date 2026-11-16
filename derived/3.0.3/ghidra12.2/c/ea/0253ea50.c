
void FUN_0253ea50(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "StandByPhoneCallPurchaseBox";
  local_30 = puVar1;
  FUN_0274bfe8(param_1,&local_30,0);
  pcStack_28 = "StandByPhoneCallPrintService";
  local_30 = puVar1;
  iVar2 = FUN_0274bce0(param_1,&local_30);
  if (iVar2 == 0) {
    pcStack_28 = "StandByGameStartPhoneCall";
    local_30 = puVar1;
    FUN_0274bfe8(param_1,&local_30,0);
  }
  return;
}

