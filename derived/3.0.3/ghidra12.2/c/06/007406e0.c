
void FUN_007406e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x548));
  plVar2 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x18);
  for (plVar1 = *(long **)(*(long *)(param_1 + 0x1c0) + 8); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      FUN_006fb3d0();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x548));
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  plVar1 = *(long **)(param_1 + 0x168);
  if (plVar1 != (long *)(param_1 + 0x168)) {
    do {
      plVar1 = (long *)*plVar1;
    } while ((long)plVar1 - (long)*(int *)(param_1 + 0x17c) !=
             (param_1 + 0x168) - (long)*(int *)(param_1 + 0x17c));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return;
}

