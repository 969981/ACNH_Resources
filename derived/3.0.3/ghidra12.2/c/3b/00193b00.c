
void FUN_00193b00(undefined8 param_1,long *param_2,undefined8 param_3,int param_4)

{
  undefined **local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  byte local_60;
  undefined2 local_5f;
  undefined1 auStack_58 [16];
  long local_48;
  undefined8 uStack_40;
  long local_30;
  
  FUN_00196bb8(auStack_58);
  uStack_70 = (**(code **)(*param_2 + 0x38))(param_2);
  uStack_70 = uStack_70 & 0xff;
  local_88 = 1;
  local_84 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_90 = &PTR_FUN_048393d8;
  local_80 = FUN_00196a4c(&local_90);
  local_5f = 0;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    local_78 = 0;
    local_68 = 0;
    local_5f = 0;
    local_60 = local_60 & 4;
    (**(code **)(*param_2 + 0x10))(param_2,auStack_58,&local_90);
    FUN_00193c08(auStack_58,&local_90);
  }
  FUN_0019c970(param_1,local_48 + local_30,uStack_40);
  FUN_00196ce0(&local_90);
  FUN_00196ce0(auStack_58);
  return;
}

