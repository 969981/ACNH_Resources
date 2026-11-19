
void FUN_0387d82c(undefined8 param_1)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)&DAT_05ae6930);
  if (((DAT_05ae6968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae6968), iVar1 != 0)) {
    DAT_05ae6960 = *(long **)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x50) + 0x20);
    __cxa_guard_release(&DAT_05ae6968);
  }
  (**(code **)(*DAT_05ae6960 + 0x38))(DAT_05ae6960,param_1);
  nn::os::UnlockMutex((MutexType *)&DAT_05ae6930);
  return;
}

