
bool FUN_0098b2c4(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5d90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5d90), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bb5d88 = &PTR_FUN_0492b0d8;
    __cxa_guard_release(PTR_DAT_04bb5d90);
  }
  if (param_1 != PTR_DAT_04bb5d88) {
    if (((*PTR_DAT_04bb2ec0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2ec0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2eb8 = PTR_DAT_04bb2e38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2ec0);
    }
    if (param_1 != PTR_DAT_04bb2eb8) {
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

