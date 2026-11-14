
undefined8 FUN_0193eb5c(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbfa78 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfa78);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbfa70 = PTR_DAT_04bbfa80 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbfa78);
    }
  }
  if (param_1 != PTR_DAT_04bbfa70) {
    if ((*PTR_DAT_04bbfa90 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfa90);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbfa88 = PTR_DAT_04bbfa98 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbfa90);
      }
    }
    if (param_1 != PTR_DAT_04bbfa88) {
      if ((*PTR_DAT_04bbfaa8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfaa8);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbfaa0 = PTR_DAT_04bbfab0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbfaa8);
        }
      }
      if (param_1 != PTR_DAT_04bbfaa0) {
        uVar2 = FUN_019306b8();
        return uVar2;
      }
    }
  }
  return 1;
}

