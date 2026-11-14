
bool FUN_016a5d0c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05235c00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05235c00), iVar1 != 0)) {
    DAT_05235bf8 = &PTR_LAB_049bb538;
    __cxa_guard_release(&DAT_05235c00);
  }
  if ((undefined ***)param_2 != &DAT_05235bf8) {
    if (((DAT_05235bf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05235bf0), iVar1 != 0)) {
      DAT_05235be8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05235bf0);
    }
    if ((undefined **)param_2 != &DAT_05235be8) {
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

