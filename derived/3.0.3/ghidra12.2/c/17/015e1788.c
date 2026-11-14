
void FUN_015e1788(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  
  if (*(long **)(param_1 + 0x2e8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2e8) + 8))();
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  puVar1 = PTR_DAT_04bb2110;
  plVar2 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bb2110 + 0x10);
  nn::os::LockMutex((MutexType *)(plVar2 + 0x4d));
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x298);
  nn::os::UnlockMutex((MutexType *)(plVar2 + 0x4d));
  plVar2 = (long *)**(undefined8 **)(*(long *)puVar1 + 0x10);
  nn::os::LockMutex((MutexType *)(plVar2 + 0x4d));
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x4a0);
  nn::os::UnlockMutex((MutexType *)(plVar2 + 0x4d));
  __ptr = *(void **)(param_1 + 0x490);
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
    *(undefined8 *)(param_1 + 0x490) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0;
  }
  return;
}

