
bool FUN_01b340c8(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc0578 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc0578), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc0570 = PTR_DAT_04bb8bf8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc0578);
  }
  if (param_1 != PTR_DAT_04bc0570) {
    if (((*PTR_DAT_04bb8c08 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb8c08), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb8c00 = PTR_DAT_04bb8c10 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb8c08);
    }
    if (param_1 != PTR_DAT_04bb8c00) {
      if (((*PTR_DAT_04bb8c20 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb8c20), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb8c18 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb8c20);
      }
      return param_1 == PTR_DAT_04bb8c18;
    }
  }
  return true;
}

