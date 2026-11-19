
void FUN_038cba40(ulong param_1)

{
  ulong *puVar1;
  MutexType *pMVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = DAT_05ae7790;
  if (DAT_05ae7790 == 0) {
    return;
  }
  if (*(long *)(DAT_05ae7790 + 0x60) != 0) {
    puVar1 = (ulong *)(*(long *)(DAT_05ae7790 + 0x60) + 0xb0);
    do {
      while (*puVar1 != param_1) {
        if ((*puVar1 & 0xfffffffffffffffe) != param_1) goto LAB_038cbab0;
        nn::os::ConvertToTimeSpan(DAT_05ae75b0);
        nn::os::SleepThread();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_038cbab0:
  pMVar2 = (MutexType *)(lVar5 + 0x40);
LAB_038cbad4:
  nn::os::LockMutex(pMVar2);
  lVar6 = *(long *)(lVar5 + 0x10);
  do {
    if (lVar6 == lVar5 + 8) {
      nn::os::UnlockMutex(pMVar2);
      return;
    }
    puVar1 = (ulong *)(*(long *)(lVar6 + 0x10) + 0xb0);
    do {
      if (*puVar1 != param_1) {
        if ((*puVar1 & 0xfffffffffffffffe) == param_1) {
          nn::os::UnlockMutex(pMVar2);
          nn::os::ConvertToTimeSpan(DAT_05ae75b0);
          nn::os::SleepThread();
          goto LAB_038cbad4;
        }
        break;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(lVar6 + 8);
  } while( true );
}

