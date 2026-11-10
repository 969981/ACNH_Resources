
void FUN_00193d10(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4)

{
  size_t sVar1;
  undefined **local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_37;
  
  local_60 = 1;
  local_5c = 0;
  local_40 = 0;
  local_38 = 0;
  local_68 = &PTR_FUN_048393d8;
  local_50 = 0;
  uStack_48 = DAT_04be21f8;
  local_58 = FUN_00196a4c(&local_68);
  local_37 = 0;
  sVar1 = strlen(param_3);
  FUN_00193030(&local_68,param_3,sVar1,0xffffffffffffffff);
  FUN_00193b00(param_1,param_2,&local_68,param_4);
  FUN_00196ce0(&local_68);
  return;
}

