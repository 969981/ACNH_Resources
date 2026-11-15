
bool FUN_01f4a5fc(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc2280 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc2280);
  }
  if (param_1 != PTR_DAT_04bc2278) {
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

