
bool FUN_00ac31ec(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04da8910 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da8910), iVar1 != 0)) {
    DAT_04da8908 = &PTR_LAB_049332d0;
    __cxa_guard_release(&DAT_04da8910);
  }
  if ((undefined ***)param_2 != &DAT_04da8908) {
    if (((DAT_04da8680 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da8680), iVar1 != 0)) {
      DAT_04da8678 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04da8680);
    }
    if ((undefined **)param_2 != &DAT_04da8678) {
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

