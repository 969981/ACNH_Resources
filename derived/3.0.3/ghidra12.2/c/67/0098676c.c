
bool FUN_0098676c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04cfac58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cfac58), iVar1 != 0)) {
    DAT_04cfac50 = &PTR_LAB_0492ad08;
    __cxa_guard_release(&DAT_04cfac58);
  }
  if ((undefined ***)param_2 != &DAT_04cfac50) {
    if (((DAT_04cfac48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cfac48), iVar1 != 0)) {
      DAT_04cfac40 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04cfac48);
    }
    if ((undefined **)param_2 != &DAT_04cfac40) {
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

