
undefined8 FUN_01653d08(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_05231090 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05231090), iVar1 != 0)) {
    DAT_05231080 = '\0';
    DAT_05231088 = (int *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_05231088 == (int *)0x0) {
      if (((DAT_052310b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052310b0), iVar1 != 0)) {
        DAT_05231098 = 0x100000000;
        DAT_052310a0 = 0x200000001;
        DAT_052310a8 = 3;
        __cxa_guard_release(&DAT_052310b0);
      }
      DAT_05231088 = (int *)&DAT_05231098;
      DAT_05231080 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_05231090);
  }
  if (DAT_05231080 == '\x01') {
    if (*DAT_05231088 == param_1) {
      return 0;
    }
    if (DAT_05231088[1] == param_1) {
      return 1;
    }
    if (DAT_05231088[2] == param_1) {
      return 2;
    }
    if (DAT_05231088[3] == param_1) {
      return 3;
    }
    if (DAT_05231088[4] == param_1) {
      return 4;
    }
  }
  return 0xffffffff;
}

