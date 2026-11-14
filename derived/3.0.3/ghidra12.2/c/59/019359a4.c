
undefined8 FUN_019359a4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_052c7788 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_052c7788);
    if (iVar1 != 0) {
      DAT_052c7780 = PTR_DAT_04bbfa18 + 0x10;
      __cxa_guard_release(&DAT_052c7788);
    }
  }
  if ((undefined **)param_2 != &DAT_052c7780) {
    if ((*PTR_DAT_04bbfa28 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfa28);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbfa20 = PTR_DAT_04bbf108 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbfa28);
      }
    }
    if (param_2 != (undefined8 *)PTR_DAT_04bbfa20) {
      uVar2 = FUN_018e3e70(param_2);
      return uVar2;
    }
  }
  return 1;
}

