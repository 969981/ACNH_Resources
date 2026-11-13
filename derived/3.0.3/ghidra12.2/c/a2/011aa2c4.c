
bool FUN_011aa2c4(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbba10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbba10), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbba08 = PTR_DAT_04bbb8b0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbba10);
  }
  if (param_1 != PTR_DAT_04bbba08) {
    if (((*PTR_DAT_04bbb8c0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbb8c0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbb8b8 = PTR_DAT_04bb2e38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbb8c0);
    }
    if (param_1 != PTR_DAT_04bbb8b8) {
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

