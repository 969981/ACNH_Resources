
undefined8 FUN_019f90dc(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bb5f88 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5f88);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bb5f80 = PTR_DAT_04bb5f90 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5f88);
    }
  }
  if (param_2 != PTR_DAT_04bb5f80) {
    if ((*PTR_DAT_04bb5fa0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5fa0);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bb5f98 = PTR_DAT_04bb5e78 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5fa0);
      }
    }
    if (param_2 != PTR_DAT_04bb5f98) {
      if ((*PTR_DAT_04bb5e88 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5e88);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bb5e80 = PTR_DAT_04bb3600 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5e88);
        }
      }
      if (param_2 != PTR_DAT_04bb5e80) {
        uVar2 = FUN_007521f0(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

