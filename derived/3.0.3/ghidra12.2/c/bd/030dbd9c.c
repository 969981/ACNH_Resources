
undefined8 FUN_030dbd9c(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bc68d0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc68d0);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bc68c8 = PTR_DAT_04bc4f48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc68d0);
    }
  }
  if (param_2 != PTR_DAT_04bc68c8) {
    if ((*PTR_DAT_04bc4d98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d98);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4d98);
      }
    }
    if (param_2 != PTR_DAT_04bc4d90) {
      if ((*PTR_DAT_04bc4db0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4db0);
        if (iVar1 != 0) {
          *(undefined **)PTR_DAT_04bc4da8 = PTR_DAT_04bc4db8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4db0);
        }
      }
      if (param_2 != PTR_DAT_04bc4da8) {
        uVar2 = FUN_030bb554(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

