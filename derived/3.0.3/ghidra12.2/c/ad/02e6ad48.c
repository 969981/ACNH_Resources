
void FUN_02e6ad48(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  local_28 = DAT_05586008;
  local_68 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_64 = DAT_0558600c;
  local_60 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_5c = DAT_0558600c;
  local_58 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_54 = DAT_0558600c;
  local_50 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_4c = DAT_0558600c;
  local_48 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_44 = DAT_0558600c;
  local_40 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_3c = DAT_0558600c;
  local_38 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_34 = DAT_0558600c;
  local_30 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_2c = DAT_0558600c;
  local_26 = DAT_0558600a;
  local_25 = DAT_0558600b;
  local_24 = DAT_0558600c;
  FUN_016d3390(&local_68,*(undefined4 *)(param_2 + 0x9209c));
  *param_1 = 0xfffe;
  FUN_0277d4ac(param_1);
  switch(param_3) {
  case 0:
    local_70._0_4_ = local_68;
    local_70._4_4_ = local_64;
    break;
  case 1:
    local_70._0_4_ = local_60;
    local_70._4_4_ = local_5c;
    break;
  case 2:
    local_70._0_4_ = local_58;
    local_70._4_4_ = local_54;
    break;
  case 3:
  case 4:
    local_70._0_4_ = local_50;
    local_70._4_4_ = local_4c;
    break;
  case 5:
    local_70._0_4_ = local_48;
    local_70._4_4_ = local_44;
    break;
  case 6:
    local_70._0_4_ = local_40;
    local_70._4_4_ = local_3c;
    break;
  case 7:
    local_70._0_4_ = local_38;
    local_70._4_4_ = local_34;
    break;
  case 8:
    local_70._0_4_ = local_30;
    local_70._4_4_ = local_2c;
    break;
  default:
    local_70 = 0xfffe;
    FUN_0277d4ac(&local_70);
  }
  *(undefined4 *)param_1 = (undefined4)local_70;
  *(undefined4 *)((long)param_1 + 4) = local_70._4_4_;
  return;
}

