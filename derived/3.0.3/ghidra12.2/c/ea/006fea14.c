
bool FUN_006fea14(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb2fb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fb0), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bb2fa8 = &PTR_FUN_048fd9b8;
    __cxa_guard_release(PTR_DAT_04bb2fb0);
  }
  if (param_1 != PTR_DAT_04bb2fa8) {
    if (((*PTR_DAT_04bb2fc8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fc8), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bb2fc0 = &PTR_FUN_048fda48;
      __cxa_guard_release(PTR_DAT_04bb2fc8);
    }
    if (param_1 != PTR_DAT_04bb2fc0) {
      if (((*PTR_DAT_04bb2fe0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fe0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2fd8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2fe0);
      }
      return param_1 == PTR_DAT_04bb2fd8;
    }
  }
  return true;
}

