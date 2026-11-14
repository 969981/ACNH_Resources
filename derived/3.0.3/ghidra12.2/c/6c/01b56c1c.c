
bool FUN_01b56c1c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05335518 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05335518), iVar1 != 0)) {
    DAT_05335510 = &PTR_LAB_04a38998;
    __cxa_guard_release(&DAT_05335518);
  }
  if ((undefined ***)param_2 != &DAT_05335510) {
    if (((DAT_053350c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053350c0), iVar1 != 0)) {
      DAT_053350b8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_053350c0);
    }
    if ((undefined **)param_2 != &DAT_053350b8) {
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

