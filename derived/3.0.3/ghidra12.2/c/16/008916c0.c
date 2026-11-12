
bool FUN_008916c0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04ce9cb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ce9cb0), iVar1 != 0)) {
    DAT_04ce9ca8 = &PTR_LAB_0491deb0;
    __cxa_guard_release(&DAT_04ce9cb0);
  }
  if ((undefined ***)param_2 != &DAT_04ce9ca8) {
    if (((DAT_04ce9850 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ce9850), iVar1 != 0)) {
      DAT_04ce9848 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04ce9850);
    }
    if ((undefined **)param_2 != &DAT_04ce9848) {
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

