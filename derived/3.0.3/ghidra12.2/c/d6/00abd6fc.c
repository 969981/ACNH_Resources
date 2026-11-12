
bool FUN_00abd6fc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04da84b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da84b8), iVar1 != 0)) {
    DAT_04da84b0 = &PTR_LAB_04932df0;
    __cxa_guard_release(&DAT_04da84b8);
  }
  if ((undefined ***)param_2 != &DAT_04da84b0) {
    if (((DAT_04da84a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da84a8), iVar1 != 0)) {
      DAT_04da84a0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04da84a8);
    }
    if ((undefined **)param_2 != &DAT_04da84a0) {
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

