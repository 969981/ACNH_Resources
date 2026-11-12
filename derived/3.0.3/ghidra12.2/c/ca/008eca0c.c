
undefined8 FUN_008eca0c(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_04ced798 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ced798), iVar1 != 0)) {
    DAT_04ced788 = '\0';
    DAT_04ced790 = (int *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_04ced790 == (int *)0x0) {
      if (((DAT_04ced7b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ced7b8), iVar1 != 0)) {
        DAT_04ced7a0 = 0x400000002;
        DAT_04ced7a8 = 0x800000006;
        DAT_04ced7b0 = 10;
        __cxa_guard_release(&DAT_04ced7b8);
      }
      DAT_04ced790 = (int *)&DAT_04ced7a0;
      DAT_04ced788 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_04ced798);
  }
  if (DAT_04ced788 == '\x01') {
    if (*DAT_04ced790 == param_1) {
      return 0;
    }
    if (DAT_04ced790[1] == param_1) {
      return 1;
    }
    if (DAT_04ced790[2] == param_1) {
      return 2;
    }
    if (DAT_04ced790[3] == param_1) {
      return 3;
    }
    if (DAT_04ced790[4] == param_1) {
      return 4;
    }
  }
  return 0xffffffff;
}

