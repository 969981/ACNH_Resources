
void FUN_03be7370(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  long *plVar3;
  MutexType *pMVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x1880) == '\0') {
    return;
  }
  pMVar1 = (MutexType *)(param_1 + 0x30);
  nn::os::LockMutex(pMVar1);
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)(param_1 + 0x50)) {
    pMVar4 = (MutexType *)(plVar5 + -4);
    do {
      iVar2 = *(int *)(pMVar4 + 0x18);
      plVar6 = (long *)plVar5[1];
      *(int *)(pMVar4 + 0x18) = iVar2 + -1;
      if (iVar2 < 1) {
        lVar7 = *(long *)pMVar4;
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x20) == *(int *)(pMVar4 + 8))) {
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x10;
          if ((*(long *)(lVar7 + 0x28) != 0) && (*(long *)(lVar7 + 0x58) != 0)) {
            plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar7 + 0x28) + 0x30) +
                                                     0x18) + 0x20))();
            plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
            (**(code **)(*plVar3 + 0x10))();
            (**(code **)(**(long **)(lVar7 + 0x58) + 0x38))(*(long **)(lVar7 + 0x58),0xffffffff);
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
        *(undefined8 *)(pMVar4 + 0x10) = 0;
        if (*plVar5 != 0) {
          *(long *)(*plVar5 + 8) = plVar5[1];
        }
        if ((long *)plVar5[1] != (long *)0x0) {
          *(long *)plVar5[1] = *plVar5;
        }
        *plVar5 = 0;
        plVar5[1] = 0;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
        *(undefined8 *)pMVar4 = *(undefined8 *)(param_1 + 0x68);
        *(MutexType **)(param_1 + 0x68) = pMVar4;
      }
      pMVar4 = (MutexType *)(plVar6 + -4);
      plVar5 = plVar6;
    } while (pMVar4 != pMVar1);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

