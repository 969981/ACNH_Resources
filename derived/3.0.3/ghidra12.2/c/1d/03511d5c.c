
void FUN_03511d5c(long param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = (undefined4 *)(param_1 + 0x57660);
  *puVar1 = 0xffffffff;
  pcStack_48 = "NeedNoticeHouseDesign";
  local_50 = puVar2 + 0x10;
  iVar3 = FUN_02758850(&local_50);
  if (iVar3 != 0) {
    pcStack_58 = "NoticeAboutMyHomeParts";
    local_60 = puVar2 + 0x10;
    iVar3 = FUN_02758850(&local_60);
    if (iVar3 == 0) {
      pcStack_48 = "NoticeAboutMyHomeParts";
      local_50 = puVar2 + 0x10;
      FUN_02758bb8(&local_50,1);
      pcStack_48 = "FirstHouseAppearanceUI";
      local_50 = puVar2 + 0x10;
      iVar3 = FUN_02758850(&local_50);
      if (iVar3 != 0) {
        *puVar1 = 0;
        return;
      }
    }
  }
  pcStack_48 = "CompleteNoticeChangeHouseForm";
  local_50 = puVar2 + 0x10;
  iVar3 = FUN_0274bce0(param_1 + 0x1f8,&local_50);
  if (iVar3 != 0) {
    pcStack_58 = "NoticeAboutHouseShape";
    local_60 = puVar2 + 0x10;
    iVar3 = FUN_02758850(&local_60);
    if (iVar3 == 0) {
      pcStack_48 = "NoticeAboutHouseShape";
      local_50 = puVar2 + 0x10;
      FUN_02758bb8(&local_50,1);
      pcStack_48 = "FirstHouseAppearanceUI";
      local_50 = puVar2 + 0x10;
      iVar3 = FUN_02758850(&local_50);
      if (iVar3 != 0) {
        *puVar1 = 1;
        return;
      }
    }
  }
  local_50 = puVar2 + 0x10;
  pcStack_48 = "FirstHouseAppearanceUI";
  FUN_02758bb8(&local_50,1);
  return;
}

