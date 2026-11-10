
void FUN_0024be7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  int *piVar3;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar3 = &local_50;
  uVar1 = param_4[1];
  local_40 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x290) = *param_4;
  *(undefined8 *)(param_2 + 0x298) = uVar1;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  FUN_0024b004(&local_50,param_2);
  FUN_00229780(&local_40,&local_50);
  if (local_40 == 0) {
    FUN_0024e644(&local_50,param_2,param_3,7);
    FUN_00229780(&local_40,&local_50);
    puVar2 = PTR_LAB_04bcd4e8;
    if (local_40 == 0) {
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "LdnBackgroundProcessJob::ScanNetworkPrivate";
      local_50 = 0;
      *(undefined **)(param_2 + 0x30) = puVar2;
    }
    else {
      local_50 = 0x10c08;
    }
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
  }
  else {
    piVar3 = &local_40;
  }
  FUN_002296c4(param_1,piVar3);
  return;
}

