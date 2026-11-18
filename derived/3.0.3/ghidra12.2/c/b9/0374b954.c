
bool FUN_0374b954(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05abdbb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05abdbb8), iVar1 != 0)) {
    DAT_05abdbb0 = &PTR_LAB_04b46660;
    __cxa_guard_release(&DAT_05abdbb8);
  }
  if ((undefined ***)param_2 != &DAT_05abdbb0) {
    if (((DAT_05abdb98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05abdb98), iVar1 != 0)) {
      DAT_05abdb90 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05abdb98);
    }
    if ((undefined **)param_2 != &DAT_05abdb90) {
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

