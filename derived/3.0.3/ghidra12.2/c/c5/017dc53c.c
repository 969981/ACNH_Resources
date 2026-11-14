
bool FUN_017dc53c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05293870 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293870), iVar1 != 0)) {
    DAT_05293868 = &PTR_LAB_049c4908;
    __cxa_guard_release(&DAT_05293870);
  }
  if ((undefined ***)param_2 != &DAT_05293868) {
    if (((DAT_05293770 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05293770), iVar1 != 0)) {
      DAT_05293768 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05293770);
    }
    if ((undefined **)param_2 != &DAT_05293768) {
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

