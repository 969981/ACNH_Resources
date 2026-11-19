
undefined8 FUN_0387d784(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)&DAT_05ae6930);
  if (((DAT_05ae6958 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae6958), iVar1 != 0)) {
    DAT_05ae6950 = *(long **)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x50) + 0x20);
    __cxa_guard_release(&DAT_05ae6958);
  }
  uVar2 = (**(code **)(*DAT_05ae6950 + 0x30))(DAT_05ae6950,param_1,0x80);
  nn::os::UnlockMutex((MutexType *)&DAT_05ae6930);
  return uVar2;
}

