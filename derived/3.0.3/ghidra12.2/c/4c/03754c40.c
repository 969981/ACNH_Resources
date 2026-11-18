
void FUN_03754c40(undefined4 param_1)

{
  undefined *puVar1;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020;
  switch(param_1) {
  case 0:
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "CompleteAppearanceSchool";
    FUN_02758bb8(&local_30,1);
    pcStack_28 = "Unlock_NPC_03";
    break;
  case 1:
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "CompleteAppearanceHospital";
    FUN_02758bb8(&local_30,1);
    pcStack_28 = "Unlock_NPC_06";
    break;
  case 2:
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "CompleteAppearanceRestaurant";
    FUN_02758bb8(&local_30,1);
    pcStack_28 = "Unlock_NPC_04";
    break;
  case 3:
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "CompleteAppearanceCafe";
    FUN_02758bb8(&local_30,1);
    pcStack_28 = "Unlock_NPC_05";
    break;
  case 4:
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "CompleteAppearanceTailor";
    FUN_02758bb8(&local_30,1);
    pcStack_28 = "Unlock_NPC_07";
    break;
  default:
    goto switchD_03754c74_default;
  }
  local_30 = puVar1 + 0x10;
  FUN_02758bb8(&local_30,1);
switchD_03754c74_default:
  return;
}

