
bool FUN_00897a8c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04cea000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cea000), iVar1 != 0)) {
    DAT_04ce9ff8 = &PTR_LAB_0491e3a0;
    __cxa_guard_release(&DAT_04cea000);
  }
  if ((undefined ***)param_2 != &DAT_04ce9ff8) {
    if (((DAT_04ce9fe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ce9fe0), iVar1 != 0)) {
      DAT_04ce9fd8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04ce9fe0);
    }
    if ((undefined **)param_2 != &DAT_04ce9fd8) {
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

