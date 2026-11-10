
void FUN_0023de1c(undefined8 param_1,long param_2,long param_3,int param_4,long param_5,int param_6)

{
  undefined4 local_e4;
  ErrorResultVariant aEStack_e0 [12];
  undefined4 local_d4;
  ErrorResultVariant aEStack_d0 [172];
  undefined4 local_24;
  
  if ((((param_6 == 0x10) && (param_3 != 0)) && (param_4 == 0x10)) && (param_5 != 0)) {
    if (*(int *)(param_2 + 0x13a4) != 0) {
      FUN_00222150(&local_d4,param_2 + 0x13a8,0x10,1);
      FUN_00222540(&local_d4,param_5,0x10,param_3,0x10);
      local_e4 = 0;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_e0,(Result *)&local_24);
      FUN_002296c4(param_1,&local_e4);
      FUN_00222140(&local_d4);
      return;
    }
    local_d4 = 0x10c08;
  }
  else {
    local_d4 = 0x10c07;
  }
  local_e4 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_d0,(Result *)&local_e4);
  FUN_002296c4(param_1,&local_d4);
  return;
}

