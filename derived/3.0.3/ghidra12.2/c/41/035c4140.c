
void FUN_035c4140(long *param_1,long param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  pMVar1 = (MutexType *)(param_2 + 0x680);
  param_1[1] = 0;
  nn::os::LockMutex(pMVar1);
  while( true ) {
    lVar7 = *(long *)(param_2 + 0x610);
    lVar5 = *(long *)(param_2 + 0x618);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)param_1[1];
    *param_1 = lVar7;
    param_1[1] = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
      lVar7 = *param_1;
    }
    if ((lVar7 != 0) || (*(char *)(param_2 + 0x6c8) != '\0')) break;
    nn::os::WaitConditionVariable((ConditionVariableType *)(param_2 + 0x6b0),pMVar1);
  }
  nn::os::UnlockMutex(pMVar1);
  if (lVar7 == 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    return;
  }
  return;
}

