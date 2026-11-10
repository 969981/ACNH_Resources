
int FUN_001954e8(long *param_1,long param_2)

{
  int iVar1;
  undefined **local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined2 local_27;
  
  if (param_2 == 0) {
    return 3;
  }
  local_50 = 1;
  local_4c = 0;
  local_30 = 0;
  local_28 = 0;
  local_58 = &PTR_FUN_048393d8;
  local_40 = 0;
  uStack_38 = DAT_04be21f8;
  local_48 = FUN_00196a4c(&local_58);
  local_27 = 0;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (iVar1 == 0) {
    FUN_00193c08(param_2,&local_58);
  }
  FUN_00196ce0(&local_58);
  return iVar1;
}

