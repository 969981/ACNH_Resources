
undefined8 FUN_019f35f8(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bb5f18 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5f18);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bb5f10 = PTR_DAT_04bb5f20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5f18);
    }
  }
  if (param_2 != PTR_DAT_04bb5f10) {
    if ((*PTR_DAT_04bb5f30 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5f30);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bb5f28 = PTR_DAT_04bb5e78 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5f30);
      }
    }
    if (param_2 != PTR_DAT_04bb5f28) {
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

