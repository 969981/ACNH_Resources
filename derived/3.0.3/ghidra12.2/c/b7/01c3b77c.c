
bool FUN_01c3b77c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_0534bea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534bea0), iVar1 != 0)) {
    DAT_0534be98 = &PTR_LAB_04a40740;
    __cxa_guard_release(&DAT_0534bea0);
  }
  if ((undefined ***)param_2 != &DAT_0534be98) {
    if (((DAT_0534be70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534be70), iVar1 != 0)) {
      DAT_0534be68 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_0534be70);
    }
    if ((undefined **)param_2 != &DAT_0534be68) {
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

