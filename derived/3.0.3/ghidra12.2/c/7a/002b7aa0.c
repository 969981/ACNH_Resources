
void FUN_002b7aa0(undefined8 param_1,long param_2)

{
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if ((*(long *)(param_2 + 0x18) == 0) || (*(long *)(param_2 + 0x20) == 0)) {
    local_40 = 0;
    local_30 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_40);
    FUN_002296c4(param_1,&local_30);
    return;
  }
  local_30 = 0;
  local_40 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_40);
  FUN_002bbef0(&local_40,*(undefined8 *)(param_2 + 0x18));
  FUN_00229780(&local_30,&local_40);
  FUN_002bbef0(&local_40,*(undefined8 *)(param_2 + 0x20));
  FUN_00229780(&local_30,&local_40);
  local_40 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_40);
  return;
}

