
void FUN_006e8184(int *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  int local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  
  local_58 = *param_1;
  if (local_58 == 3) {
    FUN_00699ea4(param_2,"search_type","pickup");
    pcVar1 = "pickup_type";
    pcVar2 = "unique";
  }
  else {
    if (local_58 != 2) {
      if (local_58 == 1) {
        FUN_00699ea4(param_2,"search_type","id_search");
        FUN_006d8678(&local_58,&DAT_040b36c4,*(undefined8 *)(param_1 + 2));
        (**(code **)(CONCAT44(uStack_54,local_58) + 0x18))(&local_58);
        FUN_00699ea4(param_2,"resort_planner_id",local_50);
      }
      return;
    }
    FUN_00699ea4(param_2,"search_type","pickup");
    FUN_00699ea4(param_2,"pickup_type","common");
    if ((char)param_1[6] == '\0') {
      pcVar2 = (char *)(param_1 + 4);
      pcVar1 = "language";
    }
    else {
      pcVar1 = "language";
      pcVar2 = &DAT_040ec6a5;
    }
  }
  FUN_00699ea4(param_2,pcVar1,pcVar2);
  return;
}

