
undefined8 FUN_0193ef40(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbfbb0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfbb0);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbfba8 = PTR_DAT_04bbfbb8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbfbb0);
    }
  }
  if (param_1 != PTR_DAT_04bbfba8) {
    if ((*PTR_DAT_04bbfbc8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfbc8);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbfbc0 = PTR_DAT_04bbfbd0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbfbc8);
      }
    }
    if (param_1 != PTR_DAT_04bbfbc0) {
      if ((*PTR_DAT_04bbfbe0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfbe0);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbfbd8 = PTR_DAT_04bbfbe8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbfbe0);
        }
      }
      if (param_1 != PTR_DAT_04bbfbd8) {
        uVar2 = FUN_0193b158();
        return uVar2;
      }
    }
  }
  return 1;
}

