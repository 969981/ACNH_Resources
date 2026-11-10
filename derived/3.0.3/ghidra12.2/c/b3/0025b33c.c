
undefined4 FUN_0025b33c(long param_1)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2e8));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x310) + 0x48))();
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2e8));
  return uVar1;
}

