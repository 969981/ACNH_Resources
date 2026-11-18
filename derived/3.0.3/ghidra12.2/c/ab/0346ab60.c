
void FUN_0346ab60(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  
  lVar2 = DAT_05ae62d0;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    pMVar1 = (MutexType *)(DAT_05ae62d0 + 0x540);
    nn::os::LockMutex(pMVar1);
    lVar4 = *(long *)(lVar2 + 0x510);
    if (lVar4 != lVar2 + 0x508) {
      do {
        if (lVar4 == *(int *)(lVar2 + 0x51c) + lVar5) {
          nn::os::UnlockMutex(pMVar1);
          FUN_0346b490(param_1);
          goto LAB_0346abe0;
        }
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != lVar2 + 0x508);
    }
    nn::os::UnlockMutex(pMVar1);
LAB_0346abe0:
    plVar3 = (long *)*param_1;
    *param_1 = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    __ptr = (void *)param_1[2];
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 1) = 0;
    }
  }
  if ((char)param_1[7] != '\0') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if ((char)param_1[5] != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  plVar3 = (long *)*param_1;
  *param_1 = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0346ac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))();
  return;
}

