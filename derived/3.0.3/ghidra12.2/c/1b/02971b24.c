
bool FUN_02971b24(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_055d9480 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055d9480), iVar1 != 0)) {
    DAT_055d9478 = &PTR_LAB_04a969c8;
    __cxa_guard_release(&DAT_055d9480);
  }
  if ((undefined ***)param_2 != &DAT_055d9478) {
    if (((DAT_055d9490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055d9490), iVar1 != 0)) {
      DAT_055d9488 = PTR_DAT_04bbca20 + 0x10;
      __cxa_guard_release(&DAT_055d9490);
    }
    if ((undefined **)param_2 != &DAT_055d9488) {
      if (((*PTR_DAT_04bbca30 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbca30), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bbca28 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbca30);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bbca28;
    }
  }
  return true;
}

