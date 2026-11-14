
bool FUN_01614b18(undefined *param_1)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbdb50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdb50), iVar1 != 0))
  {
    *(undefined ***)PTR_DAT_04bbdb48 = &PTR_FUN_049b3b68;
    __cxa_guard_release(PTR_DAT_04bbdb50);
  }
  if (param_1 != PTR_DAT_04bbdb48) {
    if (((*PTR_DAT_04bbdb10 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdb10), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bbdb08 = &PTR_FUN_049b3b80;
      __cxa_guard_release(PTR_DAT_04bbdb10);
    }
    if (param_1 != PTR_DAT_04bbdb08) {
      if (((*PTR_DAT_04bbdb28 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdb28), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bbdb20 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdb28);
      }
      return param_1 == PTR_DAT_04bbdb20;
    }
  }
  return true;
}

