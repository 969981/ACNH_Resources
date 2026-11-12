
bool FUN_007b5e24(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb4488 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4488), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bb4480 = &PTR_LAB_04912610;
    __cxa_guard_release(PTR_DAT_04bb4488);
  }
  if (param_1 != PTR_DAT_04bb4480) {
    if (((*PTR_DAT_04bb44a0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb44a0), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bb4498 = &PTR_FUN_04912628;
      __cxa_guard_release(PTR_DAT_04bb44a0);
    }
    if (param_1 != PTR_DAT_04bb4498) {
      if (((*PTR_DAT_04bb44b8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb44b8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb44b0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb44b8);
      }
      return param_1 == PTR_DAT_04bb44b0;
    }
  }
  return true;
}

