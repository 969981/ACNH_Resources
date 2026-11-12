
bool FUN_007549b4(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb3640 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3640), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3638 = PTR_DAT_04bb3070 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3640);
  }
  if (param_1 != PTR_DAT_04bb3638) {
    if (((*PTR_DAT_04bb2eb0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2eb0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2ea8 = PTR_DAT_04bb2e38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2eb0);
    }
    if (param_1 != PTR_DAT_04bb2ea8) {
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

