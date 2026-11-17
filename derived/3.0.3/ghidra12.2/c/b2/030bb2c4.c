
undefined8 FUN_030bb2c4(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bc67c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc67c0);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bc67b8 = PTR_DAT_04bc67c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc67c0);
    }
  }
  if (param_2 != PTR_DAT_04bc67b8) {
    if ((*PTR_DAT_04bc67d8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bc67d8);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bc67d0 = PTR_DAT_04bc4db8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc67d8);
      }
    }
    if (param_2 != PTR_DAT_04bc67d0) {
      uVar2 = FUN_030bb554(param_2);
      return uVar2;
    }
  }
  return 1;
}

