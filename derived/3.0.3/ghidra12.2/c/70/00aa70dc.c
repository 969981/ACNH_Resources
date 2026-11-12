
bool FUN_00aa70dc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04da7f60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7f60), iVar1 != 0)) {
    DAT_04da7f58 = &PTR_LAB_04932168;
    __cxa_guard_release(&DAT_04da7f60);
  }
  if ((undefined ***)param_2 != &DAT_04da7f58) {
    if (((DAT_04da7f50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da7f50), iVar1 != 0)) {
      DAT_04da7f48 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04da7f50);
    }
    if ((undefined **)param_2 != &DAT_04da7f48) {
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

