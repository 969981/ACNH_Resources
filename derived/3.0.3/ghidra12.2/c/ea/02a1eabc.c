
bool FUN_02a1eabc(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc4310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4310), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bc4308 = &PTR_LAB_04a99860;
    __cxa_guard_release(PTR_DAT_04bc4310);
  }
  if (param_1 != PTR_DAT_04bc4308) {
    if (((*PTR_DAT_04bc4328 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4328), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bc4320 = &PTR_LAB_04a99878;
      __cxa_guard_release(PTR_DAT_04bc4328);
    }
    if (param_1 != PTR_DAT_04bc4320) {
      if (((*PTR_DAT_04bc4340 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4340), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4338 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4340);
      }
      return param_1 == PTR_DAT_04bc4338;
    }
  }
  return true;
}

