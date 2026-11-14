
bool FUN_0191cd18(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5f08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5f08), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb5f00 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5f08);
  }
  if (param_1 != PTR_DAT_04bb5f00) {
    if (((*PTR_DAT_04bb2fc8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fc8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2fc0 = PTR_DAT_04bb2fd0 + 0x10;
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

