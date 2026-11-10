
void FUN_00220bcc(undefined8 param_1,long *param_2,long param_3,undefined1 param_4)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (param_3 == 0) {
    local_34 = 0x10c07;
  }
  else if ((int)param_2[0xb] == 1) {
    local_34 = 0x10c08;
  }
  else {
    param_2[0x11] = param_3;
    *(undefined1 *)(param_2 + 0x12) = param_4;
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[6] = (long)PTR_FUN_04bccf90;
    param_2[7] = 0;
    param_2[8] = (long)"MonitoringDataSendJob::StepMakeReport";
    FUN_00220f78(param_2 + 0xb);
    local_34 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

