
undefined8 FUN_014d3f18(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_051ee048 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051ee048), iVar1 != 0)) {
    DAT_051ee038 = '\0';
    DAT_051ee040 = (int *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_051ee040 == (int *)0x0) {
      if (((DAT_051ee060 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051ee060), iVar1 != 0)) {
        DAT_051ee050 = 0xffffffff;
        DAT_051ee058 = 1;
        __cxa_guard_release(&DAT_051ee060);
      }
      DAT_051ee040 = (int *)&DAT_051ee050;
      DAT_051ee038 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_051ee048);
  }
  if (DAT_051ee038 == '\x01') {
    if (*DAT_051ee040 == param_1) {
      return 0;
    }
    if (DAT_051ee040[1] == param_1) {
      return 1;
    }
    if (DAT_051ee040[2] == param_1) {
      return 2;
    }
  }
  return 0xffffffff;
}

