
uint FUN_001941f0(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4,
                 long param_5,int param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  size_t sVar2;
  long local_d8;
  undefined **local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined2 local_9f;
  undefined **local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_67;
  
  local_90 = 1;
  local_8c = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = DAT_04be21f8;
  local_98 = &PTR_FUN_048393d8;
  local_88 = FUN_00196a4c(&local_98);
  local_67 = 0;
  sVar2 = strlen(param_3);
  FUN_00193030(&local_98,param_3,sVar2,0xffffffffffffffff);
  local_c8 = 1;
  local_c4 = 0;
  local_d0 = &PTR_FUN_048393d8;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = DAT_04be21f8;
  local_c0 = FUN_00196a4c(&local_d0);
  local_9f = 0;
  if ((param_5 != 0) && (param_6 != 0)) {
    local_d8 = param_5;
    FUN_00193030(&local_d0,&local_d8,8,0xffffffffffffffff);
  }
  uVar1 = FUN_00193dd4(param_1,param_2,&local_98,param_4,&local_d0,param_6,param_7,param_8);
  FUN_00196ce0(&local_d0);
  FUN_00196ce0(&local_98);
  return uVar1 & 1;
}

