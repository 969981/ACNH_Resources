
bool FUN_0089cd0c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04cea060 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cea060), iVar1 != 0)) {
    DAT_04cea058 = &PTR_LAB_0491e740;
    __cxa_guard_release(&DAT_04cea060);
  }
  if ((undefined ***)param_2 != &DAT_04cea058) {
    if (((DAT_04cea050 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04cea050), iVar1 != 0)) {
      DAT_04cea048 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_04cea050);
    }
    if ((undefined **)param_2 != &DAT_04cea048) {
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

