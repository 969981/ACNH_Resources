
bool FUN_01c5fe38(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0534f810 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534f810), iVar1 != 0)) {
    DAT_0534f808 = &PTR_LAB_04a42500;
    __cxa_guard_release(&DAT_0534f810);
  }
  if ((undefined ***)param_2 != &DAT_0534f808) {
    if (((DAT_0534f4a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534f4a0), iVar1 != 0)) {
      DAT_0534f498 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_0534f4a0);
    }
    if ((undefined **)param_2 != &DAT_0534f498) {
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

