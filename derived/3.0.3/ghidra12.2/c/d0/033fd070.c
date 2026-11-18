
ulong FUN_033fd070(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "FriendListMainSwitch";
  local_40 = puVar1;
  uVar4 = FUN_0274bce0(param_1,&local_40);
  if ((int)uVar4 != 0) {
    pcStack_38 = "FriendListNotifyUpdate";
    local_40 = puVar1;
    iVar3 = FUN_0274bce0(param_1,&local_40);
    if (iVar3 == 0) {
      local_40 = puVar2 + 0x10;
      pcStack_38 = "FriendListNotifyLook";
      iVar3 = FUN_0274bce0(param_1,&local_40);
      uVar4 = (ulong)(iVar3 != 0);
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}

