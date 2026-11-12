
bool FUN_00761078(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (param_1 != PTR_DAT_04bb3758) {
    if (((*PTR_DAT_04bb32a0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb32a0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb3298 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32a0);
    }
    if (param_1 != PTR_DAT_04bb3298) {
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

