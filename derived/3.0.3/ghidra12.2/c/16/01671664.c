
void FUN_01671664(long param_1)

{
  long *plVar1;
  
  if (*(long **)(param_1 + 0x8f0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x8f0) + 8))();
    *(undefined8 *)(param_1 + 0x8f0) = 0;
  }
  plVar1 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bb2110 + 0x10);
  nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x8f8);
  nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  return;
}

