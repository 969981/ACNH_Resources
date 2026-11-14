
undefined8 FUN_018406c0(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbe7a8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbe7a8);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbe7a0 = PTR_DAT_04bbe648 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe7a8);
    }
  }
  if (param_1 != PTR_DAT_04bbe7a0) {
    if ((*PTR_DAT_04bbe5c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbe5c0);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbe5b8 = PTR_DAT_04bbe5c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbe5c0);
      }
    }
    if (param_1 != PTR_DAT_04bbe5b8) {
      if ((*PTR_DAT_04bbe5d8 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbe5d8);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bbe5d0 = PTR_DAT_04bbe5e0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbe5d8);
        }
      }
      if (param_1 != PTR_DAT_04bbe5d0) {
        uVar2 = FUN_0098b2c4();
        return uVar2;
      }
    }
  }
  return 1;
}

