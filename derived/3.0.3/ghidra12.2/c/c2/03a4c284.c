
undefined4 FUN_03a4c284(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((DAT_05aea630 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05aea630);
    if (iVar1 != 0) {
      DAT_05aea620 = 0;
      DAT_05aea628 = (undefined8 *)0x0;
      lVar2 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
      if (DAT_05aea628 == (undefined8 *)0x0) {
        if (((DAT_05aea648 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aea648), iVar1 != 0)) {
          DAT_05aea638 = 0x1900000026;
          DAT_05aea640 = 0xa00000015;
          __cxa_guard_release(&DAT_05aea648);
        }
        DAT_05aea620 = 1;
        DAT_05aea628 = &DAT_05aea638;
      }
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
      __cxa_guard_release(&DAT_05aea630);
    }
  }
  uVar3 = (ulong)*param_1;
  if ((DAT_05aea620 & uVar3 < 4) == 0) {
    uVar3 = 0;
  }
  return *(undefined4 *)((long)DAT_05aea628 + uVar3 * 4);
}

