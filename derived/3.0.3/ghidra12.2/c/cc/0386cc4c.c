
bool FUN_0386cc4c(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb23a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb23a0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb2398 = PTR_DAT_04bb23a8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb23a0);
  }
  if (param_1 != PTR_DAT_04bb2398) {
    if (((*PTR_DAT_04bb23b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb23b8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb23b0 = PTR_DAT_04bb23c0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb23b8);
    }
    if (param_1 != PTR_DAT_04bb23b0) {
      if (((*PTR_DAT_04bb23d0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb23d0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb23c8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb23d0);
      }
      return param_1 == PTR_DAT_04bb23c8;
    }
  }
  return true;
}

