
void FUN_0026d320(undefined8 param_1,long param_2)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_34 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  FUN_002a7720(&local_44,param_2);
  FUN_00229780(&local_34,&local_44);
  if (local_34 == 0) {
    *(undefined4 *)(param_2 + 0xf8) = 0;
    *(undefined1 *)(param_2 + 0xf5) = 0xfd;
    local_44 = 0;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    FUN_002296c4(param_1,&local_44);
    return;
  }
  FUN_002296c4(param_1,&local_34);
  return;
}

