
void FUN_035bf030(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  pMVar1 = (MutexType *)(param_1 + 0x680);
LAB_035bf068:
  do {
    nn::os::LockMutex(pMVar1);
    do {
      if (*(long *)(param_1 + 0x6e8) == 0) {
        cVar3 = *(char *)(param_1 + 0x6c8);
        if ((*(long *)(param_1 + 0x6b8) == -1) || (cVar3 != '\0')) {
          nn::os::UnlockMutex(pMVar1);
          if (cVar3 == '\0') {
            nn::os::LockMutex(pMVar1);
            *(undefined1 *)(param_1 + 0x6c8) = 1;
            nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0x6a8));
            nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0x6b0));
            nn::os::UnlockMutex(pMVar1);
            FUN_04002c24(param_1 + 0x6f8);
            FUN_035becf0(param_1 + 0x50);
            FUN_035becf0(param_1 + 0x108);
            FUN_035becf0(param_1 + 0x1c0);
            FUN_035becf0(param_1 + 0x278);
            FUN_035becf0(param_1 + 0x330);
            FUN_035becf0(param_1 + 1000);
            FUN_035becf0(param_1 + 0x4a0);
            FUN_035becf0(param_1 + 0x558);
            plVar7 = *(long **)(param_1 + 0x48);
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            if (plVar7 != (long *)0x0) {
              plVar2 = plVar7 + 1;
              do {
                lVar6 = *plVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = lVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar7 = *(long **)(param_1 + 0x618);
            *(undefined8 *)(param_1 + 0x610) = 0;
            *(undefined8 *)(param_1 + 0x618) = 0;
            if (plVar7 != (long *)0x0) {
              plVar2 = plVar7 + 1;
              do {
                lVar6 = *plVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = lVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                std::__shared_weak_count::__release_weak();
              }
            }
            FUN_035c74d0(param_1 + 0x970);
            return;
          }
          goto LAB_035bf068;
        }
      }
      else if (*(char *)(param_1 + 0x6c8) != '\0') break;
      iVar5 = nn::os::TimedWaitConditionVariable
                        ((ConditionVariableType *)(param_1 + 0x6b0),pMVar1,1000000000);
    } while (iVar5 == 1);
    nn::os::UnlockMutex(pMVar1);
  } while( true );
}

