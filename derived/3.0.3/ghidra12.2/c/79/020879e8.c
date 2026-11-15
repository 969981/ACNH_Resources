
undefined4 FUN_020879e8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if ((DAT_053d7e60 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_053d7e60);
    if (iVar2 != 0) {
      DAT_053d7e50 = 0;
      DAT_053d7e58 = (undefined8 *)0x0;
      lVar3 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar3 + 0x20));
      if (DAT_053d7e58 == (undefined8 *)0x0) {
        if (((DAT_053d7e78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_053d7e78), iVar2 != 0)) {
          DAT_053d7e68 = 0x100000000;
          DAT_053d7e70 = 2;
          __cxa_guard_release(&DAT_053d7e78);
        }
        DAT_053d7e50 = 3;
        DAT_053d7e58 = &DAT_053d7e68;
      }
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
      __cxa_guard_release(&DAT_053d7e60);
    }
  }
  uVar1 = *param_1;
  if (DAT_053d7e50 <= uVar1) {
    uVar1 = 0;
  }
  return *(undefined4 *)((long)DAT_053d7e58 + (long)(int)uVar1 * 4);
}

