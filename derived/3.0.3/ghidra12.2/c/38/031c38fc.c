
undefined8 FUN_031c38fc(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bc87b8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc87b8);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bc87b0 = PTR_DAT_04bc4c70 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc87b8);
    }
  }
  if (param_1 != PTR_DAT_04bc87b0) {
    if ((*PTR_DAT_04bc4c80 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4c80);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bc4c78 = PTR_DAT_04bc4c88 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4c80);
      }
    }
    if (param_1 != PTR_DAT_04bc4c78) {
      if ((*PTR_DAT_04bc4c98 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4c98);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bc4c90 = PTR_DAT_04bc4ca0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4c98);
        }
      }
      if (param_1 != PTR_DAT_04bc4c90) {
        uVar2 = FUN_02bb2054();
        return uVar2;
      }
    }
  }
  return 1;
}

