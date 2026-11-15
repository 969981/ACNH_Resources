
bool FUN_01efcfb4(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb69b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb69b8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb69b0 = PTR_DAT_04bb6990 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb69b8);
  }
  if (param_1 != PTR_DAT_04bb69b0) {
    if (((*PTR_DAT_04bb69a0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb69a0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb6998 = PTR_DAT_04bb4100 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb69a0);
    }
    if (param_1 != PTR_DAT_04bb6998) {
      if (((*PTR_DAT_04bb4110 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4110), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4108 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4110);
      }
      return param_1 == PTR_DAT_04bb4108;
    }
  }
  return true;
}

