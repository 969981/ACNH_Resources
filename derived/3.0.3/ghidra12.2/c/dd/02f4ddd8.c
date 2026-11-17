
undefined8 FUN_02f4ddd8(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_056c49d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c49d8), iVar1 != 0)) {
    DAT_056c49c8 = '\0';
    DAT_056c49d0 = (int *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_056c49d0 == (int *)0x0) {
      if (((DAT_056c49f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056c49f0), iVar1 != 0)) {
        DAT_056c49e0 = 0x100000000;
        DAT_056c49e8 = 2;
        __cxa_guard_release(&DAT_056c49f0);
      }
      DAT_056c49d0 = (int *)&DAT_056c49e0;
      DAT_056c49c8 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_056c49d8);
  }
  if (DAT_056c49c8 == '\x01') {
    if (*DAT_056c49d0 == param_1) {
      return 0;
    }
    if (DAT_056c49d0[1] == param_1) {
      return 1;
    }
    if (DAT_056c49d0[2] == param_1) {
      return 2;
    }
  }
  return 0xffffffff;
}

