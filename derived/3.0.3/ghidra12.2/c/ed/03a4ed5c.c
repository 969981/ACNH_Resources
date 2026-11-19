
undefined8 FUN_03a4ed5c(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_05aea630 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea630), iVar1 != 0)) {
    DAT_05aea620 = '\0';
    DAT_05aea628 = (int *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_05aea628 == (int *)0x0) {
      if (((DAT_05aea648 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea648), iVar1 != 0)) {
        DAT_05aea638 = 0x1900000026;
        DAT_05aea640 = 0xa00000015;
        __cxa_guard_release(&DAT_05aea648);
      }
      DAT_05aea628 = (int *)&DAT_05aea638;
      DAT_05aea620 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_05aea630);
  }
  if (DAT_05aea620 == '\x01') {
    if (*DAT_05aea628 == param_1) {
      return 0;
    }
    if (DAT_05aea628[1] == param_1) {
      return 1;
    }
    if (DAT_05aea628[2] == param_1) {
      return 2;
    }
    if (DAT_05aea628[3] == param_1) {
      return 3;
    }
  }
  return 0xffffffff;
}

