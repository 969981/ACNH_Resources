
bool FUN_00708938(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb3198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3198), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bb3190 = &PTR_LAB_048fe730;
    __cxa_guard_release(PTR_DAT_04bb3198);
  }
  if (param_1 != PTR_DAT_04bb3190) {
    if (((*PTR_DAT_04bb31b0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb31b0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb31a8 = PTR_DAT_04bb2e38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb31b0);
    }
    if (param_1 != PTR_DAT_04bb31a8) {
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

