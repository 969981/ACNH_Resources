
bool FUN_02aba72c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0560baa0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0560baa0), iVar1 != 0)) {
    DAT_0560ba98 = &PTR_LAB_04a9e310;
    __cxa_guard_release(&DAT_0560baa0);
  }
  if ((undefined ***)param_2 != &DAT_0560ba98) {
    if (((DAT_0560ba90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0560ba90), iVar1 != 0)) {
      DAT_0560ba88 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_0560ba90);
    }
    if ((undefined **)param_2 != &DAT_0560ba88) {
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

