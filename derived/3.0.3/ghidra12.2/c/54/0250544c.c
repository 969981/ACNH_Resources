
bool FUN_0250544c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_054ecd90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_054ecd90), iVar1 != 0)) {
    DAT_054ecd88 = &PTR_LAB_04a81fb0;
    __cxa_guard_release(&DAT_054ecd90);
  }
  if ((undefined ***)param_2 != &DAT_054ecd88) {
    if (((DAT_054ecd80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_054ecd80), iVar1 != 0)) {
      DAT_054ecd78 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_054ecd80);
    }
    if ((undefined **)param_2 != &DAT_054ecd78) {
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

