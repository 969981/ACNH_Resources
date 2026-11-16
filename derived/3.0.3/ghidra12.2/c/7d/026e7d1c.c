
bool FUN_026e7d1c(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc36c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc36c0), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bc36b8 = &PTR_LAB_04a89558;
    __cxa_guard_release(PTR_DAT_04bc36c0);
  }
  if (param_1 != PTR_DAT_04bc36b8) {
    if (((*PTR_DAT_04bc3698 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc3698), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bc3690 = &PTR_LAB_04a89570;
      __cxa_guard_release(PTR_DAT_04bc3698);
    }
    if (param_1 != PTR_DAT_04bc3690) {
      if (((*PTR_DAT_04bc36b0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc36b0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc36a8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc36b0);
      }
      return param_1 == PTR_DAT_04bc36a8;
    }
  }
  return true;
}

