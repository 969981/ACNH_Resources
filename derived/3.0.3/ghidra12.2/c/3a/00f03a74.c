
bool FUN_00f03a74(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb9ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb9ca8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb9ca0 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb9ca8);
  }
  if (param_1 != PTR_DAT_04bb9ca0) {
    if (((*PTR_DAT_04bb9908 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb9908), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb9900 = PTR_DAT_04bb6508 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb9908);
    }
    if (param_1 != PTR_DAT_04bb9900) {
      if (((*PTR_DAT_04bb6518 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6518), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb6510 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6518);
      }
      return param_1 == PTR_DAT_04bb6510;
    }
  }
  return true;
}

