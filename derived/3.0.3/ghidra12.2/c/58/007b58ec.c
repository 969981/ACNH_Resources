
bool FUN_007b58ec(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb4458 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  if (param_1 != PTR_DAT_04bb4450) {
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    if (param_1 != PTR_DAT_04bb2820) {
      if (((*PTR_DAT_04bb2840 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2840), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2838 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2840);
      }
      return param_1 == PTR_DAT_04bb2838;
    }
  }
  return true;
}

