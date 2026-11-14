
undefined8 FUN_01920870(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbf840 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf840);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bbf838 = &PTR_LAB_049db9d8;
      __cxa_guard_release(PTR_DAT_04bbf840);
    }
  }
  if (param_1 != PTR_DAT_04bbf838) {
    if ((*PTR_DAT_04bbf778 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf778);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbf770 = PTR_DAT_04bbf780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbf778);
      }
    }
    if (param_1 != PTR_DAT_04bbf770) {
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

