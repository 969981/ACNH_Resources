
bool FUN_01b74548(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05336170 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05336170), iVar1 != 0)) {
    DAT_05336168 = &PTR_LAB_04a38bd0;
    __cxa_guard_release(&DAT_05336170);
  }
  if ((undefined ***)param_2 != &DAT_05336168) {
    if (((DAT_05336148 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05336148), iVar1 != 0)) {
      DAT_05336140 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05336148);
    }
    if ((undefined **)param_2 != &DAT_05336140) {
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

