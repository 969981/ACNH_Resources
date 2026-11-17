
bool FUN_02a3c64c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_055f6168 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055f6168), iVar1 != 0)) {
    DAT_055f6160 = &PTR_LAB_04a9a4d0;
    __cxa_guard_release(&DAT_055f6168);
  }
  if ((undefined ***)param_2 != &DAT_055f6160) {
    if (((DAT_055f6158 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055f6158), iVar1 != 0)) {
      DAT_055f6150 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_055f6158);
    }
    if ((undefined **)param_2 != &DAT_055f6150) {
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

