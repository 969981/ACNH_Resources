
undefined8 FUN_0147adc0(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbcdc8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbcdc8);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbcdc0 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbcdc8);
    }
  }
  if (param_2 != PTR_DAT_04bbcdc0) {
    if ((*PTR_DAT_04bb35f8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bb35f8);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bb35f0 = PTR_DAT_04bb3600 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb35f8);
      }
    }
    if (param_2 != PTR_DAT_04bb35f0) {
      uVar2 = FUN_007521f0(param_2);
      return uVar2;
    }
  }
  return 1;
}

