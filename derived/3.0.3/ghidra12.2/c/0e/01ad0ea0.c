
bool FUN_01ad0ea0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05326938 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05326938), iVar1 != 0)) {
    DAT_05326930 = &PTR_LAB_04a36858;
    __cxa_guard_release(&DAT_05326938);
  }
  if ((undefined ***)param_2 != &DAT_05326930) {
    if (((DAT_05326928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05326928), iVar1 != 0)) {
      DAT_05326920 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05326928);
    }
    if ((undefined **)param_2 != &DAT_05326920) {
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

