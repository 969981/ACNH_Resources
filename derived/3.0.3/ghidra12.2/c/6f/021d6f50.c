
undefined4 FUN_021d6f50(undefined4 param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  iVar1 = FUN_021d7030();
  if (iVar1 < 0) {
    uVar3 = 0;
  }
  else {
    local_14[0] = *param_2;
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "Friendship";
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
    uVar2 = FUN_02669430(local_14);
    uVar2 = FUN_02746f80(param_1,iVar1,&local_40,uVar2 & 1);
    if (uVar2 < 0x1e) {
      uVar3 = 1;
    }
    else if (uVar2 < 0x3c) {
      uVar3 = 2;
    }
    else if (uVar2 < 100) {
      uVar3 = 3;
    }
    else if (uVar2 < 0x96) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
      if (199 < uVar2) {
        uVar3 = 6;
      }
    }
  }
  return uVar3;
}

