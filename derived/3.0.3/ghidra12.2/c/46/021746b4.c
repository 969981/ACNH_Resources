
bool FUN_021746b4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053f98e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053f98e0), iVar1 != 0)) {
    DAT_053f98d8 = &PTR_LAB_04a75b40;
    __cxa_guard_release(&DAT_053f98e0);
  }
  if ((undefined ***)param_2 != &DAT_053f98d8) {
    if (((DAT_053f95e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053f95e0), iVar1 != 0)) {
      DAT_053f95d8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_053f95e0);
    }
    if ((undefined **)param_2 != &DAT_053f95d8) {
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

