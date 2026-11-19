
undefined4 FUN_03a4cd30(void)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (((DAT_05aea608 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea608), iVar1 != 0)) {
    DAT_05aea5f8 = '\0';
    DAT_05aea600 = (undefined8 *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_05aea600 == (undefined8 *)0x0) {
      if (((DAT_05aea618 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea618), iVar1 != 0)) {
        DAT_05aea610 = 0x590000005a;
        __cxa_guard_release(&DAT_05aea618);
      }
      DAT_05aea600 = &DAT_05aea610;
      DAT_05aea5f8 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_05aea608);
  }
  uVar3 = 2;
  if (DAT_05aea5f8 == '\0') {
    uVar3 = 0;
  }
  return uVar3;
}

