
ulong FUN_03773570(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_0252d11c(&uStack_11);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "WHEREAREN_MncTalkReserve_House";
  local_40 = puVar1;
  iVar3 = FUN_02753180(&uStack_11,&local_40);
  if (iVar3 != 0) {
    FUN_0252d11c(&uStack_12);
    pcStack_48 = "WHEREAREN_Unlock_DustCloth_01";
    local_50 = puVar1;
    uVar4 = FUN_0274bce0(&uStack_12,&local_50);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  FUN_0252d11c(&uStack_11);
  pcStack_38 = "WHEREAREN_MncTalkReserve_House";
  local_40 = puVar2 + 0x10;
  uVar4 = FUN_02753180(&uStack_11,&local_40);
  if ((int)uVar4 != 0) {
    FUN_0252d11c(&uStack_12);
    pcStack_48 = "WHEREAREN_Unlock_DustCloth_02";
    local_50 = puVar2 + 0x10;
    iVar3 = FUN_0274bce0(&uStack_12,&local_50);
    uVar4 = (ulong)(iVar3 == 0);
  }
  return uVar4;
}

