
undefined8 FUN_0164cb04(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_05230fa8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05230fa8);
    if (iVar1 != 0) {
      DAT_05230fa0 = &PTR_LAB_049b7ef0;
      __cxa_guard_release(&DAT_05230fa8);
    }
  }
  if ((undefined ***)param_2 != &DAT_05230fa0) {
    if ((DAT_05230f98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_05230f98);
      if (iVar1 != 0) {
        DAT_05230f90 = PTR_DAT_04bb3028 + 0x10;
        __cxa_guard_release(&DAT_05230f98);
      }
    }
    if ((undefined **)param_2 != &DAT_05230f90) {
      uVar2 = FUN_006fea14(param_2);
      return uVar2;
    }
  }
  return 1;
}

