
bool FUN_02eea0d8(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc72c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc72c0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc72b8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc72c0);
  }
  if (param_1 != PTR_DAT_04bc72b8) {
    if (((*PTR_DAT_04bb7c40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb7c40), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb7c38 = PTR_DAT_04bb7c48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7c40);
    }
    if (param_1 != PTR_DAT_04bb7c38) {
      if (((*PTR_DAT_04bb7c58 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb7c58), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb7c50 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7c58);
      }
      return param_1 == PTR_DAT_04bb7c50;
    }
  }
  return true;
}

