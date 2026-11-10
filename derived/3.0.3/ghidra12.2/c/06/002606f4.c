
void FUN_002606f4(undefined8 param_1,long *param_2)

{
  undefined4 in_w4;
  long lVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  int local_30 [4];
  undefined4 local_14;
  
  *(undefined4 *)(param_2 + 0xc) = in_w4;
  (**(code **)(*param_2 + 0x30))(local_30);
  if (local_30[0] == 0) {
    lVar1 = param_2[0xe];
    local_40 = 0;
    *(undefined4 *)(lVar1 + 0x4c) = 2;
    *(undefined1 *)(lVar1 + 0x89) = 0;
    local_14 = 0;
    param_2[6] = (long)FUN_0026079c;
    param_2[7] = 0;
    param_2[8] = (long)"ConnectStationJob::SendRelayConnectionRequest";
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(param_1,&local_40);
    return;
  }
  FUN_002296c4(param_1,local_30);
  return;
}

