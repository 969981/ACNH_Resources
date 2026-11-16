
void FUN_025ed888(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x3f);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "FashionTheme";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*param_2);
    pcStack_38 = "Evaluation";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)param_2[1]);
    }
  }
  pcStack_38 = "KotonoQuestCount";
  local_40 = puVar2 + 0x10;
  iVar3 = FUN_02602860(param_1,&local_40);
  pcStack_38 = "KotonoFriendship";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar2 + 0x10;
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)iVar3);
  }
  return;
}

