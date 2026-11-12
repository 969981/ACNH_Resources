
bool FUN_0091f7bc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04cf0328 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf0328), iVar1 != 0)) {
    DAT_04cf0320 = &PTR_LAB_04927a80;
    __cxa_guard_release(&DAT_04cf0328);
  }
  if ((undefined ***)param_2 != &DAT_04cf0320) {
    if (((DAT_04cf0318 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf0318), iVar1 != 0)) {
      DAT_04cf0310 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04cf0318);
    }
    if ((undefined **)param_2 != &DAT_04cf0310) {
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

