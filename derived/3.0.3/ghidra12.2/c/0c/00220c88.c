
undefined8 FUN_00220c88(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined1 auStack_24 [16];
  undefined4 local_14;
  
  iVar2 = FUN_002205f0(*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x90),0);
  if (iVar2 == 1) {
    iVar2 = FUN_002205f0(*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x90),1);
  }
  puVar1 = PTR_LAB_04bccf98;
  if (iVar2 == 0) {
    *(char **)(param_1 + 0x40) = "MonitoringDataSendJob::StepSendReport";
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 6;
  }
  local_14 = 0;
  local_34 = 0x6c1b;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_14);
  FUN_002296c4(auStack_24,&local_34);
  FUN_00220ff8(param_1 + 0x58,auStack_24);
  return 1;
}

