
void FUN_002c4bb8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_34 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  FUN_002269b8(&local_44,param_2 + 8);
  FUN_00229780(&local_34,&local_44);
  if (local_34 == 0) {
    FUN_00226918(&local_44,param_2 + 8,2,2,0x11);
    FUN_00229780(&local_34,&local_44);
    if (local_34 == 0) {
      uVar1 = FUN_002c4880(param_2);
      if ((uVar1 & 1) == 0) {
        local_44 = 0x10c08;
      }
      else {
        local_44 = 0;
      }
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(param_1,&local_44);
      return;
    }
  }
  FUN_002296c4(param_1,&local_34);
  return;
}

