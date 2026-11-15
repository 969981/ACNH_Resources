
bool FUN_020084b0(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc1de8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc1de8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc1de0 = PTR_DAT_04bb2e20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc1de8);
  }
  if (param_1 != PTR_DAT_04bc1de0) {
    if (((*PTR_DAT_04bb2e30 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2e30), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2e28 = PTR_DAT_04bb2e38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2e30);
    }
    if (param_1 != PTR_DAT_04bb2e28) {
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

