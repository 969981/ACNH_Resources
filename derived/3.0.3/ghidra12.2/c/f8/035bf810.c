
void FUN_035bf810(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lStack_70;
  long lStack_68;
  
  if (*(char *)((long)param_1 + 0x3e) == *(char *)((long)param_1 + 0x3f)) {
    return;
  }
  pMVar1 = (MutexType *)(param_1 + 0xd0);
LAB_035bf858:
  do {
    nn::os::LockMutex(pMVar1);
    do {
      if (param_1[0xdd] == 0) {
        lVar12 = param_1[0xd9];
        if ((param_1[0xd7] == -1) || ((char)lVar12 != '\0')) {
          nn::os::UnlockMutex(pMVar1);
          if ((char)lVar12 == '\0') {
            lVar12 = 0;
            do {
              uVar4 = *(undefined2 *)((long)param_1 + 0x3c);
              plVar11 = (long *)param_1[lVar12 * 0x17 + 0x1e];
              param_1[lVar12 * 0x17 + 10] = 0;
              param_1[lVar12 * 0x17 + 0xb] = 0;
              *(undefined2 *)((long)param_1 + lVar12 * 0xb8 + 0x76) = uVar4;
              param_1[lVar12 * 0x17 + 0xc] = 0;
              param_1[lVar12 * 0x17 + 0xd] = 0;
              *(undefined8 *)((long)param_1 + lVar12 * 0xb8 + 0x6e) = 0;
              param_1[lVar12 * 0x17 + 0x1d] = 0;
              param_1[lVar12 * 0x17 + 0x1e] = 0;
              if (plVar11 != (long *)0x0) {
                plVar2 = plVar11 + 1;
                do {
                  lVar10 = *plVar2;
                  cVar5 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar7) {
                    *plVar2 = lVar10 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar10 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  std::__shared_weak_count::__release_weak();
                }
              }
              param_1[lVar12 * 0x17 + 0x19] = 0;
              param_1[lVar12 * 0x17 + 0x12] = 0;
              if ((void *)param_1[lVar12 * 0x17 + 0x1b] != (void *)0x0) {
                memset((void *)param_1[lVar12 * 0x17 + 0x1b],0,0x5a00);
              }
              lVar10 = lVar12 + 1;
              puVar3 = (undefined4 *)((long)param_1 + lVar12 * 0xb8 + 0xfc);
              *puVar3 = 0;
              *(undefined4 *)(param_1 + lVar12 * 0x17 + 0x20) = 0;
              *(undefined4 *)((long)param_1 + lVar12 * 0xb8 + 0x104) = 0;
              *puVar3 = 1;
              lVar12 = lVar10;
            } while (lVar10 != 8);
            *(char *)((long)param_1 + 0x3f) = *(char *)((long)param_1 + 0x3e);
            if (*(char *)((long)param_1 + 0x3e) != '\0') {
              bVar7 = (*(char *)(*param_1 + 0xd2) == '\x03' || *(char *)(*param_1 + 0xd5) != '\0')
                      && *(char *)((long)param_1 + 0x2a) != '\0';
              if (param_1[0xcb] == param_1[0xca]) {
                pMVar1 = (MutexType *)(param_1 + 0x12e);
                lVar12 = 0;
                do {
                  lVar10 = param_1[lVar12 * 0x17 + 10];
                  nn::os::LockMutex(pMVar1);
                  FUN_035c7980(&lStack_70,pMVar1,lVar10,lVar12 + 7);
                  lVar13 = lStack_68;
                  lVar10 = lStack_70;
                  nn::os::UnlockMutex(pMVar1);
                  param_1[lVar12 * 0x17 + 0x1d] = lVar10;
                  plVar11 = (long *)param_1[lVar12 * 0x17 + 0x1e];
                  param_1[lVar12 * 0x17 + 0x1e] = lVar13;
                  if (plVar11 != (long *)0x0) {
                    plVar2 = plVar11 + 1;
                    do {
                      lVar10 = *plVar2;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar6) {
                        *plVar2 = lVar10 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar10 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  lVar10 = param_1[lVar12 * 0x17 + 0x1d];
                  FUN_035bd500(*(undefined2 *)((long)param_1 + 0x3c),lVar10 + 0x40,lVar10 + 0x21c40,
                               bVar7);
                  lVar10 = lVar12 + 1;
                  *(undefined4 *)(param_1 + lVar12 * 0x17 + 0x20) = 1;
                  *(undefined4 *)((long)param_1 + lVar12 * 0xb8 + 0x104) = 1;
                  lVar12 = lVar10;
                } while (lVar10 != 8);
              }
              else {
                pMVar1 = (MutexType *)(param_1 + 0x12e);
                lVar10 = param_1[(ulong)((int)param_1[0xcb] - 1U & 7) * 0x17 + 0x1c];
                lVar12 = 0;
                do {
                  lVar13 = param_1[lVar12 * 0x17 + 10];
                  nn::os::LockMutex(pMVar1);
                  FUN_035c7980(&lStack_70,pMVar1,lVar13,lVar12 + 7);
                  lVar8 = lStack_68;
                  lVar13 = lStack_70;
                  nn::os::UnlockMutex(pMVar1);
                  param_1[lVar12 * 0x17 + 0x1d] = lVar13;
                  plVar11 = (long *)param_1[lVar12 * 0x17 + 0x1e];
                  param_1[lVar12 * 0x17 + 0x1e] = lVar8;
                  if (plVar11 != (long *)0x0) {
                    plVar2 = plVar11 + 1;
                    do {
                      lVar13 = *plVar2;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar6) {
                        *plVar2 = lVar13 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar13 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  lVar13 = param_1[lVar12 * 0x17 + 0x1d];
                  FUN_035bd700(lVar13 + 0x40,lVar13 + 0x21c40,lVar10,bVar7);
                  lVar13 = lVar12 + 1;
                  *(undefined4 *)((long)param_1 + lVar12 * 0xb8 + 0x104) = 1;
                  *(undefined4 *)(param_1 + lVar12 * 0x17 + 0x20) = 1;
                  lVar12 = lVar13;
                } while (lVar13 != 8);
              }
            }
            return;
          }
          goto LAB_035bf858;
        }
      }
      else if ((char)param_1[0xd9] != '\0') break;
      iVar9 = nn::os::TimedWaitConditionVariable(param_1 + 0xd6,pMVar1,1000000000);
    } while (iVar9 == 1);
    nn::os::UnlockMutex(pMVar1);
  } while( true );
}

