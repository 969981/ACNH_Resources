
void FUN_002c4684(undefined8 param_1,long param_2)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0xc) < 1) {
    local_44 = 0;
    local_34 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  }
  else {
    local_34 = 0;
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
    FUN_002269b8(&local_44,param_2 + 8);
    FUN_00229780(&local_34,&local_44);
    if (local_34 == 0) {
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

