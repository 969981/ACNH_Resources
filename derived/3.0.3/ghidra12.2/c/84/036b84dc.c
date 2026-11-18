
bool FUN_036b84dc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05ab2cf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab2cf8), iVar1 != 0)) {
    DAT_05ab2cf0 = &PTR_LAB_04b44890;
    __cxa_guard_release(&DAT_05ab2cf8);
  }
  if ((undefined ***)param_2 != &DAT_05ab2cf0) {
    if (((DAT_05ab2760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab2760), iVar1 != 0)) {
      DAT_05ab2758 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05ab2760);
    }
    if ((undefined **)param_2 != &DAT_05ab2758) {
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

