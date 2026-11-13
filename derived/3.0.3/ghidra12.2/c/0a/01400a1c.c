
bool FUN_01400a1c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_051b7138 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b7138), iVar1 != 0)) {
    DAT_051b7130 = &PTR_LAB_04997340;
    __cxa_guard_release(&DAT_051b7138);
  }
  if ((undefined ***)param_2 != &DAT_051b7130) {
    if (((DAT_051b69b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b69b8), iVar1 != 0)) {
      DAT_051b69b0 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_051b69b8);
    }
    if ((undefined **)param_2 != &DAT_051b69b0) {
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

