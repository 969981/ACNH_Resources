
bool FUN_01c53324(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0534e0f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534e0f8), iVar1 != 0)) {
    DAT_0534e0f0 = &PTR_LAB_04a41d50;
    __cxa_guard_release(&DAT_0534e0f8);
  }
  if ((undefined ***)param_2 != &DAT_0534e0f0) {
    if (((DAT_0534e0e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534e0e8), iVar1 != 0)) {
      DAT_0534e0e0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_0534e0e8);
    }
    if ((undefined **)param_2 != &DAT_0534e0e0) {
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

