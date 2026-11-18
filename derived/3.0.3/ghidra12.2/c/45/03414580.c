
void FUN_03414580(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_048fc9b0;
  *(undefined8 *)(param_1 + 8) = 0;
  switch(*param_2) {
  case 1:
  case 5:
  case 6:
  case 7:
  case 8:
    FUN_03413de0(&local_48,param_2 + 1);
    *param_1 = local_48;
    *(undefined1 *)(param_1 + 4) = local_38;
    *(undefined2 *)(param_1 + 1) = local_44;
    param_1[2] = local_40;
    param_1[3] = uStack_3c;
    param_1[8] = local_28;
    param_1[9] = uStack_24;
    break;
  case 4:
  case 9:
    param_1[2] = 0;
    *param_1 = 0x10101;
    *(undefined2 *)(param_1 + 1) = 1;
  }
  return;
}

