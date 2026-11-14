
undefined8 FUN_01668494(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_052319a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052319a8), iVar1 != 0)) {
    DAT_05231998 = '\0';
    DAT_052319a0 = (int *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_052319a0 == (int *)0x0) {
      if (((DAT_052319c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052319c0), iVar1 != 0)) {
        DAT_052319b0 = 0x100000000;
        DAT_052319b8 = 0x300000002;
        __cxa_guard_release(&DAT_052319c0);
      }
      DAT_052319a0 = (int *)&DAT_052319b0;
      DAT_05231998 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_052319a8);
  }
  if (DAT_05231998 == '\x01') {
    if (*DAT_052319a0 == param_1) {
      return 0;
    }
    if (DAT_052319a0[1] == param_1) {
      return 1;
    }
    if (DAT_052319a0[2] == param_1) {
      return 2;
    }
    if (DAT_052319a0[3] == param_1) {
      return 3;
    }
  }
  return 0xffffffff;
}

