
undefined4 FUN_01654e90(void)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (((DAT_05231090 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05231090), iVar1 != 0)) {
    DAT_05231080 = '\0';
    DAT_05231088 = (undefined8 *)0x0;
    lVar2 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
    if (DAT_05231088 == (undefined8 *)0x0) {
      if (((DAT_052310b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052310b0), iVar1 != 0)) {
        DAT_05231098 = 0x100000000;
        DAT_052310a0 = 0x200000001;
        DAT_052310a8 = 3;
        __cxa_guard_release(&DAT_052310b0);
      }
      DAT_05231088 = &DAT_05231098;
      DAT_05231080 = '\x01';
    }
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    __cxa_guard_release(&DAT_05231090);
  }
  uVar3 = 5;
  if (DAT_05231080 == '\0') {
    uVar3 = 0;
  }
  return uVar3;
}

