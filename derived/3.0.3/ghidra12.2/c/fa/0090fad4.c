
bool FUN_0090fad4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04cf00c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf00c0), iVar1 != 0)) {
    DAT_04cf00b8 = &PTR_LAB_04926f58;
    __cxa_guard_release(&DAT_04cf00c0);
  }
  if ((undefined ***)param_2 != &DAT_04cf00b8) {
    if (((DAT_04cf00b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf00b0), iVar1 != 0)) {
      DAT_04cf00a8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04cf00b0);
    }
    if ((undefined **)param_2 != &DAT_04cf00a8) {
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

