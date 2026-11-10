
void FUN_002928b8(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_44 = 0;
    local_34 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  }
  else {
    (**(code **)(*param_2 + 0x38))(&local_34,param_2,param_4);
    if (local_34 == 0) {
      param_2[0xb] = param_3;
      FUN_00220f78(param_3);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_44 = 0;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(param_1,&local_44);
      return;
    }
  }
  FUN_002296c4(param_1,&local_34);
  return;
}

