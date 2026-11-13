
bool FUN_0129b1bc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05162288 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05162288), iVar1 != 0)) {
    DAT_05162280 = &PTR_LAB_0498aef8;
    __cxa_guard_release(&DAT_05162288);
  }
  if ((undefined ***)param_2 != &DAT_05162280) {
    if (((DAT_05162278 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05162278), iVar1 != 0)) {
      DAT_05162270 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05162278);
    }
    if ((undefined **)param_2 != &DAT_05162270) {
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

