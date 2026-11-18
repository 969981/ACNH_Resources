
bool FUN_032a2b14(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc91d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc91d8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc91d0 = PTR_DAT_04bc90e0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc91d8);
  }
  if (param_1 != PTR_DAT_04bc91d0) {
    if (((*PTR_DAT_04bc90f0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc90f0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc90e8 = PTR_DAT_04bc90f8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc90f0);
    }
    if (param_1 != PTR_DAT_04bc90e8) {
      if (((*PTR_DAT_04bc9108 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc9108), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc9100 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc9108);
      }
      return param_1 == PTR_DAT_04bc9100;
    }
  }
  return true;
}

