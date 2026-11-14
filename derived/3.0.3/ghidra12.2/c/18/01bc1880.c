
void FUN_01bc1880(long param_1,int *param_2)

{
  MutexType *pMVar1;
  void *__ptr;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x5c);
  lVar4 = param_1 + 0x48;
  do {
    lVar4 = *(long *)(lVar4 + 8);
    if (lVar4 == param_1 + 0x48) {
      lVar4 = 0;
      break;
    }
  } while (*(int *)(lVar4 + -(long)iVar2 + 0x10) != *param_2);
  nn::os::UnlockMutex(pMVar1);
  if ((lVar4 != 0) && (__ptr = (void *)(lVar4 + -(long)iVar2), __ptr != (void *)0x0)) {
    plVar3 = (long *)((long)__ptr + (long)*(int *)(param_1 + 0x5c));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    *(undefined1 *)(param_2 + 1) = 0;
    while (0 < *(int *)((long)__ptr + 0x28)) {
      plVar3 = *(long **)((long)__ptr + 0x20);
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)((long)__ptr + 0x28) = *(int *)((long)__ptr + 0x28) + -1;
      if ((plVar3 == (long *)0x0) ||
         (plVar3 = (long *)((long)plVar3 - (long)*(int *)((long)__ptr + 0x2c)),
         plVar3 == (long *)0x0)) break;
      (**(code **)(*plVar3 + 0x18))();
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

