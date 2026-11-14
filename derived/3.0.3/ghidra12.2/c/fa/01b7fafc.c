
bool FUN_01b7fafc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053362e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053362e0), iVar1 != 0)) {
    DAT_053362d8 = &PTR_LAB_04a38fb8;
    __cxa_guard_release(&DAT_053362e0);
  }
  if ((undefined ***)param_2 != &DAT_053362d8) {
    if (((DAT_05336298 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05336298), iVar1 != 0)) {
      DAT_05336290 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05336298);
    }
    if ((undefined **)param_2 != &DAT_05336290) {
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

