
void FUN_03773b40(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "SeqSchoolEditOngoing";
  local_40 = puVar1;
  iVar3 = FUN_02758850(&local_40);
  if (iVar3 == 0) {
    pcStack_38 = "SeqRestaurantEditOngoing";
    local_40 = puVar1;
    iVar3 = FUN_02758850(&local_40);
    if (iVar3 == 0) {
      puVar2 = puVar2 + 0x10;
      pcStack_38 = "SeqHospitalEditOngoing";
      local_40 = puVar2;
      iVar3 = FUN_02758850(&local_40);
      if (iVar3 == 0) {
        pcStack_38 = "SeqTailorEditOngoing";
        local_40 = puVar2;
        iVar3 = FUN_02758850(&local_40);
        if (iVar3 == 0) {
          return;
        }
        uVar4 = 4;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      local_40 = puVar2 + 0x10;
      pcStack_38 = "WhichBuildRestaurantCafe";
      iVar3 = FUN_02758850(&local_40);
      uVar4 = 2;
      if (iVar3 == 0) {
        uVar4 = 3;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  *param_1 = uVar4;
  return;
}

