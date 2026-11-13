
bool FUN_0119816c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_050ceb00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050ceb00), iVar1 != 0)) {
    DAT_050ceaf8 = &PTR_LAB_04984588;
    __cxa_guard_release(&DAT_050ceb00);
  }
  if ((undefined ***)param_2 != &DAT_050ceaf8) {
    if (((DAT_050ce630 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050ce630), iVar1 != 0)) {
      DAT_050ce628 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_050ce630);
    }
    if ((undefined **)param_2 != &DAT_050ce628) {
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

