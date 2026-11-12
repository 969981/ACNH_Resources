
bool FUN_00adc7b8(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb6590 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6590), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb6588 = PTR_DAT_04bb64f0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6590);
  }
  if (param_1 != PTR_DAT_04bb6588) {
    if (((*PTR_DAT_04bb6500 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6500), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb64f8 = PTR_DAT_04bb6508 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6500);
    }
    if (param_1 != PTR_DAT_04bb64f8) {
      if (((*PTR_DAT_04bb6518 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6518), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb6510 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6518);
      }
      return param_1 == PTR_DAT_04bb6510;
    }
  }
  return true;
}

