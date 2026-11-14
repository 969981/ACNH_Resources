
bool FUN_01b76a4c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053361a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053361a8), iVar1 != 0)) {
    DAT_053361a0 = &PTR_LAB_04a38c98;
    __cxa_guard_release(&DAT_053361a8);
  }
  if ((undefined ***)param_2 != &DAT_053361a0) {
    if (((DAT_05336180 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05336180), iVar1 != 0)) {
      DAT_05336178 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05336180);
    }
    if ((undefined **)param_2 != &DAT_05336178) {
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

