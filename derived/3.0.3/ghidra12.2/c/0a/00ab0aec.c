
bool FUN_00ab0aec(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04da8318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da8318), iVar1 != 0)) {
    DAT_04da8310 = &PTR_LAB_04932708;
    __cxa_guard_release(&DAT_04da8318);
  }
  if ((undefined ***)param_2 != &DAT_04da8310) {
    if (((DAT_04da7fb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7fb8), iVar1 != 0)) {
      DAT_04da7fb0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04da7fb8);
    }
    if ((undefined **)param_2 != &DAT_04da7fb0) {
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

