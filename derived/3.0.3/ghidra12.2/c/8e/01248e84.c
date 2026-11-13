
bool FUN_01248e84(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05150d90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05150d90), iVar1 != 0)) {
    DAT_05150d88 = &PTR_LAB_04988980;
    __cxa_guard_release(&DAT_05150d90);
  }
  if ((undefined ***)param_2 != &DAT_05150d88) {
    if (((DAT_05150d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05150d80), iVar1 != 0)) {
      DAT_05150d78 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05150d80);
    }
    if ((undefined **)param_2 != &DAT_05150d78) {
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

