
undefined8 FUN_0193a900(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbfb78 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfb78);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bbfb70 = &PTR_LAB_049dfaa8;
      __cxa_guard_release(PTR_DAT_04bbfb78);
    }
  }
  if (param_1 != PTR_DAT_04bbfb70) {
    if ((*PTR_DAT_04bbf7b8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf7b8);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbf7b0 = PTR_DAT_04bbf780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbf7b8);
      }
    }
    if (param_1 != PTR_DAT_04bbf7b0) {
      if ((*PTR_DAT_04bbf6c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf6c0);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbf6b8 = PTR_DAT_04bbf108 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbf6c0);
        }
      }
      if (param_1 != PTR_DAT_04bbf6b8) {
        uVar2 = FUN_018e3e70();
        return uVar2;
      }
    }
  }
  return 1;
}

