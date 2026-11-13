
bool FUN_0142c6d8(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb6600 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6600), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb65f8 = PTR_DAT_04bb6608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6600);
  }
  if (param_1 != PTR_DAT_04bb65f8) {
    if (((*PTR_DAT_04bb6618 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6618), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb6610 = PTR_DAT_04bb2e38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6618);
    }
    if (param_1 != PTR_DAT_04bb6610) {
      if (((*PTR_DAT_04bb2e48 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2e48), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2e40 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2e48);
      }
      return param_1 == PTR_DAT_04bb2e40;
    }
  }
  return true;
}

