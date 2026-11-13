
bool FUN_01243560(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05150d10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05150d10), iVar1 != 0)) {
    DAT_05150d08 = &PTR_LAB_049887c0;
    __cxa_guard_release(&DAT_05150d10);
  }
  if ((undefined ***)param_2 != &DAT_05150d08) {
    if (((DAT_051503a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051503a0), iVar1 != 0)) {
      DAT_05150398 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_051503a0);
    }
    if ((undefined **)param_2 != &DAT_05150398) {
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

