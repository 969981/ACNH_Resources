
bool FUN_0128ca8c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05161d88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05161d88), iVar1 != 0)) {
    DAT_05161d80 = &PTR_LAB_0498a870;
    __cxa_guard_release(&DAT_05161d88);
  }
  if ((undefined ***)param_2 != &DAT_05161d80) {
    if (((DAT_05161998 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05161998), iVar1 != 0)) {
      DAT_05161990 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05161998);
    }
    if ((undefined **)param_2 != &DAT_05161990) {
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

