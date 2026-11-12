
undefined8 FUN_008ed4ac(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_04ced7d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04ced7d8);
    if (iVar1 != 0) {
      DAT_04ced7d0 = &PTR_LAB_049243b8;
      __cxa_guard_release(&DAT_04ced7d8);
    }
  }
  if ((undefined ***)param_2 != &DAT_04ced7d0) {
    if ((DAT_04ced7c8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04ced7c8);
      if (iVar1 != 0) {
        DAT_04ced7c0 = &PTR_LAB_04921248;
        __cxa_guard_release(&DAT_04ced7c8);
      }
    }
    if ((undefined ***)param_2 != &DAT_04ced7c0) {
      uVar2 = FUN_008e84ac(param_2);
      return uVar2;
    }
  }
  return 1;
}

