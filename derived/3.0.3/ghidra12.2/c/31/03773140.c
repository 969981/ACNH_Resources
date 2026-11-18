
uint FUN_03773140(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CompleteAppearanceHospital";
  local_40 = puVar1;
  iVar3 = FUN_02758850(&local_40);
  if (iVar3 == 0) {
    pcStack_38 = "Unlock_ShareHouse";
    local_40 = puVar1;
    iVar3 = FUN_02758850(&local_40);
    if (iVar3 == 0) {
      puVar1 = puVar2 + 0x10;
      pcStack_38 = "CompleteAppearanceRestaurant";
      local_40 = puVar1;
      iVar3 = FUN_02758850(&local_40);
      if (iVar3 == 0) {
        pcStack_48 = "CompleteAppearanceCafe";
        local_50 = puVar1;
        iVar3 = FUN_02758850(&local_50);
        if (iVar3 == 0) {
          puVar2 = puVar2 + 0x10;
          pcStack_38 = "CompleteAppearanceSchool";
          local_40 = puVar2;
          iVar3 = FUN_02758850(&local_40);
          if (iVar3 != 0) {
            return 5;
          }
          pcStack_38 = "NewBuildCount";
          local_40 = puVar2;
          iVar3 = FUN_02758850(&local_40);
          uVar4 = iVar3 + (param_1 & 1);
          if (uVar4 < 4) {
            return uVar4;
          }
          uVar5 = 4;
          if (2 < uVar4 - 4) {
            uVar5 = 5;
          }
          return uVar5;
        }
      }
      uVar4 = 6;
    }
    else {
      uVar4 = 7;
    }
  }
  else {
    uVar4 = 8;
  }
  return uVar4;
}

