
bool FUN_02180a20(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053fafc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053fafc8), iVar1 != 0)) {
    DAT_053fafc0 = &PTR_LAB_04a75c98;
    __cxa_guard_release(&DAT_053fafc8);
  }
  if ((undefined ***)param_2 != &DAT_053fafc0) {
    if (((DAT_053faf90 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053faf90), iVar1 != 0)) {
      DAT_053faf88 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_053faf90);
    }
    if ((undefined **)param_2 != &DAT_053faf88) {
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

