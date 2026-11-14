
undefined8 FUN_01930da0(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbfa58 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfa58);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bbfa50 = &PTR_LAB_049de300;
      __cxa_guard_release(PTR_DAT_04bbfa58);
    }
  }
  if (param_2 != PTR_DAT_04bbfa50) {
    if ((*PTR_DAT_04bbfa68 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfa68);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbfa60 = PTR_DAT_04bbf108 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbfa68);
      }
    }
    if (param_2 != PTR_DAT_04bbfa60) {
      uVar2 = FUN_018e3e70(param_2);
      return uVar2;
    }
  }
  return 1;
}

