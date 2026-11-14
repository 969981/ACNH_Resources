
bool FUN_0153f280(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbcf38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbcf38), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbcf30 = PTR_DAT_04bbcf40 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbcf38);
  }
  if (param_2 != PTR_DAT_04bbcf30) {
    if (((*PTR_DAT_04bb3150 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3150), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb3148 = PTR_DAT_04bb2e38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3150);
    }
    if (param_2 != PTR_DAT_04bb3148) {
      if (((*PTR_DAT_04bb2e48 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2e48), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2e40 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2e48);
      }
      return param_2 == PTR_DAT_04bb2e40;
    }
  }
  return true;
}

