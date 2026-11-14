
bool FUN_017df49c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05293a20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293a20), iVar1 != 0)) {
    DAT_05293a18 = &PTR_LAB_049c4b70;
    __cxa_guard_release(&DAT_05293a20);
  }
  if ((undefined ***)param_2 != &DAT_05293a18) {
    if (((DAT_05293880 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293880), iVar1 != 0)) {
      DAT_05293878 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05293880);
    }
    if ((undefined **)param_2 != &DAT_05293878) {
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

