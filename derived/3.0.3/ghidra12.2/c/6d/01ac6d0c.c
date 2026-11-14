
bool FUN_01ac6d0c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05325c20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05325c20), iVar1 != 0)) {
    DAT_05325c18 = &PTR_LAB_04a35840;
    __cxa_guard_release(&DAT_05325c20);
  }
  if ((undefined ***)param_2 != &DAT_05325c18) {
    if (((DAT_05325c10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05325c10), iVar1 != 0)) {
      DAT_05325c08 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05325c10);
    }
    if ((undefined **)param_2 != &DAT_05325c08) {
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

