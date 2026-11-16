
void FUN_028d9484(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  int local_14;
  
  local_14 = FUN_0252d29c();
  puVar2 = PTR_DAT_04bb2020;
  if (local_14 != -1) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "GstQuestStartFlag";
    local_40 = puVar1;
    iVar3 = FUN_0274ce10(&local_14,&local_40);
    if (iVar3 != 0) {
      pcStack_48 = "GstQuestClearFlag";
      local_50 = puVar1;
      iVar3 = FUN_0274ce10(&local_14,&local_50);
      if (iVar3 == 0) {
        return;
      }
    }
  }
  puVar1 = puVar2 + 0x10;
  pcStack_38 = "GstQuestStartLandFlag";
  local_40 = puVar1;
  FUN_02743234(&local_40,0);
  iVar3 = FUN_0252d29c();
  local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar3);
  if (iVar3 != -1) {
    pcStack_38 = "GstQuestClearFlag";
    local_40 = puVar1;
    iVar3 = FUN_0274ce10(&local_50,&local_40);
    if (iVar3 != 0) {
      uVar4 = 1;
      goto LAB_028d955c;
    }
  }
  uVar4 = 0;
LAB_028d955c:
  pcStack_38 = "GstQuestClearFlag";
  local_40 = puVar2 + 0x10;
  FUN_02743234(&local_40,uVar4);
  return;
}

