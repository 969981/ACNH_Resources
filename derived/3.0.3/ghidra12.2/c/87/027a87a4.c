
void FUN_027a87a4(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*param_2 == 0) {
    return;
  }
  if (*param_2 == 1) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "TalkCountToday";
    iVar2 = FUN_02746e10(param_1 + 0x38,&local_40);
    if (iVar2 != 0) goto LAB_027a8814;
  }
  local_40 = puVar1 + 0x10;
  pcStack_38 = "ContinuousTalkDays";
  FUN_02747170(param_1 + 0x38,&local_40,0);
LAB_027a8814:
  param_1 = param_1 + 0x38;
  puVar1 = puVar1 + 0x10;
  pcStack_38 = "TalkCountToday";
  local_40 = puVar1;
  FUN_02747170(param_1,&local_40,0);
  pcStack_38 = "BromideRewardSkipCount";
  local_40 = puVar1;
  iVar2 = FUN_02746e10(param_1,&local_40);
  if (iVar2 != 0) {
    pcStack_38 = "BromideRewardSkipCount";
    local_40 = puVar1;
    FUN_027475c0(param_1,&local_40,0xffffffff);
  }
  return;
}

