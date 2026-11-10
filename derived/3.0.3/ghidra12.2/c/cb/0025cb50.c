
void FUN_0025cb50(undefined8 param_1,long param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(int *)(*(long *)(param_2 + 0x88) + 0x47c) == 1) {
    *(undefined8 *)(param_2 + 0x58) = param_3;
    FUN_00220f24(param_3);
    FUN_00220f78(*(undefined8 *)(param_2 + 0x58));
    *(byte *)(param_2 + 0x80) = param_4 & 1;
    if ((param_4 & 1) != 0) {
      lVar1 = *(long *)(param_2 + 0x88);
      *(undefined4 *)(lVar1 + 0x420) = 1;
      *(undefined1 *)(lVar1 + 0x470) = 1;
    }
    local_40 = 0;
    *(undefined **)(param_2 + 0x30) = PTR_FUN_04bcd668;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalDestroyNetworkJob::TryPrepareDestroyNetwork";
  }
  else {
    local_40 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

