
bool FUN_036b391c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05ab2750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab2750), iVar1 != 0)) {
    DAT_05ab2748 = &PTR_LAB_04b44318;
    __cxa_guard_release(&DAT_05ab2750);
  }
  if ((undefined ***)param_2 != &DAT_05ab2748) {
    if (((DAT_05ab2590 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab2590), iVar1 != 0)) {
      DAT_05ab2588 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05ab2590);
    }
    if ((undefined **)param_2 != &DAT_05ab2588) {
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

