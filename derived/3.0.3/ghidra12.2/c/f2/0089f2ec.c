
bool FUN_0089f2ec(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04cea080 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cea080), iVar1 != 0)) {
    DAT_04cea078 = &PTR_LAB_0491e858;
    __cxa_guard_release(&DAT_04cea080);
  }
  if ((undefined ***)param_2 != &DAT_04cea078) {
    if (((DAT_04cea070 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cea070), iVar1 != 0)) {
      DAT_04cea068 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04cea070);
    }
    if ((undefined **)param_2 != &DAT_04cea068) {
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

