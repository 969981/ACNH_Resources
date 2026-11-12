
bool FUN_0072a3a0(undefined8 *param_1)

{
  int iVar1;
  
  if (((DAT_04c92d08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92d08), iVar1 != 0)) {
    DAT_04c92d00 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_04c92d08);
  }
  if ((undefined **)param_1 != &DAT_04c92d00) {
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

