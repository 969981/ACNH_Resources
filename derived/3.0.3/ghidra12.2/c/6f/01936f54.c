
undefined8 FUN_01936f54(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c7778 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c7778);
    if (iVar1 != 0) {
      DAT_052c7770 = &PTR_LAB_049df188;
      __cxa_guard_release(&DAT_052c7778);
    }
  }
  if ((undefined ***)param_1 != &DAT_052c7770) {
    if ((*PTR_DAT_04bbfb38 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfb38);
      if (iVar1 != 0) {
        *(undefined ***)PTR_DAT_04bbfb30 = &PTR_LAB_049df170;
        __cxa_guard_release(PTR_DAT_04bbfb38);
      }
    }
    if (param_1 != (undefined8 *)PTR_DAT_04bbfb30) {
      if ((*PTR_DAT_04bbfb08 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfb08);
        if (iVar1 != 0) {
          *(undefined ***)PTR_DAT_04bbfb00 = &PTR_LAB_049dee70;
          __cxa_guard_release(PTR_DAT_04bbfb08);
        }
      }
      if (param_1 != (undefined8 *)PTR_DAT_04bbfb00) {
        uVar2 = FUN_01936334();
        return uVar2;
      }
    }
  }
  return 1;
}

