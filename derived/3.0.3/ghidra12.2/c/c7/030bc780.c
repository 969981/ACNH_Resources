
undefined8 FUN_030bc780(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bc81e8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc81e8);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bc81e0 = &PTR_LAB_04afcca0;
      __cxa_guard_release(PTR_DAT_04bc81e8);
    }
  }
  if (param_2 != PTR_DAT_04bc81e0) {
    if ((*PTR_DAT_04bc8200 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8200);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bc81f8 = PTR_DAT_04bc4db8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc8200);
      }
    }
    if (param_2 != PTR_DAT_04bc81f8) {
      uVar2 = FUN_030bb554(param_2);
      return uVar2;
    }
  }
  return 1;
}

