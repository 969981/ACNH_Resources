
bool FUN_0297e62c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_055dccf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055dccf8), iVar1 != 0)) {
    DAT_055dccf0 = &PTR_LAB_04a97120;
    __cxa_guard_release(&DAT_055dccf8);
  }
  if ((undefined ***)param_2 != &DAT_055dccf0) {
    if (((DAT_055dcae8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055dcae8), iVar1 != 0)) {
      DAT_055dcae0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_055dcae8);
    }
    if ((undefined **)param_2 != &DAT_055dcae0) {
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

