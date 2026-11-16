
void FUN_025d74cc(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x1b);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "ShopKind";
  local_40 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)*param_2);
    pcStack_38 = "BuyMoney";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)param_2[1]);
      local_40 = puVar2 + 0x10;
      pcStack_38 = "ExchangeTicketNum";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)param_2[2]);
      }
    }
  }
  FUN_025d75d0(param_1,param_2);
  puVar2 = puVar2 + 0x10;
  pcStack_38 = "IsOnRegulationMoney";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar2;
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,(char)param_2[0x24]);
    pcStack_38 = "IsUseWherearenLoan";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar2;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,*(undefined1 *)((long)param_2 + 0x91));
    }
  }
  return;
}

