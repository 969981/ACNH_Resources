
bool FUN_036f0e18(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05ab8ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab8ca8), iVar1 != 0)) {
    DAT_05ab8ca0 = &PTR_LAB_04b456e0;
    __cxa_guard_release(&DAT_05ab8ca8);
  }
  if ((undefined ***)param_2 != &DAT_05ab8ca0) {
    if (((DAT_05ab8c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab8c98), iVar1 != 0)) {
      DAT_05ab8c90 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05ab8c98);
    }
    if ((undefined **)param_2 != &DAT_05ab8c90) {
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

