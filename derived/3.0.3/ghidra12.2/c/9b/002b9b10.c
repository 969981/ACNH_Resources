
void FUN_002b9b10(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_34 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  FUN_002a8864(&local_44,*(undefined8 *)(param_2 + 0x48),param_3);
  FUN_00229780(&local_34,&local_44);
  FUN_002a8864(&local_44,*(undefined8 *)(param_2 + 0x50),param_3);
  FUN_00229780(&local_34,&local_44);
  local_44 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
  FUN_002296c4(param_1,&local_44);
  return;
}

