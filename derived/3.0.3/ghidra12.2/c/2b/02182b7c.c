
bool FUN_02182b7c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053fb008 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053fb008), iVar1 != 0)) {
    DAT_053fb000 = &PTR_LAB_04a75d60;
    __cxa_guard_release(&DAT_053fb008);
  }
  if ((undefined ***)param_2 != &DAT_053fb000) {
    if (((DAT_053fafd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053fafd8), iVar1 != 0)) {
      DAT_053fafd0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_053fafd8);
    }
    if ((undefined **)param_2 != &DAT_053fafd0) {
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

