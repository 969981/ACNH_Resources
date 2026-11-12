
undefined4 FUN_007e00fc(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_04cb3158 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04cb3158);
    if (iVar1 != 0) {
      DAT_04cb3148 = 0;
      DAT_04cb3150 = (undefined8 *)0x0;
      lVar2 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
      if (DAT_04cb3150 == (undefined8 *)0x0) {
        if (((DAT_04cb3168 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cb3168), iVar1 != 0)) {
          DAT_04cb3160 = 0x900000005;
          __cxa_guard_release(&DAT_04cb3168);
        }
        DAT_04cb3148 = 1;
        DAT_04cb3150 = &DAT_04cb3160;
      }
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
      __cxa_guard_release(&DAT_04cb3158);
    }
  }
  uVar3 = (ulong)*param_1;
  if ((DAT_04cb3148 & uVar3 < 2) == 0) {
    uVar3 = 0;
  }
  return *(undefined4 *)((long)DAT_04cb3150 + uVar3 * 4);
}

