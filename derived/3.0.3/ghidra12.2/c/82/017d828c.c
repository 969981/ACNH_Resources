
bool FUN_017d828c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05293740 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293740), iVar1 != 0)) {
    DAT_05293738 = &PTR_LAB_049c46d8;
    __cxa_guard_release(&DAT_05293740);
  }
  if ((undefined ***)param_2 != &DAT_05293738) {
    if (((DAT_05293730 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293730), iVar1 != 0)) {
      DAT_05293728 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05293730);
    }
    if ((undefined **)param_2 != &DAT_05293728) {
      if (((*PTR_DAT_04bb4a90 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4a90), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4a88 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4a90);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb4a88;
    }
  }
  return true;
}

