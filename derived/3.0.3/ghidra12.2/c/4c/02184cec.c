
bool FUN_02184cec(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053fb028 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053fb028), iVar1 != 0)) {
    DAT_053fb020 = &PTR_LAB_04a75e28;
    __cxa_guard_release(&DAT_053fb028);
  }
  if ((undefined ***)param_2 != &DAT_053fb020) {
    if (((DAT_053fb018 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053fb018), iVar1 != 0)) {
      DAT_053fb010 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_053fb018);
    }
    if ((undefined **)param_2 != &DAT_053fb010) {
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

