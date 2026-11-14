
undefined8 FUN_0160742c(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbda60 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbda60);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bbda58 = &PTR_LAB_049b3198;
      __cxa_guard_release(PTR_DAT_04bbda60);
    }
  }
  if (param_2 != PTR_DAT_04bbda58) {
    if ((*PTR_DAT_04bbda50 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbda50);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbda48 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbda50);
      }
    }
    if (param_2 != PTR_DAT_04bbda48) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

