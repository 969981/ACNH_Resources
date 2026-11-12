
undefined8 FUN_007e0214(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_04cb3158 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cb3158), iVar1 != 0)) {
    DAT_04cb3148 = '\0';
    DAT_04cb3150 = (int *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_04cb3150 == (int *)0x0) {
      if (((DAT_04cb3168 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cb3168), iVar1 != 0)) {
        DAT_04cb3160 = 0x900000005;
        __cxa_guard_release(&DAT_04cb3168);
      }
      DAT_04cb3150 = (int *)&DAT_04cb3160;
      DAT_04cb3148 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_04cb3158);
  }
  if (DAT_04cb3148 == '\x01') {
    if (*DAT_04cb3150 == param_1) {
      return 0;
    }
    if (DAT_04cb3150[1] == param_1) {
      return 1;
    }
  }
  return 0xffffffff;
}

