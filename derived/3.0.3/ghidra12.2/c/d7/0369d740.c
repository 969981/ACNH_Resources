
bool FUN_0369d740(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05aafe10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aafe10), iVar1 != 0)) {
    DAT_05aafe08 = &PTR_LAB_04b43830;
    __cxa_guard_release(&DAT_05aafe10);
  }
  if ((undefined ***)param_2 != &DAT_05aafe08) {
    if (((DAT_05aafdf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aafdf0), iVar1 != 0)) {
      DAT_05aafde8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_05aafdf0);
    }
    if ((undefined **)param_2 != &DAT_05aafde8) {
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

