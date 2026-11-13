
bool FUN_01407a84(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_051b7228 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b7228), iVar1 != 0)) {
    DAT_051b7220 = &PTR_LAB_04997510;
    __cxa_guard_release(&DAT_051b7228);
  }
  if ((undefined ***)param_2 != &DAT_051b7220) {
    if (((DAT_051b7218 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b7218), iVar1 != 0)) {
      DAT_051b7210 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_051b7218);
    }
    if ((undefined **)param_2 != &DAT_051b7210) {
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

