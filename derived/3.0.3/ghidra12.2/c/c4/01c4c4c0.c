
bool FUN_01c4c4c0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0534d2e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534d2e8), iVar1 != 0)) {
    DAT_0534d2e0 = &PTR_LAB_04a41a60;
    __cxa_guard_release(&DAT_0534d2e8);
  }
  if ((undefined ***)param_2 != &DAT_0534d2e0) {
    if (((DAT_0534d2c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534d2c8), iVar1 != 0)) {
      DAT_0534d2c0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_0534d2c8);
    }
    if ((undefined **)param_2 != &DAT_0534d2c0) {
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

