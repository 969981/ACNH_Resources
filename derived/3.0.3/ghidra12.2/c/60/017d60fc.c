
bool FUN_017d60fc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05293720 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293720), iVar1 != 0)) {
    DAT_05293718 = &PTR_LAB_049c45c0;
    __cxa_guard_release(&DAT_05293720);
  }
  if ((undefined ***)param_2 != &DAT_05293718) {
    if (((DAT_05293710 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293710), iVar1 != 0)) {
      DAT_05293708 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05293710);
    }
    if ((undefined **)param_2 != &DAT_05293708) {
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

