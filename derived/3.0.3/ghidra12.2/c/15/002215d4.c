
void FUN_002215d4(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 local_70 [4];
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [28];
  
  if ((param_4 == 0) || (param_5 == 0)) {
    local_60 = 0x10c07;
  }
  else if ((int)param_2[0xb] == 1) {
    local_60 = 0x10c08;
  }
  else {
    FUN_00227930(&local_60);
    FUN_00227af0(local_70,param_2 + 0x12,&local_60);
    param_2[0x11] = param_4;
    param_2[0x96] = param_5;
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[6] = DAT_04bccfa8;
    param_2[7] = 0;
    param_2[8] = (long)"MonitoringServerAddressResolveJob::StepResolveMonitoringServerAddress";
    FUN_00220f78(param_2 + 0xb);
    local_60 = 0;
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)local_70);
  FUN_002296c4(param_1,&local_60);
  return;
}

