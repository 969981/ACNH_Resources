
void FUN_00291468(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_3 == 0) || (param_5 == 0)) {
LAB_00291490:
    local_34 = 0x10c07;
  }
  else {
    if (param_4 != 0) {
      if (param_2[0xb] == 0) {
        (**(code **)(*param_2 + 0x38))(&local_34,param_2,param_4,param_5);
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
        goto LAB_002914c0;
      }
      goto LAB_00291490;
    }
    local_34 = 0x10c08;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
LAB_002914c0:
  FUN_002296c4(param_1,&local_34);
  return;
}

