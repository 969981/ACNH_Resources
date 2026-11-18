
bool FUN_03790c74(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb3bb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3bb0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3ba8 = PTR_DAT_04bb3bb8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3bb0);
  }
  if (param_1 != PTR_DAT_04bb3ba8) {
    if (((*PTR_DAT_04bb3bc8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3bc8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb3bc0 = PTR_DAT_04bb3bd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3bc8);
    }
    if (param_1 != PTR_DAT_04bb3bc0) {
      if (((*PTR_DAT_04bb3be0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3be0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb3bd8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3be0);
      }
      return param_1 == PTR_DAT_04bb3bd8;
    }
  }
  return true;
}

