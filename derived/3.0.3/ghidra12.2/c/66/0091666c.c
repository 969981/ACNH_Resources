
bool FUN_0091666c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04cf02a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf02a8), iVar1 != 0)) {
    DAT_04cf02a0 = &PTR_LAB_04927620;
    __cxa_guard_release(&DAT_04cf02a8);
  }
  if ((undefined ***)param_2 != &DAT_04cf02a0) {
    if (((DAT_04cf0298 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cf0298), iVar1 != 0)) {
      DAT_04cf0290 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04cf0298);
    }
    if ((undefined **)param_2 != &DAT_04cf0290) {
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

