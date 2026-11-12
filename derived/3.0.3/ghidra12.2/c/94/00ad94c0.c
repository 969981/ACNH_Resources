
bool FUN_00ad94c0(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb64e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb64e8), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bb64e0 = &PTR_LAB_04933a10;
    __cxa_guard_release(PTR_DAT_04bb64e8);
  }
  if (param_1 != PTR_DAT_04bb64e0) {
    if (((*PTR_DAT_04bb6500 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6500), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bb64f8 = &PTR_LAB_04933a40;
      __cxa_guard_release(PTR_DAT_04bb6500);
    }
    if (param_1 != PTR_DAT_04bb64f8) {
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

