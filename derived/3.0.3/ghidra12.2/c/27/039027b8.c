
bool FUN_039027b8(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if (((*PTR_DAT_04bd1190 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd1190), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bd1188 = PTR_DAT_04bd0cf8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd1190);
  }
  if (param_2 != PTR_DAT_04bd1188) {
    if (((*PTR_DAT_04bd0d08 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0d08), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bd0d00 = PTR_DAT_04bd0d10 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd0d08);
    }
    if (param_2 != PTR_DAT_04bd0d00) {
      if (((*PTR_DAT_04bc95b8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc95b8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc95b0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc95b8);
      }
      return param_2 == PTR_DAT_04bc95b0;
    }
  }
  return true;
}

