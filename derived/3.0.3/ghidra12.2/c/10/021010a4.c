
bool FUN_021010a4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053e7b10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053e7b10), iVar1 != 0)) {
    DAT_053e7b08 = &PTR_LAB_04a74698;
    __cxa_guard_release(&DAT_053e7b10);
  }
  if ((undefined ***)param_2 != &DAT_053e7b08) {
    if (((DAT_053e7a70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053e7a70), iVar1 != 0)) {
      DAT_053e7a68 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_053e7a70);
    }
    if ((undefined **)param_2 != &DAT_053e7a68) {
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

