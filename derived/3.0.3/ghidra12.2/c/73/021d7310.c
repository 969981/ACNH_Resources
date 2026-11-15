
void FUN_021d7310(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte local_64 [4];
  undefined *local_60;
  char *pcStack_58;
  
  local_64[0] = *param_2;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  uVar3 = FUN_02669430(local_64);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_021d74d0(param_1,param_2);
  }
  else {
    uVar4 = FUN_021d7030(param_1,param_2);
  }
  puVar2 = PTR_DAT_04bb2020;
  uVar3 = uVar3 & 1;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "Friendship";
  local_60 = puVar1;
  uVar5 = FUN_02746f80(param_1,uVar4,&local_60,uVar3);
  if (uVar5 < 0x1e) {
    uVar6 = 1;
  }
  else if (uVar5 < 0x3c) {
    uVar6 = 2;
  }
  else if (uVar5 < 100) {
    uVar6 = 3;
  }
  else if (uVar5 < 0x96) {
    uVar6 = 4;
  }
  else {
    uVar6 = 5;
    if (199 < uVar5) {
      uVar6 = 6;
    }
  }
  FUN_021d7650(param_1,uVar4,param_3,uVar3);
  pcStack_58 = "Friendship";
  local_60 = puVar1;
  uVar3 = FUN_02746f80(param_1,uVar4,&local_60,uVar3);
  if (uVar3 < 0x1e) {
    uVar5 = 1;
  }
  else if (uVar3 < 0x3c) {
    uVar5 = 2;
  }
  else if (uVar3 < 100) {
    uVar5 = 3;
  }
  else if (uVar3 < 0x96) {
    uVar5 = 4;
  }
  else {
    uVar5 = 5;
    if (199 < uVar3) {
      uVar5 = 6;
    }
  }
  if ((uVar6 < 3) && (2 < uVar5)) {
    local_60 = puVar2 + 0x10;
    pcStack_58 = "BeFriendwithVillager";
    FUN_0279a9f0(param_2,&local_60,1);
  }
  return;
}

