
undefined8 FUN_01cac654(undefined8 *param_1,long *param_2)

{
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_14;
  
  local_40 = 0;
  local_50 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  if (param_1[4] == 0) {
    return 1;
  }
  (**(code **)(*param_2 + 0x70))(&local_50,param_2,param_1[4],*(undefined4 *)(param_1 + 1));
  FUN_00229780(&local_40,&local_50);
  if (local_40 == 0) {
    (**(code **)(*param_2 + 0x60))
              (&local_50,param_2,param_1[4],*param_1,*(undefined4 *)(param_1 + 1));
    FUN_00229780(&local_40,&local_50);
  }
  else {
    local_60 = 0;
    local_50 = 0x2c27;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
    if (local_40 == local_50) {
      return 1;
    }
    local_14 = 0;
    local_60 = 0x2c0a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_14);
    if (local_40 == local_60) {
      return 1;
    }
  }
  if (local_40 == 0) {
    return 1;
  }
  local_60 = 0;
  local_50 = 0x4c0d;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  if (local_40 != local_50) {
    local_14 = 0;
    local_60 = 0x4c11;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_14);
    if (local_40 == local_60) {
      return 0;
    }
    local_60 = 0;
    local_50 = 0x2c27;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
    if (local_40 != local_50) {
      local_14 = 0;
      local_60 = 0x10c08;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_14);
      if (local_40 == local_60) {
        return 0;
      }
      FUN_01df2eb0(&local_50,0x2f,1);
      return 1;
    }
  }
  return 0;
}

