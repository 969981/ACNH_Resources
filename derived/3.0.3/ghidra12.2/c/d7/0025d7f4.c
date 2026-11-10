
void FUN_0025d7f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (*(int *)(*(long *)(param_2 + 0x68) + 0x47c) == 2) {
    *(undefined8 *)(param_2 + 0x58) = param_3;
    FUN_00220f24(param_3);
    FUN_00220f78(*(undefined8 *)(param_2 + 0x58));
    local_30 = 0;
    *(undefined **)(param_2 + 0x30) = PTR_FUN_04bcd6a8;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalDisconnectNetworkJob::TryPrepareDisconnectNetwork";
  }
  else {
    local_30 = 0x10c08;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

