
bool FUN_009c3dc4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04d07da0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04d07da0), iVar1 != 0)) {
    DAT_04d07d98 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_04d07da0);
  }
  if ((undefined **)param_2 != &DAT_04d07d98) {
    if (((*PTR_DAT_04bb2fc8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fc8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2fc0 = PTR_DAT_04bb2fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2fc8);
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bb2fc0) {
      if (((*PTR_DAT_04bb2fe0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fe0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2fd8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2fe0);
      }
      return param_2 == (undefined8 *)PTR_DAT_04bb2fd8;
    }
  }
  return true;
}

