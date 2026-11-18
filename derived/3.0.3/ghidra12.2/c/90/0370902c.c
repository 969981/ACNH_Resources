
bool FUN_0370902c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05ab98e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab98e0), iVar1 != 0)) {
    DAT_05ab98d8 = &PTR_LAB_04b45978;
    __cxa_guard_release(&DAT_05ab98e0);
  }
  if ((undefined ***)param_2 != &DAT_05ab98d8) {
    if (((DAT_05ab98d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab98d0), iVar1 != 0)) {
      DAT_05ab98c8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05ab98d0);
    }
    if ((undefined **)param_2 != &DAT_05ab98c8) {
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

