
undefined8 FUN_03f3fdc0(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  
  puVar5 = PTR_DAT_04bdf140;
  nn::os::LockMutex((MutexType *)(PTR_DAT_04bdf140 + 0x20));
  piVar1 = (int *)(param_1 + 0x90);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar6 = *(uint *)(param_1 + 0xc);
  if ((((uVar6 >> 0x13 & 1) != 0) && (*piVar1 == 1)) &&
     ((*(byte *)(DAT_05b05848 + 8) >> 2 & 1) != 0)) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar6 = *(uint *)(param_1 + 0xc) & 0xfff7ffff;
    *(uint *)(param_1 + 0xc) = uVar6;
  }
  if (*piVar1 != 0) goto switchD_03f3fe7c_caseD_b;
  if ((uVar6 >> 0x11 & 1) == 0) {
switchD_03f3fe7c_caseD_9:
    lVar7 = *(long *)(param_1 + 0x80);
    if (lVar7 != 0) {
      pMVar2 = (MutexType *)(puVar5 + 0x20);
      nn::os::LockMutex(pMVar2);
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        plVar8 = (long *)(lVar7 + 0x10);
        lVar7 = FUN_03f3be90(plVar8,*plVar8,param_1 + 0x2b0);
        *plVar8 = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) = 1;
        }
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
      }
      nn::os::UnlockMutex(pMVar2);
      goto LAB_03f3fed0;
    }
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 9:
    case 0xc:
    case 0xf:
      goto switchD_03f3fe7c_caseD_9;
    case 10:
    case 0xd:
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
      if (*(int *)(param_1 + 0x10) != 0xf) goto switchD_03f3fe7c_caseD_b;
      if (*(long *)(param_1 + 0x80) != 0) {
        FUN_03f3bb08(*(long *)(param_1 + 0x80),param_1);
      }
      break;
    default:
      goto switchD_03f3fe7c_caseD_b;
    }
LAB_03f3fed0:
    uVar6 = *(uint *)(param_1 + 0xc);
  }
  *(uint *)(param_1 + 0xc) = uVar6 & 0xfffdffff;
switchD_03f3fe7c_caseD_b:
  nn::os::UnlockMutex((MutexType *)(puVar5 + 0x20));
  return 1;
}

