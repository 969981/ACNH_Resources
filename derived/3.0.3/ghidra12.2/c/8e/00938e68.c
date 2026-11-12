
bool FUN_00938e68(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb5b58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bb5b50 = &PTR_LAB_04928e30;
    __cxa_guard_release(PTR_DAT_04bb5b58);
  }
  if (param_1 != PTR_DAT_04bb5b50) {
    if (((*PTR_DAT_04bb2f28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2f28), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2f20 = PTR_DAT_04bb2e38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2f28);
    }
    if (param_1 != PTR_DAT_04bb2f20) {
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

