
undefined8 FUN_021d7160(undefined4 param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
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
    uVar3 = FUN_02746f80(param_1,iVar1,&local_40,uVar2 & 1);
  }
  return uVar3;
}

