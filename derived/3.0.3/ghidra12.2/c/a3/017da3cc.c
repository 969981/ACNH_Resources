
bool FUN_017da3cc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05293760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293760), iVar1 != 0)) {
    DAT_05293758 = &PTR_LAB_049c47f0;
    __cxa_guard_release(&DAT_05293760);
  }
  if ((undefined ***)param_2 != &DAT_05293758) {
    if (((DAT_05293750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293750), iVar1 != 0)) {
      DAT_05293748 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05293750);
    }
    if ((undefined **)param_2 != &DAT_05293748) {
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

