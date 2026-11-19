
bool FUN_03c188bc(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if (((*PTR_DAT_04bb4f38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4f38), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb4f30 = PTR_DAT_04bb4f40 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f38);
  }
  if (param_2 != PTR_DAT_04bb4f30) {
    if (((*PTR_DAT_04bb4f50 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4f50), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb4f48 = PTR_DAT_04bb4f58 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4f50);
    }
    if (param_2 != PTR_DAT_04bb4f48) {
      if (((*PTR_DAT_04bb4f68 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4f68), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4f60 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4f68);
      }
      return param_2 == PTR_DAT_04bb4f60;
    }
  }
  return true;
}

