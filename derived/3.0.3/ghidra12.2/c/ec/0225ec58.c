
bool FUN_0225ec58(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc2e08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2e08), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc2e00 = PTR_DAT_04bb3b50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc2e08);
  }
  if (param_1 != PTR_DAT_04bc2e00) {
    if (((*PTR_DAT_04bb3b60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3b60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb3b58 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3b60);
    }
    if (param_1 != PTR_DAT_04bb3b58) {
      if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2e60);
      }
      return param_1 == PTR_DAT_04bb2e58;
    }
  }
  return true;
}

