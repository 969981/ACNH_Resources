
bool FUN_021d2d20(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05458b00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05458b00), iVar1 != 0)) {
    DAT_05458af8 = &PTR_LAB_04a76a90;
    __cxa_guard_release(&DAT_05458b00);
  }
  if ((undefined ***)param_2 != &DAT_05458af8) {
    if (((DAT_05458af0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05458af0), iVar1 != 0)) {
      DAT_05458ae8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05458af0);
    }
    if ((undefined **)param_2 != &DAT_05458ae8) {
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

