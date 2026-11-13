
bool FUN_0132d5f4(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbc430 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbc430), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bbc428 = &PTR_LAB_0498efc0;
    __cxa_guard_release(PTR_DAT_04bbc430);
  }
  if (param_1 != PTR_DAT_04bbc428) {
    if (((*PTR_DAT_04bbc420 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbc420), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbc418 = PTR_DAT_04bb2fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc420);
    }
    if (param_1 != PTR_DAT_04bbc418) {
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

