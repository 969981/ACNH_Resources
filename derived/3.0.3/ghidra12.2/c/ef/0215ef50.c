
bool FUN_0215ef50(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_053f6458 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053f6458), iVar1 != 0)) {
    DAT_053f6450 = &PTR_LAB_04a756e8;
    __cxa_guard_release(&DAT_053f6458);
  }
  if ((undefined ***)param_2 != &DAT_053f6450) {
    if (((DAT_053f6448 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053f6448), iVar1 != 0)) {
      DAT_053f6440 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_053f6448);
    }
    if ((undefined **)param_2 != &DAT_053f6440) {
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

