
bool FUN_00921bcc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04cf0348 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf0348), iVar1 != 0)) {
    DAT_04cf0340 = &PTR_LAB_04927b98;
    __cxa_guard_release(&DAT_04cf0348);
  }
  if ((undefined ***)param_2 != &DAT_04cf0340) {
    if (((DAT_04cf0338 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf0338), iVar1 != 0)) {
      DAT_04cf0330 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04cf0338);
    }
    if ((undefined **)param_2 != &DAT_04cf0330) {
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

