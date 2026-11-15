
bool FUN_020f47c0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053e6e40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053e6e40), iVar1 != 0)) {
    DAT_053e6e38 = &PTR_LAB_04a74560;
    __cxa_guard_release(&DAT_053e6e40);
  }
  if ((undefined ***)param_2 != &DAT_053e6e38) {
    if (((DAT_053e6800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053e6800), iVar1 != 0)) {
      DAT_053e67f8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_053e6800);
    }
    if ((undefined **)param_2 != &DAT_053e67f8) {
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

