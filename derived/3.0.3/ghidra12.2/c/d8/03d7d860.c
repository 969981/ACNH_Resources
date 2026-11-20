
bool FUN_03d7d860(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if (((*PTR_DAT_04bcb670 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcb670), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bcb668 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bcb670);
  }
  if (param_2 != PTR_DAT_04bcb668) {
    if (((*PTR_DAT_04bc4d48 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d48), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4d40 = PTR_DAT_04bc4d50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d48);
    }
    if (param_2 != PTR_DAT_04bc4d40) {
      if (((*PTR_DAT_04bc4d60 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d60), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4d58 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4d60);
      }
      return param_2 == PTR_DAT_04bc4d58;
    }
  }
  return true;
}

