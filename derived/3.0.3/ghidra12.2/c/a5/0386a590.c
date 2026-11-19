
void FUN_0386a590(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  MutexType *pMVar6;
  void *__ptr;
  long lVar7;
  
  *param_1 = &PTR_FUN_04b5fda0;
  puVar3 = PTR_DAT_04bb49e0;
  *(undefined4 *)(param_1 + 0x18) = 8;
  lVar7 = *(long *)puVar3;
  pMVar6 = (MutexType *)(lVar7 + 0x540);
  nn::os::LockMutex(pMVar6);
  lVar5 = *(long *)(lVar7 + 0x510);
  if (lVar5 != lVar7 + 0x508) {
    do {
      if (lVar5 == (long)*(int *)(lVar7 + 0x51c) + (long)param_1) {
        nn::os::UnlockMutex(pMVar6);
        lVar5 = *(long *)puVar3;
        pMVar6 = (MutexType *)(lVar5 + 0x540);
        nn::os::LockMutex(pMVar6);
        plVar4 = (long *)((long)*(int *)(lVar5 + 0x51c) + (long)param_1);
        if (*plVar4 != 0) {
          *(long *)(*plVar4 + 8) = plVar4[1];
        }
        if ((long *)plVar4[1] != (long *)0x0) {
          *(long *)plVar4[1] = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(lVar5 + 0x518) = *(int *)(lVar5 + 0x518) + -1;
        break;
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != lVar7 + 0x508);
  }
  nn::os::UnlockMutex(pMVar6);
  lVar7 = *(long *)puVar3;
  pMVar6 = (MutexType *)(lVar7 + 0x540);
  nn::os::LockMutex(pMVar6);
  lVar5 = *(long *)(lVar7 + 0x4f8);
  if (lVar5 != lVar7 + 0x4f0) {
    do {
      if (lVar5 == (long)*(int *)(lVar7 + 0x504) + (long)param_1) {
        nn::os::UnlockMutex(pMVar6);
        lVar5 = *(long *)puVar3;
        pMVar6 = (MutexType *)(lVar5 + 0x540);
        nn::os::LockMutex(pMVar6);
        plVar4 = (long *)((long)*(int *)(lVar5 + 0x504) + (long)param_1);
        if (*plVar4 != 0) {
          *(long *)(*plVar4 + 8) = plVar4[1];
        }
        if ((long *)plVar4[1] != (long *)0x0) {
          *(long *)plVar4[1] = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(lVar5 + 0x500) = *(int *)(lVar5 + 0x500) + -1;
        break;
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != lVar7 + 0x4f0);
  }
  nn::os::UnlockMutex(pMVar6);
  pMVar6 = (MutexType *)(param_1 + 0x1e);
  nn::os::LockMutex(pMVar6);
  puVar1 = param_1 + 8;
  if ((undefined8 *)param_1[9] != puVar1) {
    lVar7 = (long)*(int *)((long)param_1 + 0x54);
    lVar5 = (long)param_1[9] - lVar7;
    do {
      FUN_03868b80(lVar5);
      lVar5 = *(long *)(lVar5 + lVar7 + 8) - lVar7;
    } while (lVar5 != (long)puVar1 - (long)*(int *)((long)param_1 + 0x54));
  }
  nn::os::UnlockMutex(pMVar6);
  nn::os::LockMutex(pMVar6);
  iVar2 = *(int *)(param_1 + 10);
  while (iVar2 != 0) {
    if (0 < iVar2) {
      plVar4 = (long *)*puVar1;
      if (*plVar4 != 0) {
        *(long *)(*plVar4 + 8) = plVar4[1];
      }
      if ((long *)plVar4[1] != (long *)0x0) {
        *(long *)plVar4[1] = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      iVar2 = *(int *)(param_1 + 10) + -1;
      *(int *)(param_1 + 10) = iVar2;
      if ((plVar4 != (long *)0x0) &&
         (plVar4 = (long *)((long)plVar4 - (long)*(int *)((long)param_1 + 0x54)),
         plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x18))();
        iVar2 = *(int *)(param_1 + 10);
      }
    }
  }
  nn::os::UnlockMutex(pMVar6);
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x20))();
    param_1[0x17] = 0;
  }
  FUN_038e1a84(param_1 + 0x1a);
  if (*(char *)((long)param_1 + 0xb6) != '\0') {
    (**(code **)(param_1[0x14] + 0x18))(param_1 + 0x14);
    __ptr = (void *)param_1[0x15];
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0xb6) = 0;
  }
  lVar5 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

