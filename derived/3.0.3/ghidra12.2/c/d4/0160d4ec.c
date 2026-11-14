
void FUN_0160d4ec(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bb2110 + 0x10);
  nn::os::LockMutex((MutexType *)(plVar1 + 0x4d));
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x290);
  nn::os::UnlockMutex((MutexType *)(plVar1 + 0x4d));
  return;
}

