
undefined4 FUN_03a4c16c(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_05aea608 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05aea608);
    if (iVar1 != 0) {
      DAT_05aea5f8 = 0;
      DAT_05aea600 = (undefined8 *)0x0;
      lVar2 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
      if (DAT_05aea600 == (undefined8 *)0x0) {
        if (((DAT_05aea618 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea618), iVar1 != 0)) {
          DAT_05aea610 = 0x590000005a;
          __cxa_guard_release(&DAT_05aea618);
        }
        DAT_05aea5f8 = 1;
        DAT_05aea600 = &DAT_05aea610;
      }
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
      __cxa_guard_release(&DAT_05aea608);
    }
  }
  uVar3 = (ulong)*param_1;
  if ((DAT_05aea5f8 & uVar3 < 2) == 0) {
    uVar3 = 0;
  }
  return *(undefined4 *)((long)DAT_05aea600 + uVar3 * 4);
}

