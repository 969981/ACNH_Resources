
undefined4 FUN_032c5718(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_0572e3c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0572e3c0);
    if (iVar1 != 0) {
      DAT_0572e3b0 = 0;
      DAT_0572e3b8 = (undefined8 *)0x0;
      lVar2 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
      if (DAT_0572e3b8 == (undefined8 *)0x0) {
        if (((DAT_0572e3e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0572e3e0), iVar1 != 0)) {
          DAT_0572e3c8 = 0x100000000;
          DAT_0572e3d0 = 0x300000002;
          DAT_0572e3d8 = 4;
          __cxa_guard_release(&DAT_0572e3e0);
        }
        DAT_0572e3b0 = 1;
        DAT_0572e3b8 = &DAT_0572e3c8;
      }
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
      __cxa_guard_release(&DAT_0572e3c0);
    }
  }
  uVar3 = (ulong)*param_1;
  if ((DAT_0572e3b0 & uVar3 < 5) == 0) {
    uVar3 = 0;
  }
  return *(undefined4 *)((long)DAT_0572e3b8 + uVar3 * 4);
}

