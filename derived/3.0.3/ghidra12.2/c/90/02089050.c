
ulong FUN_02089050(int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (((DAT_053d7e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053d7e60), iVar1 != 0)) {
    DAT_053d7e50 = 0;
    DAT_053d7e58 = (undefined8 *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_053d7e58 == (undefined8 *)0x0) {
      if (((DAT_053d7e78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053d7e78), iVar1 != 0)) {
        DAT_053d7e68 = 0x100000000;
        DAT_053d7e70 = 2;
        __cxa_guard_release(&DAT_053d7e78);
      }
      DAT_053d7e58 = &DAT_053d7e68;
      DAT_053d7e50 = 3;
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_053d7e60);
  }
  if (0 < (int)DAT_053d7e50) {
    uVar3 = 0;
    do {
      if (*(int *)((long)DAT_053d7e58 + uVar3 * 4) == param_1) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while (DAT_053d7e50 != uVar3);
  }
  return 0xffffffff;
}

