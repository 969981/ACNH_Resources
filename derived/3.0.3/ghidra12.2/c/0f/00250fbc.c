
void FUN_00250fbc(undefined8 param_1,long param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  *(undefined8 *)(param_2 + 0x58) = param_3;
  FUN_00220f24(param_3);
  FUN_00220f78(*(undefined8 *)(param_2 + 0x58));
  puVar1 = PTR_FUN_04bcd768;
  uVar2 = 2;
  if ((param_4 & 1) == 0) {
    uVar2 = 3;
  }
  *(byte *)(param_2 + 0x68) = param_4;
  local_34 = 0;
  local_24 = 0;
  *(undefined4 *)(*(long *)(param_2 + 0x78) + 0x420) = uVar2;
  *(undefined **)(param_2 + 0x30) = puVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "LocalHostMigrationJob::DisconnectNetwork";
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

