
undefined8 FUN_03a4ec30(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_05aea608 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea608), iVar1 != 0)) {
    DAT_05aea5f8 = '\0';
    DAT_05aea600 = (int *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_05aea600 == (int *)0x0) {
      if (((DAT_05aea618 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea618), iVar1 != 0)) {
        DAT_05aea610 = 0x590000005a;
        __cxa_guard_release(&DAT_05aea618);
      }
      DAT_05aea600 = (int *)&DAT_05aea610;
      DAT_05aea5f8 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_05aea608);
  }
  if (DAT_05aea5f8 == '\x01') {
    if (*DAT_05aea600 == param_1) {
      return 0;
    }
    if (DAT_05aea600[1] == param_1) {
      return 1;
    }
  }
  return 0xffffffff;
}

