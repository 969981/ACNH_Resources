
undefined8 FUN_00737da8(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_04c92e50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92e50), iVar1 != 0)) {
    DAT_04c92e40 = '\0';
    DAT_04c92e48 = (int *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_04c92e48 == (int *)0x0) {
      if (((DAT_04c92e70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92e70), iVar1 != 0)) {
        DAT_04c92e58 = 0x100000000;
        DAT_04c92e60 = 0x300000002;
        DAT_04c92e68 = 0x500000004;
        __cxa_guard_release(&DAT_04c92e70);
      }
      DAT_04c92e48 = (int *)&DAT_04c92e58;
      DAT_04c92e40 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_04c92e50);
  }
  if (DAT_04c92e40 == '\x01') {
    if (*DAT_04c92e48 == param_1) {
      return 0;
    }
    if (DAT_04c92e48[1] == param_1) {
      return 1;
    }
    if (DAT_04c92e48[2] == param_1) {
      return 2;
    }
    if (DAT_04c92e48[3] == param_1) {
      return 3;
    }
    if (DAT_04c92e48[4] == param_1) {
      return 4;
    }
    if (DAT_04c92e48[5] == param_1) {
      return 5;
    }
  }
  return 0xffffffff;
}

