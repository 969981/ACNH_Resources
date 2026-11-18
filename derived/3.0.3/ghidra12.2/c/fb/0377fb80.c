
bool FUN_0377fb80(undefined4 param_1)

{
  int iVar1;
  undefined *local_28;
  char *pcStack_20;
  undefined4 local_14;
  
  switch(param_1) {
  case 0:
    pcStack_20 = "CompleteAppearanceSchool";
    break;
  case 1:
    pcStack_20 = "CompleteAppearanceHospital";
    break;
  case 2:
    pcStack_20 = "CompleteAppearanceRestaurant";
    break;
  case 3:
    pcStack_20 = "CompleteAppearanceCafe";
    break;
  case 4:
    pcStack_20 = "CompleteAppearanceTailor";
    break;
  default:
    return false;
  }
  local_28 = PTR_DAT_04bb2020 + 0x10;
  local_14 = param_1;
  iVar1 = FUN_02758850(&local_28);
  return iVar1 != 0;
}

