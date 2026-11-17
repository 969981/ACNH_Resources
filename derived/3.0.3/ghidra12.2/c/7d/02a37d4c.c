
bool FUN_02a37d4c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_055f6128 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055f6128), iVar1 != 0)) {
    DAT_055f6120 = &PTR_LAB_04a9a278;
    __cxa_guard_release(&DAT_055f6128);
  }
  if ((undefined ***)param_2 != &DAT_055f6120) {
    if (((DAT_055f6118 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055f6118), iVar1 != 0)) {
      DAT_055f6110 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_055f6118);
    }
    if ((undefined **)param_2 != &DAT_055f6110) {
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

