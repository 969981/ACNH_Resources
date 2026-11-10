
void FUN_0024e1bc(undefined8 param_1,long param_2,long param_3)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (param_3 == 0) {
    local_44 = 0;
    local_34 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  }
  else {
    FUN_0021fb80(&local_34,param_2 + 8,param_3,6);
    if (local_34 == 0) {
      local_44 = 0;
      local_24 = 0;
      *(ushort *)(param_2 + 0x28) = *(ushort *)(param_3 + 6) >> 8 | *(ushort *)(param_3 + 6) << 8;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(param_1,&local_44);
      return;
    }
  }
  FUN_002296c4(param_1,&local_34);
  return;
}

