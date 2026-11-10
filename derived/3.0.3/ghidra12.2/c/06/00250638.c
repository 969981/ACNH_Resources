
void FUN_00250638(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  undefined4 local_d8;
  ErrorResultVariant aEStack_d4 [12];
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  ErrorResultVariant aEStack_b4 [128];
  undefined4 local_34;
  
  uVar1 = FUN_0021fea0(param_3);
  if (((uVar1 & 1) == 0) || (param_4 == 0)) {
    local_d8 = 0;
    local_b8 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_b4,(Result *)&local_d8);
    FUN_002296c4(param_1,&local_b8);
    return;
  }
  FUN_002b3fa8(&local_b8);
  FUN_002b44ec(&local_b8,param_3);
  FUN_002b455c(&local_b8,1);
  FUN_002b4504(&local_b8,param_5);
  (**(code **)(*param_2 + 0x48))(param_2,param_3,param_5,&local_c8,&local_bc);
  FUN_002b450c(&local_b8,local_bc);
  FUN_002b44fc(&local_b8,local_c8);
  FUN_002b40ac(param_4,&local_b8);
  local_d8 = 0;
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_d4,(Result *)&local_34);
  FUN_002296c4(param_1,&local_d8);
  FUN_002b4104(&local_b8);
  return;
}

