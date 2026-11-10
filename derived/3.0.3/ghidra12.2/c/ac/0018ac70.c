
undefined8 FUN_0018ac70(undefined8 *param_1,long param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(param_1 + 1);
  iVar5 = *piVar1;
  if (iVar5 != *piVar1) {
    ClearExclusiveLocal();
LAB_0018ad04:
    do {
      iVar4 = *piVar1;
      if (iVar4 == iVar5) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_0018acac;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar5 = iVar4;
    } while( true );
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar3) {
    *piVar1 = *piVar1 + 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_0018ad04;
LAB_0018acac:
  if (param_3 == 0xffffffff) {
    nn::os::WaitConditionVariable((ConditionVariableType *)*param_1,(MutexType *)(param_2 + 0x10));
    iVar5 = *piVar1;
    iVar4 = *piVar1;
    if (iVar4 == iVar5) goto LAB_0018acdc;
  }
  else {
    nn::os::TimedWaitConditionVariable
              ((ConditionVariableType *)*param_1,(MutexType *)(param_2 + 0x10),
               (ulong)param_3 * 1000000);
    iVar5 = *piVar1;
    iVar4 = *piVar1;
    if (iVar4 == iVar5) {
LAB_0018acdc:
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return 1;
      }
      goto LAB_0018ad70;
    }
  }
  ClearExclusiveLocal();
LAB_0018ad70:
  do {
    iVar5 = *piVar1;
    if (iVar5 == iVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar4 = iVar5;
  } while( true );
}

