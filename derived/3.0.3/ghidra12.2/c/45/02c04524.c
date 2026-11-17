
bool FUN_02c04524(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_05649c80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05649c80), iVar1 != 0)) {
    DAT_05649c78 = PTR_DAT_04bc4e48 + 0x10;
    __cxa_guard_release(&DAT_05649c80);
  }
  if ((undefined **)param_2 != &DAT_05649c78) {
    if (((*PTR_DAT_04bc4e28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e28), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e20 = PTR_DAT_04bc4e30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e28);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bc4e20) {
      if (((*PTR_DAT_04bc4e18 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e18), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e10 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e18);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bc4e10;
    }
  }
  return true;
}

