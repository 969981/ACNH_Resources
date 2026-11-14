
bool FUN_01b7d9ac(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05336288 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05336288), iVar1 != 0)) {
    DAT_05336280 = &PTR_LAB_04a38ef0;
    __cxa_guard_release(&DAT_05336288);
  }
  if ((undefined ***)param_2 != &DAT_05336280) {
    if (((DAT_05336268 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05336268), iVar1 != 0)) {
      DAT_05336260 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05336268);
    }
    if ((undefined **)param_2 != &DAT_05336260) {
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

