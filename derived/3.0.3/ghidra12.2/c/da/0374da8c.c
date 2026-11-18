
bool FUN_0374da8c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05abdbf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05abdbf0), iVar1 != 0)) {
    DAT_05abdbe8 = &PTR_LAB_04b46728;
    __cxa_guard_release(&DAT_05abdbf0);
  }
  if ((undefined ***)param_2 != &DAT_05abdbe8) {
    if (((DAT_05abdbc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05abdbc8), iVar1 != 0)) {
      DAT_05abdbc0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05abdbc8);
    }
    if ((undefined **)param_2 != &DAT_05abdbc0) {
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

