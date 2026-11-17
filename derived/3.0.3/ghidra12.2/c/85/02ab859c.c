
bool FUN_02ab859c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0560ba80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0560ba80), iVar1 != 0)) {
    DAT_0560ba78 = &PTR_LAB_04a9e1f8;
    __cxa_guard_release(&DAT_0560ba80);
  }
  if ((undefined ***)param_2 != &DAT_0560ba78) {
    if (((DAT_0560ba70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0560ba70), iVar1 != 0)) {
      DAT_0560ba68 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_0560ba70);
    }
    if ((undefined **)param_2 != &DAT_0560ba68) {
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

