
undefined8 FUN_0158d6b8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05220078 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05220078);
    if (iVar1 != 0) {
      DAT_05220070 = &PTR_LAB_049ad760;
      __cxa_guard_release(&DAT_05220078);
    }
  }
  if ((undefined ***)param_2 != &DAT_05220070) {
    if ((DAT_0521fff8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0521fff8);
      if (iVar1 != 0) {
        DAT_0521fff0 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(&DAT_0521fff8);
      }
    }
    if ((undefined **)param_2 != &DAT_0521fff0) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

