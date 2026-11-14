
undefined8 FUN_0193e394(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbf880 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf880);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbf878 = PTR_DAT_04bbf888 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbf880);
    }
  }
  if (param_1 != PTR_DAT_04bbf878) {
    if ((*PTR_DAT_04bbf898 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf898);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbf890 = PTR_DAT_04bbf8a0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbf898);
      }
    }
    if (param_1 != PTR_DAT_04bbf890) {
      if ((*PTR_DAT_04bbf8b0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf8b0);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbf8a8 = PTR_DAT_04bbf8b8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbf8b0);
        }
      }
      if (param_1 != PTR_DAT_04bbf8a8) {
        uVar2 = FUN_019210c8();
        return uVar2;
      }
    }
  }
  return 1;
}

