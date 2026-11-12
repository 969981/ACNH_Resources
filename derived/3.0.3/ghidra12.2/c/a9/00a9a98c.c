
bool FUN_00a9a98c(undefined8 *param_1)

{
  int iVar1;
  
  if (((DAT_04da71e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da71e0), iVar1 != 0)) {
    DAT_04da71d8 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_04da71e0);
  }
  if ((undefined **)param_1 != &DAT_04da71d8) {
    if (((*PTR_DAT_04bb2fc8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fc8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2fc0 = PTR_DAT_04bb2fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2fc8);
    }
    if (param_1 != (undefined8 *)PTR_DAT_04bb2fc0) {
      if (((*PTR_DAT_04bb2fe0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fe0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2fd8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2fe0);
      }
      return param_1 == (undefined8 *)PTR_DAT_04bb2fd8;
    }
  }
  return true;
}

