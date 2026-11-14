
undefined8 FUN_01936b88(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbfb18 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfb18);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bbfb10 = &PTR_LAB_049df158;
      __cxa_guard_release(PTR_DAT_04bbfb18);
    }
  }
  if (param_2 != PTR_DAT_04bbfb10) {
    if ((*PTR_DAT_04bbfb28 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfb28);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbfb20 = PTR_DAT_04bbf108 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbfb28);
      }
    }
    if (param_2 != PTR_DAT_04bbfb20) {
      uVar2 = FUN_018e3e70(param_2);
      return uVar2;
    }
  }
  return 1;
}

