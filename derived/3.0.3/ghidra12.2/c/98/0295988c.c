
bool FUN_0295988c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_055d6d50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055d6d50), iVar1 != 0)) {
    DAT_055d6d48 = &PTR_LAB_04a94ff8;
    __cxa_guard_release(&DAT_055d6d50);
  }
  if ((undefined ***)param_2 != &DAT_055d6d48) {
    if (((DAT_055d6930 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055d6930), iVar1 != 0)) {
      DAT_055d6928 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_055d6930);
    }
    if ((undefined **)param_2 != &DAT_055d6928) {
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

