
void FUN_006e029c(undefined4 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  char *local_50;
  
  local_58 = *param_1;
  switch(local_58) {
  case 1:
    FUN_006d8678(&local_58,&DAT_040b36c4,*(undefined8 *)(param_1 + 2));
    (**(code **)(CONCAT44(uStack_54,local_58) + 0x18))(&local_58);
    pcVar2 = "design_id";
    break;
  case 2:
    FUN_006d8678(&local_58,&DAT_040b36c4,*(undefined8 *)(param_1 + 4));
    (**(code **)(CONCAT44(uStack_54,local_58) + 0x18))(&local_58);
    pcVar2 = "player_id";
    break;
  case 3:
    FUN_006d8678(&local_58,&DAT_040b36c4,*(undefined8 *)(param_1 + 4));
    (**(code **)(CONCAT44(uStack_54,local_58) + 0x18))(&local_58);
    FUN_00699ea4(param_2,"player_id",local_50);
    pcVar2 = "pro";
    local_50 = "false";
    if (*(char *)((long)param_1 + 0x62) != '\0') {
      local_50 = "true";
    }
    break;
  case 4:
    (**(code **)(*(long *)(param_1 + 6) + 0x18))(param_1 + 6);
    FUN_00699ea4(param_2,&DAT_040d7f5b,*(undefined8 *)(param_1 + 8));
    puVar1 = &DAT_040617ea;
    pcVar2 = "false";
    if (*(char *)((long)param_1 + 0x62) != '\0') {
      pcVar2 = "true";
    }
LAB_006e0448:
    FUN_00699ea4(param_2,puVar1,pcVar2);
    return;
  case 5:
    FUN_00699e44(param_2,&DAT_040ed9db,*(undefined2 *)(param_1 + 0x18));
    if (**(char **)(param_1 + 8) != '\0') {
      (**(code **)(*(long *)(param_1 + 6) + 0x18))(param_1 + 6);
      pcVar2 = *(char **)(param_1 + 8);
      puVar1 = &DAT_040d7f5b;
      goto LAB_006e0448;
    }
  default:
    goto switchD_006e02e0_default;
  }
  FUN_00699ea4(param_2,pcVar2,local_50);
switchD_006e02e0_default:
  return;
}

