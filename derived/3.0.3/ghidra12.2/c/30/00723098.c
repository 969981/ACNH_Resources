
undefined4 FUN_00723098(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_04c92e50 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04c92e50);
    if (iVar1 != 0) {
      DAT_04c92e40 = 0;
      DAT_04c92e48 = (undefined8 *)0x0;
      lVar2 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
      if (DAT_04c92e48 == (undefined8 *)0x0) {
        if (((DAT_04c92e70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92e70), iVar1 != 0)) {
          DAT_04c92e58 = 0x100000000;
          DAT_04c92e60 = 0x300000002;
          DAT_04c92e68 = 0x500000004;
          __cxa_guard_release(&DAT_04c92e70);
        }
        DAT_04c92e40 = 1;
        DAT_04c92e48 = &DAT_04c92e58;
      }
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
      __cxa_guard_release(&DAT_04c92e50);
    }
  }
  uVar3 = (ulong)*param_1;
  if ((DAT_04c92e40 & uVar3 < 6) == 0) {
    uVar3 = 0;
  }
  return *(undefined4 *)((long)DAT_04c92e48 + uVar3 * 4);
}

