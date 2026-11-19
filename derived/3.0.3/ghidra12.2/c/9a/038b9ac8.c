
bool FUN_038b9ac8(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bd0c28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0c28), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bd0c20 = &PTR_FUN_04b63820;
    __cxa_guard_release(PTR_DAT_04bd0c28);
  }
  if (param_1 != PTR_DAT_04bd0c20) {
    if (((*PTR_DAT_04bd0c40 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0c40), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bd0c38 = &PTR_LAB_04b63838;
      __cxa_guard_release(PTR_DAT_04bd0c40);
    }
    if (param_1 != PTR_DAT_04bd0c38) {
      if (((*PTR_DAT_04bd0c08 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0c08), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bd0c00 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd0c08);
      }
      return param_1 == PTR_DAT_04bd0c00;
    }
  }
  return true;
}

