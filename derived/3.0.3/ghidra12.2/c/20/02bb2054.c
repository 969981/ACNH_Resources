
bool FUN_02bb2054(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc4cb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4cb0), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bc4ca8 = &PTR_LAB_04aa7328;
    __cxa_guard_release(PTR_DAT_04bc4cb0);
  }
  if (param_1 != PTR_DAT_04bc4ca8) {
    if (((*PTR_DAT_04bc4cc8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4cc8), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bc4cc0 = &PTR_LAB_04aa7310;
      __cxa_guard_release(PTR_DAT_04bc4cc8);
    }
    if (param_1 != PTR_DAT_04bc4cc0) {
      if (((*PTR_DAT_04bc4ce0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4ce0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4cd8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4ce0);
      }
      return param_1 == PTR_DAT_04bc4cd8;
    }
  }
  return true;
}

