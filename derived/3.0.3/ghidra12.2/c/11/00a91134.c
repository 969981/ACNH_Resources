
bool FUN_00a91134(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (((DAT_04da6fe8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04da6fe8), iVar1 != 0)) {
    DAT_04da6fe0 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(&DAT_04da6fe8);
  }
  if ((undefined **)param_2 != &DAT_04da6fe0) {
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

