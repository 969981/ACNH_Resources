
void FUN_006d8574(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long local_58;
  long *local_50;
  
  iVar1 = *param_1;
  local_58 = CONCAT44(local_58._4_4_,iVar1);
  if (iVar1 == 3) {
    FUN_00699ea4(param_2,"search_type",&DAT_040d7f5b);
    (**(code **)(*(long *)(param_1 + 6) + 0x18))(param_1 + 6);
    FUN_00699ea4(param_2,"land_name",*(undefined8 *)(param_1 + 8));
    return;
  }
  if (iVar1 == 2) {
    FUN_00699ea4(param_2,"search_type","recommend");
    if ((char)param_1[4] == '\0') {
      return;
    }
    local_58 = nn::oe::GetDesiredLanguage();
    puVar2 = &DAT_040713cb;
    local_50 = &local_58;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    FUN_006d8678(&local_58,&DAT_040b36c4,*(undefined8 *)(param_1 + 2));
    (**(code **)(local_58 + 0x18))(&local_58);
    puVar2 = &DAT_040ae7f4;
  }
  FUN_00699ea4(param_2,puVar2,local_50);
  return;
}

