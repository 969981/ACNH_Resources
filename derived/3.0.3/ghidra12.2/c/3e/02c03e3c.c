
bool FUN_02c03e3c(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc5348 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc5348), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc5340 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5348);
  }
  if (param_2 != PTR_DAT_04bc5340) {
    if (((*PTR_DAT_04bc4e28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e28), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e20 = PTR_DAT_04bc4e30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e28);
    }
    if (param_2 != PTR_DAT_04bc4e20) {
      if (((*PTR_DAT_04bc4e18 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e18), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e10 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e18);
      }
      return param_2 == PTR_DAT_04bc4e10;
    }
  }
  return true;
}

