
bool FUN_01724028(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbe1c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbe1c0), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bbe1b8 = &PTR_LAB_049bf968;
    __cxa_guard_release(PTR_DAT_04bbe1c0);
  }
  if (param_1 != PTR_DAT_04bbe1b8) {
    if (((*PTR_DAT_04bbe0c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbe0c8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbe0c0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe0c8);
    }
    if (param_1 != PTR_DAT_04bbe0c0) {
      if (((*PTR_DAT_04bb4a90 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4a90), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4a88 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4a90);
      }
      return param_1 == PTR_DAT_04bb4a88;
    }
  }
  return true;
}

