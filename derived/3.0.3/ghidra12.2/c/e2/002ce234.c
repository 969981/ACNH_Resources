
undefined8 FUN_002ce234(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    lVar2 = FUN_002bd3f0();
    lVar1 = DAT_04c5fbb0;
    if (*(char *)(lVar2 + 3) == '\0') {
      plVar3 = (long *)FUN_00228380();
      *(long *)(param_1 + 0x60) = *(long *)(lVar1 + 0x30) + *plVar3 * 30000;
      FUN_002c1420(&local_30,DAT_04c611a0);
      FUN_00229780(param_1 + 0x68,&local_30);
      if (*(int *)(param_1 + 0x68) == 0) {
        *(undefined1 **)(param_1 + 0x30) = &LAB_002ce3a4;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexNatServerAddressResolveJob::StepRequestRelayServerSetting";
        return 6;
      }
    }
    else {
      local_14 = 0;
      local_30 = 0x6436;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
      FUN_00229780(param_1 + 0x68,&local_30);
    }
  }
  *(code **)(param_1 + 0x30) = FUN_002ce35c;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) =
       "NexNatServerAddressResolveJob::StepWaitMonitoringServerAddressResolution";
  return 6;
}

