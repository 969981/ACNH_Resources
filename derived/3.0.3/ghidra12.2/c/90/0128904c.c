
bool FUN_0128904c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05161988 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05161988), iVar1 != 0)) {
    DAT_05161980 = &PTR_LAB_0498a758;
    __cxa_guard_release(&DAT_05161988);
  }
  if ((undefined ***)param_2 != &DAT_05161980) {
    if (((DAT_05161198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05161198), iVar1 != 0)) {
      DAT_05161190 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05161198);
    }
    if ((undefined **)param_2 != &DAT_05161190) {
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

