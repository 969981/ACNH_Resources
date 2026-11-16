
void FUN_025f0f88(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x6c);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "IsCommuneShop";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar1;
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,*param_2);
    pcStack_38 = "WeedNum";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)*(int *)(param_2 + 4));
      local_40 = puVar2 + 0x10;
      pcStack_38 = "Price";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)*(int *)(param_2 + 8));
      }
    }
  }
  return;
}

