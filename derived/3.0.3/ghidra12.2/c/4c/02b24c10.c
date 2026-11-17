
bool FUN_02b24c10(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc4908 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4908), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4900 = PTR_DAT_04bc4910 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4908);
  }
  if (param_2 != PTR_DAT_04bc4900) {
    if (((*PTR_DAT_04bc4920 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4920), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4918 = PTR_DAT_04bc4928 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4920);
    }
    if (param_2 != PTR_DAT_04bc4918) {
      if (((*PTR_DAT_04bc4938 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4938), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4930 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4938);
      }
      return param_2 == PTR_DAT_04bc4930;
    }
  }
  return true;
}

