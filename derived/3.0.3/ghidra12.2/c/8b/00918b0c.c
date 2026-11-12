
bool FUN_00918b0c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04cf02c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf02c8), iVar1 != 0)) {
    DAT_04cf02c0 = &PTR_LAB_04927738;
    __cxa_guard_release(&DAT_04cf02c8);
  }
  if ((undefined ***)param_2 != &DAT_04cf02c0) {
    if (((DAT_04cf02b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf02b8), iVar1 != 0)) {
      DAT_04cf02b0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04cf02b8);
    }
    if ((undefined **)param_2 != &DAT_04cf02b0) {
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

