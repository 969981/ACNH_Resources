
void FUN_00250c64(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  *(undefined8 *)(param_2 + 0x58) = param_3;
  FUN_00220f24(param_3);
  FUN_00220f78(*(undefined8 *)(param_2 + 0x58));
  if (param_4 == 0) {
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitHostMigrationEnd";
    puVar2 = PTR_FUN_04bcd758;
  }
  else {
    if (param_4 != 1) goto LAB_00250cc8;
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitDisconnected";
    puVar2 = PTR_FUN_04bcd750;
  }
  *(undefined **)(param_2 + 0x30) = puVar2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = pcVar1;
LAB_00250cc8:
  local_34 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

