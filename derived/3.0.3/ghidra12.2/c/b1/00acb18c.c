
bool FUN_00acb18c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04da89e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da89e0), iVar1 != 0)) {
    DAT_04da89d8 = &PTR_LAB_04933618;
    __cxa_guard_release(&DAT_04da89e0);
  }
  if ((undefined ***)param_2 != &DAT_04da89d8) {
    if (((DAT_04da89d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da89d0), iVar1 != 0)) {
      DAT_04da89c8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04da89d0);
    }
    if ((undefined **)param_2 != &DAT_04da89c8) {
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

