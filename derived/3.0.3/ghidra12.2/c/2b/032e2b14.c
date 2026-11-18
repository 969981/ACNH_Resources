
void FUN_032e2b14(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  void *__ptr;
  
  param_1[0x13] = (long)(PTR_DAT_04bc9600 + 0x10);
  if ((long *)param_1[0x23] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x23] + 8))();
  }
  FUN_032e25f0(param_1 + 0x13);
  pMVar1 = (MutexType *)(param_1 + 0xc);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  nn::os::UnlockMutex(pMVar1);
  __ptr = (void *)param_1[0x10];
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    *(undefined4 *)(param_1 + 0x12) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  nn::os::UnlockMutex(pMVar1);
  FUN_038e1a84(param_1 + 8);
  FUN_038e1c80(param_1 + 2);
  param_1[1] = 0;
  if ((long *)*param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032e2c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}

