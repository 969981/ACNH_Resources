
undefined8 FUN_0193e778(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbf9d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf9d8);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbf9d0 = PTR_DAT_04bbf9e0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbf9d8);
    }
  }
  if (param_1 != PTR_DAT_04bbf9d0) {
    if ((*PTR_DAT_04bbf9f0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf9f0);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbf9e8 = PTR_DAT_04bbf9f8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbf9f0);
      }
    }
    if (param_1 != PTR_DAT_04bbf9e8) {
      if ((*PTR_DAT_04bbfa08 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfa08);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbfa00 = PTR_DAT_04bbfa10 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbfa08);
        }
      }
      if (param_1 != PTR_DAT_04bbfa00) {
        uVar2 = FUN_0192c8f8();
        return uVar2;
      }
    }
  }
  return 1;
}

