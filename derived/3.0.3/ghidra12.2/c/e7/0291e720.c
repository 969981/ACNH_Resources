
bool FUN_0291e720(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_055c9198 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055c9198), iVar1 != 0)) {
    DAT_055c9190 = PTR_DAT_04bb61d0 + 0x10;
    __cxa_guard_release(&DAT_055c9198);
  }
  if ((undefined **)param_2 != &DAT_055c9190) {
    if (((*PTR_DAT_04bb61e0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb61e0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb61d8 = PTR_DAT_04bb61e8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb61e0);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb61d8) {
      if (((*PTR_DAT_04bb61f8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb61f8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb61f0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb61f8);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb61f0;
    }
  }
  return true;
}

