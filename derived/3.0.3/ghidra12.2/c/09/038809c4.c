
bool FUN_038809c4(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bcb9b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcb9b0), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bcb9a8 = &PTR_LAB_04b60838;
    __cxa_guard_release(PTR_DAT_04bcb9b0);
  }
  if (param_1 != PTR_DAT_04bcb9a8) {
    if (((*PTR_DAT_04bcb9c0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcb9c0), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bcb9b8 = &PTR_LAB_04b60850;
      __cxa_guard_release(PTR_DAT_04bcb9c0);
    }
    if (param_1 != PTR_DAT_04bcb9b8) {
      if (((*PTR_DAT_04bcb9a0 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcb9a0), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bcb998 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bcb9a0);
      }
      return param_1 == PTR_DAT_04bcb998;
    }
  }
  return true;
}

