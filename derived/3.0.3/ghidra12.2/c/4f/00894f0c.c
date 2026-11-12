
bool FUN_00894f0c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04ce9fd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ce9fd0), iVar1 != 0)) {
    DAT_04ce9fc8 = &PTR_LAB_0491e230;
    __cxa_guard_release(&DAT_04ce9fd0);
  }
  if ((undefined ***)param_2 != &DAT_04ce9fc8) {
    if (((DAT_04ce9cc0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ce9cc0), iVar1 != 0)) {
      DAT_04ce9cb8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04ce9cc0);
    }
    if ((undefined **)param_2 != &DAT_04ce9cb8) {
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

