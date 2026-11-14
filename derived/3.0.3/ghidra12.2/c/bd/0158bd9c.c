
undefined8 FUN_0158bd9c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_0521f500 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0521f500);
    if (iVar1 != 0) {
      DAT_0521f4f8 = &PTR_LAB_049ac910;
      __cxa_guard_release(&DAT_0521f500);
    }
  }
  if ((undefined ***)param_2 != &DAT_0521f4f8) {
    if ((DAT_0521f4c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0521f4c0);
      if (iVar1 != 0) {
        DAT_0521f4b8 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(&DAT_0521f4c0);
      }
    }
    if ((undefined **)param_2 != &DAT_0521f4b8) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

