
void FUN_025d85a0(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x1c);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "BuyKabuNum";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar1;
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)*param_2);
    pcStack_38 = "BuyPrice";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)param_2[1]);
      local_40 = puVar2 + 0x10;
      pcStack_38 = "BuyMoney";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)param_2[2]);
      }
    }
  }
  return;
}

