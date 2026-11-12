
bool FUN_00aa22fc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04da7ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7ed0), iVar1 != 0)) {
    DAT_04da7ec8 = &PTR_LAB_04931f38;
    __cxa_guard_release(&DAT_04da7ed0);
  }
  if ((undefined ***)param_2 != &DAT_04da7ec8) {
    if (((DAT_04da7ec0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7ec0), iVar1 != 0)) {
      DAT_04da7eb8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04da7ec0);
    }
    if ((undefined **)param_2 != &DAT_04da7eb8) {
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

