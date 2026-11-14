
bool FUN_01c183f0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053497a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053497a0), iVar1 != 0)) {
    DAT_05349798 = &PTR_LAB_04a3fe50;
    __cxa_guard_release(&DAT_053497a0);
  }
  if ((undefined ***)param_2 != &DAT_05349798) {
    if (((DAT_05349790 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05349790), iVar1 != 0)) {
      DAT_05349788 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05349790);
    }
    if ((undefined **)param_2 != &DAT_05349788) {
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

