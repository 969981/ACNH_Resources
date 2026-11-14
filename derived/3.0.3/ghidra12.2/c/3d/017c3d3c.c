
bool FUN_017c3d3c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05293210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293210), iVar1 != 0)) {
    DAT_05293208 = &PTR_LAB_049c3e80;
    __cxa_guard_release(&DAT_05293210);
  }
  if ((undefined ***)param_2 != &DAT_05293208) {
    if (((DAT_05293060 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293060), iVar1 != 0)) {
      DAT_05293058 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05293060);
    }
    if ((undefined **)param_2 != &DAT_05293058) {
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

