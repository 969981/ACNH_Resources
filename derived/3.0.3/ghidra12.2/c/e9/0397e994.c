
bool FUN_0397e994(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbdac0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdac0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbdab8 = PTR_DAT_04bbdac8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdac0);
  }
  if (param_2 != PTR_DAT_04bbdab8) {
    if (((*PTR_DAT_04bbdad8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdad8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbdad0 = PTR_DAT_04bbdae0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbdad8);
    }
    if (param_2 != PTR_DAT_04bbdad0) {
      if (((*PTR_DAT_04bbdaf0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdaf0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bbdae8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdaf0);
      }
      return param_2 == PTR_DAT_04bbdae8;
    }
  }
  return true;
}

