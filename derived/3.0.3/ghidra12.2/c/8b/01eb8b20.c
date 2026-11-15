
bool FUN_01eb8b20(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb6710 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if (param_1 != PTR_DAT_04bb6708) {
    if (((*PTR_DAT_04bb6728 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6728), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb6720 = PTR_DAT_04bb4100 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6728);
    }
    if (param_1 != PTR_DAT_04bb6720) {
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

