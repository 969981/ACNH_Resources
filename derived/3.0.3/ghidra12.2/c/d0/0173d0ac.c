
bool FUN_0173d0ac(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbe050 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbe050), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbe048 = PTR_DAT_04bbe058 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe050);
  }
  if (param_1 != PTR_DAT_04bbe048) {
    if (((*PTR_DAT_04bbdea0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdea0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbde98 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbdea0);
    }
    if (param_1 != PTR_DAT_04bbde98) {
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

