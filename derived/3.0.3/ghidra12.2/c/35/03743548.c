
bool FUN_03743548(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05abc4f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05abc4f8), iVar1 != 0)) {
    DAT_05abc4f0 = &PTR_LAB_04b464c8;
    __cxa_guard_release(&DAT_05abc4f8);
  }
  if ((undefined ***)param_2 != &DAT_05abc4f0) {
    if (((DAT_05abc418 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05abc418), iVar1 != 0)) {
      DAT_05abc410 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05abc418);
    }
    if ((undefined **)param_2 != &DAT_05abc410) {
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

