
bool FUN_036b1788(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05ab2580 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab2580), iVar1 != 0)) {
    DAT_05ab2578 = &PTR_LAB_04b44150;
    __cxa_guard_release(&DAT_05ab2580);
  }
  if ((undefined ***)param_2 != &DAT_05ab2578) {
    if (((DAT_05ab2570 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ab2570), iVar1 != 0)) {
      DAT_05ab2568 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05ab2570);
    }
    if ((undefined **)param_2 != &DAT_05ab2568) {
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

