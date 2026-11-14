
bool FUN_01c1f758(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0534b0b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534b0b8), iVar1 != 0)) {
    DAT_0534b0b0 = &PTR_LAB_04a40318;
    __cxa_guard_release(&DAT_0534b0b8);
  }
  if ((undefined ***)param_2 != &DAT_0534b0b0) {
    if (((DAT_0534b0a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534b0a8), iVar1 != 0)) {
      DAT_0534b0a0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_0534b0a8);
    }
    if ((undefined **)param_2 != &DAT_0534b0a0) {
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

